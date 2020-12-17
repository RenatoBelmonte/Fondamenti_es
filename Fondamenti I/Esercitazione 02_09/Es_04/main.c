#include "rapporti.h"

int main(void)
{
    char s1[] = "file3.bin";
    uint16_t n;

    struct rapporto *res = leggi_rapporti(s1, &n);
    return 0;
}
