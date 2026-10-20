// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58553600 .. +0x9AA bytes.
extern "C" __declspec(naked) void FUN_58553600_58553600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 74 0A: je 0x5855361f
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 0F 85 FD 01 00 00: jne 0x5855381c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 1
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 75 09: jne 0x58553635
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 1
        ; Exact mapped bytes EB 0D: jmp 0x58553642
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 75 07: jne 0x58553642
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0ffffffffh
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 90h]
        cmp edx, 30h
        ; Exact mapped bytes 75 74: jne 0x585536c5
        __asm _emit 0x75
        __asm _emit 0x74
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x58553663
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 33 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x33
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 47: jge 0x585536c0
        __asm _emit 0x7d
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 74 38: je 0x585536be
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 33 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x33
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        movzx eax, byte ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 1A: jne 0x585536be
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 03 CC F4 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xcc
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 9A: jmp 0x5855365a
        __asm _emit 0xeb
        __asm _emit 0x9a
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x58553806
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 90h]
        cmp eax, 10h
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x58553766
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585536ea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 32 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 61: jge 0x58553761
        __asm _emit 0x7d
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 8], 0
        ; Exact mapped bytes 74 52: je 0x5855375f
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 32 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        movzx eax, byte ptr [eax + edx + 1fch]
        movzx ecx, byte ptr [ebp + 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 34: jne 0x5855375f
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 32 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        movzx eax, byte ptr [eax + edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x5855375f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 62 CB F4 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 80: jmp 0x585536e1
        __asm _emit 0xeb
        __asm _emit 0x80
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x58553806
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 90h]
        cmp eax, 20h
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x58553806
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5855378b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 32 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 65: jge 0x58553806
        __asm _emit 0x7d
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 8], 0
        ; Exact mapped bytes 74 53: je 0x58553801
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 32 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, byte ptr [eax + edx + 1fch]
        movzx ecx, byte ptr [ebp + 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 35: jne 0x58553801
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 31 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, byte ptr [eax + edx + 21ch]
        cmp eax, 1
        ; Exact mapped bytes 75 1A: jne 0x58553801
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 C0 CA F4 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xca
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x58553782
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 92h]
        or eax, 1
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes E9 84 07 00 00: jmp 0x58553fa0
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 74 0A: je 0x5855382c
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 0F 85 8C 02 00 00: jne 0x58553ab8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], 0ffffffffh
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 75 09: jne 0x58553842
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 1
        ; Exact mapped bytes EB 0D: jmp 0x5855384f
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 75 07: jne 0x5855384f
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0ffffffffh
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 90h]
        and edx, 30h
        cmp edx, 30h
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x58553905
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58553877
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 31 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x31
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 73: jge 0x58553900
        __asm _emit 0x7d
        __asm _emit 0x73
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 31 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x31
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A1 8B F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 B2 97 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x97
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 75 45: jne 0x585538fb
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 30 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x30
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        movzx eax, byte ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 27: jne 0x585538fb
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 1A: je 0x585538fb
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 96 C9 F4 FF: call 0x584a0290
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x5855386e
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D 01 00 00: jmp 0x58553aa2
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 90h]
        and edx, 10h
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x585539d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5855392a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 30 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x30
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x585539d1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 30 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x30
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA 8A F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 FB 96 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x96
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 75 5F: jne 0x585539cc
        __asm _emit 0x75
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 30 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x30
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 75 45: jne 0x585539cc
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 30 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x30
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [eax + ecx + 1fch]
        movzx eax, byte ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 27: jne 0x585539cc
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 1A: je 0x585539cc
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 C5 C8 F4 FF: call 0x584a0290
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc8
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x58553921
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x58553aa2
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 90h]
        and edx, 20h
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x58553aa2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585539fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 2F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x2f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x58553aa2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 2F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x2f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 19 8A F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x8a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 2A 96 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x96
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 75 5F: jne 0x58553a9d
        __asm _emit 0x75
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 2F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 74 45: je 0x58553a9d
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 2F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        movzx eax, byte ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 27: jne 0x58553a9d
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 1A: je 0x58553a9d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 F4 C7 F4 FF: call 0x584a0290
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x585539f2
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 92h]
        or edx, 2
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 E8 04 00 00: jmp 0x58553fa0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 14h
        ; Exact mapped bytes 0F 85 3C 02 00 00: jne 0x58553cfe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8ch], 40000000h
        ; Exact mapped bytes 75 77: jne 0x58553b48
        __asm _emit 0x75
        __asm _emit 0x77
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x58553ae3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 2E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x2e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 3D: jge 0x58553b36
        __asm _emit 0x7d
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 2E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        movzx eax, byte ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 1D: jne 0x58553b34
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 10: je 0x58553b34
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 BD D7 F3 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd7
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A4: jmp 0x58553ada
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8ch], 0
        ; Exact mapped bytes E9 B1 01 00 00: jmp 0x58553cf9
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 0F 85 A1 01 00 00: jne 0x58553cf9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 90h]
        and edx, 30h
        cmp edx, 30h
        ; Exact mapped bytes 75 6A: jne 0x58553bd4
        __asm _emit 0x75
        __asm _emit 0x6a
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58553b7c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 3ch]
        add eax, 1
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 2E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x2e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 3D: jge 0x58553bcf
        __asm _emit 0x7d
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 2E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        movzx eax, byte ptr [eax + edx + 1fch]
        movzx ecx, byte ptr [ebp + 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 1D: jne 0x58553bcd
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 74 10: je 0x58553bcd
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 24 D7 F3 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd7
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A4: jmp 0x58553b73
        __asm _emit 0xeb
        __asm _emit 0xa4
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x58553cf9
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 90h]
        and ecx, 10h
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58553c6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58553bf9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 2D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 57: jge 0x58553c66
        __asm _emit 0x7d
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 2D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        movzx eax, byte ptr [eax + edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x58553c64
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 2D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        movzx eax, byte ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 1D: jne 0x58553c64
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 10: je 0x58553c64
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 8D D6 F3 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8A: jmp 0x58553bf0
        __asm _emit 0xeb
        __asm _emit 0x8a
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58553cf9
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 90h]
        and eax, 20h
        ; Exact mapped bytes 74 7F: je 0x58553cf9
        __asm _emit 0x74
        __asm _emit 0x7f
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x58553c8c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 2D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 57: jge 0x58553cf9
        __asm _emit 0x7d
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 2D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 74 3B: je 0x58553cf7
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 2C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x2c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        movzx eax, byte ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 1D: jne 0x58553cf7
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 10: je 0x58553cf7
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 FA D5 F3 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd5
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8A: jmp 0x58553c83
        __asm _emit 0xeb
        __asm _emit 0x8a
        ; Exact mapped bytes E9 A2 02 00 00: jmp 0x58553fa0
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 15h
        ; Exact mapped bytes 0F 85 A6 01 00 00: jne 0x58553eae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 90h]
        and eax, 30h
        cmp eax, 30h
        ; Exact mapped bytes 75 6A: jne 0x58553d84
        __asm _emit 0x75
        __asm _emit 0x6a
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x58553d2c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 2C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 3D: jge 0x58553d7f
        __asm _emit 0x7d
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 2C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        movzx eax, byte ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 1D: jne 0x58553d7d
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 10: je 0x58553d7d
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 54 D5 F3 FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd5
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A4: jmp 0x58553d23
        __asm _emit 0xeb
        __asm _emit 0xa4
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x58553ea9
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 90h]
        and eax, 10h
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58553e1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58553da9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 2C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x2c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 57: jge 0x58553e16
        __asm _emit 0x7d
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 2B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x2b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 75 3B: jne 0x58553e14
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 2B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x2b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        movzx edx, byte ptr [eax + ecx + 1fch]
        movzx eax, byte ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 1D: jne 0x58553e14
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 10: je 0x58553e14
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 BD D4 F3 FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd4
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8A: jmp 0x58553da0
        __asm _emit 0xeb
        __asm _emit 0x8a
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58553ea9
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 90h]
        and eax, 20h
        ; Exact mapped bytes 74 7F: je 0x58553ea9
        __asm _emit 0x74
        __asm _emit 0x7f
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x58553e3c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 2B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x2b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 57: jge 0x58553ea9
        __asm _emit 0x7d
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 2B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 74 3B: je 0x58553ea7
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 2B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x2b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        movzx eax, byte ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 1D: jne 0x58553ea7
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 10: je 0x58553ea7
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 2A D4 F3 FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd4
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8A: jmp 0x58553e33
        __asm _emit 0xeb
        __asm _emit 0x8a
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x58553fa0
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0ah
        ; Exact mapped bytes 74 0A: je 0x58553ebe
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0bh
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x58553fa0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], 1
        cmp dword ptr [ebp + 8], 0ah
        ; Exact mapped bytes 75 09: jne 0x58553ed4
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 1
        ; Exact mapped bytes EB 0D: jmp 0x58553ee1
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp dword ptr [ebp + 8], 0bh
        ; Exact mapped bytes 75 07: jne 0x58553ee1
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0ffffffffh
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58553ef3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 2A F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x58553f8f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 2A F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        movzx eax, byte ptr [eax + edx + 1fch]
        movzx ecx, byte ptr [ebp + 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 5F: jne 0x58553f8a
        __asm _emit 0x75
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 74 52: je 0x58553f8a
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 2A F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x58553f70
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 4ch]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 53 C3 F4 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc3
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1A: jmp 0x58553f8a
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 37 C3 F4 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc3
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x58553eea
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 92h]
        or eax, 1
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
