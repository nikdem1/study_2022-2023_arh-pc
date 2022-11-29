%include 'in_out.asm'

SECTION .data
msg: DB 'Введите строку:',10
msgLen: EQU $-msg

SECTION .bss
buf1: RESB 80

SECTION .text
GLOBAL _start
 _start:
 
 mov eax, msg
 call sprint
 
 mov ecx, buf1
 mov edx, 80
 call sread
 
 call quit
