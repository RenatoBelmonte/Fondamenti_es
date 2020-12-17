#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char *trim(const char *s);
int main()
{
    char *s1 = "senza spazi";
    char *s2 = " prima";
    char *s3 = "dopo ";
    char *s4 = " a b ";
    char *s5 = "                 ";

    s1 = trim(s1);
    s2 = trim(s2);
    s3 = trim(s3);
    s4 = trim(s4);
    s5 = trim(s5);


    return 0;
}
