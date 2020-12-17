#include "matrix.h"

int main()
{
    double d[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    struct matrix a = {3, 3, d};

    struct matrix *b = mat_reset_cross(&a, 0, 1);

    return 0;
}
