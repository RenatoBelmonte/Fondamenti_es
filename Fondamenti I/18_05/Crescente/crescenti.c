#include <stdbool.h>
#define uint unsigned int

bool crescente(uint x)
{
    if (x < 10)
        return 1;

    while (x != 0)
    {
        uint ms = x % 10;
        x /= 10;
        uint ps = x % 10;

        if (ps == 0)
            return 1;

        if (ms != ps + 1)
            return 0;
    }
}
