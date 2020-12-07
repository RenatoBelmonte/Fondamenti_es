#include "list_int.h"

Item* list_cons(int* arr, size_t n)
{
	Item* t = CreateEmptyList();

	for (size_t i = n-1; i > 0; --i)
	{
		const ElemType e = arr[i];
		t = InsertHeadList(&e, t);
	}

	return t;
}

bool is_member(const ElemType* e, const Item* i)
{
	if (IsEmptyList(i)) //se è vuota, allora è sicuro falso
		return false;

	if (ElemCompare(e, GetHeadValueList(i)) == 0) //altrimenti controllo l'elemento
		return true;

	is_member(e, GetTailList(i)); //se non è uguale controllo quello dopo tramite una funzione ricorsiva
}

bool IS_MEMBER(const ElemType* e, const Item* i)
{
	if (IsEmptyList(i)) //se è vuota, allora è sicuro falso
		return false;

	while (!IsEmptyList(i))
	{
		if(ElemCompare(e, GetHeadValueList(i) == 0))
			return true;
		i = GetTailList(i);
	}
}

size_t lunghezza(const Item* i)
{
	if (IsEmptyList(i))
		return 0;

	size_t res;
	for (res = 0; IsEmptyList(i) == 0; ++res)
	{
		i = GetTailList(i);
	}
	return res;
}

Item* append(Item* i1, Item* i2)
{
	if (IsEmptyList(i1))
		return i2;

	while (!IsEmptyList(i1))
	{
		ElemType* tmp = GetHeadValueList(i1);
		i1 = GetTailList(i1);

		i2 = InsertHeadList(tmp, i2);
	}
	
	return i2;
}

Item* copy(Item* i)
{
	if (IsEmptyList(i))
		return i;

	Item* tmp = CreateEmptyList();
	while (!IsEmptyList(i))
	{
		tmp = InsertHeadList(GetHeadValueList(i), tmp);
		i = GetTailList(i);
	}

	return tmp;
}

int main()
{
	int arr[] = { 1, 10, 20, 2, 3, 30 };
	const size_t n = sizeof(arr) / sizeof(int);

	Item* list1 = list_cons(arr, n);
	WriteStdoutList(list1);

	size_t len = lunghezza(list1);
	printf("La stinga misura %u int\n", len);

	ElemType m = 3;
	if (is_member(&m, list1))
		printf("%d risulta nella lista\n", m);

	int arr1[] = { 1, 2, 3, 4, 5 };
	const size_t j = sizeof(arr1) / sizeof(int);

	Item* list2 = list_cons(arr1, j);
	WriteStdoutList(list2);

	Item* list3 = append(list1, list2);
	WriteStdoutList(list3);

	Item* list4 = CreateEmptyList();
	list4 = copy(list2);
	WriteStdoutList(list4);

	return 0;
}

//11:42