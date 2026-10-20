// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58894B40 .. +0x445 bytes.
extern "C" __declspec(naked) void FUN_58894b40() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        push edi
        mov esi, ecx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 C7 03 00 00: jne 0x58894f18
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 FA F6 FF: call 0x588045b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edi, dword ptr [esp + 0ch]
        cmp edi, dword ptr [esi + 180h]
        ; Exact mapped bytes 75 4A: jne 0x58894bb2
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        ; Exact mapped bytes 3B 05 9C 45 A2 58: cmp eax, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 24: jne 0x58894b9d
        __asm _emit 0x75
        __asm _emit 0x24
        push 589a0034h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        push 28h
        ; Exact mapped bytes E8 61 6F ED FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6f
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9A 01 ED FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 0
        ; Exact mapped bytes E8 4A 6F ED FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6f
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 43 6E ED FF: call 0x5876b9f0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x58894cd1
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 184h]
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x58894c69
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 188h]
        ; Exact mapped bytes E8 47 F2 EF FF: call 0x58793e10
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf2
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 AD 03 00 00: jne 0x58894f7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 A8 45 A2 58: cmp eax, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 35: jne 0x58894c13
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [esi + 15ch]
        and ecx, 0f00000h
        sub ecx, 100000h
        neg ecx
        sbb ecx, ecx
        and ecx, 0fff00000h
        add ecx, 200000h
        or ecx, 20000h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 52 EC FF FF: call 0x58893860
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x58894cd1
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 9C 45 A2 58: cmp eax, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 32: jne 0x58894c4d
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 74 12: je 0x58894c3d
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x58894cd1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 18 F5 FF: call 0x587e6450
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x58894cd1
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0b4h], 20000h
        mov ecx, esi
        ; Exact mapped bytes 75 07: jne 0x58894c62
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 50 FA FF FF: call 0x588946b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 6F: jmp 0x58894cd1
        __asm _emit 0xeb
        __asm _emit 0x6f
        ; Exact mapped bytes E8 B9 FB FF FF: call 0x58894820
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 68: jmp 0x58894cd1
        __asm _emit 0xeb
        __asm _emit 0x68
        cmp edi, dword ptr [esi + 17ch]
        ; Exact mapped bytes 75 60: jne 0x58894cd1
        __asm _emit 0x75
        __asm _emit 0x60
        cmp dword ptr [esi + 10ch], 0
        ; Exact mapped bytes 74 57: je 0x58894cd1
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [esi + 620h]
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
        ; Exact mapped bytes 74 37: je 0x58894cc4
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [esi + 620h]
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
        ; Exact mapped bytes 74 21: je 0x58894cc4
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [esi + 620h]
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
        cmp al, 2
        ; Exact mapped bytes 75 1A: jne 0x58894cd1
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 620h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes EB 0B: jmp 0x58894ccf
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 620h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp edi, dword ptr [esi + 4b0h]
        ; Exact mapped bytes 75 12: jne 0x58894ceb
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 4c4h]
        ; Exact mapped bytes E8 6C 39 07 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 4b4h]
        ; Exact mapped bytes 75 2E: jne 0x58894d21
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 4c4h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 6C 34 07 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        add edi, -7
        cmp eax, edi
        ; Exact mapped bytes 0F 8D 6F 02 00 00: jge 0x58894f7e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c4h]
        ; Exact mapped bytes E8 D6 39 07 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 4b8h]
        ; Exact mapped bytes 75 24: jne 0x58894d4d
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 4c8h]
        ; Exact mapped bytes E8 1C 39 07 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4cch]
        ; Exact mapped bytes E8 11 39 07 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 9A 81 FF FF: call 0x5888cee0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 4bch]
        ; Exact mapped bytes 75 40: jne 0x58894d95
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 4c8h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 0A 34 07 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        add edi, -7
        cmp eax, edi
        ; Exact mapped bytes 0F 8D 0D 02 00 00: jge 0x58894f7e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c8h]
        ; Exact mapped bytes E8 74 39 07 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4cch]
        ; Exact mapped bytes E8 69 39 07 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 52 81 FF FF: call 0x5888cee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 634h]
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x58894e34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 45 A2 58: mov ecx, dword ptr [0x58a245f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
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
        ; Exact mapped bytes 74 6C: je 0x58894e20
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes A1 F8 45 A2 58: mov eax, dword ptr [0x58a245f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
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
        cmp cl, 4
        ; Exact mapped bytes 74 57: je 0x58894e20
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 15 F8 45 A2 58: mov edx, dword ptr [0x58a245f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
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
        cmp al, 5
        ; Exact mapped bytes 74 43: je 0x58894e20
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D F8 45 A2 58: mov ecx, dword ptr [0x58a245f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
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
        and dl, 1fh
        cmp dl, 1
        ; Exact mapped bytes 74 19: je 0x58894e0c
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes A1 F8 45 A2 58: mov eax, dword ptr [0x58a245f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
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
        cmp cl, 2
        ; Exact mapped bytes 0F 85 72 01 00 00: jne 0x58894f7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 45 A2 58: mov ecx, dword ptr [0x58a245f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 45 A2 58: mov ecx, dword ptr [0x58a245f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 628h]
        ; Exact mapped bytes 75 18: jne 0x58894e54
        __asm _emit 0x75
        __asm _emit 0x18
        xor ecx, ecx
        cmp dword ptr [esi + 63ch], ecx
        pop edi
        sete cl
        xor eax, eax
        mov dword ptr [esi + 63ch], ecx
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 62ch]
        ; Exact mapped bytes 75 18: jne 0x58894e74
        __asm _emit 0x75
        __asm _emit 0x18
        xor edx, edx
        cmp dword ptr [esi + 640h], edx
        pop edi
        sete dl
        xor eax, eax
        mov dword ptr [esi + 640h], edx
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 630h]
        ; Exact mapped bytes 75 18: jne 0x58894e94
        __asm _emit 0x75
        __asm _emit 0x18
        xor eax, eax
        cmp dword ptr [esi + 644h], eax
        pop edi
        sete al
        mov dword ptr [esi + 644h], eax
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c8h]
        cmp edi, ecx
        ; Exact mapped bytes 75 36: jne 0x58894ed4
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes E8 1D 33 07 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x33
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4cch]
        push eax
        ; Exact mapped bytes E8 81 39 07 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c8h]
        ; Exact mapped bytes E8 B6 32 07 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4cch]
        push eax
        ; Exact mapped bytes E8 CA 32 07 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 13 80 FF FF: call 0x5888cee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4cch]
        cmp edi, ecx
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x58894f7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 32 07 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c8h]
        push eax
        ; Exact mapped bytes E8 3D 39 07 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4cch]
        ; Exact mapped bytes E8 72 32 07 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c8h]
        push eax
        ; Exact mapped bytes E8 86 32 07 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 CF 7F FF FF: call 0x5888cee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 4C: jne 0x58894f69
        __asm _emit 0x75
        __asm _emit 0x4c
        mov edi, dword ptr [esp + 0ch]
        cmp edi, dword ptr [esi + 17ch]
        ; Exact mapped bytes 74 55: je 0x58894f7e
        __asm _emit 0x74
        __asm _emit 0x55
        cmp edi, dword ptr [esi + 180h]
        ; Exact mapped bytes 75 07: jne 0x58894f38
        __asm _emit 0x75
        __asm _emit 0x07
        push 589a0020h
        ; Exact mapped bytes EB 0D: jmp 0x58894f45
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp edi, dword ptr [esi + 184h]
        ; Exact mapped bytes 75 3E: jne 0x58894f7e
        __asm _emit 0x75
        __asm _emit 0x3e
        push 5899fff8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        push 32h
        push 0c8h
        push edi
        ; Exact mapped bytes E8 5E D7 EC FF: call 0x587626c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd7
        __asm _emit 0xec
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 10: jne 0x58894f7e
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 D6 EC FF: call 0x58762610
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd6
        __asm _emit 0xec
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
