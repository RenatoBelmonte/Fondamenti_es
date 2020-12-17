#include <string.h>
#include <stdlib.h>
#include <math.h>

int prodotto(const int *p, size_t m)
{
    if(m == 0 || p == NULL)
        return -1;
    size_t s = (m-1)*(m)/2;

    int count = 0;
    for(int i = 0; i < s; ++i)
    {
        for(int c = i+1; c < m; ++c)
        {
            for(int d = c+1; d <= m; ++d)
            {
                if(p[i] == (p[c] * p[d]))
                    ++count;
            }
        }
    }

    return count;
}



int main(void)
{
    size_t n = 5;
    const int v[5] = {2,-3, -6, 7, 14};
    int ris = prodotto(v,n);
    return 0;
}
