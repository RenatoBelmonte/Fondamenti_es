#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("inserire t. in °C \n");
	double zeroAss = -273.15;
	int C ;
	scanf("%d \n", &C);
	double F = C * 9 / 5 + 32;
	printf("F \n");
	double K = C - zeroAss;
	printf("K \n");
	return 0;
}
