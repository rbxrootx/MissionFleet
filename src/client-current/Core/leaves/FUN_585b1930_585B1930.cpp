// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B1930 .. +0x2BB9 bytes.
extern "C" __declspec(naked) void FUN_585b1930_585B1930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 01 2B 00 00: je 0x585b4457
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 65 ED FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x65
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 6F FF FF: call 0x585a8880
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
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
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 74 1B: je 0x585b1999
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
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
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 0F 85 85 03 00 00: jne 0x585b1d1e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 74 7C: je 0x585b1a23
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 7E 38: jle 0x585b19ed
        __asm _emit 0x7e
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        sub edx, dword ptr [ecx + 2ch]
        cmp edx, 20h
        ; Exact mapped bytes 7F 12: jg 0x585b19d8
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 3B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3b
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x585b19eb
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 3B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3b
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x585b1a23
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2ch]
        sub eax, dword ptr [edx + 5ch]
        cmp eax, 20h
        ; Exact mapped bytes 7F 12: jg 0x585b1a10
        __asm _emit 0x7f
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 3B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3b
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x585b1a23
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        sub ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 3B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3b
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 74 7C: je 0x585b1aad
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 7E 38: jle 0x585b1a77
        __asm _emit 0x7e
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        sub ecx, dword ptr [eax + 28h]
        cmp ecx, 20h
        ; Exact mapped bytes 7F 12: jg 0x585b1a62
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 3A 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3a
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x585b1a75
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        add edx, 20h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC 3A 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3a
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x585b1aad
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 58h]
        cmp edx, 20h
        ; Exact mapped bytes 7F 12: jg 0x585b1a9a
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 3A 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x3a
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x585b1aad
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        sub eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 3A 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x3a
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 58h]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 0F 85 5F 02 00 00: jne 0x585b1d1e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 0F 85 4D 02 00 00: jne 0x585b1d1e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
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
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 85 6F 01 00 00: jne 0x585b1c5b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F8 1F 96 58 00: cmp dword ptr [0x58961ff8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x585b1b09
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 58 0D 00 00: mov dx, word ptr [ecx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dl
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD 4F 00 00: call 0x585b6b20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0db8h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0db8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0db8h]
        ; Exact mapped bytes E8 95 E7 EF FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x585b1b8e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0db8h]
        ; Exact mapped bytes E8 F3 A1 FB FF: call 0x5856bd80
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 7B F7 FF: call 0x58529730
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B0 3C EE FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3c
        __asm _emit 0xee
        __asm _emit 0xff
        cmp eax, 67h
        ; Exact mapped bytes 7D 2D: jge 0x585b1bd2
        __asm _emit 0x7d
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 A3 ED FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa3
        __asm _emit 0xed
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 7D 1D: jge 0x585b1bd2
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db8h]
        mov dword ptr [ebp - 0c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 0F 32 16 00: call 0x58714de0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x32
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 1
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 42 ED FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x42
        __asm _emit 0xed
        __asm _emit 0xff
        push 30000h
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 D3 11 00: call 0x586cef70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd3
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 54 F2 FF: call 0x584d7050
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x54
        __asm _emit 0xf2
        __asm _emit 0xff
        and eax, 0f00000h
        cmp eax, 100000h
        ; Exact mapped bytes 75 11: jne 0x585b1c18
        __asm _emit 0x75
        __asm _emit 0x11
        push 220000h
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 F2 12 00: call 0x586e0ef0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf2
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0e20h]
        cmp eax, 1
        ; Exact mapped bytes 75 2F: jne 0x585b1c56
        __asm _emit 0x75
        __asm _emit 0x2f
        push 2
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC DA FC FF: call 0x5857f710
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, 2
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 20 0E 00 00: mov word ptr [edx + 0xe20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x585b1d1e
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
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
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x585b1d1e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffdh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 36: je 0x585b1cf7
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 F8 1F 96 58: mov edx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 75 0A: jne 0x585b1ced
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 F8 1F 96 58 00 00 00 00: mov dword ptr [0x58961ff8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 AB FF FF: call 0x585ac880
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
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
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 B1 26 00 00: jne 0x585b43ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1030h]
        ; Exact mapped bytes E8 49 E5 FF FF: call 0x585b0290
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 55: je 0x585b1da3
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1030h]
        mov dword ptr [ebp - 0c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 E6 D9 FC FF: call 0x5857f750
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1034h]
        mov dword ptr [ebp - 0cch], eax
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 EA D9 FC FF: call 0x5857f770
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1038h]
        mov dword ptr [ebp - 0d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 CE D9 FC FF: call 0x5857f770
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 A1 ED FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa1
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x585b1dcb
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0dd8h], 0
        ; Exact mapped bytes 75 0D: jne 0x585b1dcb
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0dd8h], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0dd8h], 0
        ; Exact mapped bytes 75 62: jne 0x585b1e39
        __asm _emit 0x75
        __asm _emit 0x62
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE A0 ED FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa0
        __asm _emit 0xed
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 7D 52: jge 0x585b1e39
        __asm _emit 0x7d
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 79 F7 FF: call 0x58529730
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x79
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 57 3A EE FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3a
        __asm _emit 0xee
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 2E: je 0x585b1e2c
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 79 F7 FF: call 0x58529730
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x79
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 40 3A EE FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x3a
        __asm _emit 0xee
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 74 17: je 0x585b1e2c
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 79 F7 FF: call 0x58529730
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x79
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 29 3A EE FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3a
        __asm _emit 0xee
        __asm _emit 0xff
        cmp eax, 66h
        ; Exact mapped bytes 75 0D: jne 0x585b1e39
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0dd8h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5f8h]
        mov dword ptr [ebp - 0d8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5d4h]
        ; Exact mapped bytes E8 EA E3 FF FF: call 0x585b0240
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        cdq
        mov ecx, 15h
        idiv ecx
        ; Exact mapped bytes A1 14 57 90 58: mov eax, dword ptr [0x58905714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x90
        __asm _emit 0x58
        add eax, dword ptr [edx*4 + 589056c0h]
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 AE 38 20 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x38
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0dd8h], 0
        ; Exact mapped bytes 0F 84 59 06 00 00: je 0x585b24ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 0F 85 BF 01 00 00: jne 0x585b205f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 CE 39 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x39
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 46: jne 0x585b1f0f
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b1edb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 68h]
        add edx, 1
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b1f0f
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0ddch]
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0dch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 84 40 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b1ed2
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 5F 39 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x39
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 46: je 0x585b1f7e
        __asm _emit 0x74
        __asm _emit 0x46
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585b1f4a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 6ch]
        add eax, 1
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b1f7e
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0ddch]
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 15 40 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b1f41
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 F1 38 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x38
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 45: je 0x585b1feb
        __asm _emit 0x74
        __asm _emit 0x45
        mov dword ptr [ebp - 70h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b1fb8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 70h]
        add eax, 1
        mov dword ptr [ebp - 70h], eax
        cmp dword ptr [ebp - 70h], 2
        ; Exact mapped bytes 7D 2D: jge 0x585b1feb
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0ddch]
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 A8 3F ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x3f
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x585b1faf
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov eax, 8
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0ddch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 83 38 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x585b205a
        __asm _emit 0x74
        __asm _emit 0x46
        mov dword ptr [ebp - 74h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b2026
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 74h]
        add ecx, 1
        mov dword ptr [ebp - 74h], ecx
        cmp dword ptr [ebp - 74h], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b205a
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov edx, 8
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 39 3F ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3f
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b201d
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes E9 88 04 00 00: jmp 0x585b24e7
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 0F 38 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 46: je 0x585b20ce
        __asm _emit 0x74
        __asm _emit 0x46
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585b209a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4ch]
        add eax, 1
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b20ce
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0ech], eax
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 C5 3E ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x3e
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b2091
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 07 29 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x29
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 75 21: jne 0x585b210a
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 EC 28 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x28
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        add eax, 3
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 1F: jmp 0x585b2129
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 CB 28 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x28
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        add eax, 5
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 1C 02 1A 00: call 0x58752350
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 98h]
        ; Exact mapped bytes 0F 8D 50 01 00 00: jge 0x585b2290
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 2E 37 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x37
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 46: jne 0x585b21af
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 78h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b217b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 78h]
        add edx, 1
        mov dword ptr [ebp - 78h], edx
        cmp dword ptr [ebp - 78h], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b21af
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0f0h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 E4 3D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b2172
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 C0 36 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x36
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 45: je 0x585b221c
        __asm _emit 0x74
        __asm _emit 0x45
        mov dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585b21e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 7ch]
        add edx, 1
        mov dword ptr [ebp - 7ch], edx
        cmp dword ptr [ebp - 7ch], 2
        ; Exact mapped bytes 7D 2D: jge 0x585b221c
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0f4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 77 3D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x585b21e0
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov edx, 8
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 52 36 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x36
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 46: je 0x585b228b
        __asm _emit 0x74
        __asm _emit 0x46
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b2257
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 38h]
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b228b
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, 8
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 08 3D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b224e
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes E9 57 02 00 00: jmp 0x585b24e7
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0dbch]
        ; Exact mapped bytes E8 82 E2 FF FF: call 0x585b0520
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x585b23f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 C8 35 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x35
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 46: je 0x585b2315
        __asm _emit 0x74
        __asm _emit 0x46
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585b22e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 3ch]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b2315
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 7E 3C ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x3c
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b22d8
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 5A 35 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x35
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 45: je 0x585b2382
        __asm _emit 0x74
        __asm _emit 0x45
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b234f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 40h]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 2
        ; Exact mapped bytes 7D 2D: jge 0x585b2382
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 100h], ecx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 11 3C ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x3c
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x585b2346
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov edx, 8
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 EC 34 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x34
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 46: jne 0x585b23f1
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b23bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 44h]
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b23f1
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, 8
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 104h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 A2 3B ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3b
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b23b4
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x585b24e7
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0ddch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 78 34 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x34
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x585b2465
        __asm _emit 0x74
        __asm _emit 0x46
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b2431
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b2465
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 108h], eax
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 2E 3B ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3b
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b2428
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 5d4h]
        ; Exact mapped bytes E8 1D 34 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 6D: je 0x585b24e7
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 F5 33 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x33
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 45: jne 0x585b24e7
        __asm _emit 0x75
        __asm _emit 0x45
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b24b4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 50h]
        add eax, 1
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 2
        ; Exact mapped bytes 7D 2D: jge 0x585b24e7
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0ddch]
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 10ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 AC 3A ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3a
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x585b24ab
        __asm _emit 0xeb
        __asm _emit 0xc4
        ; Exact mapped bytes E9 F2 01 00 00: jmp 0x585b26de
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 0F 84 E5 01 00 00: je 0x585b26de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 78h
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b2512
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 20h
        ; Exact mapped bytes 7D 7C: jge 0x585b2594
        __asm _emit 0x7d
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 110h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 DD D5 EF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd5
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x585b258f
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 BE D5 EF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd5
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 D7 EF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd7
        __asm _emit 0xef
        __asm _emit 0xff
        movzx edx, al
        xor edx, 55h
        cmp edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 7D 2B: jge 0x585b258f
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 118h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 91 D5 EF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd5
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA D6 EF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd6
        __asm _emit 0xef
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes E9 75 FF FF FF: jmp 0x585b2509
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 54h], 3
        ; Exact mapped bytes 7C 0A: jl 0x585b25a4
        __asm _emit 0x7c
        __asm _emit 0x0a
        cmp dword ptr [ebp - 54h], 78h
        ; Exact mapped bytes 0F 85 CB 00 00 00: jne 0x585b266f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0dbch]
        ; Exact mapped bytes E8 6E DF FF FF: call 0x585b0520
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 71: je 0x585b2627
        __asm _emit 0x74
        __asm _emit 0x71
        mov edx, 8
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 B8 32 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x32
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 46: jne 0x585b2625
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b25f1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b2625
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, 8
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 11ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 6E 39 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x39
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b25e8
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes EB 46: jmp 0x585b266d
        __asm _emit 0xeb
        __asm _emit 0x46
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585b2639
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 1
        mov dword ptr [ebp - 5ch], ecx
        cmp dword ptr [ebp - 5ch], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b266d
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov edx, 8
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 120h], ecx
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 26 39 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x39
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b2630
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes EB 6F: jmp 0x585b26de
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov edx, 8
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ddch]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 FF 31 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x31
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 46: je 0x585b26de
        __asm _emit 0x74
        __asm _emit 0x46
        mov dword ptr [ebp - 60h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b26aa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 60h]
        add eax, 1
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 2
        ; Exact mapped bytes 7D 2E: jge 0x585b26de
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, 8
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ddch]
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 124h], eax
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 B5 38 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x38
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b26a1
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e0ch], 2000h
        ; Exact mapped bytes 0F 85 43 19 00 00: jne 0x585b4034
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0e18h], 0
        ; Exact mapped bytes 75 10: jne 0x585b270d
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e1ch], 0
        ; Exact mapped bytes 0F 84 CA 05 00 00: je 0x585b2cd7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e18h]
        mov eax, dword ptr [ecx + 0e1ch]
        mov dword ptr [ebp - 38ch], edx
        mov dword ptr [ebp - 388h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e18h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e1ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 76: jle 0x585b27bc
        __asm _emit 0x7e
        __asm _emit 0x76
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 70: jge 0x585b27bc
        __asm _emit 0x7d
        __asm _emit 0x70
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 4E: jle 0x585b27a0
        __asm _emit 0x7e
        __asm _emit 0x4e
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 48: jge 0x585b27a0
        __asm _emit 0x7d
        __asm _emit 0x48
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 0C: jge 0x585b276a
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 0a0h], 0ffffffffh
        ; Exact mapped bytes EB 28: jmp 0x585b2792
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 0C: jle 0x585b277c
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 9ch], 1
        ; Exact mapped bytes EB 0A: jmp 0x585b2786
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0E: jmp 0x585b27ae
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 0a8h], ecx
        ; Exact mapped bytes EB 12: jmp 0x585b27ce
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 76: jle 0x585b2853
        __asm _emit 0x7e
        __asm _emit 0x76
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 70: jge 0x585b2853
        __asm _emit 0x7d
        __asm _emit 0x70
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 4E: jle 0x585b2837
        __asm _emit 0x7e
        __asm _emit 0x4e
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 48: jge 0x585b2837
        __asm _emit 0x7d
        __asm _emit 0x48
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0C: jge 0x585b2801
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 0b0h], 0ffffffffh
        ; Exact mapped bytes EB 28: jmp 0x585b2829
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 0C: jle 0x585b2813
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ach], 1
        ; Exact mapped bytes EB 0A: jmp 0x585b281d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 0b4h], ecx
        ; Exact mapped bytes EB 0E: jmp 0x585b2845
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0b4h], eax
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 0b8h], edx
        ; Exact mapped bytes EB 12: jmp 0x585b2865
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 0b8h], eax
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e18h]
        sub edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e18h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e1ch]
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e1ch], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 34ch]
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 0D 29 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 E2 28 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 B7 28 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 134h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 8C 28 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b0h]
        mov dword ptr [ebp - 138h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 61 28 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b0h]
        mov dword ptr [ebp - 13ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 36 28 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 140h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 0B 28 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 E0 27 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x27
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d84h]
        mov dword ptr [ebp - 148h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e1ch]
        push eax
        mov ecx, dword ptr [edx + 0e18h]
        push ecx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 35 24 F3 FF: call 0x584e4e50
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 34ch]
        ; Exact mapped bytes E8 9E 35 F1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x35
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 91 02 00 00: je 0x585b2cd2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 10h
        ; Exact mapped bytes 0F 8E 52 01 00 00: jle 0x585b2b9d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        sub eax, 10h
        mov dword ptr [ebp - 18h], eax
        mov ecx, 100h
        sub ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 34ch]
        mov dword ptr [ebp - 14ch], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 BA 2A 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x2a
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 93 2A 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x2a
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 154h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 6C 2A 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x2a
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 158h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 45 2A 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x2a
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b0h]
        mov dword ptr [ebp - 15ch], edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 1E 2A 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2a
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b0h]
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 F7 29 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 164h], edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 D0 29 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 A9 29 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x585b2cd2
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 34ch]
        mov dword ptr [ebp - 16ch], edx
        push 0
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 7E 29 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 34ch]
        mov dword ptr [ebp - 170h], edx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 59 29 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 174h], eax
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 34 29 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 178h], eax
        push 0
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 0F 29 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b0h]
        mov dword ptr [ebp - 17ch], ecx
        push 100h
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 E7 28 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b0h]
        mov dword ptr [ebp - 180h], ecx
        push 100h
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 BF 28 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 184h], edx
        push 100h
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 97 28 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 188h], edx
        push 100h
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 6F 28 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 58 13 00 00: jmp 0x585b402f
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e14h], 0
        ; Exact mapped bytes 0F 84 01 10 00 00: je 0x585b3ce8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 34ch]
        mov dword ptr [ebp - 190h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0b0h]
        ; Exact mapped bytes E8 EA 1C ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        mov edx, dword ptr [ebp - 18ch]
        push edx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 02 C7 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc7
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 198h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b0h]
        ; Exact mapped bytes E8 63 1C ED FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 BB 31 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x31
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 34ch]
        mov dword ptr [ebp - 19ch], edx
        push 100h
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 A3 27 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x27
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 1a0h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 CE 31 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x31
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b0h]
        ; Exact mapped bytes E8 0F 1C ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 27 C6 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc6
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 1b0h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b0h]
        ; Exact mapped bytes E8 88 1B ED FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        mov eax, dword ptr [ebp - 1ach]
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 E0 30 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x30
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 1b4h], eax
        push 100h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 C8 26 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 1b8h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 F3 30 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x30
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 1c0h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 34 1B ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        mov edx, dword ptr [ebp - 1bch]
        push edx
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 4C C5 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 1c8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        ; Exact mapped bytes E8 1D 28 EE FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x28
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        mov ecx, dword ptr [ebp - 1c4h]
        push ecx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 35 3D ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 1cch], edx
        push 100h
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 ED 25 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x25
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 1d0h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 18 30 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x30
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 1d8h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 59 1A ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1a
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        mov eax, dword ptr [ebp - 1d4h]
        push eax
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 71 C4 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 1e0h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 42 27 EE FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x27
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        mov eax, dword ptr [ebp - 1dch]
        push eax
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 5A 3C ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x3c
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 1e4h], eax
        push 100h
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 12 25 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x25
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 1e8h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 3D 2F ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x2f
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 45ch]
        mov dword ptr [ebp - 1f0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 344h]
        ; Exact mapped bytes E8 90 19 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x19
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov ecx, dword ptr [ebp - 1ech]
        push ecx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 A8 C3 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc3
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 45ch]
        mov dword ptr [ebp - 1f8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 344h]
        ; Exact mapped bytes E8 8B 26 EE FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x26
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        mov edx, dword ptr [ebp - 1f4h]
        push edx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 A3 3B ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3b
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 45ch]
        mov dword ptr [ebp - 1fch], ecx
        push 100h
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 64 24 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 45ch]
        mov dword ptr [ebp - 200h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 98 2E ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2e
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b310b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 0F 83 3A 01 00 00: jae 0x585b324f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 3dch]
        mov dword ptr [ebp - 208h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2c4h]
        ; Exact mapped bytes E8 C6 18 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 DE C2 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc2
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 3dch]
        mov dword ptr [ebp - 210h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2c4h]
        ; Exact mapped bytes E8 B9 25 EE FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x25
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        mov ecx, dword ptr [ebp - 20ch]
        push ecx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 D1 3A ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x3a
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 3dch]
        mov dword ptr [ebp - 214h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 E1 2D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2d
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 35ch]
        mov dword ptr [ebp - 21ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 244h]
        ; Exact mapped bytes E8 2C 18 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov ecx, dword ptr [ebp - 218h]
        push ecx
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 44 C2 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc2
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 35ch]
        mov dword ptr [ebp - 224h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 244h]
        ; Exact mapped bytes E8 1F 25 EE FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x25
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov ecx, dword ptr [ebp - 220h]
        push ecx
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 37 3A ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x3a
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 35ch]
        mov dword ptr [ebp - 228h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 47 2D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B3 FE FF FF: jmp 0x585b3102
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 0F 84 0A 03 00 00: je 0x585b3561
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 460h]
        mov dword ptr [ebp - 230h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58ch]
        ; Exact mapped bytes E8 8C 17 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x17
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        mov eax, dword ptr [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 A4 C1 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 460h]
        mov dword ptr [ebp - 238h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58ch]
        ; Exact mapped bytes E8 87 24 EE FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        mov ecx, dword ptr [ebp - 234h]
        push ecx
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 9F 39 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x39
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 460h]
        mov dword ptr [ebp - 23ch], eax
        push 100h
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 60 22 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x22
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 460h]
        mov dword ptr [ebp - 240h], edx
        push 1
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 E4 2B ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2b
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 460h]
        mov dword ptr [ebp - 244h], ecx
        push 1
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 28 C5 EE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc5
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 464h]
        mov dword ptr [ebp - 24ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 598h]
        ; Exact mapped bytes E8 CB 16 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x16
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        mov edx, dword ptr [ebp - 248h]
        push edx
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 E3 C0 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc0
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 464h]
        mov dword ptr [ebp - 254h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 598h]
        ; Exact mapped bytes E8 C6 23 EE FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x23
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        mov eax, dword ptr [ebp - 250h]
        push eax
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 DE 38 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x38
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 464h]
        mov dword ptr [ebp - 258h], edx
        push 100h
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 9F 21 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x21
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 464h]
        mov dword ptr [ebp - 25ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 23 2B ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2b
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 464h]
        mov dword ptr [ebp - 260h], eax
        push 1
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 67 C4 EE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 468h]
        mov dword ptr [ebp - 268h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 590h]
        ; Exact mapped bytes E8 0A 16 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x16
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        mov ecx, dword ptr [ebp - 264h]
        push ecx
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 22 C0 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc0
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 468h]
        mov dword ptr [ebp - 270h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 590h]
        ; Exact mapped bytes E8 05 23 EE FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x23
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        mov edx, dword ptr [ebp - 26ch]
        push edx
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 1D 38 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x38
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 468h]
        mov dword ptr [ebp - 274h], ecx
        push 100h
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 DE 20 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 468h]
        mov dword ptr [ebp - 278h], eax
        push 1
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 62 2A ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2a
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 468h]
        mov dword ptr [ebp - 27ch], edx
        push 1
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 A6 C3 EE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc3
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 46ch]
        mov dword ptr [ebp - 284h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 594h]
        ; Exact mapped bytes E8 49 15 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x15
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        mov eax, dword ptr [ebp - 280h]
        push eax
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 61 BF EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbf
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 46ch]
        mov dword ptr [ebp - 28ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 594h]
        ; Exact mapped bytes E8 44 22 EE FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp - 288h]
        push ecx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 5C 37 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x37
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 46ch]
        mov dword ptr [ebp - 290h], eax
        push 100h
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 1D 20 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 46ch]
        mov dword ptr [ebp - 294h], edx
        push 1
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 A1 29 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x29
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 46ch]
        mov dword ptr [ebp - 298h], ecx
        push 1
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 E5 C2 EE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc2
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x585b360a
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585b3573
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 470h]
        cmp dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 7D 25: jge 0x585b35a7
        __asm _emit 0x7d
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 474h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 29ch], edx
        push 0
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 3C 29 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x29
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b356a
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585b35b9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 471h]
        cmp dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 7D 25: jge 0x585b35ed
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 478h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 2a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 F6 28 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x28
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b35b0
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 2a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 37 1F 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x1f
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e14h], 0ffffh
        ; Exact mapped bytes 0F 85 71 01 00 00: jne 0x585b378e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 8A ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x8a
        __asm _emit 0xed
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 38 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e18h], 190h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e1ch], 10eh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e14h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 34ch]
        mov dword ptr [ebp - 2a8h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0b0h]
        ; Exact mapped bytes E8 89 20 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 32h
        ; Exact mapped bytes 66 89 95 6C FF FF FF: mov word ptr [ebp - 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 D9 27 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x27
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 2ach], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b0h]
        ; Exact mapped bytes E8 3A 20 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x20
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 32h
        ; Exact mapped bytes 66 89 45 82: mov word ptr [ebp - 0x7e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x82
        movzx ecx, word ptr [ebp - 7eh]
        push ecx
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 90 27 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x27
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 2b0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 F1 1F EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1f
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 32h
        ; Exact mapped bytes 66 89 45 80: mov word ptr [ebp - 0x80], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x80
        movzx ecx, word ptr [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 47 27 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x27
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 2b4h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        ; Exact mapped bytes E8 A8 1F EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1f
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        add ecx, 32h
        ; Exact mapped bytes 66 89 8D 7E FF FF FF: mov word ptr [ebp - 0x82], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 82h]
        push edx
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 F8 26 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x26
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9F 03 00 00: jmp 0x585b3b2d
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e14h], 0
        ; Exact mapped bytes 0F 8E CA 01 00 00: jle 0x585b3968
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 75 11: jne 0x585b37b8
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e10h]
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 17: jmp 0x585b37cf
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 C8 FF FF: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x585b3963
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 36 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e18h], 190h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e1ch], 10eh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e14h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e14h], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 34ch]
        mov dword ptr [ebp - 2b8h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0b0h]
        ; Exact mapped bytes E8 BB 1E EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1e
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 32h
        ; Exact mapped bytes 66 89 95 7C FF FF FF: mov word ptr [ebp - 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 0B 26 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x26
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 2bch], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b0h]
        ; Exact mapped bytes E8 6C 1E EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x1e
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 32h
        ; Exact mapped bytes 66 89 85 7A FF FF FF: mov word ptr [ebp - 0x86], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 86h]
        push ecx
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 BC 25 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 2c0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 1D 1E EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x1e
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 32h
        ; Exact mapped bytes 66 89 85 6E FF FF FF: mov word ptr [ebp - 0x92], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 92h]
        push ecx
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 6D 25 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 2c4h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        ; Exact mapped bytes E8 CE 1D EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x1d
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        add ecx, 32h
        ; Exact mapped bytes 66 89 8D 78 FF FF FF: mov word ptr [ebp - 0x88], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 1E 25 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C5 01 00 00: jmp 0x585b3b2d
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 11: jne 0x585b3982
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e10h]
        mov dword ptr [ebp - 0c0h], edx
        ; Exact mapped bytes EB 17: jmp 0x585b3999
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D C7 FF FF: call 0x585b0130
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x585b3b2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 34 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e18h], 0fffffe70h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e1ch], 0fffffef2h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e14h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e14h], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 2c8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b0h]
        ; Exact mapped bytes E8 F1 1C EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1c
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        sub ecx, 32h
        ; Exact mapped bytes 66 89 8D 76 FF FF FF: mov word ptr [ebp - 0x8a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 8ah]
        push edx
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 41 24 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x24
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 34ch]
        mov dword ptr [ebp - 2cch], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0b0h]
        ; Exact mapped bytes E8 A2 1C EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x1c
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        sub edx, 32h
        ; Exact mapped bytes 66 89 95 74 FF FF FF: mov word ptr [ebp - 0x8c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 F2 23 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x23
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 2d0h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 53 1C EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1c
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        sub edx, 32h
        ; Exact mapped bytes 66 89 95 72 FF FF FF: mov word ptr [ebp - 0x8e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 8eh]
        push eax
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 A3 23 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x23
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 2d4h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 04 1C EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1c
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        sub eax, 32h
        ; Exact mapped bytes 66 89 85 70 FF FF FF: mov word ptr [ebp - 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 54 23 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x23
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b0h]
        mov dword ptr [ebp - 2d8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e1ch]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e18h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 68 16 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b0h]
        mov dword ptr [ebp - 2dch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 B3 19 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x19
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b0h]
        mov dword ptr [ebp - 2e0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e1ch]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e18h]
        neg edx
        push edx
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 08 16 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x16
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b0h]
        mov dword ptr [ebp - 2e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 53 19 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x19
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 2e8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e1ch]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e18h]
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 A8 15 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 2ech], edx
        push 0
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 F3 18 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x18
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 2f0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e1ch]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e18h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 48 15 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 2f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 93 18 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x18
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0db4h]
        ; Exact mapped bytes E8 B5 83 ED FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 12 22 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x22
        __asm _emit 0xed
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 93 FF FF: call 0x585ad000
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 48 00 00: call 0x585b8550
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 47 03 00 00: jmp 0x585b402f
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0d84h]
        ; Exact mapped bytes E8 2A 19 F3 FF: call 0x584e5620
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x19
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B 31 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dc8h]
        ; Exact mapped bytes E8 4C 0C ED FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x585b3d35
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dc8h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0dc8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 34ch]
        mov dword ptr [ebp - 2fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 36 22 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x22
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 34ch]
        mov dword ptr [ebp - 300h], ecx
        push 0
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 11 22 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x22
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 304h], edx
        push 0
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 EC 21 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 308h], edx
        push 0
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 C7 21 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 45ch]
        mov dword ptr [ebp - 30ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 AB 21 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b3df8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        add edx, 1
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 20h
        ; Exact mapped bytes 73 43: jae 0x585b3e41
        __asm _emit 0x73
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 3dch]
        mov dword ptr [ebp - 310h], edx
        push 0
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 72 21 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 35ch]
        mov dword ptr [ebp - 314h], edx
        push 0
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 52 21 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x585b3def
        __asm _emit 0xeb
        __asm _emit 0xae
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 460h]
        mov dword ptr [ebp - 318h], ecx
        push 0
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 33 21 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 468h]
        mov dword ptr [ebp - 31ch], eax
        push 0
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 17 21 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 46ch]
        mov dword ptr [ebp - 320h], edx
        push 0
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 FB 20 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 46ch]
        mov dword ptr [ebp - 324h], ecx
        push 0
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 DF 20 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 464h]
        mov dword ptr [ebp - 328h], eax
        push 0
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 C3 20 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0db8h]
        ; Exact mapped bytes E8 84 C6 FF FF: call 0x585b0560
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x585b3f04
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0db4h]
        ; Exact mapped bytes E8 82 81 ED FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x81
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 DF 1F ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1f
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 51: jmp 0x585b3f55
        __asm _emit 0xeb
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dbch]
        ; Exact mapped bytes E8 4E 53 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 74 16: je 0x585b3f30
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dbch]
        ; Exact mapped bytes E8 38 53 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 4
        ; Exact mapped bytes 75 1A: jne 0x585b3f4a
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dbch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0dbch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC 90 FF FF: call 0x585ad000
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 45 00 00: call 0x585b8550
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DC 57 F7 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x57
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 0a9h
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x585b402f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b3f95
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 470h]
        cmp dword ptr [ebp - 20h], edx
        ; Exact mapped bytes 7D 25: jge 0x585b3fc9
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 474h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 330h], eax
        push 1
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 1A 1F ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1f
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b3f8c
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b3fdb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 471h]
        cmp dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 7D 25: jge 0x585b400f
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 478h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 334h], ecx
        push 1
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 D4 1E ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x585b3fd2
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 338h], eax
        push 80h
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 12 15 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9F 03 00 00: jmp 0x585b43d3
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x585b4180
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 78 1F F1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1f
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x585b417b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 10h
        ; Exact mapped bytes 7E 5D: jle 0x585b40ca
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 28h]
        sub eax, 10h
        mov dword ptr [ebp - 28h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 33ch], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 A3 14 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 340h], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 7C 14 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x585b417b
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 344h], ecx
        push 0
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 51 14 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 348h], ecx
        push 0
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 2C 14 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 34ch], edx
        push 0
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 57 1E ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1e
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 350h], edx
        push 0
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 32 1E ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x1e
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 354h], ecx
        push 0
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 66 1D ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 53 02 00 00: jmp 0x585b43d3
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 39 1E F1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1e
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 100h
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x585b4261
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 100h
        sub eax, dword ptr [ebp - 2ch]
        cmp eax, 10h
        ; Exact mapped bytes 7E 5A: jle 0x585b4210
        __asm _emit 0x7e
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 10h
        mov dword ptr [ebp - 2ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 358h], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 5A 13 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x13
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 35ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 33 13 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 51: jmp 0x585b4261
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 360h], edx
        push 100h
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 08 13 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 364h], edx
        push 100h
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 E0 12 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes E8 21 16 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x16
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 1D: jne 0x585b4293
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 368h], eax
        push 1
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 4E 1C ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        ; Exact mapped bytes E8 E6 15 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x15
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x585b43d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 354h]
        ; Exact mapped bytes E8 04 1D F1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x585b43d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 10h
        ; Exact mapped bytes 7E 5D: jle 0x585b433e
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 30h]
        sub eax, 10h
        mov dword ptr [ebp - 30h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 36ch], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 2F 12 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x12
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 370h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 08 12 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x12
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x585b43d3
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 374h], ecx
        push 0
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 DD 11 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 378h], edx
        push 0
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 08 1C ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 37ch], edx
        push 0
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 93 11 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x11
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 380h], edx
        push 0
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 BE 1B ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1b
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1048h], 0
        ; Exact mapped bytes 74 09: je 0x585b43e8
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 D0 FF FF: call 0x585b14a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6D: jmp 0x585b4457
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov ecx, dword ptr [ebp - 4]
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
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 0dh
        ; Exact mapped bytes 75 56: jne 0x585b4457
        __asm _emit 0x75
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e04h], 64h
        ; Exact mapped bytes 75 4A: jne 0x585b4457
        __asm _emit 0x75
        __asm _emit 0x4a
        push -1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dfch]
        push eax
        ; Exact mapped bytes FF 15 28 41 89 58: call dword ptr [0x58894128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dfch]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 12ch
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 84 17 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 84 75 94 58 00 00 00 00: mov dword ptr [0x58947584], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x585b4478
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x585b4478
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 60: je 0x585b44e7
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x585b449b
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB E6: jmp 0x585b4481
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6D 11 EE FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x11
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x585b44bf
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x585b44e7
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x585b44e5
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 49 11 EE FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x11
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 384h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 384h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 9A: jmp 0x585b4481
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov esp, ebp
    }
}
