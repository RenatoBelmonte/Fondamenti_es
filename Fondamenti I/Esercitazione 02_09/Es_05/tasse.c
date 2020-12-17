#include <stdlib.h>
unsigned int irpef(unsigned int stipendio, unsigned int *scaglioni,
                    unsigned int *aliquote, size_t n)
    {
        unsigned int res = 0;
        for(int i = 0; stipendio > 0;++i)
        {
            if(stipendio > scaglioni[i+1] && i != n-1)
            {
                res += (scaglioni[i+1] - scaglioni[i]) * aliquote[i] / 100;
            }
            else
            {
                stipendio -= scaglioni[i];
                res += stipendio * aliquote[i] / 100;
                break;
            }
        }
    return res;
}
