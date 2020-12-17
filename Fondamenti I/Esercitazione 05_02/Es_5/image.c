#include "image.h"

struct image *read_images(const char *filename, size_t *n)
{
    FILE *f = fopen(filename, "r");
        if( f == NULL)
            return NULL;
    struct image *im = calloc(1, sizeof(struct image));
    struct image *res = calloc(1, sizeof(struct image));

    int ris = 0;
        for(*n; ris != EOF ; ++*n)
        {
            res = realloc(res, (*n+1) * sizeof(struct image));
            ris = fscanf(f,"%[^:\n]", im->name);
                if (ris == EOF && *n == 0)
                    return NULL;
                else if(ris == EOF)
                    return res;
                ris = fgetc(f);

            ris = fscanf(f,"%d", &im->height);
                if (ris == EOF)
                    return res;
                ris = fgetc(f);

            ris = fscanf(f,"%d", &im->width);
                if (ris == EOF)
                    return res;

            res[*n] = *im;

            if (fgetc(f) == EOF)
            {
                ++*n;
                return res;
            }

        }
}
