#include <stdio.h>
#include <stdlib.h>

extern void stampa_scomposizione(unsigned int n);
int main(void)
{
    unsigned int a = 2147483648;

    stampa_scomposizione(a);
    printf("\n");
    return 0;

}
