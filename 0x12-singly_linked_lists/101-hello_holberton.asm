global main
extern printf

main:
	mov edi, txt
	xor eax, eax
	call printf
	mov eax, 0
	ret
txt: db `Hello, Holberton\n`,0
