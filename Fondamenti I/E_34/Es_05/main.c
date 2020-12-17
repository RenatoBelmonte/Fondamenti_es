#include "matrix.h"
int main(void)
{
    FILE *f = fopen("prova.txt", "r");
    if(f == NULL)
        return EOF;
    struct matrix *m = malloc(sizeof(struct matrix));

    bool res = read_matrix(m, f);
    return 0;
}
