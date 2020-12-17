#include <stdlib.h>
#include <stdint.h>

double *probabilita(const uint32_t *v, size_t n)
{
    if(v == NULL || n == 0)
        return NULL;
    double *res = malloc(n * sizeof(double));

    double m = 0;
    for(int i = 0; i < n; ++i)
        {m += v[i];}
    if(m == 0)
        return NULL;
    for(int i = 0; i < n; ++i)
    {
        res[i] = v[i] / m;
    }

return res;
}
