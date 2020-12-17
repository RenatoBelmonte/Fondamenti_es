#include "matrix.h"
int main(void)
{
    double d[] = {1, 2, 3, 4, 5, 6};
    struct matrix m = {2, 3, d};

    struct matrix *res = mirror_mat(&m);

    return 0;
}
