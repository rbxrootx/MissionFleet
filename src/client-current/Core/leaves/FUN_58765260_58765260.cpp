// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58765260 .. +0x9D7 bytes.
extern "C" __declspec(naked) void FUN_58765260_58765260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d8h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x5876530e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 0D D6 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp dword ptr [eax], 0f0h
        ; Exact mapped bytes 7D 3E: jge 0x587652cc
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3A 0D D6 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x0d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        add edx, 10h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C 02 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12d0h]
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 0D D6 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 77 02 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3D: jmp 0x58765309
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 100h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 02 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12d0h]
        mov dword ptr [ebp - 2ch], edx
        push 100h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 4E 02 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12d0h]
        mov dword ptr [ebp - 30h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D8 0B D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E5 08 00 00: jmp 0x58765bf3
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 16ch]
        sub ecx, dword ptr [eax + 168h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 65 01 00 00: jne 0x5876549b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        shl ecx, 1
        mov edx, 100h
        sub edx, ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 70 01 00 00: mov word ptr [eax + 0x170], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5f34h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 170h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D5 01 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5876537e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 54 F6 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf6
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0A: mov ax, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 07: and ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x07
        movzx ecx, ax
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7D 26: jge 0x587653c2
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 5f38h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 170h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 81 01 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B3: jmp 0x58765375
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587653d4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x58765460
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 17ch], 0
        ; Exact mapped bytes 74 6D: je 0x5876545b
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 15 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x15
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 39: jne 0x58765437
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 B7 DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb7
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 58 DE E6 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xde
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 170h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 0C 01 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x5876545b
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 170h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E6 00 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x587653cb
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12d0h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 170h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C1 00 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12d0h]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 4B 0A D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 58 07 00 00: jmp 0x58765bf3
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 164h]
        cmp edx, 2
        ; Exact mapped bytes 0F 85 60 01 00 00: jne 0x5876560e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + eax + 6ah]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 70 01 00 00: mov word ptr [edx + 0x170], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f34h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 170h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 62 00 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587654f1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 E1 F4 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf4
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 07: and dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        movzx eax, dx
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7D 26: jge 0x58765535
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 5f38h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 170h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 0E 00 05 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B3: jmp 0x587654e8
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58765547
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x587655d3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 6D: je 0x587655ce
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 14 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 39: jne 0x587655aa
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 B6 DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb6
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E5 DC E6 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xdc
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 170h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 99 FF 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x587655ce
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 170h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 73 FF 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x5876553e
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12d0h]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 170h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 4E FF 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12d0h]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 D8 08 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E5 05 00 00: jmp 0x58765bf3
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 164h]
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 57 01 00 00: jne 0x58765778
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 20h], 5
        xor eax, eax
        sub eax, edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 72 01 00 00: mov word ptr [ecx + 0x172], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 72 01 00 00: movsx eax, word ptr [edx + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0ffffff06h
        ; Exact mapped bytes 7D 0F: jge 0x58765653
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, 0ffffff06h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 72 01 00 00: mov word ptr [edx + 0x172], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f34h]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 72 01 00 00: movsx eax, word ptr [edx + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 3E FF 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58765685
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 4D F3 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf3
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 07: and dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        movzx eax, dx
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 26: jge 0x587656c9
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 5f38h]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 72 01 00 00: movsx edx, word ptr [ecx + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 EA FE 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B3: jmp 0x5876567c
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x587656db
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x58765773
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 79: je 0x5876576e
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 12 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x12
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 3F: jne 0x58765744
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 B4 DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb4
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 51 DB E6 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xdb
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 72 01 00 00: movsx edx, word ptr [ecx + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 6F FE 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x5876576e
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 72 01 00 00: movsx edx, word ptr [ecx + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 43 FE 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x587656d2
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7B 04 00 00: jmp 0x58765bf3
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 164h]
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 6F 01 00 00: jne 0x587658fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 20h], 5
        sub edx, 0fah
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 72 01 00 00: mov word ptr [eax + 0x172], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 72 01 00 00: movsx edx, word ptr [ecx + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 7E 0C: jle 0x587657b9
        __asm _emit 0x7e
        __asm _emit 0x0c
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 72 01 00 00: mov word ptr [ecx + 0x172], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 72 01 00 00: movsx edx, word ptr [ecx + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 D2 FD 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x587657f1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 E1 F1 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx edx, cx
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 7D 2C: jge 0x5876583b
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5f38h]
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 72 01 00 00: movsx ecx, word ptr [eax + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 78 FD 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AD: jmp 0x587657e8
        __asm _emit 0xeb
        __asm _emit 0xad
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876584d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x587658f5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x587658f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
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
        ; Exact mapped bytes E8 4A 11 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x11
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 4B: jne 0x587658c6
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A B3 DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb3
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 D5 D9 E6 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 72 01 00 00: movsx ecx, word ptr [eax + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 ED FC 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x587658f0
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 72 01 00 00: movsx ecx, word ptr [eax + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 C1 FC 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58765844
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F9 02 00 00: jmp 0x58765bf3
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 3
        ; Exact mapped bytes 0F 85 6C 01 00 00: jne 0x58765a79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12d0h]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 B7 05 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, 6ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 70 01 00 00: mov word ptr [ecx + 0x170], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 170h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 E3 FB 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58765970
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 62 F0 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf0
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx edx, cx
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 7D 2C: jge 0x587659ba
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5f38h]
        mov dword ptr [ebp - 0ach], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 170h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 89 FB 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AD: jmp 0x58765967
        __asm _emit 0xeb
        __asm _emit 0xad
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x587659cc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x58765a74
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x58765a6f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
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
        ; Exact mapped bytes E8 CB 0F D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x0f
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 4B: jne 0x58765a45
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB B1 DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb1
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 56 D8 E6 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 170h]
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 FE FA 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58765a6f
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 170h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 D2 FA 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x587659c3
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7A 01 00 00: jmp 0x58765bf3
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 6
        ; Exact mapped bytes 0F 85 67 01 00 00: jne 0x58765bf3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12d0h]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 38 04 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, 0ffffff06h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 72 01 00 00: mov word ptr [ecx + 0x172], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 72 01 00 00: movsx edx, word ptr [ecx + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 D4 FA 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58765aef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 E3 EE D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xee
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx edx, cx
        cmp dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 7D 2C: jge 0x58765b39
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5f38h]
        mov dword ptr [ebp - 0c8h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 72 01 00 00: movsx ecx, word ptr [eax + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 7A FA 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AD: jmp 0x58765ae6
        __asm _emit 0xeb
        __asm _emit 0xad
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58765b4b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 20h
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x58765bf3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x58765bee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
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
        ; Exact mapped bytes E8 4C 0E D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0e
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 4B: jne 0x58765bc4
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C B0 DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb0
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 D7 D6 E6 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 72 01 00 00: movsx ecx, word ptr [eax + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 EF F9 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58765bee
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 0d8h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 72 01 00 00: movsx ecx, word ptr [eax + 0x172]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 C3 F9 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58765b42
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 3
        ; Exact mapped bytes 7F 31: jg 0x58765c33
        __asm _emit 0x7f
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 3A DC FF: call 0x58529610
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x3a
        __asm _emit 0xdc
        __asm _emit 0xff
        cmp dword ptr [eax], -10h
        ; Exact mapped bytes 7D 19: jge 0x58765c28
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 39 DC FF: call 0x58529610
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x39
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 10h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B F9 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0B: jmp 0x58765c33
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E F9 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
