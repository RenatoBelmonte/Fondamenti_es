.586
.model flat
.code
_mat_reset_cross proc

	push ebp
	mov ebp, esp
	push esi
	push ebx

	;stack frame
	;&struct: ebp+8, ir: ebp+12, ic: ebp+16
	;;&data: [ebp + 8] + 8
	
	mov ebx, dword ptr[ebp + 8]
	add ebx, 8
	mov ebx, dword ptr[ebx]

	mov esi, dword ptr[ebp + 8]

	mov ecx, 0; r

	ciclo_e:
	mov edx, 0; c
	cmp ecx, dword ptr[esi] 
	je  break

	ciclo_i:
	cmp edx, dword ptr[esi + 4]
	je  s_ciclo_e

	cmp ecx, dword ptr[ebp + 12]
	je s2

	cmp edx, dword ptr[ebp + 16]
	je  zero
	jmp salta

	s2:
	cmp edx, dword ptr[ebp + 16]
	je  salta

	salta:
	inc edx
	jmp ciclo_i

	zero:
	mov eax, ecx
	mov edi, 4
	push edx
	mul edi
	pop edx
	add eax, edx
	
	mov dword ptr[ebx + eax], 0
	jmp s_ciclo_e

	s_ciclo_e:
	inc ecx
	jmp ciclo_e

	break:

	pop ebx
	pop esi
	pop ebp
	ret

_mat_reset_cross endp
end