#include <stdlib.h>
#include <stdint.h>
int *prodotto(const int *v, size_t n)
{
    if(v == NULL || n == 0 || n == 1)
        return NULL;
    int *res = malloc( n * sizeof(int));

    for(int i = 0; i < n; ++i)
    {
        res[i] = 1;
        for(int c = 0; c < n; ++c)
        {
            if(c != i)
                res[i] *= v[c];
        }
    }
return res;
}
