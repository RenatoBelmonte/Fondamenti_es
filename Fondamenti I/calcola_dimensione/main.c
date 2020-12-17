#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t n = 0; //n.di elementi
    size_t c = 0; //capacità
    int x = 0;
    int *numeri = NULL;

    for(n; scanf("%i",&x) == 1; ++n)
    {
        if (n == c)
        {
            c = c * 2 + 1;
           numeri = realloc(numeri, (c) * sizeof(int));
        }
        numeri[n]=x;
    }

    double media = 0.;
    for (int i = 0; i < n; ++i)
    {media += numeri[i];}
    media /= n;

    printf("Il file contiene i numeri\n");
    if (n > 0)
    {
        for (int i = 0; i < n-1; ++i)
        {
            printf("%i, ", numeri[i]);
        }
        printf("%i ", numeri[n-1]);
    }

    printf("\nLa media e' : %f", media);


    free(numeri);
    return 0;
}
