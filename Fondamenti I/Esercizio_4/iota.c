#include <stdint.h>
#include <stdlib.h>
extern void iota(uint32_t *x,size_t n)
{
    for(int i=0;i<n;++i)
    {
        x[i]=i;
    }
}
