#include "array.h"

void array_remove(double *arr, size_t *pn, size_t pos)
{
    for (int i=pos; i<*pn-1; ++i)
    {
        arr[i]=arr[i+1];
    }

    *pn-=1;
    realloc(arr, *pn * sizeof(double));
}
