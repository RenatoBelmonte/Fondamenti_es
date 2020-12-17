#include"../../../Libreria/funzioni_base.h"

double pi_greco(int k)
{
    double P=0;
    for (int i=0;i<=k;++i)
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




int main(void)
{
    double p=pi_greco(7);
    return 0;
}
