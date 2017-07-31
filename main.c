
#include "Main.h"

// TODO: Create checked malloc function [Jose Fernando Lopez Fernandez - 07/30/17 21:06:31]

struct _matrix4x4 _create4x4Matrix();
struct _matrix4x4* create4x4Matrix();


int main()
{
    char input[32];
    char *end_ptr;
    int dimension = UNINITIALIZED_INTEGER;

    /* Prompt User for the Matrix dimension */
    printf("Please enter the dimension of the matrix: [2 <= x <= y] ");
    fscanf(stdin, "%s", input);

    /* Handle error on input */
    // TODO: Handle error on input [Jose Fernando Lopez Fernandez - 07/30/17 22:10:23]

    /* Convert input to integral value */
    dimension = strtol(input, &end_ptr, 10);
    printf("Matrix Dimensions: %i\n", dimension);

    /* Create matrix depending on dimension entered */
    /*void *mat = NULL;*/

    typedef union {
        struct _matrix2x2 sqm2;
        struct _matrix3x3 sqm3;
        struct _matrix4x4 sqm4;
        struct _matrix5x5 sqm5;
        struct _matrix6x6 sqm6;
        struct _matrix7x7 sqm7;
    } MATRIX;

    typedef uint8_t DIMENSION;
    struct _matrix {
        DIMENSION dim;
        MATRIX m;
    };

    struct _matrix MAIN;

    switch (dimension) {
        case (2):
            printf("2x2 Matrix\n");
            break;
        case (3):
            printf("3x3 Matrix\n");
            break;
        case (4):
            printf("4x4 Matrix\n");
            MAIN.dim = 4;
            MAIN.m.sqm4 = _create4x4Matrix();
            break;
        case (5):
            printf("5x5 Matrix\n");
            break;
        case (6):
            printf("6x6 Matrix\n");
            break;
        case (7):
            printf("7x7 Matrix\n");
            break;
        default:
            printf("[ERROR - UNSUPPORTED DIMENSION ENTERED]\n");
    }

    if (dimension == 4)
        printMatrix4x4(&(MAIN.m.sqm4));

    return EXIT_SUCCESS;
}


struct _matrix4x4 _create4x4Matrix() {
    struct _matrix4x4 newMatrix;

    setMatrix4x4(&newMatrix, 0);

    return newMatrix;
}

struct _matrix4x4* create4x4Matrix() {
    struct _matrix4x4 *newMatrix = (struct _matrix4x4 *) malloc(sizeof(struct _matrix4x4));

    setMatrix4x4(newMatrix, 0);

    return newMatrix;
}