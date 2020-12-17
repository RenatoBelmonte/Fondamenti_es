#include <stdlib.h>

char* converti(unsigned int n)
{
	unsigned int b = n, i = 0, d = 1, c = 1;

	char* ris = (char*)malloc(b * sizeof(char));
	
	for (i; b>10 ;++i)
	{
		b /= 10;
		d *= 10;
	}   
	//numero di cifre

	*ris = n / d;
	for (c; c != b;)
	{
		if (n > d)
			n -= d;
		else
		{
			d /= 10;
			ris[c] = n / d;
			++c;
		}
		
	}

	return ris;
}