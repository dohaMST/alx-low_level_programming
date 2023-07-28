global main
extern printf

main:
	mov edi, txt
	mov eax, 0
	call printf
txt: db `Hello, Holberton\n`,0
