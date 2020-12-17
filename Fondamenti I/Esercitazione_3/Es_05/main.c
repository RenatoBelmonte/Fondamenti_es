#include <stdio.h>
#include <stdlib.h>

extern char *sottrai_stringhe(const char *a, const char *b);
int main(void)
{
    char a[] = "12345";
    char b[] = "4999";

    char *res = sottrai_stringhe(a, b);

    return 0;
}
