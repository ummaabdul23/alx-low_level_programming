 section .data
 	hello db "Hello, Holberton", 10, 0
 section .text
 	global _start
	extern printf

_start:
	push rdi
	lea rdi, [hello]
	call printf
	pop rdi

	mov rax, 60
	xor rdi, rdi
	syscall

