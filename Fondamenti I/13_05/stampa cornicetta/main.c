#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void stampa_cornicetta (const char *s);

int main()
{
    char *str[1024];
    scanf("%[]", str);
    stampa_cornicetta (str);

    return 0;
}
