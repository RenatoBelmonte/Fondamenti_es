.586
.model flat
.code
_somma_vett proc
	
	push ebp
	mov ebp, esp

	;stack frame
	;vett[0]: ebp+8, n: ebp+12, somma: ebp-4, i: ebp-8

	sub esp, 4; somma
	sub esp, 4; i
	

	mov dword ptr[ebp - 4], 0
	mov dword ptr[ebp - 8], 0
	mov edx, dword ptr[ebp + 8]

	ciclo:
	mov ecx, dword ptr[ebp - 8]
	cmp ecx, dword ptr[ebp + 12]
	je  break

	mov eax, dword ptr[edx + ecx * 4]
	add dword ptr[ebp - 4], eax

	inc dword ptr[ebp - 8]
	jmp ciclo

	break:
	
	mov eax, dword ptr[ebp - 4]
	add	esp, 8
	pop ebp

	ret

_somma_vett endp
end