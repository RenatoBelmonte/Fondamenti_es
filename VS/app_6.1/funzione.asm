.586
.model flat
.code
_AmpiezzaRange proc

	push ebp
	mov ebp, esp

	;stack frame
	;a: ebp + 8, b: ebp + 12, c: ebp + 16       1 5 7

	mov ecx, dword ptr[ebp + 8]
	sub ecx, dword ptr[ebp + 12]

	cmp ecx, 0
	jg  salto_0
	neg ecx

	salto_0:

	mov eax, ecx

	mov ecx, dword ptr[ebp + 8]
	sub ecx, dword ptr[ebp + 16]

	cmp ecx, 0
	jg  salto_1
	neg ecx

	salto_1:

	cmp ecx, eax
	jl  salto_2 
	mov eax, ecx

	salto_2:

	mov ecx, dword ptr[ebp + 12]
	sub ecx, dword ptr[ebp + 16]

	cmp ecx, 0
	jg  salto_3
	neg ecx

	salto_3:

	cmp ecx, eax
	jl  salto_4
	mov eax, ecx

	salto_4:

	pop ebp
	ret

_AmpiezzaRange endp
end 