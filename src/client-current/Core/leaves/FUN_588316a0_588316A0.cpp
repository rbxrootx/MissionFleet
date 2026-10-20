// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588316A0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_588316a0_588316A0() {
    __asm {
        ; Exact mapped bytes F6 05 B0 60 90 58 20: test byte ptr [0x589060b0], 0x20
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x20
        ; Exact mapped bytes 75 11: jne 0x588316ba
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
        ; Exact mapped bytes 62 F1 FE 08 E6 C0: vcvtqq2pd xmm0, xmm0
        __asm _emit 0x62
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0x08
        __asm _emit 0xe6
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
        ; Exact mapped bytes 74 10: je 0x588316e1
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes F2 0F 2A CA: cvtsi2sd xmm1, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xca
        ; Exact mapped bytes F2 0F 59 0D A0 1C 8C 58: mulsd xmm1, qword ptr [0x588c1ca0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0xa0
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
