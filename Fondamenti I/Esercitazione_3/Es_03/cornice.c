#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void spazi(w)
{
    for(int i = 0; i <= 4*(w-1); ++i)
    printf(" ");
}

void cornice(uint8_t h, uint8_t w)
{
    for(int i = 0; i < w-1; ++i)
        printf("/-\\|");
    printf("/-\\\n");

    for(int i = 0; i < h-1; ++i)
    {
        printf("|"); spazi(w); printf("|\n");
        printf("\\"); spazi(w); printf("/\n");
        printf("-"); spazi(w); printf("-\n");
        printf("/"); spazi(w); printf("\\\n");
    }
    printf("|"); spazi(w); printf("|\n");

    for(int i = 0; i < w-1; ++i)
        printf("\\-/|");
    printf("\\-/\n");
}
