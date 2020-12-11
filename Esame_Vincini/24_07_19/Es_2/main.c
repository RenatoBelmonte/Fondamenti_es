#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define K 6
#define N 4

struct Persona {
	char nome[20];
	int qualifica;
};

void bck(struct Persona* arr1, int* arr2, bool* vcurr, int i, int n) /* n = numero di persone */
{
	if (i == n)
	{
		int tmp = -1;
		for (int j = 0; j < K; ++j)
		{
			for (int k = 0; k < N; ++k)
			{
				if (arr2[j] == (arr1[k].qualifica * vcurr[k]))
					tmp = 1;
			}
			if (tmp == -1)
				return;
		}

		for (int j = 0; j < N; ++j)
		{
			char* s = arr1[vcurr[j]].nome;
			printf("%s ", s);
		}
		printf("\n");
	}


	vcurr[i] = 0;
	bck(arr1, arr2, vcurr, i + 1, n);
	vcurr[i] = 1;
	bck(arr1, arr2, vcurr, i + 1, n);
}

void trova_p(struct Persona* arr1, int* arr2)
{
	bool* vcurr = malloc(K * sizeof(bool));
	if (vcurr)
	{
		int i = 0, n = N;

		bck(arr1, arr2, vcurr, i , n);
	}
}

int main()
{
	int arr_q[K] = { 2, 1, 1, 2, 2, 1 };

	struct Persona p1 = { "Pippo", 1 };
	struct Persona p2 = { "Gianni", 1 };
	struct Persona p3 = { "Franco", 2 };
	struct Persona p4 = { "Peppe", 1 };

	struct Persona arr_p[N] = { p1, p2, p3, p4 };

	trova_p(arr_p, arr_q);

	return 0;
}