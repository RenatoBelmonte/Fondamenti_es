.586
.model flat
.code
_SommaElem proc

	push ebp
	mov ebp, esp

	;stack frame
	;&arr: ebp+8, n: ebp+12

	mov ecx, dword ptr[ebp + 12]
	mov eax, 0
	mov edx, dword ptr[ebp + 8]

	ciclo:
	cmp ecx, 0
	je  break

	add eax, dword ptr[-4 + edx + ecx * 4]

	dec ecx
	jmp ciclo

	break:
	pop ebp
	ret

_SommaElem endp
end
