#include <stdlib.h>

char* converti(unsigned int n)
{
	unsigned int i = 1, d = 1, c;

	for (i; (n / d) > 10 ;++i)//numero di cifre
	{d *= 10;}

	char* ris = malloc(i * sizeof(char));

	for (int a = 0; a != i ; ++a)
	{
        c = n / d;
        n -= c *d;
        d /= 10;

        ris[a] = 48+c;
	}

    return ris;
}
