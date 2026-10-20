// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58808AD0 .. +0x76D bytes.
extern "C" __declspec(naked) void FUN_58808ad0() {
    __asm {
        sub esp, 1ch
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 4D 07 00 00: je 0x58809231
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 2ch]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x58808b19
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebp
        ; Exact mapped bytes 74 16: je 0x58808b0e
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0F: je 0x58808b19
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp eax, ebp
        ; Exact mapped bytes 75 EA: jne 0x58808af8
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        push ebx
        cmp eax, 200h
        ; Exact mapped bytes 0F 87 DB 04 00 00: ja 0x58809003
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E8 01 00 00: je 0x58808d16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 85 F0 06 00 00: jne 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        lea eax, [edi - 9]
        cmp eax, 6dh
        ; Exact mapped bytes 0F 87 E1 06 00 00: ja 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 58809254h]
        ; Exact mapped bytes FF 24 95 40 92 80 58: jmp dword ptr [edx*4 + 0x58809240]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x58
        ; Exact mapped bytes A1 D0 45 A2 58: mov eax, dword ptr [0x58a245d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
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
        cmp cl, 5
        ; Exact mapped bytes 8B 0D D0 45 A2 58: mov ecx, dword ptr [0x58a245d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1B: jne 0x58808b8c
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        ; Exact mapped bytes E8 71 C4 FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
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
        cmp dl, 2
        ; Exact mapped bytes 0F 85 89 06 00 00: jne 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D0 45 A2 58: mov ecx, dword ptr [0x58a245d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, esi
        ; Exact mapped bytes E8 3C C4 FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 45 A2 58: mov eax, dword ptr [0x58a245d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
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
        cmp cl, 5
        ; Exact mapped bytes 8B 0D D4 45 A2 58: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 95: je 0x58808b71
        __asm _emit 0x74
        __asm _emit 0x95
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
        cmp dl, 2
        ; Exact mapped bytes 0F 85 39 06 00 00: jne 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D4 45 A2 58: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, esi
        ; Exact mapped bytes E8 EC C3 FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4f4h]
        movzx eax, word ptr [ecx + 19ch]
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 0A: je 0x58808c32
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 F7 05 00 00: jne 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 204h]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 60: je 0x58808c9f
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 5A: je 0x58808c9f
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 54: je 0x58808c9f
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 4E: je 0x58808c9f
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 48: je 0x58808c9f
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 66 83 BE B6 01 00 00 0E: cmp word ptr [esi + 0x1b6], 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0e
        ; Exact mapped bytes 74 3E: je 0x58808c9f
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [esi + 0a0h]
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40000h
        push edx
        push eax
        ; Exact mapped bytes E8 C1 09 FB FF: call 0x587b9640
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 64ch], ebp
        mov ecx, esi
        ; Exact mapped bytes E8 5E C3 FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 174h]
        cmp dword ptr [edx + 0a8h], ebp
        ; Exact mapped bytes 0F 85 78 05 00 00: jne 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        mov ecx, dword ptr [esi + 9ch]
        push 40000h
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 09 FB FF: call 0x587b9640
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, esi
        mov dword ptr [edx + 64ch], ebp
        ; Exact mapped bytes E8 0E C3 FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 174h]
        cmp ecx, ebp
        ; Exact mapped bytes 0F 84 2C 05 00 00: je 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2E DD 09 00: call 0x588a6a30
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E7 C2 FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [esi + 2b8h]
        ; Exact mapped bytes 75 0B: jne 0x58808d31
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [esi + 2bch]
        ; Exact mapped bytes 74 0C: je 0x58808d3d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, esi
        ; Exact mapped bytes E8 78 B8 FF FF: call 0x588045b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esi + 2b8h], eax
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [esi + 2bch], edx
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 0ch]
        mov ebx, 1
        cmp edi, ebp
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x58808e7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 118h]
        mov ecx, dword ptr [eax + 54h]
        mov eax, dword ptr [eax + 50h]
        push ebp
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 4A 53 0D 00: call 0x588de0d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 74 43: je 0x58808dd0
        __asm _emit 0x74
        __asm _emit 0x43
        or eax, 0ffffffffh
        mov dword ptr [esi + 90h], eax
        cmp dword ptr [esi + 94h], eax
        ; Exact mapped bytes 74 26: je 0x58808dc4
        __asm _emit 0x74
        __asm _emit 0x26
        mov dword ptr [esi + 94h], eax
        mov eax, dword ptr [esi + 124h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        test byte ptr [esi + 78h], bl
        ; Exact mapped bytes 74 0C: je 0x58808dc4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 128h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov edi, dword ptr [edi + 78h]
        cmp edi, ebp
        ; Exact mapped bytes 75 A5: jne 0x58808d70
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x58808e7f
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 244h], edi
        movzx eax, word ptr [edi + 350h]
        mov dword ptr [esi + 90h], eax
        cmp dword ptr [esi + 94h], eax
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58808e73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 118h]
        mov ecx, dword ptr [edi + 8]
        sub ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [edi + 4]
        sub edx, dword ptr [eax + 50h]
        push ecx
        mov ecx, dword ptr [esi + 124h]
        push edx
        ; Exact mapped bytes E8 82 A4 0F 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 124h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        test byte ptr [esi + 78h], bl
        ; Exact mapped bytes 74 55: je 0x58808e73
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        movzx edx, word ptr [ecx + 350h]
        cmp edx, dword ptr [esi + 90h]
        ; Exact mapped bytes 74 3E: je 0x58808e73
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4f4h]
        movzx eax, word ptr [ecx + 19ch]
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 05: je 0x58808e51
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 22: jne 0x58808e73
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [esi + 124h]
        mov ecx, dword ptr [esi + 128h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 7A 14 F3 FF: call 0x5873a2e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x14
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 128h]
        push 0fh
        ; Exact mapped bytes E8 4D 87 F2 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [esi + 90h]
        mov dword ptr [esi + 94h], eax
        mov ebp, dword ptr [esi + 80h]
        cmp ebp, dword ptr [esi + 100h]
        ; Exact mapped bytes 0F 85 98 03 00 00: jne 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [eax + 54h]
        add ecx, dword ptr [edi + 4]
        add edx, dword ptr [edi + 8]
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edi, edi
        cmp dword ptr [eax + ebp*4 + 438h], edi
        ; Exact mapped bytes 0F 8E F1 00 00 00: jle 0x58808fae
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 108h]
        mov eax, dword ptr [eax + ebp*4]
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax]
        mov ebx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        add ebp, ebx
        cmp ecx, ebp
        ; Exact mapped bytes 7C 1E: jl 0x58808f00
        __asm _emit 0x7c
        __asm _emit 0x1e
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ebx
        cmp ecx, ebp
        ; Exact mapped bytes 7D 15: jge 0x58808f00
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ebx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        add ebp, ebx
        cmp edx, ebp
        ; Exact mapped bytes 7C 09: jl 0x58808f00
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [eax + 20h]
        add eax, ebx
        cmp edx, eax
        ; Exact mapped bytes 7C 20: jl 0x58808f20
        __asm _emit 0x7c
        __asm _emit 0x20
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 8B 1D 9C 45 A2 58: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add dword ptr [esp + 30h], 4
        inc edi
        cmp edi, dword ptr [ebx + eax*4 + 438h]
        ; Exact mapped bytes 7C B5: jl 0x58808ed0
        __asm _emit 0x7c
        __asm _emit 0xb5
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58808fae
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 10ch]
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x58808fae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, 1dh
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 14: jle 0x58808f52
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x58808f52
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes EB 02: jmp 0x58808f54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 30 EA 0F 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xea
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 14: jle 0x58808f81
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x58808f81
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes EB 02: jmp 0x58808f83
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 80h]
        mov edx, dword ptr [esi + 108h]
        mov dword ptr [esi + 10ch], edi
        mov eax, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [eax + edi*4]
        push 100h
        ; Exact mapped bytes E8 32 9D 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp edi, dword ptr [ecx + eax*4 + 438h]
        ; Exact mapped bytes 0F 85 62 02 00 00: jne 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10ch]
        cmp ecx, -1
        ; Exact mapped bytes 74 13: je 0x58808fe5
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [esi + 108h]
        mov eax, dword ptr [edx + eax*4]
        mov ecx, dword ptr [eax + ecx*4]
        push 64h
        ; Exact mapped bytes E8 FB 9C 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esi + 10ch], 0ffffffffh
        ; Exact mapped bytes E8 FA BF FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        sub eax, 201h
        cmp eax, 9
        ; Exact mapped bytes 0F 87 18 02 00 00: ja 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 588092d8h]
        ; Exact mapped bytes FF 24 8D C4 92 80 58: jmp dword ptr [ecx*4 + 0x588092c4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x58
        mov ecx, esi
        ; Exact mapped bytes E8 8A B5 FF FF: call 0x588045b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 10ch]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 F4 01 00 00: je 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 5F 05 FB FF: call 0x587b95a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 A8 BF FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 54 B5 FF FF: call 0x588045b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 BE 10 01 00 00 01: cmp word ptr [esi + 0x110], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 BF 01 00 00: jne 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 90h], -1
        ; Exact mapped bytes 0F 84 B2 01 00 00: je 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 4f4h]
        ; Exact mapped bytes 66 39 A9 9C 01 00 00: cmp word ptr [ecx + 0x19c], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 99 01 00 00: jne 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 244h]
        mov edx, dword ptr [eax + 12e8h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes E8 AB B8 0A 00: call 0x588b4950
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 44 BF FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 F0 B4 FF FF: call 0x588045b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esi + 78h], 1
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 90h], -1
        ; Exact mapped bytes 0F 84 52 01 00 00: je 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4f4h]
        movzx eax, word ptr [edx + 19ch]
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 0A: je 0x588090f9
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 30 01 00 00: jne 0x58809229
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        push ebp
        ; Exact mapped bytes E8 BB 84 F2 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 12e4h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        lea ecx, [esp + 14h]
        mov byte ptr [esp + 34h], 0
        ; Exact mapped bytes E8 0B C3 F2 FF: call 0x58735430
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc3
        __asm _emit 0xf2
        __asm _emit 0xff
        push ebp
        push 5899d5e8h
        mov ecx, eax
        ; Exact mapped bytes E8 7E 81 F8 FF: call 0x587912b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, -1
        lea ecx, [esp + 10h]
        setne bl
        ; Exact mapped bytes E8 3F F0 F3 FF: call 0x58748180
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov cl, 1
        test bl, bl
        ; Exact mapped bytes 75 04: jne 0x5880914b
        __asm _emit 0x75
        __asm _emit 0x04
        mov cl, byte ptr [esp + 30h]
        mov eax, dword ptr [esi + 9ch]
        cmp eax, 7
        ; Exact mapped bytes 74 05: je 0x5880915b
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 0ch
        ; Exact mapped bytes 75 37: jne 0x58809192
        __asm _emit 0x75
        __asm _emit 0x37
        test cl, cl
        ; Exact mapped bytes 75 33: jne 0x58809192
        __asm _emit 0x75
        __asm _emit 0x33
        push 0ffffffh
        push 5899d5cch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 D2 40 08 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 6B BE FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 90h]
        mov edx, dword ptr [esi + 0a0h]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 80010022h
        push edx
        push eax
        ; Exact mapped bytes E8 9E 03 FB FF: call 0x587b9550
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 37 BE FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E3 B3 FF FF: call 0x588045b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 4F 0A: movsx ecx, word ptr [edi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4f
        __asm _emit 0x0a
        mov eax, 66666667h
        imul ecx
        mov ecx, dword ptr [esi + 0b4h]
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        movzx eax, ax
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        cwde
        lea eax, [eax + eax*4]
        ; Exact mapped bytes 7E 0E: jle 0x58809202
        __asm _emit 0x7e
        __asm _emit 0x0e
        add eax, eax
        cmp ecx, eax
        ; Exact mapped bytes 7D 14: jge 0x5880920e
        __asm _emit 0x7d
        __asm _emit 0x14
        mov dword ptr [esi + 0b4h], ebp
        ; Exact mapped bytes EB 20: jmp 0x58809222
        __asm _emit 0xeb
        __asm _emit 0x20
        add eax, eax
        lea edx, [eax + 32ch]
        cmp ecx, edx
        ; Exact mapped bytes 7F 0A: jg 0x58809218
        __asm _emit 0x7f
        __asm _emit 0x0a
        sub ecx, eax
        mov dword ptr [esi + 0b4h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x58809222
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 0b4h], 32ch
        mov dword ptr [esi + 64h], 40000000h
        mov ecx, esi
        ; Exact mapped bytes E8 C0 BD FF FF: call 0x58804ff0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
