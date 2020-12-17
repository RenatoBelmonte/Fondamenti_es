#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
extern bool cifre_duplicate(unsigned long long n);

int main(void)
{
    int a = 123457890;
    bool res = cifre_duplicate(a);
    return 0;
}
