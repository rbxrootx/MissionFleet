// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D0A20 .. +0xC55 bytes.
extern "C" __declspec(naked) void FUN_585d0a20_585D0A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 9
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 72h
        ; Exact mapped bytes 0F 87 00 0C 00 00: ja 0x585d164a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 585d16bch]
        ; Exact mapped bytes FF 24 8D 78 16 5D 58: jmp dword ptr [ecx*4 + 0x585d1678]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21ac4h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x585d0aec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 21ac8h]
        ; Exact mapped bytes E8 DE 3D 00 00: call 0x585d4860
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 66: je 0x585d0aec
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 8
        ; Exact mapped bytes 74 0F: je 0x585d0aa4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 9
        ; Exact mapped bytes 75 30: jne 0x585d0ad4
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 5F EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x5f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FA C4 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x585d0ad2
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 21ac8h]
        ; Exact mapped bytes E8 AF 4E 14 00: call 0x58715980
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4e
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 18: jmp 0x585d0aec
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 21ac8h]
        ; Exact mapped bytes E8 95 4E 14 00: call 0x58715980
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4e
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 59 0B 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21ac4h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x585d0b88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 21ac8h]
        ; Exact mapped bytes E8 48 3D 00 00: call 0x585d4860
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x585d0b83
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 8
        ; Exact mapped bytes 74 0F: je 0x585d0b3a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 9
        ; Exact mapped bytes 75 31: jne 0x585d0b6b
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 5E EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x5e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 64 C4 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 18: jne 0x585d0b69
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 21ac8h]
        ; Exact mapped bytes E8 18 4E 14 00: call 0x58715980
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x4e
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 18: jmp 0x585d0b83
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 21ac8h]
        ; Exact mapped bytes E8 FE 4D 14 00: call 0x58715980
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4d
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E0 02 00 00: jmp 0x585d0e68
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21ab8h], 0
        ; Exact mapped bytes 0F 85 D0 02 00 00: jne 0x585d0e68
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 20efch], 1
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x585d0c2e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588abb68h
        ; Exact mapped bytes E8 3E 14 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x14
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 3C 01 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        push 8
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 48 01 00: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21ebch], 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21ec0h], 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 E3 F9 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 588abb8ch
        ; Exact mapped bytes E8 F4 13 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x13
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 72 BB F1 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xbb
        __asm _emit 0xf1
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 00 FA FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 E2 0A 00: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe2
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x585d0cc0
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588abba8h
        ; Exact mapped bytes E8 B8 13 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x13
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 3C 01 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 5D EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5A C3 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc3
        __asm _emit 0xeb
        __asm _emit 0xff
        push eax
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 48 01 00: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21ebch], 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21ec0h], 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A E2 F9 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 588abbcch
        ; Exact mapped bytes E8 5D 13 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x13
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 DB BA F1 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xba
        __asm _emit 0xf1
        __asm _emit 0xff
        push 3
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E FF F9 FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 E2 0A 00: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe2
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20f18h], 0
        ; Exact mapped bytes 0F 84 98 01 00 00: je 0x585d0e68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21ebch]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x585d0e14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 74 0F: je 0x585d0cfb
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x585d0e3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x585d0e68
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21ec0h], 1
        ; Exact mapped bytes 75 2E: jne 0x585d0d35
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21efch]
        mov dword ptr [ebp - 3ch], edx
        push 588abbe8h
        ; Exact mapped bytes E8 D3 12 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x12
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 71 53 EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x53
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x585d0e12
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21ec0h], 2
        ; Exact mapped bytes 75 2E: jne 0x585d0d6f
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21efch]
        mov dword ptr [ebp - 44h], eax
        push 588abc04h
        ; Exact mapped bytes E8 99 12 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x12
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 37 53 EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x53
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x585d0e12
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21ec0h], 3
        ; Exact mapped bytes 75 2B: jne 0x585d0da6
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21efch]
        mov dword ptr [ebp - 4ch], ecx
        push 588abc24h
        ; Exact mapped bytes E8 5F 12 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x12
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 FD 52 EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x52
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6C: jmp 0x585d0e12
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21ec0h], 4
        ; Exact mapped bytes 75 2B: jne 0x585d0ddd
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21efch]
        mov dword ptr [ebp - 54h], edx
        push 588abc44h
        ; Exact mapped bytes E8 28 12 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x12
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C6 52 EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x52
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x585d0e12
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21ec0h], 5
        ; Exact mapped bytes 75 29: jne 0x585d0e12
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21efch]
        mov dword ptr [ebp - 5ch], eax
        push 588abc68h
        ; Exact mapped bytes E8 F1 11 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 8F 52 EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x52
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 54: jmp 0x585d0e68
        __asm _emit 0xeb
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21efch]
        mov dword ptr [ebp - 64h], eax
        push 588abc8ch
        ; Exact mapped bytes E8 C6 11 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 64 52 EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x52
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x585d0e68
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21efch]
        mov dword ptr [ebp - 6ch], eax
        push 588abcach
        ; Exact mapped bytes E8 9B 11 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 39 52 EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x52
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DD 07 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21ac4h], 0
        ; Exact mapped bytes 74 33: je 0x585d0eac
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 21ac8h]
        ; Exact mapped bytes E8 D1 39 00 00: call 0x585d4860
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x585d0eaa
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 21ac8h]
        ; Exact mapped bytes E8 D7 4A 14 00: call 0x58715980
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x4a
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 60: jmp 0x585d0f0c
        __asm _emit 0xeb
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21ab8h], 0
        ; Exact mapped bytes 75 54: jne 0x585d0f0c
        __asm _emit 0x75
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 580h], 0
        ; Exact mapped bytes 75 25: jne 0x585d0ee9
        __asm _emit 0x75
        __asm _emit 0x25
        push 588abcc8h
        ; Exact mapped bytes E8 22 11 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 39 01 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 580h], 1
        ; Exact mapped bytes EB 23: jmp 0x585d0f0c
        __asm _emit 0xeb
        __asm _emit 0x23
        push 588abcf8h
        ; Exact mapped bytes E8 FD 10 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 39 01 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 580h], 0
        ; Exact mapped bytes E9 39 07 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21ab8h], 0
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x585d0fb6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20ff8h], 2
        ; Exact mapped bytes 75 33: jne 0x585d0f60
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20ff8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20ffch], 0
        push 588abd28h
        ; Exact mapped bytes E8 9F 10 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 39 01 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 56: jmp 0x585d0fb6
        __asm _emit 0xeb
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20ff8h], 1
        ; Exact mapped bytes 75 26: jne 0x585d0f92
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20ff8h], 2
        push 588abd4ch
        ; Exact mapped bytes E8 6D 10 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 38 01 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x585d0fb6
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20ff8h], 1
        push 588abd78h
        ; Exact mapped bytes E8 47 10 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 38 01 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8F 06 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21ac4h], 0
        ; Exact mapped bytes 74 02: je 0x585d0fc9
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 76: jmp 0x585d103f
        __asm _emit 0xeb
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21ab8h], 0
        ; Exact mapped bytes 75 6A: jne 0x585d103f
        __asm _emit 0x75
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21014h], 0
        ; Exact mapped bytes 75 1C: jne 0x585d0ffd
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21010h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 21010h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 1A: jmp 0x585d1017
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21010h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 21010h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21014h], 0
        ; Exact mapped bytes 75 09: jne 0x585d102c
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 07: jmp 0x585d1033
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 21014h], edx
        ; Exact mapped bytes E9 06 06 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 82 EE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x82
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 5
        ; Exact mapped bytes 75 16: jne 0x585d106d
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 27: jmp 0x585d1094
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 81 EE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 14: jne 0x585d1094
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 44 06 96 58: mov edx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 B1 05 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 81 EE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x81
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 2E: jne 0x585d10da
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 83 3D 74 20 96 58 00: cmp dword ptr [0x58962074], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x585d10be
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x585d10c5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 89 0D 74 20 96 58: mov dword ptr [0x58962074], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 E5 0A 00: call 0x5867f630
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6B 05 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21004h], 1
        ; Exact mapped bytes 75 26: jne 0x585d1111
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21004h], 0
        push 588abd9ch
        ; Exact mapped bytes E8 EE 0E F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 37 01 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 31: jmp 0x585d1142
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21004h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10700h], 3e8h
        push 588abdbch
        ; Exact mapped bytes E8 BB 0E F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0e
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 37 01 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 03 05 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21ab8h], 0
        ; Exact mapped bytes 75 3A: jne 0x585d118d
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 81 EE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x81
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 74 13: je 0x585d1179
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 80 EE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x80
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 0B: jne 0x585d1184
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 89 FF FF: call 0x585c9aa0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x585d118d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 6D 00 00: call 0x585d7eb0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B8 04 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1070ch], 0
        ; Exact mapped bytes 75 46: jne 0x585d11e4
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 84 45 EC FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 106bch]
        cmp eax, 20h
        ; Exact mapped bytes 7E 1D: jle 0x585d11d7
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 10708h]
        sub edx, dword ptr [ecx + 106bch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10708h], edx
        ; Exact mapped bytes EB 0D: jmp 0x585d11e4
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10708h], 20h
        ; Exact mapped bytes E9 61 04 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1070ch], 0
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x585d12d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 42 45 EC FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 92 17 00 00: call 0x585d29b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        sub esi, 320h
        mov edx, dword ptr [ebp - 4]
        cmp esi, dword ptr [edx + 106bch]
        ; Exact mapped bytes 7E 29: jle 0x585d125a
        __asm _emit 0x7e
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106bch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10708h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 106bch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10708h], eax
        ; Exact mapped bytes EB 76: jmp 0x585d12d0
        __asm _emit 0xeb
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 E8 44 EC FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 38 46 EC FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xec
        __asm _emit 0xff
        imul edi, eax, 3e8h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 84 47 EC FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        sub esi, eax
        mov edx, dword ptr [ebp - 4]
        sub esi, dword ptr [edx + 10708h]
        mov dword ptr [ebp - 8], esi
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 106bch]
        ; Exact mapped bytes 7E 0C: jle 0x585d12bb
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 106bch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10708h]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10708h], edx
        ; Exact mapped bytes E9 75 03 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1070ch], 0
        ; Exact mapped bytes 75 46: jne 0x585d1327
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 D1 36 EB FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x36
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 106bch]
        cmp eax, 46h
        ; Exact mapped bytes 7E 1D: jle 0x585d131a
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 10704h]
        sub ecx, dword ptr [eax + 106bch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10704h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x585d1327
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10704h], 46h
        ; Exact mapped bytes E9 1E 03 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1070ch], 0
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x585d1413
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 1F 44 EC FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 6F 16 00 00: call 0x585d29d0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        sub esi, 44ch
        mov ecx, dword ptr [ebp - 4]
        cmp esi, dword ptr [ecx + 106bch]
        ; Exact mapped bytes 7E 29: jle 0x585d139d
        __asm _emit 0x7e
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10704h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 106bch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10704h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106bch]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 76: jmp 0x585d1413
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 C5 43 EC FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 15 45 EC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0xff
        imul edi, eax, 3e8h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 41 46 EC FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x46
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        sub esi, eax
        mov edx, dword ptr [ebp - 4]
        sub esi, dword ptr [edx + 10704h]
        mov dword ptr [ebp - 0ch], esi
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 106bch]
        ; Exact mapped bytes 7E 0C: jle 0x585d13fe
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 106bch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10704h]
        add edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10704h], edx
        ; Exact mapped bytes E9 32 02 00 00: jmp 0x585d164a
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 200h
        ; Exact mapped bytes 74 1E: je 0x585d1447
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes E8 C2 5D F0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 0
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 7F 03 F1 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C4 01 00 00: jmp 0x585d160b
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 0f0000000h
        cmp ecx, 10000000h
        ; Exact mapped bytes 0F 85 A9 01 00 00: jne 0x585d160b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 55 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x55
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CC 0B 19 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 8F 01 00 00: je 0x585d160b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 55 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x55
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 3F ED FF: call 0x584a5480
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x3f
        __asm _emit 0xed
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 79 FB 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        cmp dword ptr [ebp - 74h], 64h
        ; Exact mapped bytes 0F 8D D4 00 00 00: jge 0x585d1578
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 34 00 00: call 0x585d48c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x585d14c0
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 20f34h], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x585d1554
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20f34h], 0
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x585d1552
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 35 EB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x35
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 CB A8 1E 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xa8
        __asm _emit 0x1e
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 35 EB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x35
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 80h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 80: call dword ptr [ebp - 0x80]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x80
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20f10h]
        mov dword ptr [ebp - 88h], ecx
        push 588abddch
        ; Exact mapped bytes E8 BF 0A F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        push 0ffff00h
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 7F 3F 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3f
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1F: jmp 0x585d1573
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 97 5C F0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x5c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 0
        push 0
        push 0
        push 6
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 4E 02 F1 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x585d160b
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 34 EB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x34
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 18 A8 1E 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa8
        __asm _emit 0x1e
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 34 EB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x34
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 68 FF FF FF: call dword ptr [ebp - 0x98]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20f10h]
        mov dword ptr [ebp - 0a0h], eax
        push 588abe04h
        ; Exact mapped bytes E8 06 0A F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        push 0ffff00h
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 C6 3E 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3e
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3D: jmp 0x585d164a
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21f04h], 1
        ; Exact mapped bytes EB 2E: jmp 0x585d164a
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21f04h], 1
        ; Exact mapped bytes 75 22: jne 0x585d164a
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ecx + 58947974h]
        xor edx, 10000h
        mov eax, 4
        shl eax, 2
        mov dword ptr [eax + 58947974h], edx
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 10h
        ; Exact mapped bytes 74 1A: je 0x585d166d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21ac4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21f04h], 0
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
