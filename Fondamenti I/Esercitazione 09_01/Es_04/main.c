#include "matrix.h"
int main(void)
{
    double d[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    struct matrix m = {3, 3, d};

    struct matrix *res = mat_delete_row(&m, 2);

    return 0;
}
