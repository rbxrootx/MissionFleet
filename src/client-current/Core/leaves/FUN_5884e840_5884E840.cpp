// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884E840 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_5884e840_5884E840() {
    __asm {
        push ebp
        mov ebp, esp
        push edi
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 0F 82 FD 00 00 00: jb 0x5884e94e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes 77 77: ja 0x5884e8cd
        __asm _emit 0x77
        __asm _emit 0x77
        movzx edx, byte ptr [ebp + 0ch]
        mov eax, edx
        shl edx, 8
        or edx, eax
        ; Exact mapped bytes 66 0F 6E DA: movd xmm3, edx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xda
        ; Exact mapped bytes F2 0F 70 DB 00: pshuflw xmm3, xmm3, 0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0x00
        ; Exact mapped bytes 0F 16 DB: movlhps xmm3, xmm3
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0xdb
        mov ecx, 0fh
        and ecx, edi
        or eax, 0ffffffffh
        shl eax, cl
        sub edi, ecx
        xor edx, edx
        ; Exact mapped bytes F3 0F 6F 0F: movdqu xmm1, xmmword ptr [edi]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0f
        ; Exact mapped bytes 66 0F EF D2: pxor xmm2, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xef
        __asm _emit 0xd2
        ; Exact mapped bytes 66 0F 74 D1: pcmpeqb xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F 74 CB: pcmpeqb xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F D7 CA: pmovmskb ecx, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xca
        and ecx, eax
        ; Exact mapped bytes 75 18: jne 0x5884e8ad
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 66 0F D7 C9: pmovmskb ecx, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc9
        and ecx, eax
        bsr eax, ecx
        add eax, edi
        test ecx, ecx
        cmovne edx, eax
        or eax, 0ffffffffh
        add edi, 10h
        ; Exact mapped bytes EB D0: jmp 0x5884e87d
        __asm _emit 0xeb
        __asm _emit 0xd0
        push ebx
        ; Exact mapped bytes 66 0F D7 D9: pmovmskb ebx, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xd9
        and ebx, eax
        shl ecx, 1
        xor eax, eax
        sub eax, ecx
        and ecx, eax
        dec ecx
        and ecx, ebx
        pop ebx
        bsr eax, ecx
        add eax, edi
        test ecx, ecx
        cmove eax, edx
        pop edi
        leave
        ret
        movzx edx, byte ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x5884e90e
        __asm _emit 0x74
        __asm _emit 0x39
        xor eax, eax
        test edi, 0fh
        ; Exact mapped bytes 74 15: je 0x5884e8f4
        __asm _emit 0x74
        __asm _emit 0x15
        movzx ecx, byte ptr [edi]
        cmp ecx, edx
        cmove eax, edi
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x5884e90b
        __asm _emit 0x74
        __asm _emit 0x20
        inc edi
        test edi, 0fh
        ; Exact mapped bytes 75 EB: jne 0x5884e8df
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 6E C2: movd xmm0, edx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc2
        add edi, 10h
        ; Exact mapped bytes 66 0F 3A 63 47 F0 40: pcmpistri xmm0, xmmword ptr [edi - 0x10], 0x40
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x63
        __asm _emit 0x47
        __asm _emit 0xf0
        __asm _emit 0x40
        lea ecx, [ecx + edi - 10h]
        cmovb eax, ecx
        ; Exact mapped bytes 75 ED: jne 0x5884e8f8
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        leave
        ret
        mov eax, 0fffffff0h
        and eax, edi
        ; Exact mapped bytes 66 0F EF C0: pxor xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xef
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 74 00: pcmpeqb xmm0, xmmword ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0x00
        mov ecx, 0fh
        and ecx, edi
        mov edx, 0ffffffffh
        shl edx, cl
        ; Exact mapped bytes 66 0F D7 F8: pmovmskb edi, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xf8
        and edi, edx
        ; Exact mapped bytes 75 14: jne 0x5884e947
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 0F EF C0: pxor xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xef
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 74 40 10: pcmpeqb xmm0, xmmword ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0x40
        __asm _emit 0x10
        add eax, 10h
        ; Exact mapped bytes 66 0F D7 F8: pmovmskb edi, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xf8
        test edi, edi
        ; Exact mapped bytes 74 EC: je 0x5884e933
        __asm _emit 0x74
        __asm _emit 0xec
        bsf edx, edi
        add eax, edx
        ; Exact mapped bytes EB BD: jmp 0x5884e90b
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov edi, dword ptr [ebp + 8]
        xor eax, eax
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        add ecx, 1
        neg ecx
        sub edi, 1
        mov al, byte ptr [ebp + 0ch]
        std
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        add edi, 1
        cmp byte ptr [edi], al
        ; Exact mapped bytes 74 04: je 0x5884e971
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x5884e973
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, edi
        cld
        pop edi
        leave
        ret
    }
}
