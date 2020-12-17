#include <stdio.h>

unsigned int* Lunghezza(unsigned char* str);

int main()
{
	unsigned char str[] = "Hello world!";

	printf("%s\n", str);

	unsigned int ret = Lunghezza(str);

	printf("La stringa e' lunga %d\n", ret);

	return 0;
}