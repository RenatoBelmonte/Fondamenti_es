#include <stdint.h>
#include <stdlib.h>

void iota(uint32_t *x,size_t n)
{
    for(int i=0;i<n;++i)
    {
        x[i]=i;
    }
}

int main(void)
{
    int n=10;
    uint32_t *x=malloc(n*sizeof(uint32_t));
    iota(x,n);

    free(x);
    return 0;
}
