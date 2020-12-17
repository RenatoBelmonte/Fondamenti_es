#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stampa_cornicetta (const char *s)
{
    size_t n = strlen(s) + 2;

    printf("/");   for(int i = 0; i < n; ++i){printf("-");}   printf("\\\n");

                        printf("| %s |\n", s);

    printf("\\");   for(int i = 0; i < n; ++i){printf("-");}   printf("/");
}
