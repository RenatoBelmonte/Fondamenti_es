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

int main(void)
{
    double x1;
    double x2;
    int r=radici(-2,3,2,&x1, &x2);
    return 0;
}

double sqrt(double d)
{
    int t,x=d;
    if(x <= 0.)
        return 0.;
    do
    {
        t = x;
        x = 0.5 * (t + d / t);
    }
while(x != t);

return x;
}
