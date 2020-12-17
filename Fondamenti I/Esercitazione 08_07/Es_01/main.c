#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

extern bool cifre_duplicate_oct(unsigned int n);
int main(void)
{
    unsigned int a = 12345670;
    bool res = cifre_duplicate_oct(a);

    return 0;
}
