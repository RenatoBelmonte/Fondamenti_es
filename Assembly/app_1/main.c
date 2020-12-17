#include <stdio.h>
int lunghezzaMassima(unsigned char str1[], unsigned char str2[]);

void main() {
	unsigned char str1[] = "Hi";
	unsigned char str2[] = "World";
	int ris;

	ris = lunghezzaMassima(str1, str2);

	printf("Lunghezza massima calcolata delle due stringhe: %d \n", ris);
	printf("Risultato atteso: 5");

	getch();

}