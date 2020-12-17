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

int main(void)
{
    int m=mcm(49931,49993);
    return 0;
}
