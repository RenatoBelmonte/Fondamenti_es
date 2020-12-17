#include <math.h>
#include <stdlib.h>
double entropia(const double *v, size_t n)
{
    if(v == NULL || n == 0)
        return 0;
    double res = 0;
    for(int i = 0; i < n; ++i)
    {
        if(v[i] != 0)
        res += -log2(v[i])*v[i];
    }

    return res;
}
