#include"../../../Libreria/funzioni_base.h"

double log(double b,double a)
{
    double ris=0;
    if (ris==a)
        return 0;

    int i=1;
    for (i;ris!=a;++i)
        {ris=potenza(b,i);}
    return i-1;
}

int main(void)
{
    double a=8;
    double b=2;
    double l=log(b,a);
    return 0;
}
