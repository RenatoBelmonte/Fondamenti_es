#include <stdlib.h>

extern char *serpentino_encode(const char *s);
int main()
{
    char s[] = "ciao";
    char *res = serpentino_encode(s);

    return 0;
}
