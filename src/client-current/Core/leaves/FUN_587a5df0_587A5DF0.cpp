// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5DF0 .. +0x237 bytes.
extern "C" __declspec(naked) void FUN_587a5df0_587A5DF0() {
    __asm {
        sub esp, 10h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 0ch], eax
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 18h]
        push esi
        mov esi, dword ptr [esp + 18h]
        cmp eax, 3
        ; Exact mapped bytes 75 51: jne 0x587a5e61
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [esp + 24h]
        test ecx, ecx
        ; Exact mapped bytes 7E 2B: jle 0x587a5e43
        __asm _emit 0x7e
        __asm _emit 0x2b
        movzx eax, word ptr [esi + 144h]
        cmp ecx, eax
        ; Exact mapped bytes 7F 20: jg 0x587a5e43
        __asm _emit 0x7f
        __asm _emit 0x20
        push ecx
        push edx
        push 74524e53h
        push esi
        ; Exact mapped bytes E8 E0 DF FF FF: call 0x587a3e10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 11 B2 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        push 588b8d1ch
        push esi
        ; Exact mapped bytes E8 42 8D FF FF: call 0x5879eb90
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 F3 B1 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        test eax, eax
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x587a5f23
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        mov cl, byte ptr [esi + 154h]
        movzx edx, word ptr [eax + 8]
        mov eax, 1
        shl eax, cl
        cmp edx, eax
        ; Exact mapped bytes 7C 1E: jl 0x587a5ea0
        __asm _emit 0x7c
        __asm _emit 0x1e
        push 588b8d50h
        push esi
        ; Exact mapped bytes E8 03 8D FF FF: call 0x5879eb90
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 B4 B1 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        push 2
        mov eax, edx
        mov byte ptr [esp + 0dh], dl
        shr eax, 8
        push 74524e53h
        push esi
        mov byte ptr [esp + 14h], al
        ; Exact mapped bytes E8 A6 DE FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        lea eax, [esp + 18h]
        push eax
        push esi
        ; Exact mapped bytes E8 F9 09 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        lea eax, [esp + 24h]
        push eax
        push esi
        ; Exact mapped bytes E8 DC 96 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 28h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 29h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 2ah], al
        lea eax, [esp + 28h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 37h], cl
        ; Exact mapped bytes E8 B0 09 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 31 B1 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        cmp eax, 2
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x587a6009
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        push ebx
        movzx eax, word ptr [ecx + 2]
        mov edx, eax
        mov byte ptr [esp + 0dh], al
        movzx eax, word ptr [ecx + 4]
        mov ebx, eax
        mov byte ptr [esp + 0fh], al
        movzx eax, word ptr [ecx + 6]
        mov ecx, eax
        shr edx, 8
        shr ebx, 8
        shr ecx, 8
        cmp byte ptr [esi + 154h], 8
        mov byte ptr [esp + 0ch], dl
        mov byte ptr [esp + 0eh], bl
        mov byte ptr [esp + 10h], cl
        mov byte ptr [esp + 11h], al
        ; Exact mapped bytes 75 25: jne 0x587a5f92
        __asm _emit 0x75
        __asm _emit 0x25
        or cl, dl
        or cl, bl
        ; Exact mapped bytes 74 1F: je 0x587a5f92
        __asm _emit 0x74
        __asm _emit 0x1f
        push 588b8d90h
        push esi
        ; Exact mapped bytes E8 12 8C FF FF: call 0x5879eb90
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop ebx
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 C2 B0 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        push 6
        push 74524e53h
        push esi
        ; Exact mapped bytes E8 C1 DD FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        push 6
        lea eax, [esp + 1ch]
        push eax
        push esi
        ; Exact mapped bytes E8 14 09 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        lea eax, [esp + 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 F7 95 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 2ch], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 2dh], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 2eh], al
        lea eax, [esp + 2ch]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 3bh], cl
        ; Exact mapped bytes E8 CB 08 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        pop ebx
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 4B B0 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        push 588b8dd0h
        push esi
        ; Exact mapped bytes E8 7C 8B FF FF: call 0x5879eb90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
        add esp, 8
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 2D B0 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
