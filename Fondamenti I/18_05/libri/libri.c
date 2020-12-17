#include "libri.h"

extern bool libro_scrivi (const struct libro *p, FILE *f)
{
    int ret = fwrite(p->titolo, 1, strlen(p->titolo) + 1, f);
        if (ret != strlen(p->titolo) + 1)
            return 0;

    size_t n = strlen((const char*)p->anni_ristampe);
    ret = fwrite(p->anni_ristampe, sizeof(uint16_t), n, f);
        if (n != ret)
            return 0;

    fputc(0,f);


return 1;
}
