#include "list_int.h"

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
	for (res = 0; IsEmptyList(i) != 0; ++res)
	{
		i = GetTailList(i);
	}
	return res;
}

int main()
{
	return 0;
}