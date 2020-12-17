.586
.model flat
.code
_SommaElemPos proc

	
	push ebp
	mov ebp, esp
	push ebx

	;stack frame
	;arr: ebp+8, n: ebp+12
	
	mov ecx, 0
	mov eax, 0
	mov edx, dword ptr[ebp + 8]

	ciclo:
	cmp ecx, dword ptr[ebp + 12]
	je  break

	mov ebx, dword ptr[edx + ecx * 4]
	cmp ebx, 0
	jng salta

	add eax, ebx

	salta:
	inc ecx
	jmp ciclo

	break:

	pop ebx
	pop ebp
	
	ret

_SommaElemPos endp
end