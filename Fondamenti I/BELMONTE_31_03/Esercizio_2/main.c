#include <stdlib.h>

potenza (double *d, size_t i)
{
    if (i==0)
        *d=0;
    else
    {
        double b=1;
        for(int n=0; n<i; ++n)
        {
           b*=*d;
        }
        *d=b;
    }
}

int main(void)
{
    double a[]={2,2,2,2,2,2,2,2,2,2};
    size_t i,n =10;

    for (i=0; i<n; ++i)
    {potenza(&a[i],i);}

    return 0;
}
