#include <stdint.h>
#include <stdlib.h>

int roll_and_keep(const int *r, size_t x, size_t y)
{
    if(r == NULL || x==0 || y==0 || y>x)
        return 0;
    int s = 0, count = 0;

    for(int i = 10; i != 0; --i)
    {
        for(int c = 0; c < x; ++c)
        {
            if(r[c] == i)
                {
                    ++count;
                    s += r[c];
                    if(count == y)
                        return s;
                 }
        }
    }
}
