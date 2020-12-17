#if !defined RAPPORTI_H
#define RAPPORTI_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct rapporto
{
    uint16_t id;
    char tipo;
    float valore;
};

extern struct rapporto *leggi_rapporti(const char *filename, uint16_t *n);
#endif //RAPPORTI_H
