.586
.model flat
.code
_SommaElemSoglie proc

	push ebp
	mov ebp, esp
	push ebx

	;stack frame
	;&arr: ebp+8, n: ebp+12, t1: ebp+16, t2: ebp+20

	mov ecx, 0
	mov eax, 0
	mov edx, dword ptr[ebp + 8]
	

	ciclo:
	cmp ecx, dword ptr[ebp + 12]
	je  break

	mov ebx, dword ptr[edx + ecx * 4]

	cmp ebx, dword ptr[ebp + 16]
	jl	salta

	cmp ebx, dword ptr[ebp + 20]
	jg  salta

	add eax, ebx

	salta:
	inc ecx
	jmp ciclo

	break:
	pop ebx
	pop ebp
	ret

_SommaElemSoglie endp
end