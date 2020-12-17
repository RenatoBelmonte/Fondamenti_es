#include "array.h"

void array_remove(double* arr, size_t* pn, size_t pos)
{
    for (int i = pn; i < pos; ++i)
    {
        int static n = 0;
        arr[pos] = arr[pos + n];
        ++n;
    }

    int n = *pn - 1;
    realloc(arr, n * sizeof(double));
}