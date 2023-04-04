;Assembly program to print "Hello, Holberton"
	
	extern printf			; the C function, to be called

	section .data			; the data section is where we initialize variables

msg: 	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0			; The printf format with a newline \n (10)

	section .text			; Code section

	global main			; standard gcc entry point

main:					; the program entry point/main function
	push rbp			; set up stack frame

	mov rdi,fmt
	mov rsi,msg
	mov rax,0			
	call printf			;call C function to use

	pop rbp				;restore stack

	mov rax,0
	ret				; return	
