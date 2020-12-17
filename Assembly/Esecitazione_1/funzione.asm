.586
.model flat
.code
_converti proc

	push ebp
	mov ebp, esp

	;stack frame
	;&str: ebp+8

	mov edx, dword ptr[ebp + 8]

	ciclo:
	mov al, byte ptr[edx]
	cmp al, 0
	je  break

	cmp al, 65
	jb  salta

	cmp al, 90
	ja  salta

	add al, 32
	mov byte ptr[edx], al

	salta:
	inc edx
	jmp ciclo

	break:
	pop ebp
	ret

_converti endp
end