.586
.model flat
.code
_CopiaVettMinoriDiT proc

	push ebp
	mov ebp, esp

	push ebx
	push esi

	;stack frame
	;&arr1: ebp + 8, &arr2: ebp+ 12, n: ebp+16, t: ebp+20

	mov ecx, dword ptr[ebp + 8]
	mov edx, dword ptr[ebp + 12]
	mov eax, 0
	mov ebx, 0

	ciclo:
	cmp ebx, dword ptr[ebp + 16]
	je  break

	mov esi, dword ptr[ecx + ebx * 4]
	cmp esi, dword ptr[ebp + 20]
	jg  salta

	mov dword ptr[edx + eax * 4], esi
	inc eax

	salta:
	inc ebx 
	jmp ciclo

	break:

	pop esi
	pop ebx
	pop ebp
	ret

_CopiaVettMinoriDiT endp
end