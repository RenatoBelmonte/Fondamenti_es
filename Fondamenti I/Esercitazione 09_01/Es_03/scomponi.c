#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void stampa_scomposizione(unsigned int n)
{
    if(n == 0)
        printf("0");
    else if(n == 1)
        printf("1");
    else
    {
        unsigned long int m = sqrt(n);
        for(unsigned long int i = 2; i <= m; ++i)
        {
            if(n == 1)
                break;
            double tmp = (double)n / i;
            if(tmp == n/i)
            {
                size_t count = 0;
                while(tmp == n/i)
                {
                    ++count;
                    n /= i;
                    tmp = (double)n / i;
                }
                    printf("%u", i);
                    if(count > 1)
                        printf("^%u", count);
                    if(n != 1)
                        printf(" * ");
            }
        if(i == m)
            printf("%u", n);
        }
    }
}
