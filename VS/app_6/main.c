#include <stdio.h>
void  ScambiaVettori (int * vettore1, int * vettore2, int N);

void stampa (int * vettore, int N){
	int i;
	for (i=0; i<N; i++)
		printf("%d\t", vettore[i]);
	printf("\n");
}

void main() {
   int vet1[] = {1, 24, -7};
	 int vet2[] = {4, 23, 12};
	 int N= sizeof(vet1)/sizeof(int);

	 printf("vettore 1 =");
	 stampa(vet1,N);
	 
	 printf("vettore 2 =");
	 stampa(vet2,N);
	 
	 ScambiaVettori(vet1, vet2, N);
	 
	 printf("vettore 1 =");
	 stampa(vet1,N);
	 
	 printf("vettore 2 =");
	 stampa(vet2,N);
	 

}