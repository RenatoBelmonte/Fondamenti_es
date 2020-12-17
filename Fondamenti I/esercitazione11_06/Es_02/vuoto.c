#include <stdbool.h>
#include <stdlib.h>

bool cifre_duplicate_hex(unsigned int n)
{
    char *sto = malloc(8 * sizeof(char));

    int i = 0;
    for(i; n != 0; ++i)
    {
        sto[i] = n%16;
        n /= 16;
    }
    --i;
    if(i == -1)
    {
        free(sto);
        return 0;
    }


    for(; i != 0; --i)
    {
        for(int c = 0; c < i; ++c)
        {
            if(sto[i] == sto[c] && i != c)
            {
               free(sto);
               return 1;
            }
        }
    }
    free(sto);
    return 0;
}
