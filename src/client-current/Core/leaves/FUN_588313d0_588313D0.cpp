// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588313D0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_588313d0_588313D0() {
    __asm {
        ; Exact mapped bytes F6 05 B0 60 90 58 20: test byte ptr [0x589060b0], 0x20
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x20
        ; Exact mapped bytes 75 16: jne 0x588313ef
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes C4 E2 79 18 C0: vbroadcastss xmm0, xmm0
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x79
        __asm _emit 0x18
        __asm _emit 0xc0
        ; Exact mapped bytes 62 F1 7D 08 7A C0: vcvttps2qq xmm0, xmm0
        __asm _emit 0x62
        __asm _emit 0xf1
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x7a
        __asm _emit 0xc0
        ; Exact mapped bytes C5 F9 7E C0: vmovd eax, xmm0
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0x7e
        __asm _emit 0xc0
        ; Exact mapped bytes C4 E3 79 16 C2 01: vpextrd edx, xmm0, 1
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0x16
        __asm _emit 0xc2
        __asm _emit 0x01
        ret
        ; Exact mapped bytes 66 0F 7E C0: movd eax, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc0
        cdq
        shl eax, 1
        cmp eax, 9e000000h
        ; Exact mapped bytes 73 06: jae 0x58831403
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes F3 0F 2C C0: cvttss2si eax, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        cdq
        ret
        cmp eax, 0be000000h
        ; Exact mapped bytes 73 19: jae 0x58831423
        __asm _emit 0x73
        __asm _emit 0x19
        mov ecx, eax
        bts eax, 18h
        shr ecx, 18h
        shl eax, 7
        sub cl, 0beh
        xor eax, edx
        sub eax, edx
        shld edx, eax, cl
        shl eax, cl
        ret
        ; Exact mapped bytes 75 04: jne 0x58831429
        __asm _emit 0x75
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 78 08: js 0x58831431
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 2C 0D A8 1C 8C 58: cvttss2si ecx, dword ptr [0x588c1ca8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        mov edx, 80000000h
        xor eax, eax
        ret
    }
}
