#include <stdio.h>

void converti(unsigned char* str);


void main() {

	unsigned char str[] = "CIAO o";

	converti(str);

	printf("%s\n", str);
	printf("Main file ended.\n");

}