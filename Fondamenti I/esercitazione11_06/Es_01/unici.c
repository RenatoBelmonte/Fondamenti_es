#include "unici.h"

int *unici(const int *vec, size_t size, size_t *new_size)
{
    int *res = malloc(size*sizeof(int));

    int d = 0;
    for(int i = 0; i < size; ++i)
    {
        int count = 0;
        for(int n = 0; n < size; ++n)
        {
            if(vec[n] == vec[i] && n != i)
                break;
            ++count;
        }
        if(count == size)
            {
                res[d] = vec[i];
                ++d;
            }
    }
    *new_size = d;
return res;
}
