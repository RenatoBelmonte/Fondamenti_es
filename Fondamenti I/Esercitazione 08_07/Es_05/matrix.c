#include "matrix.h"
struct matrix *mat_permute_rows(const struct matrix *m, const size_t *p)
{
    if(m == NULL)
        return NULL;

    size_t rows = m->rows;
    size_t cols = m->cols;
    double *d = malloc(rows*cols*sizeof(double));
    int i = 0;

    for(int r = 0; r < rows; ++r)
    {
        for(int c = 0; c < cols; ++c)
        {
            d[i] = m->data[p[r]*cols+c];
            ++i;
        }
    }
    struct matrix *res = malloc(sizeof(struct matrix));
        res->rows = rows;
        res->cols = cols;
        res->data = d;

    return res;
}
