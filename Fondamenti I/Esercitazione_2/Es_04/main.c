#include "matrix.h"

int main(void)
{
    double data[] = {1, 2, 3, 4, 5, 6};
    struct matrix m = {2, 3, data};

    struct matrix *res = mat_replicate(&m);

    return 0;
}
