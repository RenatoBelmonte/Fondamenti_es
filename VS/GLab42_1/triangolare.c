#include <stdbool.h>
bool triangolare(int n)
{
	int res;
	__asm
	{
		; stack frame
		; n: ebp + 8

		mov edx, 0
		mov ecx, 1
		mov res, 1

		ciclo :
		add edx, ecx
		cmp edx, n
		jl  avanza
		jg  break
		je  fine

		avanza :
		inc ecx
			jmp ciclo

			break :
			mov res, 0

			fine :

	}
	return res;
}