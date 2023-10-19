 section .data
 	hello db "Hello, Holberton", 10, 0
	format db "%s", 0

 section .text
 	global _start
	extern printf

_start:
	push rbp
	mov rbp, rsp

	mov rdi,format
	mov rsi, hello
	mov rax, 0

	call printf

	pop rbp

	mov rax, 0
	ret

