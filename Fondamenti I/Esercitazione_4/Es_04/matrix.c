#include "matrix.h"
struct matrix *mat_delete_col(const struct matrix *m, size_t i)
{
    if(m == NULL || i > m->cols || i < 0 || m->cols == 1)
        return NULL;
    size_t rows = m->rows;
    size_t cols = m->cols;
    double *d = malloc(rows*(cols-1)*sizeof(double));

    int count = 0;
    for(int r = 0; r < rows; ++r)
    {
        for(int c = 0; c < cols; ++c)
        {
            if(c != i-1)
            {
                d[count] = m->data[r*cols+c];
                ++count;
            }
        }
    }
    struct matrix *res;
        res->rows = rows;
        res->cols = cols-1;
        res->data = d;

return res;
}
