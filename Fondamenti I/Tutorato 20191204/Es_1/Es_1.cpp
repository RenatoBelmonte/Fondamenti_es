#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

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

int main()
{
	char c[] = "f" ;

	char C[] = { maiusc(c[0]) };

	return 0;
}