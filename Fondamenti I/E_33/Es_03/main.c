#include "matrix.h"

int main(void)
{
    double d[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    struct matrix m = {3, 3, d};

    struct bmatrix *res = mat_boolean(&m, 10, GT);
    return 0;
}
