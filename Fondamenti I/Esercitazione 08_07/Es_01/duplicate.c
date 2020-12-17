#include <stdbool.h>
#include <stdlib.h>

bool cifre_duplicate_oct(unsigned int n)
{
    char *sto = malloc(32 * sizeof(char));

    int i = 0;
    for(i; n != 0 ; ++i)
    {
        sto[i] = n % 10;
        n /= 10;
    }

    size_t count = 0;
    for(int n = 0; n != 8; ++n)
    {
        for(int c = 0; c != i; ++c)
        {
            if(sto[c] == n)
            ++count;
        }
        if(count > 1)
        {
            free(sto);
            return 1;
        }
        else count = 0;
    }
free(sto);
return 0;
}
