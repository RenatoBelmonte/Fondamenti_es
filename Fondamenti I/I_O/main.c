#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("prova.txt","r");
        if (f == EOF)
            return NULL;

    char str[8];
    char *ret;

    ret = fgets(str, sizeof (str),f);
    ret = fgets(str, sizeof (str),f);
    ret = fgets(str, sizeof (str),f);


    fclose(f);
    return 0;
}
