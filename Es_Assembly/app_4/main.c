#include <stdio.h>

int SommaScostamenti (int * voti, int N, int Th);

void main()
{

   int voti[] = {22, 25, 18, 30};
   int ris;

   ris=SommaScostamenti(voti, 4, 20);
   printf("valore ottenuto: %d\n valore atteso: 17\n", ris);

	 
}