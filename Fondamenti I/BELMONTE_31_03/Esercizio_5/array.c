#include <stdlib.h>

int* crea_inizializza(unsigned int n, int val)
{
    int *p=malloc(n*sizeof(int));
    for (int i=0; i<n; ++i)
    {
        p[i]=val-i;
    }
    return p;
}
