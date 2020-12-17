#include "matrix.h"
int main(void)
{
    double d[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    struct matrix m = {3, 5, d};

    struct matrix *res = mat_rendiquadrata(&m);

    return 0;
}
