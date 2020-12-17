#include "rational.h"
int main(void)
{
    struct rational n1 = {3, 4};
    struct rational n2 = {1, 2};
    struct rational *sum = malloc(sizeof(struct rational));

    rational_sum(sum, &n1, &n2);

    return 0;
}
