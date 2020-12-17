#include "tirocini.h"
bool tirocinio_load(FILE *f, struct tirocinio *t)
{
    int ris = 0;

    t->nome = malloc(255*sizeof(char));
    t->azienda1 = malloc(255*sizeof(char));
    t->azienda2 = malloc(255*sizeof(char));
    t->azienda3 = malloc(255*sizeof(char));

    ris = fscanf(f, "%[^,]", t->nome);
        if(ris == 0)
            return 0;

    ris = fscanf(f, ",%[^,]", t->azienda1);
        if(ris == 0)
            return 0;

    ris = fscanf(f, ",%[^,]", t->azienda2);
        if(ris == 0)
            return 0;

    ris = fscanf(f, ",%[^,\n]", t->azienda3);
        if(ris == 0)
            return 0;

return 1;
}
