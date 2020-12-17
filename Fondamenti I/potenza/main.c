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

int main(void)
{
    double p=potenza(2,-5);
    return 0;
}
