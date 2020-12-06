.586
.model flat
.code
_lunghezzaMassima proc

	push ebp
	mov ebp, esp
	push ebx

	;stack frame
	;&str1: ebp+8, &str2: ebp+12

	mov ebx, 0
	mov edx, 0

	ciclo:
	mov ecx, dword ptr[ebp + 8]
	mov al, byte ptr[ecx + ebx]
	cmp al, 0
	je  s2
	inc ebx

	s2:
	mov ecx, dword ptr[ebp + 12]
	mov ah, byte ptr[ecx + edx]
	cmp ah, 0
	je	s3
	inc edx

	s3:
	cmp ax, 0
	je  break
	jmp ciclo

	break:
	cmp ebx, edx
	jg	str1

	mov eax, edx
	pop ebx
	pop ebp
	ret

	str1:
	mov eax, ebx
	pop ebx
	pop ebp
	ret


_lunghezzaMassima endp
end