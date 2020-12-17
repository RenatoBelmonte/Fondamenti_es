#include "stringhe.h"

int main(void)
{
    char s[] = "ciao questa e' piu' lunga";
    size_t n = 10;
    char *res = spacefill(s, n);
    return 0;
}
