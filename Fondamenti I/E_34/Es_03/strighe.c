#include <stdlib.h>
char *parola_piu_lunga(const char *sz)
{
    if( sz == NULL )
        return NULL;

    int max = 0, pos;
    for(int i = 0; sz[i] != 0; ++i)
    {
        if(sz[i] > 32)
        {
            int count = 1;
            while(1)
            {
                ++i;
                if(sz[i] < 32)
                    break;
                ++count;
            }
            if(sz[i] == 0)
                break;
            if(count > max)
            {
                max = count;
                pos = i - count;
            }
        }
        if(sz[i] == 0)
            break;
    }
    char *res = malloc((max+1) * sizeof(char));

    for(int i = 0; i < max; ++i)
    {
        res[i] = sz[pos];
        ++pos;
    }
    res[max] = 0;
return res;
}
