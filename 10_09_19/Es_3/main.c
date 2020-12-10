#include <stdio.h>
#include <stdint.h>
#include "list_int.h"

#define N 5

Item* costruisci(int* arr, int n)
{
	Item* l = CreateEmptyList();

	for (int i = n-1; i >= 0; --i)
	{
		ElemType e = arr[i];
		l = InsertHeadList(&e, l);
	}

	return l;
}

void trova_m(Item* l)
{
	int max = INT32_MIN;
	int min = INT32_MAX;
	while (!IsEmptyList(l))
	{
		ElemType* tmp = GetHeadValueList(l);

		if (*tmp < min)
			min = *tmp;
		if (*tmp > max)
			max = *tmp;

		l = GetTailList(l);
	}
	printf("Il minimo e' %d\n", min);
	printf("Il massimo e' %d\n", max);
}

int main()
{
	int arr[5] = { 1, 10, 5, 40, 100 };
	Item* list = costruisci(arr, N);
	WriteStdoutList(list);

	trova_m(list);


	return 0;
}