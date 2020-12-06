.586
.model flat
.code
_Minuscolo proc

	push ebp
	mov ebp, esp

	;stack frame
	;*str: ebp+8

	mov eax, 0
	mov ecx, 0
	mov edx, dword ptr[ebp + 8]

	ciclo:
	mov al, byte ptr[edx + ecx]
	cmp eax, 0
	je break

	cmp eax, 65
	jb	salta

	cmp eax, 90
	ja  salta

	add byte ptr[edx + ecx], 'a' - 'A'


	salta:
	inc ecx
	jmp ciclo
	break:

	pop ebp
	ret

_Minuscolo endp
end