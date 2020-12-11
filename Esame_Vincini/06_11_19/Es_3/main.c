#include "list_int.h"
#define N 5

Item* ordina(Item* l)
{
	Item* ris = CreateEmptyList();

	while (!IsEmptyList(l))
	{
		ElemType* e = GetHeadValueList(l);
		Item* tmp = GetTailList(l);

		while (!IsEmptyList(tmp))
		{
			ElemType* t = GetHeadValueList(tmp);
			if (*t > *e)
			{
				ElemType z = *e;
				*e = *t;
				*t = z;
				
			}
			tmp = GetTailList(tmp);
		}

		ris = InsertHeadList(e, ris); 
		l = GetTailList(l);
	}

	return ris;
}

void cerca_coppia(Item* l, int v)
{
	while (!IsEmptyList(l))
	{
		ElemType* e = GetHeadValueList(l);
		Item* tmp = GetTailList(l);

		while (!IsEmptyList(tmp))
		{
			ElemType* t = GetHeadValueList(tmp);
			int p = *t * *e;
			if (p == v)
			{
				printf("%d;%d  ", *t, *e);
			}
			tmp = GetTailList(tmp);
		}
		l = GetTailList(l);
	}
	printf("\n");
}

int main(int argc, char* argv[])
{
	int* arr = malloc (N * sizeof(int));
	if (arr)
	{
		Item* list = CreateEmptyList();
		for (int i = 0; i < N; ++i)
		{
			arr[i] = atoi(argv[i+1]);
			ElemType const tmp = arr[i];
			list = InsertHeadList(&tmp, list);
		}
		list = ordina(list);
		WriteStdoutList(list);

		int val = 0;
#pragma warning(suppress : 4996)
		int ret = scanf("%d", &val);
		if (ret != 1)
			return 0;
		cerca_coppia(list, val);
	}
	

	return 0;
}