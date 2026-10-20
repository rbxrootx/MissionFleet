// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3750 .. +0x27A bytes.
extern "C" __declspec(naked) void FUN_587a3750_587A3750() {
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
        mov eax, dword ptr [esp + 1ch]
        push esi
        mov esi, dword ptr [esp + 18h]
        cmp eax, 3
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x587a382b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 144h]
        mov edx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 09: jne 0x587a3789
        __asm _emit 0x75
        __asm _emit 0x09
        test byte ptr [esi + 284h], 1
        ; Exact mapped bytes 75 26: jne 0x587a37af
        __asm _emit 0x75
        __asm _emit 0x26
        movzx eax, byte ptr [edx]
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 72 1E: jb 0x587a37af
        __asm _emit 0x72
        __asm _emit 0x1e
        push 588b8df8h
        push esi
        ; Exact mapped bytes E8 94 BC FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 A5 D8 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        mov al, byte ptr [edx]
        push 1
        push 624b4744h
        push esi
        mov byte ptr [esp + 14h], al
        ; Exact mapped bytes E8 9E 05 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea eax, [esp + 18h]
        push eax
        push esi
        ; Exact mapped bytes E8 F1 30 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea eax, [esp + 24h]
        push eax
        push esi
        ; Exact mapped bytes E8 D4 BD FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbd
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
        ; Exact mapped bytes E8 A8 30 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 29 D8 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        test al, 2
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x587a3910
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
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
        ; Exact mapped bytes 75 25: jne 0x587a3899
        __asm _emit 0x75
        __asm _emit 0x25
        or dl, bl
        or dl, cl
        ; Exact mapped bytes 74 1F: je 0x587a3899
        __asm _emit 0x74
        __asm _emit 0x1f
        push 588b8e20h
        push esi
        ; Exact mapped bytes E8 AB BB FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop ebx
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 BB D7 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        push 6
        push 624b4744h
        push esi
        ; Exact mapped bytes E8 BA 04 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        lea eax, [esp + 1ch]
        push eax
        push esi
        ; Exact mapped bytes E8 0D 30 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        lea eax, [esp + 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 F0 BC FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbc
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
        ; Exact mapped bytes E8 C4 2F 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        pop ebx
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 44 D7 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        mov eax, dword ptr [esp + 1ch]
        mov cl, byte ptr [esi + 154h]
        movzx edx, word ptr [eax + 8]
        mov eax, 1
        shl eax, cl
        cmp edx, eax
        ; Exact mapped bytes 7C 1E: jl 0x587a3947
        __asm _emit 0x7c
        __asm _emit 0x1e
        push 588b8e60h
        push esi
        ; Exact mapped bytes E8 FC BA FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop esi
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 0D D7 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        push 2
        mov eax, edx
        mov byte ptr [esp + 0dh], dl
        shr eax, 8
        push 624b4744h
        push esi
        mov byte ptr [esp + 14h], al
        ; Exact mapped bytes E8 FF 03 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        lea eax, [esp + 18h]
        push eax
        push esi
        ; Exact mapped bytes E8 52 2F 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        lea eax, [esp + 24h]
        push eax
        push esi
        ; Exact mapped bytes E8 35 BC FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xbc
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
        ; Exact mapped bytes E8 09 2F 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 40h]
        add esp, 30h
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 8A D6 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
