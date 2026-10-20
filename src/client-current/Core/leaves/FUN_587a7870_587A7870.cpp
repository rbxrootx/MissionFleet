// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A7870 .. +0x2E0 bytes.
extern "C" __declspec(naked) void FUN_587a7870_587A7870() {
    __asm {
        sub esp, 5ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 58h], eax
        mov eax, dword ptr [esp + 64h]
        push ebx
        mov ebx, dword ptr [esp + 64h]
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 0ch], 0
        test ebx, ebx
        ; Exact mapped bytes 74 1D: je 0x587a78b8
        __asm _emit 0x74
        __asm _emit 0x1d
        push 20h
        lea eax, [esp + 40h]
        push eax
        push ebx
        ; Exact mapped bytes E8 48 FA FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 20h
        lea eax, [esp + 4ch]
        push eax
        push ebx
        ; Exact mapped bytes E8 FB 7C FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        push 0
        push 0
        push ebx
        ; Exact mapped bytes E8 6E 20 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x587a78db
        __asm _emit 0x74
        __asm _emit 0x12
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 58h]
        xor ecx, esp
        ; Exact mapped bytes E8 79 97 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x97
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 5ch
        ret
        movzx ecx, byte ptr [esp + 3ch]
        movzx eax, byte ptr [esp + 3dh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 3eh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 3fh]
        shl ecx, 8
        add ecx, eax
        ; Exact mapped bytes 79 10: jns 0x587a7910
        __asm _emit 0x79
        __asm _emit 0x10
        mov eax, ecx
        neg eax
        ; Exact mapped bytes 79 0A: jns 0x587a7910
        __asm _emit 0x79
        __asm _emit 0x0a
        mov dword ptr [esp + 0ch], 1
        xor ecx, ecx
        movzx edx, byte ptr [esp + 40h]
        movzx eax, byte ptr [esp + 41h]
        shl edx, 8
        add edx, eax
        mov dword ptr [esp + 30h], ecx
        movzx eax, byte ptr [esp + 42h]
        shl edx, 8
        add edx, eax
        movzx eax, byte ptr [esp + 43h]
        shl edx, 8
        add edx, eax
        ; Exact mapped bytes 79 10: jns 0x587a7949
        __asm _emit 0x79
        __asm _emit 0x10
        mov eax, edx
        neg eax
        ; Exact mapped bytes 79 0A: jns 0x587a7949
        __asm _emit 0x79
        __asm _emit 0x0a
        mov dword ptr [esp + 0ch], 1
        xor edx, edx
        movzx eax, byte ptr [esp + 45h]
        push esi
        movzx esi, byte ptr [esp + 48h]
        shl esi, 8
        add esi, eax
        mov dword ptr [esp + 38h], edx
        movzx eax, byte ptr [esp + 4ah]
        shl esi, 8
        add esi, eax
        movzx eax, byte ptr [esp + 4bh]
        shl esi, 8
        add esi, eax
        ; Exact mapped bytes 79 10: jns 0x587a7983
        __asm _emit 0x79
        __asm _emit 0x10
        mov eax, esi
        neg eax
        ; Exact mapped bytes 79 0A: jns 0x587a7983
        __asm _emit 0x79
        __asm _emit 0x0a
        mov dword ptr [esp + 10h], 1
        xor esi, esi
        movzx eax, byte ptr [esp + 4dh]
        push edi
        movzx edi, byte ptr [esp + 50h]
        shl edi, 8
        add edi, eax
        mov dword ptr [esp + 20h], esi
        movzx eax, byte ptr [esp + 52h]
        shl edi, 8
        add edi, eax
        movzx eax, byte ptr [esp + 53h]
        shl edi, 8
        add edi, eax
        ; Exact mapped bytes 79 10: jns 0x587a79bd
        __asm _emit 0x79
        __asm _emit 0x10
        mov eax, edi
        neg eax
        ; Exact mapped bytes 79 0A: jns 0x587a79bd
        __asm _emit 0x79
        __asm _emit 0x0a
        mov dword ptr [esp + 14h], 1
        xor edi, edi
        movzx ebx, byte ptr [esp + 54h]
        movzx eax, byte ptr [esp + 55h]
        shl ebx, 8
        add ebx, eax
        mov dword ptr [esp + 24h], edi
        movzx eax, byte ptr [esp + 56h]
        shl ebx, 8
        add ebx, eax
        movzx eax, byte ptr [esp + 57h]
        shl ebx, 8
        add ebx, eax
        ; Exact mapped bytes 79 10: jns 0x587a79f6
        __asm _emit 0x79
        __asm _emit 0x10
        mov eax, ebx
        neg eax
        ; Exact mapped bytes 79 0A: jns 0x587a79f6
        __asm _emit 0x79
        __asm _emit 0x0a
        mov dword ptr [esp + 14h], 1
        xor ebx, ebx
        movzx eax, byte ptr [esp + 59h]
        push ebp
        movzx ebp, byte ptr [esp + 5ch]
        shl ebp, 8
        add ebp, eax
        mov dword ptr [esp + 2ch], ebx
        movzx eax, byte ptr [esp + 5eh]
        shl ebp, 8
        add ebp, eax
        movzx eax, byte ptr [esp + 5fh]
        shl ebp, 8
        add ebp, eax
        ; Exact mapped bytes 79 10: jns 0x587a7a30
        __asm _emit 0x79
        __asm _emit 0x10
        mov eax, ebp
        neg eax
        ; Exact mapped bytes 79 0A: jns 0x587a7a30
        __asm _emit 0x79
        __asm _emit 0x0a
        mov dword ptr [esp + 18h], 1
        xor ebp, ebp
        movzx eax, byte ptr [esp + 60h]
        shl eax, 8
        mov dword ptr [esp + 14h], eax
        movzx eax, byte ptr [esp + 61h]
        add dword ptr [esp + 14h], eax
        shl dword ptr [esp + 14h], 8
        movzx eax, byte ptr [esp + 62h]
        add dword ptr [esp + 14h], eax
        movzx eax, byte ptr [esp + 63h]
        shl dword ptr [esp + 14h], 8
        add dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [esp + 30h], ebp
        ; Exact mapped bytes 79 18: jns 0x587a7a83
        __asm _emit 0x79
        __asm _emit 0x18
        neg eax
        ; Exact mapped bytes 78 06: js 0x587a7a75
        __asm _emit 0x78
        __asm _emit 0x06
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes EB 0A: jmp 0x587a7a7f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esp + 18h], 1
        xor eax, eax
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 34h], eax
        movzx eax, byte ptr [esp + 64h]
        shl eax, 8
        mov dword ptr [esp + 10h], eax
        movzx eax, byte ptr [esp + 65h]
        add dword ptr [esp + 10h], eax
        shl dword ptr [esp + 10h], 8
        movzx eax, byte ptr [esp + 66h]
        add dword ptr [esp + 10h], eax
        movzx eax, byte ptr [esp + 67h]
        shl dword ptr [esp + 10h], 8
        add dword ptr [esp + 10h], eax
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 79 08: jns 0x587a7ac6
        __asm _emit 0x79
        __asm _emit 0x08
        neg eax
        ; Exact mapped bytes 78 67: js 0x587a7b29
        __asm _emit 0x78
        __asm _emit 0x67
        mov eax, dword ptr [esp + 10h]
        cmp dword ptr [esp + 18h], 0
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 75 58: jne 0x587a7b29
        __asm _emit 0x75
        __asm _emit 0x58
        push eax
        push dword ptr [esp + 18h]
        push ebp
        push ebx
        push edi
        push esi
        mov esi, dword ptr [esp + 34h]
        push edx
        push ecx
        push dword ptr [esp + 40h]
        push esi
        ; Exact mapped bytes E8 06 94 FF FF: call 0x587a0ef0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 28h
        test dword ptr [esi + 100h], 10000h
        ; Exact mapped bytes 75 18: jne 0x587a7b11
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 0F 10 44 24 24: movups xmm0, xmmword ptr [esp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 0F 11 86 88 01 00 00: movups xmmword ptr [esi + 0x188], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 44 24 34: movups xmm0, xmmword ptr [esp + 0x34]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 0F 11 86 98 01 00 00: movups xmmword ptr [esi + 0x198], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        mov eax, 3
        pop ebx
        mov ecx, dword ptr [esp + 58h]
        xor ecx, esp
        ; Exact mapped bytes E8 2B 95 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 5ch
        ret
        mov esi, dword ptr [esp + 1ch]
        push 588b974ch
        push esi
        ; Exact mapped bytes E8 48 71 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 70h]
        add esp, 8
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 04 95 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 5ch
        ret
    }
}
