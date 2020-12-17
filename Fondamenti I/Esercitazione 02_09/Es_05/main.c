#include <stdio.h>
#include <stdlib.h>

extern unsigned int irpef(unsigned int stipendio, unsigned int *scaglioni,
                          unsigned int *aliquote, size_t n);
int main()
{

    unsigned int scaglioni[] = {0, 15000, 28000, 55000, 75000};
    unsigned int aliquote[] = {23, 27, 38, 41, 43};
    size_t n = 5;

    for(unsigned int stipendio = 5000; stipendio < 100000; )
    {
        unsigned int res = irpef(stipendio, scaglioni, aliquote, n);
        printf("\nlo stipendio e' %u, dunque l'IRPEF e' %u\n", stipendio, res);
        stipendio += 5000;
    }

    return 0;
}
