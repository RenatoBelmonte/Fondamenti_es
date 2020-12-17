#include "matrix.h"

struct matrix *mat_replicate(const struct matrix *m)
{
    if(m == NULL)
        return NULL;

    size_t rows = m->rows;
    size_t cols = m->cols;

    double *dati = malloc(rows*cols*2*sizeof(double));

    int i = 0;

    for(int r = 0; r < rows; ++r)
    {
        for(int c = 0; c < cols; ++c)
        {
            dati[i] = m->data[r*cols+c];
            ++i;
            if(i == cols+r*cols*2)
                c = -1;

        }
    }

    struct matrix *res;
    res->rows = rows;
    res->cols = cols;
    res->data = dati;

    return res;

}
