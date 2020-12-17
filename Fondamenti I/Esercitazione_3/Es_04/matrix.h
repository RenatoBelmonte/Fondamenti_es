#if !defined MATRIX_H
#define MATRIX_H
#include <stdint.h>
#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern struct matrix *mirror_mat(const struct matrix *m);
#endif //MATRIX_H
