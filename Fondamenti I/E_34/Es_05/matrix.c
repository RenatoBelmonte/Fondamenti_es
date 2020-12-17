#include "matrix.h"
bool read_matrix(struct matrix *m, FILE *f)
{
    if(m == NULL)
        return 0;
    int ris = 0;

    ris = fscanf(f, "%i", &m->rows);
    if(ris == EOF)
        return 0;
    ris = fscanf(f, "%i", &m->cols);
    if(ris == EOF)
        return 0;
    size_t rows = m->rows;
    size_t cols = m->cols;

    double *d = malloc(rows*cols*sizeof(double));

    for(int i = 0; i < (rows*cols); ++i)
    {
        ris = fscanf(f, "%lf", &d[i]);
        if(ris == EOF)
            return 0;
    }
return 1;
}
