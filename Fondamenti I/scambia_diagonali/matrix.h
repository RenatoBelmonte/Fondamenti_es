#if !defined MATRICI_H
#define MATRICI_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct matrix
{
    size_t rows, cols;
    double *data;
};

extern struct matrix *scambia_diagonali( const struct matrix *m);

#endif //MATRICI_H
