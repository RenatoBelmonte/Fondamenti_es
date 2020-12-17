#include <stdlib.h>
#include <stdio.h>

extern size_t conta_parole(const char* s);

int main()
{
	char s[1024];
	scanf("%[]", s);
	size_t c = conta_parole(s);
	printf("%i", c);

	return 0;
}
