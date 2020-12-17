#include "lettura.h"

extern int *leggidouble (const char *filename, size_t *size)
{
   FILE *f = fopen(filename, "r");
   if (f == NULL)
        return NULL;

    double *x = NULL;
    int c = 0, ret = 1;

    for (*size; ret == 1; ++*size)
    {
        if (*size == c)
        {
            c = c * 2 + 1;
            x = realloc(x, c * sizeof(double));
        }

        ret = fscanf(f,"%lf",&x[*size]);
    }

    *size -= 1;
    fclose(f);
    return x;
}
