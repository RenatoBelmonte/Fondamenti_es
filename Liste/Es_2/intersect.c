#include "list_int.h"

Item* Intersect(const Item* i1, const Item* i2)
{
	Item* list = CreateEmptyList();
	while (!IsEmptyList(i1))
	{
		const ElemType* v1 = GetHeadValueList(i1);
		i1 = GetTailList(i1);

		const Item* ind = i2;
		while (!IsEmptyList(i2))
		{
			const ElemType* v2 = GetHeadValueList(i2);
			i2 = GetTailList(i2);

			if (*v1 == *v2)
			{
				list = InsertHeadList(v1, list);
				break;
			}
		}
		i2 = ind;
	}

	return list;
}