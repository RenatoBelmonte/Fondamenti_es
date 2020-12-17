#include "rapporti.h"
struct rapporto *leggi_rapporti(const char *filename, uint16_t *n)
{
    FILE *f =fopen(filename, "rb");
        if(f == NULL)
        {
            fclose(f);
            return NULL;
        }

    int ret = 0;
    ret = fread(n, sizeof(uint16_t), 1, f);
        if(ret != 1)
            {fclose(f);
            return NULL;}

    struct rapporto *res = malloc(*n*sizeof(struct rapporto));

    if(n == 0)
    {
        fclose(f);
        free(res);
        return NULL;
    }
    for(int i = 0; i != *n; ++i)
    {
        struct rapporto *tmp = malloc(sizeof(struct rapporto));
        ret = fread(&tmp->id, sizeof(uint16_t), 1, f);
            if(ret != 1)
                {
                    fclose(f);
                    free(tmp);
                    free(res);
                    return NULL;
                }
        ret = fread(&tmp->tipo, sizeof(char), 1, f);
            if(ret != 1)
                {
                    fclose(f);
                    free(tmp);
                    free(res);
                    return NULL;
                }
        ret = fread(&tmp->valore, sizeof(float), 1, f);
            if(ret != 1)
                {
                    fclose(f);
                    free(tmp);
                    free(res);
                    return NULL;
                }
        res[i].id = tmp->id;
        res[i].tipo = tmp->tipo;
        res[i].valore = tmp->valore;
    }
return res;
}
