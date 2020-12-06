.586
.model flat
.code
_riangolare proc

	push ebp
	mov ebp, esp

	;stack frame
	;n: ebp+8

	mov edx, 0
	mov ecx, 1
	mov eax, 1

	ciclo:
	add edx, ecx
	cmp edx, dword ptr[ebp + 8]
	jl  avanza
	jg  break
	je  fine

	avanza:
	inc ecx
	jmp ciclo

	break:
	mov eax, 0

	fine:
	pop ebp
	ret

_riangolare endp
end