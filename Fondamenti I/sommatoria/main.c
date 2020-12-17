int sommatoria(int n)
{
    int t=0;
    for (int i=0;i<=n;++i)
        t+=i;
    return t;
}

int main(void)
{
    int s=sommatoria(10);
    return 0;
}
