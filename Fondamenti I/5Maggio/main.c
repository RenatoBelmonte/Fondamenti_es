#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    FILE *f = fopen("prova.txt","r");
    if (f == NULL)
        return EOF;

    size_t n = 0;
    int x;

    while (true)
    {
        if ((fscanf(f, "%i", &x) == 1)
            ++n;
    }

    int *numeri = malloc(n*sizeof(int));

    rewind(f);

    return 0;
}
