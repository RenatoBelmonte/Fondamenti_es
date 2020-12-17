#include "matematica.h"

double media (double *x, uint n)
{
    if (n<=0)
        return 0;

    double somma=0;
    for (int i=0; i<=n; ++i)
    {
        somma+=x[i];
    }
    return somma/n;
}

double varianza (double *x, uint n)
{
    if (n<2)
        return 0;
    double M=media (x,n);
    double somma=0;
    for (int i=0; i<n; ++i)
    {
        somma+=potenza(x[i]-M,2);
    }
    return somma/n;
}

int main(void)
{
    int n=5;

    double *v=malloc(n * sizeof (double));
    v[0]=12; v[1]=6; v[2]=87; v[3]=100; v[4]=20;

    double M=media(v,n);
    double V=varianza (v,n);

    free(v);
    return 0;
}
