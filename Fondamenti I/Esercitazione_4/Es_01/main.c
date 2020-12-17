#include <stdint.h>
#include <stdlib.h>

extern double *probabilita(const uint32_t *v, size_t n);
int main()
{
    size_t n = 2;
    uint32_t p[2] = { 4294967295, 1 };

    double *res = probabilita(p, n);

    return 0;
}
