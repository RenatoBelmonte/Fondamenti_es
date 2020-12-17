#include "rle.h"

bool easy_rle_decode(const char *nomefilein, const char *nomefileout)
{
    FILE *f = fopen(nomefilein, "rb");
        if(f == NULL)
            return 0;
    FILE *g = fopen(nomefileout, "wb");
        if(g == NULL)
            return 0;

    while(1)
    {
        size_t n = fgetc(f);
            if(n == EOF)
                break;
        char c = fgetc(f);
            if(c == EOF)
                break;

        for(int i = 0; i < n+1; ++i)
        {
            int res = fputc(c, g);
                if(res == EOF)
                break;
        }
    }
    fclose(f);
    fclose(g);
    return 1;
}
