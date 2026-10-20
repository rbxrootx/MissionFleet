// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831440 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58831440_58831440() {
    __asm {
        ; Exact mapped bytes F6 05 B0 60 90 58 20: test byte ptr [0x589060b0], 0x20
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x20
        ; Exact mapped bytes 75 07: jne 0x58831450
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 62 F1 7F 08 78 C0: vcvttsd2usi eax, xmm0
        __asm _emit 0x62
        __asm _emit 0xf1
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x78
        __asm _emit 0xc0
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
        ; Exact mapped bytes 72 2D: jb 0x58831499
        __asm _emit 0x72
        __asm _emit 0x2d
        cmp edx, 41e00000h
        ; Exact mapped bytes 73 05: jae 0x58831479
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        ret
        cmp edx, 41f00000h
        ; Exact mapped bytes 73 27: jae 0x588314a8
        __asm _emit 0x73
        __asm _emit 0x27
        test eax, 1fffffh
        ; Exact mapped bytes 74 08: je 0x58831490
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 2C 0D AC 1C 8C 58: cvttss2si ecx, dword ptr [0x588c1cac]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        shrd eax, edx, 15h
        bts eax, 1fh
        ret
        cmp edx, 3ff00000h
        ; Exact mapped bytes 73 07: jae 0x588314a8
        __asm _emit 0x73
        __asm _emit 0x07
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        xor eax, eax
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
        ret
    }
}
