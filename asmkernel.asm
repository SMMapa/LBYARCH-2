; The kernel must calculate the distances between the coordinate points across two vectors.

; Vectors X1, X2, Y1, Y2, and Z are single-precision float.

; Z[i] = sqrt((X2[i] - X1[i])^2 + (Y2[i] - Y1[i])^2)

section .text
bits 64
default rel
global calculate_distances_asm 

calculate_distances_asm:                            
    xor r10, r10 ; xor function is to initialize it to 0 with style

L1: 
    cmp r10, r9
    jge .done

    ; approach is to simplify step by step following what comes first

    ; xmm0 = X2[i] - X1[i]
    movss xmm0, [rsi + r10*4]
    subss xmm0, [rdi + r10*4]
    movss xmm1, xmm0
    mulss xmm0, xmm1            

    ; xmm2 = Y2[i] - Y1[i]
    movss xmm2, [rcx + r10*4]
    subss xmm2, [rdx + r10*4]
    movss xmm3, xmm2
    mulss xmm2, xmm3             

    ; xmm0 = dx^2 + dy^2
    addss xmm0, xmm2
    sqrtss xmm0, xmm0             

    ; Store result in Z[i]
    movss [r8 + r10*4], xmm0

    inc r10
    jmp L1

ret

