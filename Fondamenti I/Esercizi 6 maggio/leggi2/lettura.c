#include "lettura.h"

extern int *leggiinteri (const char *filename, size_t *size)
{
   FILE *f = fopen(filename, "rb");
    if (f == NULL)
        return NULL;
    int *x, c = 0, ret = 1;

    while (ret == 1)
    {
        if (*size == c)
        {
            c = c * 2 + 1;
            x = realloc(x, c * sizeof(int));
        }
        ret = fread(&x[*size], sizeof(int), 1, f);

        if (ret == 0)
            break;
        ++*size;
    }

    if (*size == 0)
        return NULL;

    fclose(f);
    return x;
}
