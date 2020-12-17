#include "matrix.h"
struct matrix *mirror_mat(const struct matrix *m)
{
    if(m == NULL)
        return NULL;

    size_t rows = m->rows;
    size_t cols = m->cols;
    double *d = malloc(rows*cols*sizeof(double));
    int i = 0;

    for(int r = 0; r < rows; ++r)
    {
        for(int c = cols; c > 0; --c)
        {
            d[i] = m->data[r*cols+c-1];
            ++i;
        }
    }
    struct matrix *res = malloc(sizeof(struct matrix));
        res->rows = rows;
        res->cols = cols;
        res->data = d;

    return res;
}
