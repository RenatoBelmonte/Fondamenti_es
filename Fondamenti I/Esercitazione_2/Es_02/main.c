#include <stdio.h>
#include <stdlib.h>

extern int roll_and_keep(const int *r, size_t x, size_t y);
int main(void)
{
    int r[30] = { 10, 2, 8, 4, 1, 1, 6, 8, 3, 7, 3, 9, 7, 4, 8, 5, 1, 3, 5, 3, 8, 4, 8, 9, 4, 2, 6, 3, 7, 10 };
    size_t x = 30;
    size_t y = 10;

    int res = roll_and_keep(r, x, y);

    return 0;
}
