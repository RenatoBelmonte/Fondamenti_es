#include <stdio.h>
#include <stdlib.h>

extern char *parola_piu_lunga(const char *sz);
int main(void)
{
    char str[] = "Ciao questa e' una prova.";

    char *res = parola_piu_lunga(str);
    return 0;
}
