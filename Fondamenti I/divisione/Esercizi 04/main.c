int divisione (double a, double b, double *q)
{
    if (b==0)
        return 0;
    *q=a/b;
        return 1;
}

int main(void)
{
    double q;
    double D=divisione(70,4,&q);
    return 0;
}
