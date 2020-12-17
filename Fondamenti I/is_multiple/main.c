int is_multiple(int a, int b)
{
    if (a<b)
    {
        for(int i=2;a<b;++i)
        {
            a+=a;
            if (a=b)
                return 1;
        }
        return 0;
    }
    else
    {
        int t;
        t=b;
        b=a;
        a=t;
        for(int i=2;a<b;++i)
        {
            a+=a;
            if (a==b)
                return 1;
        }
        return 0;
    }
}

int main(void)
{
    int m=is_multiple(64,16);
    return 0;
}
