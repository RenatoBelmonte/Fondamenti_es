#include "libri.h"

int main(void)
{
    FILE *f = fopen("prova", "wb");
        if (f == NULL)
            return 0;

    char *titolo = "L'arte di essere fragili";
    uint16_t ristampe[] = {2001, 2002};

    struct libro primo = {titolo, ristampe};

    bool val = libro_scrivi(&primo, f);

    fclose(f);
    return 0;
}
