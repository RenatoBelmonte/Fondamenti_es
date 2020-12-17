.586
.model flat
.code
_CopiaStringaNumerici proc

	push ebp
	mov ebp, esp

	;stack frame
	;&str1: ebp+8, &str2: ebp+12

	mov edx, dword ptr[ebp + 8]
	mov ecx, dword ptr[ebp + 12]


	ciclo:
	mov ah, byte ptr[edx]
	cmp ah, 0
	je  break

	cmp ah, 48
	jb  salta

	cmp ah, 57
	ja	salta

	mov byte ptr[ecx], ah
	inc ecx

	salta:
	inc edx
	jmp ciclo
	break:
	mov byte ptr[ecx], 0

	pop ebp
	ret

_CopiaStringaNumerici endp
end