#include <stdio.h>

int conta_a(unsigned char* str);


int main()
{
	unsigned char str[] = "Hello_world!1!";
	printf("%s\n", str);

	int ret = conta_a(str);

	printf("I caratteri alfanumerici sono %d\n", ret);

	return 0;
}
