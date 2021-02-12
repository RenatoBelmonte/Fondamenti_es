#define _CRT_SECURE_NO_WARNINGS
#include "list_int.h"

Item* ordina(Item* list, int* e)
{
	if (IsEmptyList(list))
	{
		list = InsertBackList(list, e);
		return list;
	}
	if (*(GetHeadValueList(list)) > *e)
	{
		list = InsertHeadList(e, list);
		return list;
	}
	
	list->next = ordina(GetTailList(list), e);
	return list;
}

void stampa(Item* list, int min)
{
	printf("[");
	while (!IsEmptyList(list))
	{
		if (list->value > min)
		{
			printf("%d", list->value);
			if (!IsEmptyList(GetTailList(list)))
				printf(", ");
		}
			
		list = GetTailList(list);
	}
	printf("]\n");
	return;
}

int main()
{
	Item* list = CreateEmptyList();
	int n = 10;

	for (int i = 0; i < n; ++i)
	{
		int tmp;
		printf("Inserire il voto %d: ", i+1);
		int ret = scanf("%d", &tmp);
		if (!ret)
			return -1;
		list = ordina(list, &tmp);
	}
	printf("\n");

	WriteStdoutList(list);
	printf("\n");

	int min;
	printf("Saranno stampati i voti piu alti di ");
	int ret = scanf("%d", &min);
	if (!ret)
		return -1;
	
	stampa(list, min);
	printf("\n");

	return 0;
}