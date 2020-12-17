#include <stdio.h>
#define N 5

extern int massimo(int* arr,int n);
int main()
{
	int vett[] = { 1, 21, 55, 10, 3 };

	int max = massimo(vett, N);
	
	printf("il massimo e' %d", max);

	return 0;
}