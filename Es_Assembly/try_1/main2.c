#include<stdio.h>

int somma(int a, int b)
{
	return a + b;
}

int main()
{

	char v1;
	char v2;
	char max;

	v1 = 56;
	v2 = 58;

	__asm
	{
		mov al, v1

		cmp al, v2
		jl  max_v2

		mov max, al
		jmp fineif

		max_v2 :
		mov bl, v2
			mov max, bl
			jmp fineif



		fineif:
	}

	printf("il massimo e' %d\n", max);
	printf("%d, %d\n", v1, v2);
}