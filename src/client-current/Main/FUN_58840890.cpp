// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58840890 .. +0xE8B bytes.
extern "C" __declspec(naked) void FUN_58840890() {
    __asm {
        mov eax, dword ptr [esp + 8]
        sub esp, 30h
        push ebx
        push ebp
        push esi
        mov ebx, 2
        push edi
        mov esi, ecx
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 DC 0B 00 00: jne 0x58841486
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 44h]
        cmp ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 75 5A: jne 0x5884090d
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 5
        ; Exact mapped bytes 74 2B: je 0x588408f4
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 4
        ; Exact mapped bytes 74 17: je 0x588408f4
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        test dl, 1fh
        ; Exact mapped bytes 0F 85 1B 0E 00 00: jne 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x58840a16
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0f0h], 1
        ; Exact mapped bytes 75 70: jne 0x58840992
        __asm _emit 0x75
        __asm _emit 0x70
        mov ecx, dword ptr [esi + 0a0h]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 7E 61: jle 0x58840992
        __asm _emit 0x7e
        __asm _emit 0x61
        ; Exact mapped bytes E8 8A 78 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 7E 57: jle 0x58840992
        __asm _emit 0x7e
        __asm _emit 0x57
        mov eax, dword ptr [esi + 0f0h]
        mov ecx, dword ptr [esi + 0a8h]
        push eax
        ; Exact mapped bytes E8 63 95 F1 FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x95
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a4h]
        push eax
        ; Exact mapped bytes E8 57 95 F1 FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x95
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        push eax
        ; Exact mapped bytes E8 4B 95 F1 FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x95
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0dch]
        push eax
        ; Exact mapped bytes E8 7F 94 F4 FF: call 0x58789df0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x94
        __asm _emit 0xf4
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 0F 84 95 0D 00 00: je 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 AA 9A F7 FF: call 0x587ba430
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9a
        __asm _emit 0xf7
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 0f0h], ebx
        ; Exact mapped bytes 0F 85 71 0D 00 00: jne 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 0F 8E 5E 0D 00 00: jle 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0A 78 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 8E 50 0D 00 00: jle 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f0h]
        push ecx
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 DF 94 F1 FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x94
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0bch]
        push eax
        ; Exact mapped bytes E8 D3 94 F1 FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x94
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0b8h]
        push eax
        ; Exact mapped bytes E8 C7 94 F1 FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x94
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0dch]
        push eax
        ; Exact mapped bytes E8 FB 93 F4 FF: call 0x58789df0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x93
        __asm _emit 0xf4
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 0F 84 11 0D 00 00: je 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 26 9A F7 FF: call 0x587ba430
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9a
        __asm _emit 0xf7
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 0F 85 38 01 00 00: jne 0x58840b5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 1
        cmp dword ptr [esi + 0f0h], edi
        ; Exact mapped bytes 75 0D: jne 0x58840a3c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, esi
        mov dword ptr [esi + 110h], edi
        ; Exact mapped bytes E8 F4 E8 FF FF: call 0x5883f330
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esi + 110h]
        lea edx, [eax + eax*2]
        lea ecx, [esp + 10h]
        lea eax, [edx*4 - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 1ch], 0ch
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes E8 76 99 F7 FF: call 0x587ba3f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x99
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0cch]
        mov dword ptr [esi + 0f0h], ebx
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        mov ebx, 0fh
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ach]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, dword ptr [esi + 9ch]
        mov eax, edx
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 0F 85 44 01 00 00: jne 0x58840caa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 1
        cmp dword ptr [esi + 0f0h], ebx
        ; Exact mapped bytes 75 0D: jne 0x58840b80
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, esi
        mov dword ptr [esi + 110h], edi
        ; Exact mapped bytes E8 B0 E7 FF FF: call 0x5883f330
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [esi + 110h]
        lea ecx, [eax + eax*2]
        lea edx, [ecx*4 - 0ch]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [esp + 1ch]
        push eax
        mov dword ptr [esp + 28h], 0ch
        mov dword ptr [esp + 24h], edx
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes E8 2E 98 F7 FF: call 0x587ba3f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x98
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0cch]
        mov ebx, 0fh
        push ebx
        mov dword ptr [esi + 0f0h], edi
        ; Exact mapped bytes E8 E7 09 EF FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d0h]
        push 0
        ; Exact mapped bytes E8 DA 09 EF FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d4h]
        push 0
        ; Exact mapped bytes E8 CD 09 EF FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ach]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 9ch]
        pop edi
        mov edx, ecx
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 75 13: jne 0x58840cc5
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        ; Exact mapped bytes E8 A7 E6 FF FF: call 0x5883f360
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 75 13: jne 0x58840ce0
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        ; Exact mapped bytes E8 3C E7 FF FF: call 0x5883f410
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 98h]
        ; Exact mapped bytes 0F 85 16 02 00 00: jne 0x58840f02
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f0h]
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 00 01 00 00: jne 0x58840dfa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes E8 BB 74 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 8C 75 04 00 00: jl 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0f8h], 0
        ; Exact mapped bytes 75 15: jne 0x58840d2d
        __asm _emit 0x75
        __asm _emit 0x15
        test edi, edi
        ; Exact mapped bytes 0F 8E 64 04 00 00: jle 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0f8h], 0
        ; Exact mapped bytes 0F 85 57 04 00 00: jne 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [esi + 0ach]
        mov ebx, 3
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 B0 7A 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebp, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F0: jne 0x58840d38
        __asm _emit 0x75
        __asm _emit 0xf0
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 9D 7A 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 0f8h], ebx
        ; Exact mapped bytes 74 08: je 0x58840d63
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esi + 0f8h], ebx
        ; Exact mapped bytes EB 01: jmp 0x58840d64
        __asm _emit 0xeb
        __asm _emit 0x01
        dec edi
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 44 DD FF FF: call 0x5883eab0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        lea ebx, [esi + 0b8h]
        mov dword ptr [esp + 44h], 3
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push edi
        ; Exact mapped bytes E8 A8 7A 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebx, 4
        sub dword ptr [esp + 44h], 1
        ; Exact mapped bytes 75 EE: jne 0x58840d80
        __asm _emit 0x75
        __asm _emit 0xee
        mov ecx, dword ptr [esi + 0ach]
        push 999999h
        push 0
        lea eax, [ebp + 2d2h]
        push eax
        ; Exact mapped bytes E8 25 7B 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        push 999999h
        push 0
        lea ecx, [ebp + 4]
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 0F 7B 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 999999h
        push 0
        lea edx, [ebp + 2b2h]
        push edx
        ; Exact mapped bytes E8 F6 7A 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebp, 9ah
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 F8 E2 FF FF: call 0x5883f0e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 114h], edi
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 7D 03 00 00: jne 0x58841180
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 B2 73 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 8C 6C 03 00 00: jl 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0f8h], 0
        ; Exact mapped bytes 75 15: jne 0x58840e36
        __asm _emit 0x75
        __asm _emit 0x15
        test edi, edi
        ; Exact mapped bytes 0F 8E 5B 03 00 00: jle 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0f8h], 0
        ; Exact mapped bytes 0F 85 4E 03 00 00: jne 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esi + 0ach]
        mov ebp, 3
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 A8 79 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebx, 4
        sub ebp, 1
        ; Exact mapped bytes 75 F1: jne 0x58840e41
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 95 79 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 0f8h], ebp
        ; Exact mapped bytes 74 08: je 0x58840e6b
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esi + 0f8h], ebp
        ; Exact mapped bytes EB 01: jmp 0x58840e6c
        __asm _emit 0xeb
        __asm _emit 0x01
        dec edi
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 3C DC FF FF: call 0x5883eab0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        lea ebp, [esi + 0a0h]
        mov dword ptr [esp + 44h], 3
        mov ecx, dword ptr [ebp]
        push edi
        ; Exact mapped bytes E8 A3 79 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebp, 4
        sub dword ptr [esp + 44h], 1
        ; Exact mapped bytes 75 ED: jne 0x58840e84
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, dword ptr [esi + 0ach]
        push 999999h
        push 0
        lea eax, [ebx + 29ah]
        push eax
        ; Exact mapped bytes E8 20 7A 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        push 999999h
        push 0
        lea ecx, [ebx + 4]
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 0A 7A 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 999999h
        push 0
        lea edx, [ebx + 2b2h]
        push edx
        ; Exact mapped bytes E8 F1 79 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        lea eax, [ebx + 9ah]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F3 E1 FF FF: call 0x5883f0e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [ebx + 30ah], 4eh
        ; Exact mapped bytes 0F 85 8A 02 00 00: jne 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push ecx
        ; Exact mapped bytes E9 27 02 00 00: jmp 0x58841129
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 0F 85 88 02 00 00: jne 0x58841196
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f0h]
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x58841021
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes E8 99 72 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0b8h]
        mov edi, eax
        mov eax, dword ptr [edx + 88h]
        cmp edi, eax
        ; Exact mapped bytes 7D 09: jge 0x58840f42
        __asm _emit 0x7d
        __asm _emit 0x09
        cmp dword ptr [esi + 0f8h], 0
        ; Exact mapped bytes 75 16: jne 0x58840f58
        __asm _emit 0x75
        __asm _emit 0x16
        dec eax
        cmp edi, eax
        ; Exact mapped bytes 0F 8D 39 02 00 00: jge 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0f8h], 0
        ; Exact mapped bytes 0F 85 2C 02 00 00: jne 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [esi + 0ach]
        mov ebx, 3
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 85 78 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebp, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F0: jne 0x58840f63
        __asm _emit 0x75
        __asm _emit 0xf0
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 72 78 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 0f8h], ebx
        ; Exact mapped bytes 74 08: je 0x58840f8e
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esi + 0f8h], ebx
        ; Exact mapped bytes EB 01: jmp 0x58840f8f
        __asm _emit 0xeb
        __asm _emit 0x01
        inc edi
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 19 DB FF FF: call 0x5883eab0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        lea ebx, [esi + 0b8h]
        mov dword ptr [esp + 44h], 3
        mov ecx, dword ptr [ebx]
        push edi
        ; Exact mapped bytes E8 81 78 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebx, 4
        sub dword ptr [esp + 44h], 1
        ; Exact mapped bytes 75 EE: jne 0x58840fa7
        __asm _emit 0x75
        __asm _emit 0xee
        mov ecx, dword ptr [esi + 0ach]
        push 999999h
        push 0
        lea eax, [ebp + 2d2h]
        push eax
        ; Exact mapped bytes E8 FE 78 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        push 999999h
        push 0
        lea ecx, [ebp + 4]
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 E8 78 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 999999h
        push 0
        lea edx, [ebp + 2b2h]
        push edx
        ; Exact mapped bytes E8 CF 78 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebp, 9ah
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 D1 E0 FF FF: call 0x5883f0e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 114h], edi
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x58841180
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 8B 71 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esi + 0a0h]
        mov eax, dword ptr [eax + 88h]
        cmp edi, eax
        ; Exact mapped bytes 7D 09: jge 0x58841050
        __asm _emit 0x7d
        __asm _emit 0x09
        cmp dword ptr [esi + 0f8h], 0
        ; Exact mapped bytes 75 16: jne 0x58841066
        __asm _emit 0x75
        __asm _emit 0x16
        dec eax
        cmp edi, eax
        ; Exact mapped bytes 0F 8D 2B 01 00 00: jge 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0f8h], 0
        ; Exact mapped bytes 0F 85 1E 01 00 00: jne 0x58841184
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esi + 0ach]
        mov ebp, 3
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 78 77 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebx, 4
        sub ebp, 1
        ; Exact mapped bytes 75 F1: jne 0x58841071
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 65 77 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 0f8h], ebp
        ; Exact mapped bytes 74 08: je 0x5884109b
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esi + 0f8h], ebp
        ; Exact mapped bytes EB 01: jmp 0x5884109c
        __asm _emit 0xeb
        __asm _emit 0x01
        inc edi
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 0C DA FF FF: call 0x5883eab0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        lea ebp, [esi + 0a0h]
        mov dword ptr [esp + 44h], 3
        mov ecx, dword ptr [ebp]
        push edi
        ; Exact mapped bytes E8 73 77 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebp, 4
        sub dword ptr [esp + 44h], 1
        ; Exact mapped bytes 75 ED: jne 0x588410b4
        __asm _emit 0x75
        __asm _emit 0xed
        push 999999h
        push 0
        lea ecx, [ebx + 29ah]
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        ; Exact mapped bytes E8 F0 77 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 999999h
        push 0
        lea edx, [ebx + 4]
        push edx
        ; Exact mapped bytes E8 DA 77 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 999999h
        push 0
        lea eax, [ebx + 2b2h]
        push eax
        ; Exact mapped bytes E8 C1 77 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [ebx + 9ah]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 C3 DF FF FF: call 0x5883f0e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [ebx + 30ah], 4eh
        ; Exact mapped bytes 75 5E: jne 0x58841184
        __asm _emit 0x75
        __asm _emit 0x5e
        mov edx, dword ptr [ebx]
        push edx
        mov byte ptr [ebx + 30ah], 59h
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 93 F7 FF: call 0x587ba450
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        push 999999h
        push edi
        ; Exact mapped bytes E8 64 71 0C 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 999999h
        push edi
        ; Exact mapped bytes E8 53 71 0C 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 999999h
        push edi
        ; Exact mapped bytes E8 42 71 0C 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [esi + 114h], edi
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, dword ptr [esp + 44h]
        mov dword ptr [esi + 114h], edi
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 8ch]
        ; Exact mapped bytes 75 52: jne 0x588411f0
        __asm _emit 0x75
        __asm _emit 0x52
        mov eax, dword ptr [esi + 0f0h]
        cmp eax, ebx
        ; Exact mapped bytes 75 0F: jne 0x588411b7
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 0f4h]
        lea eax, [esi + 0b8h]
        push ecx
        ; Exact mapped bytes EB 12: jmp 0x588411c9
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp eax, 1
        ; Exact mapped bytes 75 17: jne 0x588411d3
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [esi + 0f4h]
        lea eax, [esi + 0a0h]
        push edx
        mov ecx, dword ptr [eax]
        push 3
        push eax
        ; Exact mapped bytes E8 CD 91 F4 FF: call 0x5878a3a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        cmp dword ptr [esi + 0f4h], eax
        pop edi
        sete al
        mov dword ptr [esi + 0f4h], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 90h]
        ; Exact mapped bytes 75 5F: jne 0x58841257
        __asm _emit 0x75
        __asm _emit 0x5f
        mov eax, dword ptr [esi + 0f0h]
        cmp eax, ebx
        ; Exact mapped bytes 75 18: jne 0x5884121a
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 0f4h]
        push ecx
        mov ecx, dword ptr [esi + 0bch]
        push 3
        lea edx, [esi + 0b8h]
        push edx
        ; Exact mapped bytes EB 1B: jmp 0x58841235
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x5884123a
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 0f4h]
        push eax
        lea ecx, [esi + 0a0h]
        push 3
        push ecx
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes E8 66 91 F4 FF: call 0x5878a3a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0xff
        xor edx, edx
        cmp dword ptr [esi + 0f4h], edx
        pop edi
        sete dl
        xor eax, eax
        mov dword ptr [esi + 0f4h], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 94h]
        ; Exact mapped bytes 75 5F: jne 0x588412be
        __asm _emit 0x75
        __asm _emit 0x5f
        mov eax, dword ptr [esi + 0f0h]
        cmp eax, ebx
        ; Exact mapped bytes 75 18: jne 0x58841281
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [esi + 0f4h]
        push eax
        lea ecx, [esi + 0b8h]
        push 3
        push ecx
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes EB 1B: jmp 0x5884129c
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x588412a1
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [esi + 0f4h]
        mov ecx, dword ptr [esi + 0a8h]
        push edx
        push 3
        lea eax, [esi + 0a0h]
        push eax
        ; Exact mapped bytes E8 FF 90 F4 FF: call 0x5878a3a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        xor ecx, ecx
        cmp dword ptr [esi + 0f4h], ecx
        pop edi
        sete cl
        xor eax, eax
        mov dword ptr [esi + 0f4h], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 100h]
        ; Exact mapped bytes 75 52: jne 0x58841318
        __asm _emit 0x75
        __asm _emit 0x52
        mov eax, dword ptr [esi + 110h]
        cmp eax, 1
        ; Exact mapped bytes 0F 8E 3A 04 00 00: jle 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x3a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        dec eax
        cmp dword ptr [esi + 0f0h], 1
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 2ch], ecx
        mov dword ptr [esp + 30h], ecx
        setne cl
        lea edx, [eax + eax*2]
        mov dword ptr [esi + 110h], eax
        lea eax, [edx*4 - 0ch]
        lea edx, [esp + 28h]
        mov dword ptr [esp + 30h], 0ch
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 28h], ecx
        push edx
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x588413aa
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 0fch]
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x588413c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0f0h]
        cmp ebp, 1
        ; Exact mapped bytes 75 0E: jne 0x5884133d
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [eax + 0d24h]
        ; Exact mapped bytes EB 0D: jmp 0x5884134a
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [ecx + 0d26h]
        cwde
        cdq
        mov ecx, 0ch
        idiv ecx
        mov ecx, dword ptr [esi + 110h]
        mov edi, eax
        xor eax, eax
        test edx, edx
        setne al
        add eax, edi
        cmp ecx, eax
        ; Exact mapped bytes 0F 8D A3 03 00 00: jge 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + 1]
        xor ecx, ecx
        mov dword ptr [esp + 34h], ecx
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 3ch], ecx
        lea ecx, [eax + eax*2]
        mov dword ptr [esi + 110h], eax
        xor eax, eax
        cmp ebp, 1
        setne al
        lea edx, [ecx*4 - 0ch]
        lea ecx, [esp + 34h]
        mov dword ptr [esp + 3ch], 0ch
        mov dword ptr [esp + 38h], edx
        push ecx
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 90 F7 FF: call 0x587ba3f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 74 DF FF FF: call 0x5883f330
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f0h]
        cmp eax, ebx
        ; Exact mapped bytes 75 54: jne 0x58841426
        __asm _emit 0x75
        __asm _emit 0x54
        lea ebp, [esi + 0b8h]
        xor edi, edi
        mov eax, ebp
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 09: je 0x588413ed
        __asm _emit 0x74
        __asm _emit 0x09
        inc edi
        add eax, 4
        cmp edi, 3
        ; Exact mapped bytes 7C F3: jl 0x588413e0
        __asm _emit 0x7c
        __asm _emit 0xf3
        cmp edi, 3
        ; Exact mapped bytes 0F 84 19 03 00 00: je 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp edi, ebx
        ; Exact mapped bytes 74 15: je 0x58841411
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + edi*4 + 0b8h]
        ; Exact mapped bytes E8 B8 6D 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 1F 74 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        inc ebx
        add ebp, 4
        cmp ebx, 3
        ; Exact mapped bytes 7C DE: jl 0x588413f8
        __asm _emit 0x7c
        __asm _emit 0xde
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 E0 02 00 00: jne 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [esi + 0a0h]
        xor edi, edi
        mov eax, ebp
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 09: je 0x5884144d
        __asm _emit 0x74
        __asm _emit 0x09
        inc edi
        add eax, 4
        cmp edi, 3
        ; Exact mapped bytes 7C F3: jl 0x58841440
        __asm _emit 0x7c
        __asm _emit 0xf3
        cmp edi, 3
        ; Exact mapped bytes 0F 84 B9 02 00 00: je 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp edi, ebx
        ; Exact mapped bytes 74 15: je 0x58841471
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + edi*4 + 0a0h]
        ; Exact mapped bytes E8 58 6D 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 BF 73 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        inc ebx
        add ebp, 4
        cmp ebx, 3
        ; Exact mapped bytes 7C DE: jl 0x58841458
        __asm _emit 0x7c
        __asm _emit 0xde
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0f764h
        ; Exact mapped bytes 0F 85 7E 02 00 00: jne 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f0h]
        cmp eax, ebx
        ; Exact mapped bytes 75 41: jne 0x588414dc
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [esp + 44h]
        lea ecx, [esi + 0b8h]
        xor ebx, ebx
        mov eax, ecx
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 74 15: je 0x588414c9
        __asm _emit 0x74
        __asm _emit 0x15
        inc ebx
        add eax, 4
        cmp ebx, 3
        ; Exact mapped bytes 7C F3: jl 0x588414b0
        __asm _emit 0x7c
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 F0 6C 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esi + 114h], eax
        ; Exact mapped bytes EB 35: jmp 0x58841511
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp eax, 1
        ; Exact mapped bytes 75 28: jne 0x58841509
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [esp + 44h]
        lea ecx, [esi + 0a0h]
        xor ebx, ebx
        mov eax, ecx
        nop
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 74 D5: je 0x588414c9
        __asm _emit 0x74
        __asm _emit 0xd5
        inc ebx
        add eax, 4
        cmp ebx, 3
        ; Exact mapped bytes 7C F3: jl 0x588414f0
        __asm _emit 0x7c
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 44h]
        cmp ebx, 3
        ; Exact mapped bytes 0F 8D F5 01 00 00: jge 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C ED 01 00 00: jl 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 86 D5 FF FF: call 0x5883eab0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        test ebp, ebp
        ; Exact mapped bytes 0F 84 DB 01 00 00: je 0x5884170f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 0ach]
        mov ebx, edi
        mov dword ptr [esp + 48h], 3
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 A5 72 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebx, 4
        sub dword ptr [esp + 48h], 1
        ; Exact mapped bytes 75 EF: jne 0x58841544
        __asm _emit 0x75
        __asm _emit 0xef
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 90 72 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov ebx, 0fh
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f0h]
        cmp eax, 2
        ; Exact mapped bytes 75 57: jne 0x588415db
        __asm _emit 0x75
        __asm _emit 0x57
        mov ecx, dword ptr [edi]
        push 999999h
        push 0
        lea edx, [ebp + 2d2h]
        push edx
        ; Exact mapped bytes E8 37 73 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 999999h
        push 0
        lea eax, [ebp + 4]
        push eax
        ; Exact mapped bytes E8 21 73 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        push 999999h
        push 0
        lea ecx, [ebp + 2b2h]
        push ecx
        mov ecx, dword ptr [esi + 0b4h]
        ; Exact mapped bytes E8 08 73 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        add ebp, 9ah
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 0A DB FF FF: call 0x5883f0e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x5884168c
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x5884168c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 999999h
        push 0
        lea edx, [ebp + 29ah]
        push edx
        ; Exact mapped bytes E8 D7 72 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 999999h
        push 0
        lea eax, [ebp + 4]
        push eax
        ; Exact mapped bytes E8 C1 72 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x00
        push 999999h
        push 0
        lea ecx, [ebp + 2b2h]
        push ecx
        mov ecx, dword ptr [esi + 0b4h]
        ; Exact mapped bytes E8 A8 72 0C 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x00
        lea edx, [ebp + 9ah]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 AA DA FF FF: call 0x5883f0e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [ebp + 30ah], 4eh
        ; Exact mapped bytes 75 4D: jne 0x5884168c
        __asm _emit 0x75
        __asm _emit 0x4d
        mov eax, dword ptr [ebp]
        mov byte ptr [ebp + 30ah], 59h
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 FB 8D F7 FF: call 0x587ba450
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 44h]
        mov ecx, dword ptr [esi + 0a0h]
        push 999999h
        push ebp
        ; Exact mapped bytes E8 46 6C 0C 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 999999h
        push ebp
        ; Exact mapped bytes E8 35 6C 0C 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 999999h
        push ebp
        ; Exact mapped bytes E8 24 6C 0C 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d4h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ebp, 3
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 71 71 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi - 0ch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 D4: jne 0x588416b6
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 30h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
