#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool inverti_case(const char *nomefilein, const char *nomefileout)
{
    FILE *f = fopen(nomefilein, "r");
        if(f == NULL)
            return 0;
    FILE *g = fopen(nomefileout, "w");
        if(f == NULL)
            return 0;

    while(1)
    {
        char tmp;
        tmp = fgetc(f);
            if(tmp == EOF)
                fclose(f);
                fclose(g);
                return 1;
            else if(isupper(tmp))
                tmp = tolower(tmp);
            else tmp = toupper(tmp);
        fputc(tmp, g);
    }
}
