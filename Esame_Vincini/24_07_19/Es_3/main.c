#include "list_int.h"
#include <stdio.h>

#define N 5

Item* costruisci(int* arr, int n)
{
	Item* l = CreateEmptyList();

	for (int i = n - 1; i >= 0; --i)
	{
		ElemType e = arr[i];
		l = InsertHeadList(&e, l);
	}

	return l;
}

Item* del_nodi(Item* l)
{
	while (!IsEmptyList(l))
	{
		ElemType* e = GetHeadValueList(l);
		ElemType* f = e[1];
		if (!f)
			break;
		ElemType* g = f[1];
		if (!g)
			break;

		if (*e == *f + *g)
		{
			l->value = *f;
			l->next = f[1];
		}
		l = GetTailList(l);
	}
	return l;
}

int main()
{
	int arr[N] = { 4, 1, 3, 2, 1 };
	Item* list = costruisci(arr, N);
	WriteStdoutList(list);
	printf("\n");

	list = del_nodi(list);
	WriteStdoutList(list);

	return 0;
}