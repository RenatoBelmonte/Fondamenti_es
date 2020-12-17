#include <stdbool.h>

bool is_terna_pitagorica (unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int I;
    if(a>b)
    {
        if(b>c)
            I=a;
        else
            I=c;
    }
    else
    {
        if(b>c)
            I=b;
        else
            I=c;
    }

    if (2*I*I==a*a+b*b+c*c)
        return 1;
    else
        return 0;
}
