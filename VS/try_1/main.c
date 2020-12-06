#include<stdio.h>


int main()
{

	int i, somma;

	somma = 0;

	__asm 
	{
		xor eax, eax
		mov i, eax
		mov	eax, somma			;//i = 0
		mov ebx, 5

	ciclo :
			add eax, i			;//somma += i
			mov somma, eax
			inc i				;//++i
			cmp i, ebx			;//i < 5

		jae fineciclo
		jnae ciclo

		fineciclo:
	}
	
	printf("la somma e' %d\n", somma);
 }