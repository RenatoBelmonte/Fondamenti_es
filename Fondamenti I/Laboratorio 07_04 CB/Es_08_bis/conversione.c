#include <stdlib.h>
#include <stdio.h>

char* converti(unsigned int n)
{
	unsigned int i = 1, d = 1;

	for (i; (n / d) > 10 ;++i)//numero di cifre
	{d *= 10;}

	char* ris = malloc(i * sizeof(char));

	sprintf(ris, "%i", n);

    return ris;
}
