 section .text
 	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rdi,format
	mov rsi, hello
	mov rax, 0

	call printf

	pop rbp

	mov rax, 0
	ret
section .data
	hello db "Hello, Holberton", 0
	format db "%s", 10, 0

