#include "lettura.h"

extern int *leggiinteri (const char *filename, size_t *size)
{
    size_t n = *size;
    int *x = NULL;
    FILE *f = fopen(filename, "rb");
    if (f != NULL)
    {
        size_t ret = fread(&n, sizeof(int), 1, f);
        if (ret == 1)
        {
            x = malloc(n * sizeof(int));
            if (x != NULL)
            {
                ret = fread(x, sizeof(int), n, f);
                if (ret != n)
                    {
                        *size = n;
                        free(x);
                        x = NULL;
                    }
                else
                {
                    free(x);
                    x = NULL;
                }
            }

        }
        fclose(f);
    }
    return x;
}
