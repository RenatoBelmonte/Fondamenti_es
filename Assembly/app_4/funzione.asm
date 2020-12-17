.586
.model flat
.code
_SommaScostamenti proc

	push ebp
	mov ebp, esp
	push ebx

	;stack frame
	;&arr: ebp+8, n: ebp+12, soglia: ebp+16

	mov ecx, 0
	mov eax, 0
	mov edx, dword ptr[ebp + 8]

	ciclo:
	cmp ecx, dword ptr[ebp + 12]
	je  break

	mov ebx, dword ptr[edx + ecx * 4]
	cmp ebx, dword ptr[ebp + 16]
	jl  salta

	add eax, dword ptr[edx + ecx * 4]
	sub eax, dword ptr[ebp + 16]
	
	salta:
	inc ecx
	jmp ciclo

	break:
	pop ebx
	pop ebp
	ret

_SommaScostamenti endp
end