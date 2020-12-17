#include <string.h>
#include <stdlib.h>

char *somma_stringhe(const char *a, const char *b)
{
    if( a == NULL || b == NULL)
        return NULL;

    size_t n = strlen(a), m = strlen(b), max, min;
    if(n>m)
    {
        max = n;
        min = m;
    }
    else
    {
        max = m;
        min = n;
    }

    char *res = calloc('0', (max+2) * sizeof(char));

    int sum = 0, i = max;
    for(; max > 0; --max)
    {
        int A = a[n-1] - 48;
        int B = b[m-1] - 48;
        if(n == 0)
            A = 0;
        if(m == 0)
            B = 0 ;
        sum += A + B;
        res[max] = 48 + sum%10;
        sum /= 10;
        --n;--m;
    }
    if(sum == 1)
        res[0] = 49;
    else
    {
        max = i+2;
        i = 0;
        while(i != max)
        {
            res[i] = res[i+1];
            ++i;
        }
    }

return res;
}
