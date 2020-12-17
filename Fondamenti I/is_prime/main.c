typedef unsigned int uint;

int isprime (uint val)
{
    for(int i=2;i<val;i++)
        if(val%i==0)
            return 0;
    return 1;
}

int main(void)
{
    int p;

    p=isprime(4);
    p=isprime(5);
    p=isprime(13);
    p=isprime(323);

    return 0;
}
