#include <stdlib.h>
#include <stdint.h>

char* concatena(const char* prima, const char* seconda)
{
	int c1 = 0, c2 = 0;

	for (c1; prima[c1] != 0; ++c1);
	for (c2; seconda[c2] != 0; ++c2);
	
	size_t c = c1 + c2;

	char* ris;
	ris = (char*) malloc(c * sizeof(char));

	int i = 0;
	for (i; i < c1; ++i)
	{
		ris[i] = prima[i];
	}

	for (int p = 0; p <= c2; ++p)
	{
		ris[i] = seconda[p];
		++i;
	}
	 
	return ris;
}