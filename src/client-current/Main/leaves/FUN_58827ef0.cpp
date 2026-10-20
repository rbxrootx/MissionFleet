// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58827EF0 .. +0x239 bytes.
extern "C" __declspec(naked) void FUN_58827ef0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx + 4]
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 AE 01 00 00: jne 0x588280b3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        mov edi, dword ptr [esi + 0a0h]
        add eax, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 24 96 F0 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x58827f57
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 45: jne 0x58827f6e
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 4A FA 0D 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB 17: jmp 0x58827f6e
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 0F: je 0x58827f6e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 0a0h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [esi + 0a4h]
        add edx, 4
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 BB 95 F0 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x58827fbf
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 46: jne 0x58827fd7
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 F9 0D 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf9
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 18: jmp 0x58827fd7
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 0F: je 0x58827fd7
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 0a4h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [esi + 0a8h]
        add eax, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 53 95 F0 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x58828028
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 45: jne 0x5882803f
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 79 F9 0D 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf9
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB 17: jmp 0x5882803f
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 0F: je 0x5882803f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 0a8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [esi + 0ach]
        add edx, 4
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 EA 94 F0 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x94
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x58828096
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 4C: jne 0x588280ae
        __asm _emit 0x75
        __asm _emit 0x4c
        mov esi, dword ptr [esi + 0ach]
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 F9 0D 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        pop edi
        pop esi
        mov dword ptr [esp + 4], 0
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 0F: je 0x588280ae
        __asm _emit 0x74
        __asm _emit 0x0f
        mov esi, dword ptr [esi + 0ach]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 20ah
        ; Exact mapped bytes 75 F5: jne 0x588280af
        __asm _emit 0x75
        __asm _emit 0xf5
        xor eax, eax
        ; Exact mapped bytes 66 39 41 0A: cmp word ptr [ecx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 05: jle 0x588280c7
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 1
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 2C: je 0x58828102
        __asm _emit 0x74
        __asm _emit 0x2c
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x588280f7
        __asm _emit 0x74
        __asm _emit 0x1d
        mov al, byte ptr [esi + 9ch]
        test al, al
        ; Exact mapped bytes 76 CB: jbe 0x588280af
        __asm _emit 0x76
        __asm _emit 0xcb
        dec al
        mov ecx, esi
        mov byte ptr [esi + 9ch], al
        ; Exact mapped bytes E8 DD FA FF FF: call 0x58827bd0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 42 FB FF FF: call 0x58827c40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 9E: je 0x588280af
        __asm _emit 0x74
        __asm _emit 0x9e
        mov ecx, esi
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58828120
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes E8 A4 FB FF FF: call 0x58827cc0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 BB FB FF FF: call 0x58827ce0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
