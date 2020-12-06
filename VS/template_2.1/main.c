#include <stdio.h>
#include <stdlib.h>

void Minuscolo(unsigned char* str);

void stampa(unsigned char* arr)
{
	for (int i = 0; arr[i] != 0; ++i)
	{
		putc(arr[i], stdout);
	}
	putc('\n', stdout);
}

int main()
{
	unsigned char str[] = "CIAO EL SONO REN!";

	stampa(str);

	Minuscolo(str);

	stampa(str);
	
	return 0;
}