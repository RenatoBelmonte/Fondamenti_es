double potenza(double b, double e)
{
    if (e>=1)
    {
        double k=1;
        for (int i=0;i<e;++i)
            k*=b;
        return k;
    }
    else return 1;
}

int fattoriale (int n)
{
    if (n!=0)
        {int k=1;
        for(int i=1;i<=n;++i)
            k*=i;
            return k;}
    else return 1;
}

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
