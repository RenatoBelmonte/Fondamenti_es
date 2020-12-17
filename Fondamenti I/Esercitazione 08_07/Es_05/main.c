#include "matrix.h"
int main(void)
{
    double d[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    struct matrix m = {3, 3, d};
    size_t ptr[] = {2, 1, 0};

    struct matrix *res = mat_permute_rows(&m, ptr);

    return 0;
}
