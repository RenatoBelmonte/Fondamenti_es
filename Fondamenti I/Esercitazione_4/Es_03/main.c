#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

extern void stampa_a(uint8_t n);
int main()
{
    uint8_t num = 5;
    stampa_a(num);
    return 0;
}
