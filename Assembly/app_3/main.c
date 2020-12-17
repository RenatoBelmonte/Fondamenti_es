#include <stdio.h>

unsigned int CheckParentesi(unsigned char* stringa);

void main() {

   unsigned char *stringa;
	 unsigned char ris;
	 
	 stringa="(23+5)=";
	 ris=CheckParentesi(stringa);
	 printf("Stringa:\"%s\", Valore ottenuto: %d\n\n",stringa,ris);

	 stringa="(23(5";
	 ris=CheckParentesi(stringa);
	 printf("Stringa:\"%s\", Valore ottenuto: %d\n\n",stringa,ris);
	
}