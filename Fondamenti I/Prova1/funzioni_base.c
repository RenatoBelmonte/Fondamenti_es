typedef unsigned int uint;

double sqrt(double a)
{
    int t,x=a;
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

double radici(int a, int b, int c, double *x1, double *x2)
{
    int d;
    int D;

    d=b*b-4*a*c;
        if (d<0)
            return 0;
        if (d==0)
            return 1;
    D=sqrt(d);
    *x1=(-b-D)*0.5*(1./a);
    *x2=(-b+D)*0.5*(1./a);
    return 2;
}

void swap (uint *a, uint *b)
{
    uint tmp = *a;
    *a = *b;
    *b = tmp;
}

uint MCD (uint m, uint n)
{
    if (m==0 || n==0)
        return 0;
    while (m!=n)
    {
        if (m<n)
            swap (&m, &n);
        m-=n;
    }
    return m;
}

int fattoriale (int n)
{
    if (n!=0)
        {int k=1;
        for(int i=1;i<=n;++i)
            k*=i;
            return k;}
    else
        {if (n=0)
        return 1;
        else return 0;}
}

int mcm(int a, int b)
{
    int i=2;
    int t=a;
    int d=b;
    int c=2;

    do
{       if (a>b)
            {int n=a;a=b;b=n;}
        for (i;a<b;++i)
            a=t*i;
        if (a==b)
            return a;
        b=d*c;++c;}
    while(a!=b);
}

double potenza(double b, double e)
{
    if (e>=1)
        {
            int k=1;
            for (int i=0;i<=e;++i)
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

int isprime (uint val)
{
    for(int i=2;i<val;i++)
        if(val%i==0)
            return 0;
    return 1;
}

double massimo(double a,double b,double c)
{
    if (a<b)
    {
        if (b<c)
            return c;

        else return b;
    }
    else
    {
        if (a<c)
            return c;

        else return a;
    }
}
