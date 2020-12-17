#include <stdio.h>
#include <stdlib.h>

extern unsigned int contanumeri(const char *nomefile);
int main(void)
{
    char str[] = "file1.txt";

    int res = contanumeri(str);
    return 0;
}
