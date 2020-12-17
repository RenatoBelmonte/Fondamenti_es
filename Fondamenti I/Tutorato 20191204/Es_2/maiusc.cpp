#include "maiusc.h"

char maiusc(char c)
{
	bool var = islower(c);

	if (var == 1)
	{
		char C;
		C = toupper(c);
		return C;
	}
	return c;
}