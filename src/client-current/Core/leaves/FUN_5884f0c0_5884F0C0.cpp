// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F0C0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_5884f0c0_5884F0C0() {
    __asm {
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 72 5F: jb 0x5884f128
        __asm _emit 0x72
        __asm _emit 0x5f
        movzx eax, byte ptr [esp + 8]
        mov edx, eax
        shl eax, 8
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
        mov edx, dword ptr [esp + 4]
        mov ecx, 0fh
        or eax, 0ffffffffh
        and ecx, edx
        shl eax, cl
        sub edx, ecx
        ; Exact mapped bytes F3 0F 6F 0A: movdqu xmm1, xmmword ptr [edx]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0a
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
        ; Exact mapped bytes 66 0F EB D1: por xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F D7 CA: pmovmskb ecx, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xca
        and ecx, eax
        ; Exact mapped bytes 75 08: jne 0x5884f117
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        add edx, 10h
        ; Exact mapped bytes EB DC: jmp 0x5884f0f3
        __asm _emit 0xeb
        __asm _emit 0xdc
        bsf eax, ecx
        add eax, edx
        ; Exact mapped bytes 66 0F 7E DA: movd edx, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xda
        xor ecx, ecx
        cmp dl, byte ptr [eax]
        cmovne eax, ecx
        ret
        xor eax, eax
        mov al, byte ptr [esp + 8]
    }
}
