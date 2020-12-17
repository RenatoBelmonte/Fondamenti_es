#include <stdio.h>

int miomassimo(int v1, int v2, int v3);

int main()
{
	int a = 100, b = 10, c = -5;

	int ret = miomassimo(a, b, c);
	
	printf("massimo = %d\n", ret);

	return 0;
}