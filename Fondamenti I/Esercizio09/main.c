double volume_cono(double r, double h)
{
    double v;
    double p;

    p=pi_greco;
    v=(r*r*h*p)/3;

    return v;
}



int main(void)
{
    double V;
    V=volume_cono(0.5,2);
    return 0;
}
