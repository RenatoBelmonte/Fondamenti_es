double seno_iperbolico(double x)
{
    double res = 0, tmp = x, num = x, den = 1;
    for(int n = 1; tmp != res; ++n)
    {
        res = tmp;
        num *= x*x;
        den *= (2*n) * (2*n+1);

        tmp += num / den;
    }
return res;
}
