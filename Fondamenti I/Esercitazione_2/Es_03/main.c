#include "rectagnle.h"

int main(void)
{
    FILE *f = fopen("file2.bin", "rb");
    struct point p1 = {0, 0};
    struct point p2 = {0, 0};

    struct rect r1 = {p1, p2};

    bool res = rect_load(f, &r1);
         res = rect_load(f, &r1);
         res = rect_load(f, &r1);
         res = rect_load(f, &r1);

    fclose(f);
    return 0;
}
