#include "matematica.h"

double esp(double x)
{
    int n=40;
    double den=1;
    double ris=1;
    double num=1;
    double ris_old=0;
    for (int i=1;i<=n;++i)
    {
        num*=x;
        den*=i;
        ris+=num/den;
            if(ris==ris_old)
                return ris;
        ris_old=ris;
    }
    return ris;
}

double sqrt(double a)
{
    double t,x=a;
    if(x <= 0.)
        return 0.;
    do
    {
        t = x;
        x = 0.5 * (t + a / t);
    }
while(x != t);

return x;
}

void swap (int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

double fattoriale (double n)
{
    if (n!=0)
        {double k=1;
        for(int i=1;i<=n;++i)
            k*=i;
            return k;}
    else return 1;
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

double pi_greco(int k)
{
    double P=0;
    for (double i=0;i<=k;++i)
    {
        double Da=potenza(16,i);
        double Db=8*i+1;
        double Dc=8*i+4;
        double Dd=8*i+5;
        double De=8*i+6;

        double a=1/Da;
        double b=4/Db;
        double c=2/Dc;
        double d=1/Dd;
        double e=1/De;

        double S=b-c-d-e;
        double P1=a*S;
        P+=P1;
    }
    return P;
}

double sin(double x)
{
    double A=0;
    double n=7;
    for (double i=0;i<n;++i)
    {
        double s=potenza(-1,i);
        double e=(2*i)+1;
        double b=0;
        b=potenza(x,e);
        double d=(2*i)+1;
        d=fattoriale(d);
        A+=((b*s)/d);
    }
    return A;
}

double cos(double x)
{
    double A=0;
    int n=7;
    for (double i=0;i<n;++i)
    {
        double s=potenza(-1,i);
        double e=2*i;
        double nu=potenza(x,e);
        double d=2*i;
        double de=fattoriale(d);
        A+=nu*s/de;
    }
    return A;
}

double tan(double x)
{
    double s=sin(x);
    double c=cos(x);
    return s/c;
}

double e(void)
{
    double s=0;
    for (int i=0;i<15;++i)
    {
        double d=fattoriale(i);
        s+=1./d;
    }
    return s;
}

