.586
.model flat
.code
_Lunghezza proc

	push ebp
	mov ebp, esp

	;stack frame
	;&str: ebp + 8

	mov eax, 0
	mov edx, dword ptr[ebp + 8]

	ciclo:
	mov cl, byte ptr[edx + eax]
	cmp cl, 0
	je  break

	inc eax
	jmp ciclo
	break:

	pop ebp
	ret

_Lunghezza endp
end