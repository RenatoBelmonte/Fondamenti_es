.586
.model flat
.code 
_CheckParentesi proc

	push ebp
	mov ebp, esp

	;stack frame
	;&str: ebp+8

	mov edx, dword ptr[ebp + 8]
	mov eax, 1

	ciclo:
	mov cl, byte ptr[edx]
	cmp cl, 0
	je  break

	cmp cl, '('
	je  aperta

	cmp cl, ')'
	je  chiusa
	
	inc edx
	jmp ciclo

	aperta:
	inc eax
	inc edx
	jmp ciclo

	chiusa:
	dec eax
	cmp eax,0
	je	break
	inc edx
	jmp ciclo

	break:
	cmp eax, 1
	jg	false
	pop ebp
	ret

	false:
	mov eax, 0
	pop ebp
	ret

_CheckParentesi endp
end