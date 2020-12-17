#if !defined MATRIX_H
#define MATRIX_H
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

struct matrix
{
    size_t rows, cols;
    double *data;
};

extern bool read_matrix(struct matrix *m, FILE *f);
#endif //MATRIX_H
