#include "array.h"

double *array_somma(const double *arr1, const double *arr2, size_t n)
{
    double *S=malloc(n*sizeof(double));
    for (int i=0; i<n; ++i)
    {
        S[i]=arr1[i]+arr2[i];
    }
    return S;
}
