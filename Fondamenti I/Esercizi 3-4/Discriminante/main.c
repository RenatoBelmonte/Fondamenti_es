
double discriminante (double a, double b, double c, double *d)
{

    *d=b*b-(4*a*c);
}


int main(void)
{
    double d;
    double D=discriminante(12,6,-2,&d);
    return 0;
}
