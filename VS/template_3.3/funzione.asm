.586
.model flat
.code
_CheckOrdinato proc

	push ebp
	mov ebp, esp

	;stack frame
	;&arr: ebp+8, n: ebp+12

	mov ecx, 0
	mov edx, dword ptr[ebp + 8]

	ciclo:
	cmp ecx, dword ptr[ebp + 12]
	je  break

	mov eax, dword ptr[edx + ecx * 4]
	inc ecx
	cmp ecx, dword ptr[ebp + 12]
	je  break
	cmp eax, dword ptr[edx + ecx * 4]
	jg fail


	jmp ciclo

	break:
	mov eax, 1

	fine:
	pop ebp
	ret

	fail:
	mov eax, 0
	jmp fine

_CheckOrdinato endp
end