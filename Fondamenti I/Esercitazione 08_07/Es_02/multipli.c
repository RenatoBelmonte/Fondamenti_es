#include <stdlib.h>

int *rimuovi_multipli(const int *v, size_t size, size_t *newsize)
{
    if(v == NULL || newsize == NULL)
    {
        *newsize = 0;
        return NULL;
    }
    int *res = calloc('0', size*sizeof(int));
    *newsize = 0;
    for(int i = 0; i != size; ++i)
    {
        int count = 0;
        for(int n = 0; n != size; ++n)
        {
            if(v[i]%v[n] == 0 && i != n)
                break;
            else ++count;
        }
        if(count == size)
            {res[*newsize] = v[i];
            ++*newsize;}
    }
    return res;
}
