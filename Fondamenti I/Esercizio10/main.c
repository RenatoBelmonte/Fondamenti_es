//dati i lati del rettangolo trovare diagonale perimetro e area

double area(double a, double b)
{
    return a*b;
}

double perimetro(double a, double b)
{
    return 2*(a+b);
}

double diagonale (double s)
{
    double t,x=s;

    if (x<=0.)
        return 0;

    do
    {
        t=x;
        x=0.5*(t+s/x);
    }
    while (x!=t);

    return x;
}

int main(void)
{
    double a=20;
    double b=10;
    double s=a*a+b*b;

    double a1=area(a,b);
    double p1=perimetro(a,b);
    double d1=diagonale(s);

    return 0;
}
