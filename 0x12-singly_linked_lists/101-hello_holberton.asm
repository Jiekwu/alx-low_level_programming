section .data
    hello db 'Hello, Holberton', 0  ; Null-terminated string

section .text
    global _start

_start:
    ; Set up the parameters for the printf function
    ; printf("Hello, Holberton")
    mov rdi, hello          ; First argument: pointer to the format string
    xor eax, eax            ; Zero out eax (no floating point arguments)

    ; Call the printf function
    call printf

    ; Exit the program
    mov eax, 60             ; syscall: exit
    xor edi, edi            ; status: 0
    syscall                 ; make syscall

