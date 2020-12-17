int fattoriale (int n)
{
    if (n!=0)
        {int k=1;
        for(int i=1;i<=n;++i)
            k*=i;
            return k;}
    else
        {if (n=0)
        return 1;
        else return 0;}
}

int main(void)
{
    int f=fattoriale(5);
    return 0;
}
