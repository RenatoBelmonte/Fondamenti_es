.586
.model flat
.code
_conta_a proc

	push ebp
	mov ebp, esp
	push ebx

	;stack frame
	;&str: ebp+8

	mov ecx, 0
	mov eax, 0
	mov edx, 0
	mov ebx, dword ptr[ebp + 8]

	ciclo:

	mov al, byte ptr[ebx  + ecx]
		cmp al, 0
		je break

		cmp al, 48
		jb  salta
		cmp al, 57
		jb  incr

		cmp al, 65
		jb  salta
		cmp al, 90
		jb  incr

		cmp al, 97
		jb  salta
		cmp al, 122
		jb  incr

	
	incr:
	inc edx

	salta:
	inc ecx
	jmp ciclo

	break:

	mov eax, edx
	pop ebx
	pop ebp
	ret

	
_conta_a endp
end