#include"array.h"

extern void array_remove(double *arr, size_t *pn, size_t pos);

int main(void)
{
    size_t pos=3;
    size_t n=10;
    size_t *pn=&n;
    double *arr=malloc(*pn*sizeof(double));

    for(int i=0; i<10; ++i)
    {arr[i]=i*i;}

    array_remove(arr,pn,pos);

    return 0;
}
