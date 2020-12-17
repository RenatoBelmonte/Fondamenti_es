#include <stdbool.h>
#include <stdlib.h>
bool cifre_duplicate(unsigned long long n)
{
    if(n > 999999999)
        return 1;
    char *res = malloc(10 * sizeof(char));

    int i = 0;
    for(; n != 0; ++i)
    {
        res[i] = n % 10;
        n /= 10;
    }


    for(int n = 0; n != i; ++n)
    {
        for(int c = n; c != i; ++c)
        {
            if(res[n] == res[c] && c != n)
            {
                free(res);
                return 1;
            }
        }
    }
free(res);
return 0;
}
