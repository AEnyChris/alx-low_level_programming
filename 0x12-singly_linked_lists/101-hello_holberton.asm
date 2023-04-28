section .data
    format db "Hello, Holberton", 10, 0   ; message to print followed by new line

section .text
    global main                          ; define main function
    extern printf                       ; declare printf function

main:
    push rbp                            ; save base pointer
    mov rbp, rsp                        ; set base pointer

    lea rdi, [format]                   ; load address of message into rdi
    xor eax, eax                        ; clear eax register
    call printf                         ; call printf to print message

    mov rsp, rbp                        ; restore stack pointer
    pop rbp                             ; restore base pointer
    xor eax, eax                        ; clear eax register
    ret                                 ; return from main

