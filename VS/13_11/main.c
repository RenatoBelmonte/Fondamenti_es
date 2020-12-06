#include<stdio.h>


int main()
{
	__asm
	{
		mov	ebx, 45
		mov	eax, 22

		; push ebx
		sub esp, 4
		mov [esp], ebx

		push eax
		pop	ebx

		; pop	eax
		mov eax, [esp]
		add esp, 4
	}

}