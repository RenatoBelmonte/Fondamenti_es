#include "rectangle.h"
#define n 3

int main()
{
    struct point p1 = {0, 1};
    struct point p2 = {4, -1};

    struct point p3 = {3, 5};
    struct point p4 = {-3, 10};

    struct point q1 = {0, 1};
    struct point q2 = {4, -1};

    struct rect r1 = {p1, p2};
    struct rect r2 = {p3, p4};
    struct rect r3 = {q1, q2};

    struct rect R[n] = {r1, r2, r3};

    int lar = find_largest(R, n);
    return 0;
}
