#include "stat.h"

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

double potenza(double b, double e)
{
    if (e==0)
        return 1;

    if (e>=1)
        {
            double k=1;
            for (int i=0;i<e;++i)
                k*=b;
                return k;
        }
    else
        if (e<=1)
            {
                b=1./b;
                double k=1.;
                for (int i=0;i<(-e);++i)
                    k*=b;
                    return k;
            }

        return 0;
}
