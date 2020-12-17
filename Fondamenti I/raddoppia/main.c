#include <stdint.h>
#include <stdlib.h>

void raddoppia(uint32_t *x,size_t n)
{
    for (int i=0;i<n;++i)
    {
        x[i]*=2;
    }
}

int main(void)
{
    int n=5;
    uint32_t *v=malloc(n*sizeof (uint32_t));
    v[0]=12;
    v[1]=59;
    v[2]=83;
    v[3]=100;
    v[4]=24;
    raddoppia(v,n);
    free(v);
    return 0;
}
