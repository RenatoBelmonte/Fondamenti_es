#include <stdio.h>
#include <stdint.h>

void stampa_a(uint8_t n)
{
    double a = n;
    if(n > 3 && a/2 != n/2)
    {
        for(n; n > 0; --n)
        {
            for(int i = n; i > 0; --i)
                {printf(" ");}
            printf("/");
            if(n-1 == (int)a/2)
            {
              for(int i = (a-n)*2; i > 0; --i)
                {printf("-");}
            }
            else for(int i = (a-n)*2; i > 0; --i)
                    {printf(" ");}
            printf("\\\n");
        }
    }
}
