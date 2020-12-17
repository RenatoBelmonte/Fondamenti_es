typedef long uint;
typedef unsigned char uchar;
uint fattoriale (uchar n)
{
    long f=1;
    for(uint i=1;i<=n;i++)
        f*=i;
    return f;
}

int main(void)
{
    uint f;
    f=fattoriale(0);  // 1
    f=fattoriale(1);  // 1
    f=fattoriale(2);  // 2
    f=fattoriale(3);  // 6
    f=fattoriale(4);  // 24
    f=fattoriale(9);  // 362880
    f=fattoriale(10); // 3628800
    f=fattoriale(11); // 39916800
    f=fattoriale(12); //
    f=fattoriale(13); //
    f=fattoriale(14); //
    f=fattoriale(15); //
    return 0;
}
