.586
.model flat
.code
_Elab proc

	push ebp
	mov ebp, esp
	

	;stack frame
	;&str: ebp+8, c: ebp+12

	mov ecx, 0
	mov eax, 0
	mov edx, dword ptr[ebp + 8]

	ciclo:

	mov cl, byte ptr[edx]
	cmp cl, 0
	je break
	cmp cl, byte ptr[ebp + 12]
	jne  salta

	inc eax

	salta:
	inc edx
	jmp ciclo

	break:
	pop ebp
	ret

_Elab endp
end