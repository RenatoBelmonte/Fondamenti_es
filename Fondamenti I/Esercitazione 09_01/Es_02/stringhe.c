#include "stringhe.h"
void *elimina_consecutivi(char *str)
{
    if(str != NULL)
    {
        for(int i = 0; str[i] != 0; ++i)
        {
            int c = i+1;
            while(str[c] == str[i])
                ++c;

            if(c > 1)
            {
                for(int n = i+1; str[n] != 0; ++c)
                {
                    char tmp = str[c];
                    str[n] = tmp;
                    ++n;
                }
            }
        }
    }
return NULL;
}
