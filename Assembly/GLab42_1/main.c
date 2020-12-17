#include <stdio.h>
#include <stdbool.h>

extern bool triangolare(int n);

int main()
{
	int n = 25, m = 21, l = 28;

	bool res = triangolare(n);
	res = triangolare(m);
	res = triangolare(l);

	return 0;
}
/*
#include <stdbool.h>

bool triangolare(int n)
{
    if (n <= 0)
        return 0;

    int b = 0;
    for (int i = 1; b < n; ++i)
    {
        b += i;
        if (b == n)
            return 1;
    }

    return 0;
}*/