.586
.model flat
.code
_ScambiaStringhe proc

	push ebp
	mov ebp, esp

	;stack frame
	;&str1: ebp+8, &str2: ebp+12

	mov edx, dword ptr[ebp + 8]
	mov ecx, dword ptr[ebp + 12]

	ciclo:
	mov ah, byte ptr[edx]
	cmp ah, 0
	je	break
	mov al, byte ptr[ecx]

	mov byte ptr[edx], al
	mov byte ptr[ecx], ah


	inc edx
	inc ecx
	jmp ciclo

	break:

	pop ebp
	ret

_ScambiaStringhe endp
end