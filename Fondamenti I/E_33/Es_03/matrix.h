#if !defined MATRIX_H
#define MATRIX_H
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

struct matrix
{
    size_t rows, cols;
    double *data;
};

struct bmatrix
{
    size_t rows, cols;
    bool *data;
};

enum comparison
{
    LT, LE, EQ,
    NE, GE, GT
};

extern struct bmatrix *mat_boolean(const struct matrix *m, double rhs, enum comparison cmp);
#endif// MATRIX_H
