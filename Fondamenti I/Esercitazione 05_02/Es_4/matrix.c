#include "matrix.h"

struct matrix *mat_reset_cross(const struct matrix *m, size_t ir, size_t ic)
{
    if( m == NULL || ir > m->rows || ic > m->cols)
        return NULL;

    size_t rows = m->rows;
    size_t cols = m->cols;
    struct matrix *mat = malloc(sizeof(struct matrix));
    double *data = malloc (rows * cols * sizeof(double));

    mat->rows = rows;
    mat->cols = cols;
    mat->data = data;

    int i = 0;
    for(int r = 0; r != rows; ++r)
    {
        for(int c = 0; c != cols; ++c)
            {
                if (r == ir ^ c == ic)
                    data[r*cols+c] = 0;

                else data[i] = m->data[i];

                ++i;
            }
    }
    return mat;
}
