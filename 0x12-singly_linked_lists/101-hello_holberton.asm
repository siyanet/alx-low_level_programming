global main
section .text
main:
        mov     rax, 1
	mov     rdi, 1
	mov     rsi, message
	mov     rdx, 17
	syscall

	mov     rax, 60
	xor     rdi, rdi
	syscall
message:
         db "hello, hloberton", 10
