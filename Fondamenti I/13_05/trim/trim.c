#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *trim (const char *s)
{
    if (s == NULL)
        return NULL;
    char *tmp = NULL;
    size_t n = strlen(s);
    int i = 0;

    for (n; s[n - 1] == ' '; --n){}         //fine
         if (n == 0)
         {
             tmp = "";
             return tmp;
         }
    for (i; s[i] == ' '; ++i){}             //inizio

    size_t t = n-i;                         //grandezza di tmp

    tmp = malloc(t * sizeof(char));
    tmp[t] = 0;                             //metto il terminatore

    for (t; t != 0; --t)                    //copio la stringa
    {
        tmp[t-1] = s[n-1];
        --n;
    }

    return tmp;
}
