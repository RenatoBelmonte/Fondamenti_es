#include <string.h>
#include <stdlib.h>

char *sottrai_stringhe(const char *a, const char *b)
{
    if(a == NULL || b == NULL)
        return NULL;

    int c = atoi(a);
    int d = atoi(b);

    int ris = c - d;
    if( ris == 0)
    {
        char res[] = "0";
    }

    int n = 0;
    for(int tmp = ris; tmp != 0; tmp/=10)
        {++n;}

    char *res = malloc(n*sizeof(char));

    int i;
    for(int i = n-1; ris != 0; --i)
    {
        res[i] = 48+ris%10;
        ris /= 10;
    }
    res[n] = 0;
return res;
}
