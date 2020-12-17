#include "stringhe.h"
char *zfill(const char *str, size_t n)
{
    if(str == NULL)
        return NULL;
    size_t m = strlen(str);
    if(m > n)
        n = m;
    char *res = malloc((n+1) * sizeof(char));
    int c = 0, i = 0;
    for(i; i != n; ++i)
    {
        if(i < n-m)
        {
            res[i] = '0';
        }
        else
        {
            res[i] = str[c];
            ++c;
        }
    }
    res[i] = 0;
    return res;
}
