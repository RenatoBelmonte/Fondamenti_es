#include "matrix.h"
struct matrix *mat_delete_row(const struct matrix *m, size_t i)
{
    if(m == NULL || i > m->rows-1 || m->rows == 1)
        return NULL;

    size_t rows = m->rows;
    size_t cols = m->cols;
    double *d = malloc(rows*cols*sizeof(double));
    int n = 0;

    for(int r = 0; r < rows; ++r)
    {
        for(int c = 0; c < cols; ++c)
        {
            if(r != i)
            {
                d[n] = m->data[r*cols+c];
                ++n;
            }
        }
    }

    struct matrix *res = malloc(sizeof (struct matrix));
        res->rows = rows-1;
        res->cols = cols;
        res->data = d;

    return res;
}
