#include"stat.h"

int main(void)
{
    int n=5;

    double *v=malloc(n * sizeof (double));
    v[0]=12; v[1]=6; v[2]=87; v[3]=100; v[4]=20;

    double M=media(v,n);
    double V=varianza (v,n);

    free(v);
    return 0;
}
