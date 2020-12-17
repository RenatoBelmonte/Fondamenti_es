#include "stringhe.h"

char *title(const char *str)
{
    char *res = malloc(strlen(str));
    int i = 0;
    for(i; str[i] != 0; ++i)
    {
        if(i == 0 && str[i] > 32)
            res[i] = toupper(str[i]);
        else if (i != 0 && str[i-1] <= 32)
        {
            if(str[i+1] > 32)
                res[i] = toupper(str[i]);
            else res[i] = str[i];
        }
        else res[i] = str[i];
    }
    res[i] = 0;
return res;
}
