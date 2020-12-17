#include "fire_sym.h"
int main(void)
{
    char c[] =
    "..........................................FFFFF.....................................................";

    struct forest f1 = {10, 10, c};
    propagate_fire(&f1);
    return 0;
}
