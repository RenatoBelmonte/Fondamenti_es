int m=0;
int sp=0;

double media_p(int v,int p)
{
    sp+=p;
    m+=v*p;
    int c=m/sp;
    return c;
}

int main(void)
{
    double v1=media_p(26,9);
    double v2=media_p(30,12);
    return 0;
}
