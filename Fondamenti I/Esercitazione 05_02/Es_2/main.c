#include <stdio.h>
#include <stdlib.h>

extern char *codifica_morse(const char *testo);

int main(void)
{
    char str[] = "LO DO A SETTEMBRE";

    char *m_str = codifica_morse(str);
    printf("%s\n|\n|\n|\nV\nDIVENTA\n|\n|\n|\nV\n%s\n", str, m_str);

    free(m_str);
    return 0;
}
