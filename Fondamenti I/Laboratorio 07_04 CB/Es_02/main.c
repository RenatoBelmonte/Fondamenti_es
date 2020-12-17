#include <stdlib.h>

extern unsigned int contaspazi(const char* str);

int main(void)
{
	char s[] = "prova stringa in cui contare gli spazi";

	size_t spazi = contaspazi(s);

	return 0;
}
