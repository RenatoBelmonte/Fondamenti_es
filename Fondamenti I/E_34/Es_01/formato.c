#include <stdbool.h>
#include <stdlib.h>
bool is_date(const char *s)
{
    if(s == NULL)
        return 0;

    for(int i = 0; i != 10; ++i)
    {
        if(s[i] == 0)
            return 0;

        if(i != 2 && i != 5)
        {
            if(s[i] < '0' || s[i] > '9')
                return 0;
        }

        else if(s[i] != '/')
                return 0;
    }
    return 1;
}
