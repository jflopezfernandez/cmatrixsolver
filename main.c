
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef int32_t INT;

struct _matrix {
    INT m[4][4];
};

void setMatrix(struct _matrix *m, INT value);
void printMatrix(struct _matrix *m);

int main()
{
    // TODO: Create checked malloc function [Jose Fernando Lopez Fernandez - 07/30/17 21:06:31]
    struct _matrix *mtest = (struct _matrix *) malloc(sizeof(struct _matrix));

    setMatrix(mtest, 0);
    printMatrix(mtest);

    free(mtest);

    return EXIT_SUCCESS;
}


void setMatrix(struct _matrix *m, INT value) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            m->m[i][j] = value;
        }
    }
}

void printMatrix(struct _matrix *m) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%2i ", m->m[i][j]);
        }
        printf("\n");
    }
}