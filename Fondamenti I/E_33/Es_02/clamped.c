#include <stdlib.h>
int *clamped(const int *v, size_t n, int min, int max)
{
    if( v == NULL || n == 0 || min > max )
        return NULL;
    int *res = malloc(n*sizeof(int));

    for(int i = 0; i < n; ++i)
    {
        if(v[i] < min)
            res[i] = min;
        else if(v[i] > max)
                res[i] = max;
        else res[i] = v[i];
    }

return res;
}
