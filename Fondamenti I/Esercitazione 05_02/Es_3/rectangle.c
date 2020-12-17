#include "rectangle.h"
#include <math.h>

int find_largest(const struct rect *r, size_t n)
{
    if(r == NULL || n == 0)
        return -1;

    int m_area = 0, c = 0;

    for(int i = 0; i < n;  ++i)
    {
        struct rect R = r[i];
        struct point p1 = R.a;
        struct point p2 = R.b;

        int base = abs(p1.x - p2.x);
        int altezza = abs(p1.y - p2.y);

        int area = base * altezza;

        if (area > m_area)
        {
            m_area = area;
            ++c;
        }
    }
    return c;
}
