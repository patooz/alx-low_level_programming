global main
extern printf

section.text
main:
mov  rdi, fmt
mov  rax, 0
call  printf
move rax, 0
ret
fmt:
		db "Hello, Holberton", 10, 0
