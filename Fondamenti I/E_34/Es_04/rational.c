#include "rational.h"
void rational_sum(struct rational *sum, const struct rational *first, const struct rational *second)
{
    sum->num = first->num*second->den + second->num*first->den;
    sum->den = first->den*second->den;

    int M, m, tmp;
    if(sum->num < 0)
         M = -sum->num;
    else  M = -sum->num;

    if(sum->den < 0)
         m = -sum->den;
    else  m = -sum->den;

    while(m != 0)
    {
        if(M < m)
        {
            tmp = m;
            m = M;
            M = tmp;
        }

        tmp = m;
        m = M%m;
        M = tmp;

    }

    sum->num /= M;
    sum->den /= M;
}
