#include <stdlib.h>

size_t conta_parole(const char* s)
{
	int c = 0;
	for (int i = 0; s[i] != 0; ++i)
	{
		if (s[i] == ' ' && s[i-1] != ' ' && i != 0)
			++c;
	}

	return c;
}
