#include <stdio.h>
#include <stdlib.h>

extern int *clamped(const int *v, size_t n, int min, int max);
int main()
{
    int p[] = {10, 20, 30, 40, 50, 60};
    int min = 25;
    int max = 45;
    size_t n = 6;

    int *v = clamped(p, n, min, max);
    return 0;
}
