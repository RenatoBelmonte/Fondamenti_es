#include "matrix.h"
struct matrix *mat_rendiquadrata(const struct matrix *m)
{
    size_t rows = m->rows;
    size_t cols = m->cols;
    size_t max = 0;
    if(rows > cols)
        max = rows;
    else if(cols > rows)
        max = cols;
    double *d = malloc(max*max*sizeof(double));
    int i = 0;

    for(int r = 0; r < max; ++r)
    {
        for(int c = 0; c < max; ++c)
        {
            if(r >= rows && rows != max)
            {
                d[i] = 0;
                ++i;
            }
            else if(c >= cols && cols != max)
            {
                d[i] = 0;
                ++i;
            }
            else
            {
                d[i] = m->data[r*cols+c];
                ++i;
            }
        }
    }
    struct matrix *res = malloc(sizeof(struct matrix));
        res->rows = max;
        res->cols = max;
        res->data = d;

    return res;
}
