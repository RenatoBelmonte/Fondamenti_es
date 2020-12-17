#include <stdio.h>

unsigned int Elab(char* stringa, char carattere);

int main()
{

	char str[] = "Hello world!";
	char c = 'l';

	unsigned int ret = Elab(str, c);

	printf("%s\n", str);
	printf("nella stringa ci sono %d l\n", ret);

	return 0;
}