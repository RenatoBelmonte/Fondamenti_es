#include "rectagnle.h"

bool rect_load(FILE *f, struct rect *r)
{
    struct point *p1 = &r->a;
    struct point *p2 = &r->b;

    int32_t *x1 = &p1->x;
    int32_t *y1 = &p1->y;
    int32_t *x2 = &p2->x;
    int32_t *y2 = &p2->y;



    int res = 0;

    res = fread(x1, sizeof(int32_t), 1, f);
        if(res != 1)
            return 0;
    res = fread(y1, sizeof(int32_t), 1, f);
        if(res != 1)
            return 0;
    res = fread(x2, sizeof(int32_t), 1, f);
        if(res != 1)
            return 0;
    res = fread(y2, sizeof(int32_t), 1, f);
        if(res != 1)
            return 0;

    return 1;
}
