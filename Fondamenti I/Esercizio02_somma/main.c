typedef unsigned int uint;

uint somma_n(int n)
{
uint tot=0;
    for(int i=1;i<=n;++i)
        tot+=i;
    return tot;
}
int main(void)
{
   uint tot;

    somma_n(0);  // 0
    somma_n(1);  // 1
    somma_n(5);  // 15
    somma_n(10); // 55
    somma_n(20); // 210
    somma_n(100);// 5050

    return 0;
}
