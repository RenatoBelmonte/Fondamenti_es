#define A 20 //alunni
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct alunno {
	char nome[20];
	double media;
};

double calcola_media(struct alunno *arr)
{
	double s = 0;
	for (int i = 0; i < 20; ++i)
	{
		struct alunno tmp = arr[i];
		s += tmp.media;
	}
	return s/20;
}


void bck(bool* vcurr, int i, int* sol, struct alunno* arr, double media)
{
	if (i == A)
	{
		int j = 0;
		double somma = 0;
		for (int k = 0; k < A; ++k)
		{
			struct alunno* tmp = &arr[k];
			if (vcurr[k])
			{
				++j;
				if (j > 4)
					return;

				somma += tmp->media / 4;
			}

		}
		if (j != 4)
			return;
		if (somma < media)
			return;

		printf("%d)", *sol);
		++*sol;
		for (int k = 0; k < A; ++k)
		{
			printf("%d", vcurr[k]);
		}
		printf("\n");
		return;
	}

	vcurr[i] = 0;
	bck(vcurr, i + 1, sol, arr, media);

	vcurr[i] = 1;
	bck(vcurr, i + 1, sol, arr, media);
}


void torva_gruppi(struct alunno* arr, double media)
{
	bool* vcurr = malloc(A * sizeof(bool));
	int i = 0, sol = 1;

	if (vcurr)
	{
		bck(vcurr, i, &sol, arr, media);
	}

}

int main()
{
	struct alunno a = { "a", 6 }; struct alunno f = { "f", 10 }; struct alunno l = { "l", 8 }; struct alunno p = { "p", 7 }; struct alunno t = { "t", 6 };
	struct alunno b = { "b", 7 }; struct alunno g = { "g", 5 }; struct alunno m = { "m", 7 }; struct alunno q = { "q", 9 }; struct alunno u = { "u", 6 };
	struct alunno c = { "c", 9 }; struct alunno h = { "h", 6 }; struct alunno n = { "n", 7 }; struct alunno r = { "r", 8 }; struct alunno v = { "v", 8};
	struct alunno d = { "d", 4 }; struct alunno i = { "i", 8 }; struct alunno o = { "o", 4 }; struct alunno s = { "s", 6 }; struct alunno z = { "z", 6 };

	struct alunno ptr[] = { a, b, c, d, f, g, h, i, l, m, n, o, p, q, r, s, t, u, v, z };

	double media = calcola_media(ptr);
	torva_gruppi(ptr, media);

	return 0;
}


