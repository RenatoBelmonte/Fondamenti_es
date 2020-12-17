#include <stdint.h>
#include <stdlib.h>

uint32_t *somme_2a2 (uint32_t *v, size_t size)
{
    uint32_t *somme=malloc(size/2);

    int m=0;
    for (int i=0; i<size/2; ++i)
    {
        somme[i]=v[m]+v[m+1];
        m+=2;
    }
    return somme;
}

int main(void)
{
    size_t n=6;

    uint32_t *v=malloc(n * sizeof (uint32_t));
    v[0]=3; v[1]=87; v[2]=5; v[3]=7; v[4]=12; v[5]=9;

    uint32_t *somme = somme_2a2 (v,n);

    free(v);
    free(somme);
    return 0;
}
