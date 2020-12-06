#include <stdio.h>
int funzione(int a, int b, int c, int d);

void main()
{
	int a, b, c, d, ris;

	a = 2; b = 7; c = -3; d = -5;
	ris = funzione(a, b, c, d);
	printf("%d", ris);
}