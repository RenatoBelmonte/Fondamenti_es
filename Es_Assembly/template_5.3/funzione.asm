.586
.model flat
.code
_CopiaSenzaSpaziIniziali proc

	push ebp
	mov ebp, esp

	;stack frame
	;&str1: ebp+8, &str2: ebp+12


	mov ecx, dword ptr[ebp + 8]
	mov edx, dword ptr[ebp +12]


	ciclo:
	mov al, byte ptr[ecx]
	cmp al, 0
	je  break

	
	cmp al, 32
	je salta

	prosegui:
	mov byte ptr[edx], al
	inc ecx
	inc edx
	mov al, byte ptr[ecx]

	cmp al, 0
	je  break
	jmp prosegui


	salta:
	inc ecx
	jmp ciclo

	break:
	mov byte ptr[edx], 0
	pop ebp
	ret

_CopiaSenzaSpaziIniziali endp
end