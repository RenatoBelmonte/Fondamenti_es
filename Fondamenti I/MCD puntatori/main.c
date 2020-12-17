typedef unsigned int uint;

void swap (uint *a, uint *b)
{
    uint tmp = *a;
    *a = *b;
    *b = tmp;
}

uint MCD (uint m, uint n)
{
    if (m==0 || n==0)
        return 0;
    while (m!=n)
    {
        if (m<n)
            swap (&m, &n);
        m-=n;
    }
    return m;
}

int main (void)
{
    uint a=98;
    uint b=66;
    MCD(a,b);
    return 0;
}
