double radice_quadrata(double a)
{
    int t,x=a;
    if(x <= 0.)
        return 0.;
    do
    {
        t = x;
        x = 0.5 * (t + a / t);
    }
while(x != t);

return x;
}
int main(void)
{
    radice_quadrata(25);
    return 0;
}
