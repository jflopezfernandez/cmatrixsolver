
#include "Main.h"


void setMatrix2x2(struct _matrix2x2 *m, INT value) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            m->m[i][j] = value;
        }
    }
}
void setMatrix3x3(struct _matrix3x3 *m, INT value) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            m->m[i][j] = value;
        }
    }
}

void setMatrix4x4(struct _matrix4x4 *m, INT value) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            m->m[i][j] = value;
        }
    }
}

void setMatrix5x5(struct _matrix5x5 *m, INT value) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            m->m[i][j] = value;
        }
    }
}

void setMatrix6x6(struct _matrix6x6 *m, INT value) {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            m->m[i][j] = value;
        }
    }
}

void setMatrix7x7(struct _matrix7x7 *m, INT value) {
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            m->m[i][j] = value;
        }
    }
}

void printMatrix2x2(struct _matrix2x2 *m) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%2i ", m->m[i][j]);
        }
        printf("\n");
    }
}

void printMatrix3x3(struct _matrix3x3 *m) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%2i ", m->m[i][j]);
        }
        printf("\n");
    }
}

void printMatrix4x4(struct _matrix4x4 *m) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%2i ", m->m[i][j]);
        }
        printf("\n");
    }
}

void printMatrix5x5(struct _matrix5x5 *m) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%2i ", m->m[i][j]);
        }
        printf("\n");
    }
}

void printMatrix6x6(struct _matrix6x6 *m) {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%2i ", m->m[i][j]);
        }
        printf("\n");
    }
}

void printMatrix7x7(struct _matrix7x7 *m) {
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            printf("%2i ", m->m[i][j]);
        }
        printf("\n");
    }
}