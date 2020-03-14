global main

	section .text
main:
	  mov rax, 1        	; write(
	  mov rdi, 1        	;   STDOUT_FILENO,
	  mov rsi, msg      	;   "Hello, world!\n",
	  mov rdx, 17 	;   sizeof("Hello, world!\n")
	  syscall           	; );

	  mov rax, 60       	; exit(
	  mov rdi, rdi        	;   EXIT_SUCCESS
	  syscall           	; );

	section .data
msg:	 db "Hello, Holberton", 10
