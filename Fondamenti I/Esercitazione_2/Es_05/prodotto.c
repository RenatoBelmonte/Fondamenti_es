#include <stdlib.h>

int prodotto(const int *p, size_t m)
{
    if(m == 0 || p == NULL)
        return -1;

    int count = 0, n = 0;
    for(int i = 0; i < m; ++i)
    {
        n = 0;
        for(int c = 0; c < m; ++c)
        {
            if(n == 1)
                    break;
            for(int d = c+1; d < m; ++d)
            {
                if(p[i] == (p[c] * p[d]) && c != i && d != i)
                    {
                        ++count;
                        ++n;
                        break;
                    }

            }
        }
    }

    return count;
}
