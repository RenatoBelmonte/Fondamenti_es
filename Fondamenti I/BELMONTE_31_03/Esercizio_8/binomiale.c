double fattoriale(double a)
{
    if (a == 0)
        return 0;
    double i = 1;
    for (i; a > 1; --a)
    {
        i *= a;
    }
    return i;
}

double binomiale(unsigned int n, unsigned int k)
{
    if (n == 0 || k > n)
        return 0;

    double N = fattoriale(n);
    double K = fattoriale(k);
    double N_K = fattoriale(n - k);

    return N/(K * N_K);

}

