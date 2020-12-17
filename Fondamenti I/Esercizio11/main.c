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
