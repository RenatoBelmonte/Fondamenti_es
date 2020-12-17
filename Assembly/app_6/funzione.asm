.586
.model flat
.code
_ScambiaVettori proc

	push ebp
	mov ebp, esp
	push ebx
	push esi

	;stack frame
	;&arr1: ebp+8, &arr2: ebp+12, n: ebp+16

	mov ecx, 0
	mov edx, dword ptr[ebp + 8]
	mov ebx, dword ptr[ebp + 12]
	
	ciclo:
	cmp ecx, dword ptr[ebp + 16]
	je  break 

	mov eax, dword ptr[edx + ecx * 4]
	mov esi, dword ptr[ebx + ecx * 4]
	mov dword ptr[edx + ecx * 4], esi
	mov dword ptr[ebx + ecx * 4], eax

	inc ecx
	jmp ciclo

	break:
	pop esi
	pop ebx
	pop ebp
	ret

_ScambiaVettori endp
end