#include "list_int.h"

ElemType MaxElement(const Item* i)
{
	const ElemType* e = GetHeadValueList(i);
	i = GetTailList(i);
	while (!IsEmptyList(i))
	{
		if(*GetHeadValueList(i) > *e)
			e = GetHeadValueList(i);
		i = GetTailList(i);
	}

	return *e;
}