int CopiaVettMinoriDiT(int* vettore1, int* vettore2, int N, int T);

#define N 5
#include <stdlib.h>

int main()
{
	int arr1[N] = { 5, 12, 14, 1, 0 };
	int arr2[N];
	int T = 6;

	size_t res = CopiaVettMinoriDiT(arr1, arr2, N, T);

	return 0;
}