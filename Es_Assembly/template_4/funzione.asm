.586
.model flat
.code
_CopiaVettMinoriDiT proc

	push ebp
	mov ebp, esp
	push esi

	;stack frame
	;&arr1: ebp + 8, &arr2: ebp+12, n: ebp+16, t: ebp+20


	mov dword ptr[ebp - 4], 0
	mov ecx, 0
	mov esi, 0
	mov edx, dword ptr[ebp + 8]
	mov ebx, dword ptr[ebp + 12]

	ciclo:
	cmp ecx, dword ptr[ebp + 16]
	je	break

	mov eax, dword ptr[edx + ecx * 4]
	cmp eax, dword ptr[ebp + 20]
	jg	fail 

	mov dword ptr[ebx + esi * 4], eax
	inc esi
	inc ecx
	jmp ciclo


	fail:
	inc ecx
	jmp ciclo

	break:

	mov eax, esi
	pop esi
	pop ebp
	ret

_CopiaVettMinoriDiT endp
end