#include "list_int.h"
#include <stdlib.h>

typedef struct item {
	int voto;
	struct item* next;
} nodo;

int main(int argc, char* argv[])
{
	Item* list = CreateEmptyList();

	for (int i = 1; i <= 10; ++i)
	{
		int v1 = atoi(argv[i]);
		for (int j = i+1; j <= 10; ++j)
		{
			int v2 = atoi(argv[j]);
			if (v1 < v2)
			{
				v1 = v2;
				int tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
		}
		ElemType e = atoi(argv[i]);
		list = InsertHeadList(&e, list);
	}
	WriteStdoutList(list);
	printf("\n");


	int v;
#pragma warning( disable:4996)
	scanf("%i", &v);


	while (!IsEmptyList(list))
	{
		int* tmp = GetHeadValueList(list);
		if (*tmp > v)
			printf("%d; ", *tmp);
		list = GetTailList(list);
	}
	printf("\n");
}