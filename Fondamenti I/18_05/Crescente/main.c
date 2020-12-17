#include <stdbool.h>

extern bool crescente (unsigned int x);

int main(void)
{
    unsigned int num;
    bool val;

    num = 56789;
        val = crescente(num);
    num = 5;
        val = crescente(num);
    num = 124;
        val = crescente(num);

    return 0;
}
