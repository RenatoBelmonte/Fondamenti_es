#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

extern bool cifre_duplicate_hex(unsigned int n);
int main(void)
{

    int a = 0x0;
    bool res = cifre_duplicate_hex(a);
    return 0;
}
