#include <stdint.h>
#include <stdlib.h>
#include "iota.h"

void copy (uint32_t *dts, uint32_t *src, size_t n)
{
    for (int i=0;i<n;++i)
    {
        src[i]=dts[i];
    }
}

int main(void)
{
    int n=10;
    uint32_t *dts=malloc(n);
    uint32_t *src=malloc(n);

    copy(dts,src,n);

    free(dts);
    free(src);
    return 0;
}
