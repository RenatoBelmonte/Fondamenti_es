#include "include guard.h"

int main(void)
{
    char str[] = "ciao";
    size_t n = 10;

    char *res = zfill(str, n);
    return 0;
}
