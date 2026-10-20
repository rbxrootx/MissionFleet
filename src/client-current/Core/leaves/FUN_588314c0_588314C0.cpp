// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588314C0 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_588314c0_588314C0() {
    __asm {
        ; Exact mapped bytes F6 05 B0 60 90 58 20: test byte ptr [0x589060b0], 0x20
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x20
        ; Exact mapped bytes 75 15: jne 0x588314de
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes C5 FA 7E C0: vmovq xmm0, xmm0
        __asm _emit 0xc5
        __asm _emit 0xfa
        __asm _emit 0x7e
        __asm _emit 0xc0
        ; Exact mapped bytes 62 F1 FD 08 78 C0: vcvttpd2uqq xmm0, xmm0
        __asm _emit 0x62
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0x08
        __asm _emit 0x78
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
        mov ecx, esp
        add esp, -8
        and esp, 0fffffff8h
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov eax, dword ptr [esp]
        mov edx, dword ptr [esp + 4]
        mov esp, ecx
        btr edx, 1fh
        ; Exact mapped bytes 72 4A: jb 0x58831544
        __asm _emit 0x72
        __asm _emit 0x4a
        cmp edx, 41e00000h
        ; Exact mapped bytes 73 07: jae 0x58831509
        __asm _emit 0x73
        __asm _emit 0x07
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        xor edx, edx
        ret
        mov ecx, edx
        bts edx, 14h
        shr ecx, 14h
        and edx, 1fffffh
        sub ecx, 433h
        ; Exact mapped bytes 7D 19: jge 0x58831539
        __asm _emit 0x7d
        __asm _emit 0x19
        neg ecx
        push ebx
        xor ebx, ebx
        shrd ebx, eax, cl
        ; Exact mapped bytes 74 08: je 0x58831532
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 2C 1D AC 1C 8C 58: cvttss2si ebx, dword ptr [0x588c1cac]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        pop ebx
        shrd eax, edx, cl
        shr edx, cl
        ret
        cmp ecx, 0ch
        ; Exact mapped bytes 73 17: jae 0x58831555
        __asm _emit 0x73
        __asm _emit 0x17
        shld edx, eax, cl
        shl eax, cl
        ret
        cmp edx, 3ff00000h
        ; Exact mapped bytes 73 09: jae 0x58831555
        __asm _emit 0x73
        __asm _emit 0x09
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        xor eax, eax
        xor edx, edx
        ret
        ; Exact mapped bytes F3 0F 2C 0D A8 1C 8C 58: cvttss2si ecx, dword ptr [0x588c1ca8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        xor eax, eax
        dec eax
        cdq
        ret
    }
}
