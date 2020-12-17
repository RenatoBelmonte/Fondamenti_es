.586
.model flat
.code
_miomassimo proc
	
	push ebp
	mov ebp, esp

	;stack frame
	;a: ebp+8, b: ebp+12, c: ebp-16

	push esi

	mov eax, [ebp + 8]
	cmp eax, [ebp + 12]
	jg s2

	mov eax, [ebp + 12]

	s2:
	cmp eax, [ebp + 16]
	jg fine

	mov eax, [ebp + 16]
	
	fine:
	pop esi
	pop ebp

	ret

_miomassimo endp
end