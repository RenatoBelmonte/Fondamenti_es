.586
.model flat
.code
_funzione proc

	push ebp
	mov ebp, esp


	;stack frame
	;a: ebp+8, b: ebp+12, c: ebp+16, d: ebp+20

	mov eax, dword ptr[ebp + 8]

	add eax, dword ptr[ebp + 20]
	add eax, dword ptr[ebp + 20]
	add eax, dword ptr[ebp + 20]

		mov ecx, dword ptr[ebp + 12]
		sub ecx, dword ptr[ebp + 16]

	add eax, ecx
	add eax, ecx

	cmp eax, 0
	jg fine

	neg eax

	fine:
	pop ebp
	ret

_funzione endp 
end