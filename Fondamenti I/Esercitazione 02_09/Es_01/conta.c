#include <stdio.h>
#include <stdlib.h>
unsigned int contanumeri(const char *nomefile)
{
    FILE *f = fopen(nomefile, "r");
        if(f == NULL)
            return EOF;
    int ret = 0, count = 0;
    while(ret != EOF)
        {
            ret = fgetc(f);
            if(ret >= 48 && ret <= 57)
                ++count;
        }

    fclose(f);
    return count;
}
