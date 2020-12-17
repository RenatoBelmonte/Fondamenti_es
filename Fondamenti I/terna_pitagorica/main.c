#include"../../../Libreria/funzioni_base.h"
int is_terna_pitagorica(int a, int b, int c)
{
    a*=a; b*=b; c*=c; int d=a+b;
    if (d==c)
        return 1;
    else
        return 0;
}

void ordina3 (int *a, int *b, int *c)
{

}

int main(void)
{
    int a=5;
    int b=4;
    int c=3;

    void ordina3(&a,&b,&c);

    int t=is_terna_pitagorica(a,b,c);
    return 0;
}
