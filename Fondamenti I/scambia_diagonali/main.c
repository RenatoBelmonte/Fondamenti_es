#include "matrix.h"

int main()
{
    double d[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12, 13, 14, 15};
    double *e = {NULL};
    struct matrix m = {4, 4, e};

    struct matrix *n = scambia_diagonali(&m);

    return 0;
}
