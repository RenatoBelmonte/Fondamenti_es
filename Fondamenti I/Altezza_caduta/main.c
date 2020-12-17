double altezza_caduta (double g, double t)
{
    double h;
    t*=t;
    g/=2;
    h=g*t;
    return h;
}



int main(void)
{
    int a=1,b=2,c=3;
    a=b%c-(--a);
    int h=altezza_caduta(9.81, 15);
    return 0;
}
