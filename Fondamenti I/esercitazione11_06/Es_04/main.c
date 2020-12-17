
#include "shapes.h"

int main(void)
{
    FILE *f = fopen("rect1.bin", "rb");
    struct rect *r1 = malloc(sizeof(struct rect));

    bool res = rect_load(f, r1);
    return 0;
}
