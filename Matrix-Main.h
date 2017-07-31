#ifndef CMATRIXSOLVER_MATRIX_MAIN_H
#define CMATRIXSOLVER_MATRIX_MAIN_H

struct _matrix2x2 {
    INT m[2][2];
};

struct _matrix3x3 {
    INT m[3][3];
};

struct _matrix4x4 {
    INT m[4][4];
};

struct _matrix5x5 {
    INT m[5][5];
};

struct _matrix6x6 {
    INT m[6][6];
};

struct _matrix7x7 {
    INT m[7][7];
};


void setMatrix2x2(struct _matrix2x2 *m, INT value);
void setMatrix3x3(struct _matrix3x3 *m, INT value);
void setMatrix4x4(struct _matrix4x4 *m, INT value);
void setMatrix5x5(struct _matrix5x5 *m, INT value);
void setMatrix6x6(struct _matrix6x6 *m, INT value);
void setMatrix7x7(struct _matrix7x7 *m, INT value);

void printMatrix2x2(struct _matrix2x2 *m);
void printMatrix3x3(struct _matrix3x3 *m);
void printMatrix4x4(struct _matrix4x4 *m);
void printMatrix5x5(struct _matrix5x5 *m);
void printMatrix6x6(struct _matrix6x6 *m);
void printMatrix7x7(struct _matrix7x7 *m);



#endif //CMATRIXSOLVER_MATRIX_MAIN_H
