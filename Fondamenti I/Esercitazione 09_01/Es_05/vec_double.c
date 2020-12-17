#include "vec_double.h"

struct vec_double *read_vec_double(const char *filename)
{
    FILE *f = fopen(filename, "rb");
        if(f == NULL)
            return NULL;

    size_t n;
    int ret = fread(&n, sizeof(int), 1, f);
        if(ret == EOF || ret != 1)
            {fclose(f);
            return NULL;}

    double *data = malloc(n * sizeof(double));
        ret = fread(data, sizeof(double), n, f);
        if(ret == EOF || ret != n)
            {fclose(f);
            free(data);
            return NULL;}

    struct vec_double *res = malloc(sizeof(struct vec_double));
    res->size = n;
    res->data = data;

    fclose(f);
    return res;

}
