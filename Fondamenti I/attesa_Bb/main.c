int l=0;
int c=0;
int attesa(int t,int s)
{
    if(t>l||c==0)
    {
        l=s+t;
        c=l;
        return 0;
    }
    c=l-t;
    l+=s;
    return c;
}

int main(void)
{
    int a=attesa(3,2);
    int b=attesa(3,15);
    int d=attesa(9,14);

    int m=max(a,b,c);

    return 0;
}

int max (int a,int b, int c)
    {
        if(a<=b)
            {if (b>c)
                return b;
             else
                return c;}
        if (b<=a)
            {if (a>c)
                return b;
             else
                return a;}
    }


