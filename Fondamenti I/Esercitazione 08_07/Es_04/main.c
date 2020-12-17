#include "shapes.h"

int main(void)
{
    FILE *f = fopen("line1.bin", "rb");
    struct line res;

    bool ris = line_load(f,&res);
    return 0;
}
