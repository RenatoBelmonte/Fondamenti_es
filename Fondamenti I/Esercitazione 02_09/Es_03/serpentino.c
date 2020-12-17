#include <stdlib.h>
#include <string.h>

size_t conta(const char *s, const char ch)
{
    size_t res = 0;
    for(int i = 0; s[i] != 0;++i)
    {
        if(s[i] == ch)
            ++res;
    }
    return res;
}
char *serpentino_encode(const char *s)
{
    if(s == NULL)
        return NULL;

    size_t a = conta(s, 'a');
    size_t e = conta(s, 'e');
    size_t I = conta(s, 'i');
    size_t o = conta(s, 'o');
    size_t u = conta(s, 'u');

    size_t l = strlen(s), n = (l+(a+e+I+o+u)*2)+1;
    char *res = malloc(n*sizeof(char));

    int c = 0;
    for(int i = 0; i < l; ++i)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||s[i] == 'u')
        {
            res[c] = s[i];
            ++c;
            res[c] = 's';
            ++c;
            res[c] = s[i];
        }
        else
            res[c] = s[i];
        ++c;
    }
res[c] = 0;
return res;
}
