#include "tirocini.h"

int main()
{
    FILE *f = fopen("prova.txt", "r");
        if(f == NULL)
            return EOF;
    struct tirocinio *s1 = malloc(sizeof(struct tirocinio));

    bool res = tirocinio_load(f, s1);

    return 0;
}
