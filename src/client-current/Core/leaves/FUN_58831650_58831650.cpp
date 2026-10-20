// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831650 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58831650_58831650() {
    __asm {
        ; Exact mapped bytes F6 05 B0 60 90 58 20: test byte ptr [0x589060b0], 0x20
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x20
        ; Exact mapped bytes 75 11: jne 0x5883166a
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes C5 F9 6E C1: vmovd xmm0, ecx
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact mapped bytes C4 E3 79 22 C2 01: vpinsrd xmm0, xmm0, edx, 1
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 62 F1 FE 08 7A C0: vcvtuqq2pd xmm0, xmm0
        __asm _emit 0x62
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0x08
        __asm _emit 0x7a
        __asm _emit 0xc0
        ret
        ; Exact mapped bytes 66 0F 6E C1: movd xmm0, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 56 05 80 1C 8C 58: orps xmm0, xmmword ptr [0x588c1c80]
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5C 05 80 1C 8C 58: subsd xmm0, qword ptr [0x588c1c80]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x58831698
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 0F 6E CA: movd xmm1, edx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xca
        ; Exact mapped bytes 0F 56 0D 90 1C 8C 58: orps xmm1, xmmword ptr [0x588c1c90]
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5C 0D 90 1C 8C 58: subsd xmm1, qword ptr [0x588c1c90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 C1: addsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ret
    }
}
