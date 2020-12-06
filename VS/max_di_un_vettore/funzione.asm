.586
.model flat
.code
_massimo proc

	push ebp
	mov ebp, esp

	;stack frame
	;&arr: ebp+8, n: ebp+12

	mov edx, [ebp + 8]
	mov ecx, 0
	mov eax, 0 

	ciclo:
	cmp ecx, [ebp + 12]
	je  break

	cmp eax, [edx + ecx * 4]
	jg  salta

	mov eax, [edx + ecx * 4]

	salta:
	inc ecx
	jmp ciclo

	break:

	pop ebp
	ret

_massimo endp
end