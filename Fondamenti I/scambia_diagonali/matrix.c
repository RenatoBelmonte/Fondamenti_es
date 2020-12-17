#include "matrix.h"

extern struct matrix *scambia_diagonali( const struct matrix *m)
{
    if (m->rows != m->cols || m->data == NULL || m == NULL)
        return NULL;

    size_t n = m->rows * m->cols;
    size_t rows = m->rows, cols = m->cols;
    double *e = malloc(n * sizeof(double));

    for( int i = 0; i < n ; ++i)
    {
        e[i] = m->data[i];
    }

    for(int r = 0; r < rows; ++r)
    {
        for(int c = 0; c < cols; ++c)
        {
            if(r == c)
            {
                e[r*cols + c] = m->data[r*cols + cols - c - 1];
                e[r*cols + cols - c - 1] = m->data[r*cols + c];
            }

        }
    }

    struct matrix *d = malloc(3 * sizeof(int));
            d->rows = m->rows;
            d->cols = m->cols;
            d->data = e;

return d;
}
