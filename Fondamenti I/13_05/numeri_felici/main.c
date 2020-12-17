#include <stdbool.h>
#include <stdio.h>

extern int felice(unsigned int num);
int main()
{
    for (int n = 0; n < 100; ++n)
    {
       bool ris = felice(n);
    if (ris)
        printf("%d e' FELICE\n", n);
    else
        printf("%d e' INFELICE\n", n);
    }



    return 0;
}
