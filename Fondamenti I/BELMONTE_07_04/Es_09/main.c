#include <stdlib.h>

extern size_t conta_parole(const char* s);

int main()
{
	char s[] = "  Questa è una  stringa lunga 45 caratteri. ";

	size_t c = conta_parole(s);

	return 0;
}
