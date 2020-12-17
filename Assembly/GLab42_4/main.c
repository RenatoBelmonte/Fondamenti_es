#include "matrix.h"

void stampa_m(struct matrix mat)
{
	int rows = mat.rows;
	int cols = mat.cols;
	int* data = mat.data;

	
	for (int r = 0; r < rows; ++r)
	{
		printf("|");
		for (int c = 0; c < cols; ++c)
		{
			int tmp = data[r * rows + c];
			printf("%i ", tmp);
		}
		printf("|\n");

	}
	return;
}

int main()
{
	int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	struct matrix m = { 3, 3, data };
	int ir = 0;
	int ic = 1;

	stampa_m(m);
	printf("\n\n");
	mat_reset_cross(&m, ir, ic);

	stampa_m(m);

	return 0;
}

