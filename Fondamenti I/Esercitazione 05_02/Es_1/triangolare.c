#include <stdbool.h>

bool triangolare(int n)
{
    if(n <= 0)
        return 0;

    int b = 0;
    for(int i = 1; b < n; ++i)
    {
       b += i;
       if (b == n)
            return 1;
    }

    return 0;
}
