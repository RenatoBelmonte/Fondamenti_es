#include <stdio.h>
#include <stdlib.h>

extern int *rimuovi_multipli(const int *v, size_t size, size_t *newsize);
int main(void)
{
    size_t n;
    int a[] = {2, 3, 4, 5, 6};
    int *res = rimuovi_multipli(a, 5, &n);
    return 0;
}
