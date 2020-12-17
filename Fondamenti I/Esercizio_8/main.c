#include <stdio.h>
#include <stdlib.h>

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

double fattoriale (double n)
{
    if (n!=0)
        {double k=1;
        for(int i=1;i<=n;++i)
            k*=i;
            return k;}
    else return 1;
}

double sin(double x)
{
    double S=0;
    double n=40;
    for (double i=0;i<n;++i)
    {
        double oldS=S;

        double s=potenza(-1,i);
        double e=(2*i)+1;
        double b=0;
        b=potenza(x,e);
        double d=(2*i)+1;
        d=fattoriale(d);
        S+=((b*s)/d);

        if(S==oldS)
            return S;
    }
    return S;
}

/*double pi_greco(void)
{
    double P=0;
    for (double i=0;;++i)
    {
        double oldP=P;

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

        if(oldP==P)
            return P;
    }
}
*/

double calcola_seno(double x)
{
    double ris=x;
    double n=x;
    double d=1;

    for (int i=1;;++i)
    {
        double oldRis=ris;

            n*=x*x*(-1);
            d*=(2*i)*(2*i+1);

        ris+=n/d;

        if(oldRis==ris)
            return ris;
    }
    return 0;
}

int main(void)
{
    double a=sin(P/4);
    double b=calcola_seno(P/4);
    return 0;
}
