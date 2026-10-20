// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58711740 .. +0xFA2 bytes.
extern "C" __declspec(naked) void FUN_58711740_58711740() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 168h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov edi, dword ptr [ebp - 4]
        add edi, 0ach
        mov ecx, 60h
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 70h], ecx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 1C 48 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 0F B6 42 10: movzx ax, byte ptr [edx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 45 C4: mov word ptr [ebp - 0x3c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc4
        movzx ecx, word ptr [ebp - 3ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9E 08 00 00: je 0x5871202a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 3ch]
        sub edx, 1
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 12: mov cx, word ptr [eax + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x12
        ; Exact mapped bytes 66 89 4D CC: mov word ptr [ebp - 0x34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xcc
        mov dword ptr [ebp - 1ch], 0
        movzx edx, word ptr [ebp - 8]
        mov dword ptr [ebp - 54h], edx
        cmp dword ptr [ebp - 54h], 7
        ; Exact mapped bytes 77 50: ja 0x58711806
        __asm _emit 0x77
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 24 85 E4 26 71 58: jmp dword ptr [eax*4 + 0x587126e4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x71
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], 0fffffc18h
        ; Exact mapped bytes EB 3D: jmp 0x58711806
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 1ch], 0fffff830h
        ; Exact mapped bytes EB 34: jmp 0x58711806
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 1ch], 0fffff448h
        ; Exact mapped bytes EB 2B: jmp 0x58711806
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 1ch], 0fffff060h
        ; Exact mapped bytes EB 22: jmp 0x58711806
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 1ch], 0ffffec78h
        ; Exact mapped bytes EB 19: jmp 0x58711806
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 1ch], 0ffffe890h
        ; Exact mapped bytes EB 10: jmp 0x58711806
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 1ch], 0ffffe4a8h
        ; Exact mapped bytes EB 07: jmp 0x58711806
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0ffffe0c0h
        movzx ecx, word ptr [ebp - 8]
        cmp ecx, 7
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x587118bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 78h], eax
        movzx ecx, word ptr [ebp - 8]
        add ecx, 5
        push ecx
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 32 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 F2 46 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x46
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 1e70h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 51 3E 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 84h], eax
        movzx ecx, word ptr [ebp - 8]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 32 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 A0 46 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 1e70h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 F9 3D 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x58711974
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 90h], eax
        push 132h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 32 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 3F 46 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x46
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 1e70h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 98 3D 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 9ch], edx
        push 133h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 31 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x31
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 E4 45 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 1e70h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 3D 3D 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 1e70h]
        movzx eax, word ptr [ebp - 8]
        imul edx, eax, 320h
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx + 250h]
        movzx eax, word ptr [ebp - 34h]
        add eax, dword ptr [ebp - 1ch]
        add ecx, dword ptr [edx + eax*8]
        mov dword ptr [ebp - 0a8h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 1e74h]
        movzx ecx, word ptr [ebp - 8]
        imul eax, ecx, 320h
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax + 250h]
        movzx ecx, word ptr [ebp - 34h]
        add ecx, dword ptr [ebp - 1ch]
        add edx, dword ptr [eax + ecx*8 + 4]
        mov dword ptr [ebp - 0a4h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 1D 3C 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2470h]
        mov dword ptr [ebp - 0b0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        movzx ecx, word ptr [ebp - 8]
        imul edx, ecx, 1dh
        lea eax, [eax + edx + 1e1h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 7E 3C 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2470h]
        mov dword ptr [ebp - 0b4h], edx
        push 6
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 F2 DD D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xdd
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2470h]
        mov dword ptr [ebp - 0b8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 76 44 D7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x44
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 12h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 65 DE FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x65
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 0F 84 B4 01 00 00: je 0x58711c3e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 360h
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58711aa8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 8
        ; Exact mapped bytes 0F 8D 8C 01 00 00: jge 0x58711c3e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 40h]
        movzx edx, word ptr [ecx + eax*4 + 2]
        test edx, edx
        ; Exact mapped bytes 0F 84 3D 01 00 00: je 0x58711c02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax*4]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 200ch], edx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 66 8B 4C 90 02: mov cx, word ptr [eax + edx*4 + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 4D D0: mov word ptr [ebp - 0x30], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 40h]
        movzx ecx, word ptr [eax + edx*4 + 2]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 64 DE FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x64
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        movzx edx, word ptr [ebp - 8]
        imul eax, edx, 64h
        movzx ecx, word ptr [ebp - 30h]
        add eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 94 01 40 D2 8F 58: movsx edx, byte ptr [ecx + eax + 0x588fd240]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x40
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        cmp edx, 1
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x58711bda
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x58711bda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        xor edx, 55h
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 C8: and cx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc8
        movzx ecx, cx
        cmp edx, ecx
        ; Exact mapped bytes 7C 7E: jl 0x58711bda
        __asm _emit 0x7c
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 0bch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 1e74h]
        movzx edx, word ptr [ebp - 8]
        imul ecx, edx, 320h
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx + 250h]
        movzx edx, word ptr [ebp - 30h]
        add edx, dword ptr [ebp - 1ch]
        add eax, dword ptr [ecx + edx*8 + 4]
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 1e70h]
        movzx eax, word ptr [ebp - 8]
        imul edx, eax, 320h
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx + 250h]
        movzx eax, word ptr [ebp - 30h]
        add eax, dword ptr [ebp - 1ch]
        add ecx, dword ptr [edx + eax*8]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 49 3A 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 26: jmp 0x58711c00
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 0c0h], eax
        push 258h
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 21 3A 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 37: jmp 0x58711c39
        __asm _emit 0xeb
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 200ch], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 0c4h], edx
        push 258h
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 E8 39 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 61 FE FF FF: jmp 0x58711a9f
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58711c50
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 64h
        ; Exact mapped bytes 0F 8D 3B 03 00 00: jge 0x58711f95
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 4D B4: mov word ptr [ebp - 0x4c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes 66 8B 55 B4: mov dx, word ptr [ebp - 0x4c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xb4
        ; Exact mapped bytes 66 89 55 D8: mov word ptr [ebp - 0x28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 55 D8: mov dx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 66 89 94 41 2C 20 00 00: mov word ptr [ecx + eax*2 + 0x202c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 63 DE FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x63
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        movzx ecx, word ptr [ebp - 8]
        imul edx, ecx, 64h
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 8C 02 40 D2 8F 58: movsx ecx, byte ptr [edx + eax + 0x588fd240]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x40
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 80 02 00 00: jne 0x58711f2c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 0F 84 76 02 00 00: je 0x58711f2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], 0
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x58711ccf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 44h]
        add edx, 1
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 20h
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x58711d6a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx*2 + 16ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 12: je 0x58711d01
        __asm _emit 0x74
        __asm _emit 0x12
        movzx edx, word ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0beh]
        cmp edx, ecx
        ; Exact mapped bytes 75 64: jne 0x58711d65
        __asm _emit 0x75
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 20f8h]
        mov dword ptr [ebp - 0cch], ecx
        movzx edx, word ptr [ebp - 8]
        push edx
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 2D D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2d
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 24 4F D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 20f8h]
        mov dword ptr [ebp - 0d0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 54 38 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], 1
        ; Exact mapped bytes EB 05: jmp 0x58711d6a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x58711cc6
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        xor eax, 55h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        movzx edx, dx
        cmp eax, edx
        ; Exact mapped bytes 7D 61: jge 0x58711dfa
        __asm _emit 0x7d
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 20f8h]
        mov dword ptr [ebp - 0d8h], edx
        movzx eax, word ptr [ebp - 8]
        push eax
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 2D D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2d
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 8C 4E D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x4e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 20f8h]
        mov dword ptr [ebp - 0dch], ecx
        push 0ffffff4ch
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 B9 37 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 62: jmp 0x58711e5c
        __asm _emit 0xeb
        __asm _emit 0x62
        cmp dword ptr [ebp - 64h], 1
        ; Exact mapped bytes 74 5C: je 0x58711e5c
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 20f8h]
        mov dword ptr [ebp - 0e4h], ecx
        movzx edx, word ptr [ebp - 8]
        push edx
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 2C D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x2c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 25 4E D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x4e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 20f8h]
        mov dword ptr [ebp - 0e8h], eax
        push -64h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 55 37 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 20f8h]
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 C2 D9 D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd9
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 20f8h]
        mov dword ptr [ebp - 0f0h], ecx
        movzx edx, word ptr [ebp - 8]
        imul eax, edx, 320h
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 250h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*8 + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 4]
        add ecx, dword ptr [eax + 1e74h]
        push ecx
        movzx ecx, word ptr [ebp - 8]
        imul edx, ecx, 320h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 250h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 1e70h]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 2F 37 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 2288h]
        mov dword ptr [ebp - 0f8h], edx
        push 3
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 2C D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 07 40 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x40
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 26: jmp 0x58711f52
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 20f8h]
        mov dword ptr [ebp - 0fch], eax
        push 258h
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 CF 36 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2288h]
        mov dword ptr [ebp - 104h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 20f8h]
        ; Exact mapped bytes E8 89 2A D7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 A1 D4 D8 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B2 FC FF FF: jmp 0x58711c47
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 8
        imul edx, ecx, 0
        movzx eax, word ptr [ebp - 8]
        imul ecx, eax, 320h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + ecx + 250h]
        movzx eax, word ptr [ebp - 34h]
        add eax, dword ptr [ebp - 1ch]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx + 238h]
        sub edx, dword ptr [ecx + eax*8]
        mov dword ptr [ebp - 68h], edx
        push 0
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A F6 FF FF: call 0x58711630
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 10ch], edx
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 4]
        add esi, 12eh
        imul edi, dword ptr [ebp - 68h], 0f0h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 CD 38 D8 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x38
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        sub esi, eax
        mov dword ptr [ebp - 108h], esi
        mov edx, dword ptr [ebp - 108h]
        push edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 8C 36 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 96 06 00 00: jmp 0x587126c0
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 12: mov cx, word ptr [eax + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x12
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 114h], eax
        push 1
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 2A D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x2a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 C3 3E D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x3e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 11ch], eax
        push 2
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 2A D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 92 3E D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 1e70h]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 EB 35 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 1e70h]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 C4 35 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 12h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 5E DE FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x5e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 0F 84 EB 03 00 00: je 0x58712504
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 6ch
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58712134
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 0F 8D 59 03 00 00: jge 0x58712497
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 48h]
        movzx eax, byte ptr [edx + ecx*4 + 1]
        test eax, eax
        ; Exact mapped bytes 0F 84 0A 03 00 00: je 0x5871245b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 1
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + edx*4]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 200ch], ecx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 66 0F B6 04 8A: movzx ax, byte ptr [edx + ecx*4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x8a
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 66 8B 44 8A 02: mov ax, word ptr [edx + ecx*4 + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x8a
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 D4: mov word ptr [ebp - 0x2c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        movzx ecx, word ptr [ebp - 14h]
        mov dword ptr [ebp - 6ch], ecx
        cmp dword ptr [ebp - 6ch], 8
        ; Exact mapped bytes 77 59: ja 0x587121f4
        __asm _emit 0x77
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 24 95 04 27 71 58: jmp dword ptr [edx*4 + 0x58712704]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x27
        __asm _emit 0x71
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 46: jmp 0x587121f4
        __asm _emit 0xeb
        __asm _emit 0x46
        mov dword ptr [ebp - 20h], 0fffffc18h
        ; Exact mapped bytes EB 3D: jmp 0x587121f4
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 20h], 0fffff830h
        ; Exact mapped bytes EB 34: jmp 0x587121f4
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 20h], 0fffff448h
        ; Exact mapped bytes EB 2B: jmp 0x587121f4
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 20h], 0fffff060h
        ; Exact mapped bytes EB 22: jmp 0x587121f4
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 20h], 0ffffec78h
        ; Exact mapped bytes EB 19: jmp 0x587121f4
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 20h], 0ffffe890h
        ; Exact mapped bytes EB 10: jmp 0x587121f4
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], 0ffffe4a8h
        ; Exact mapped bytes EB 07: jmp 0x587121f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0ffffe0c0h
        movzx eax, word ptr [ebp - 14h]
        test eax, eax
        ; Exact mapped bytes 0F 84 F8 01 00 00: je 0x587123f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 14h]
        sub ecx, 1
        imul edx, ecx, 64h
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 8C 02 40 D2 8F 58: movsx ecx, byte ptr [edx + eax + 0x588fd240]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x40
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 D8 01 00 00: jne 0x587123f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 20f8h]
        mov dword ptr [ebp - 130h], ecx
        movzx edx, word ptr [ebp - 14h]
        sub edx, 1
        push edx
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 28 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 04 4A D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 20f8h]
        mov dword ptr [ebp - 134h], eax
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 C4 D5 D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd5
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 20f8h]
        mov dword ptr [ebp - 138h], eax
        movzx ecx, word ptr [ebp - 14h]
        sub ecx, 1
        imul edx, ecx, 320h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 250h]
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 4]
        add ecx, dword ptr [eax + 1e74h]
        push ecx
        movzx ecx, word ptr [ebp - 14h]
        sub ecx, 1
        imul edx, ecx, 320h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 250h]
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ebp - 4]
        add ecx, dword ptr [eax + 1e70h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 21 33 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2288h]
        mov dword ptr [ebp - 140h], eax
        push 3
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 28 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x28
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 F9 3B D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2288h]
        mov dword ptr [ebp - 148h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 20f8h]
        ; Exact mapped bytes E8 A4 26 D7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x26
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 BC D0 D8 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd0
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 14ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 1e74h]
        movzx edx, word ptr [ebp - 14h]
        sub edx, 1
        imul ecx, edx, 320h
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx + 250h]
        movzx edx, word ptr [ebp - 2ch]
        add edx, dword ptr [ebp - 20h]
        add eax, dword ptr [ecx + edx*8 + 4]
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 1e70h]
        movzx eax, word ptr [ebp - 14h]
        sub eax, 1
        imul edx, eax, 320h
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx + 250h]
        movzx eax, word ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + eax*8]
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 2B 32 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x32
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 61: jmp 0x58712459
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 1e74h]
        movzx ecx, word ptr [ebp - 2ch]
        add ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + ecx*8 + 23ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 1e70h]
        movzx ecx, word ptr [ebp - 2ch]
        add ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + ecx*8 + 238h]
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 C8 31 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 37: jmp 0x58712492
        __asm _emit 0xeb
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 200ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 154h], edx
        push 258h
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 8F 31 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 94 FC FF FF: jmp 0x5871212b
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0c8h
        push 1869fh
        mov eax, dword ptr [ebp - 4]
        add eax, 202ch
        push eax
        ; Exact mapped bytes E8 61 A9 13 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa9
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x58712504
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 8
        ; Exact mapped bytes 7F 2D: jg 0x58712504
        __asm _emit 0x7f
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 3e8h
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx edx, ax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8C 50 2A 20 00 00: mov word ptr [eax + edx*2 + 0x202a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x2a
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 7D: jne 0x58712587
        __asm _emit 0x75
        __asm _emit 0x7d
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 8ch]
        mov dword ptr [ebp - 158h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 1e74h]
        mov edx, 8
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + ecx + 23ch]
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 1e70h]
        mov eax, 8
        imul edx, eax, 0
        mov eax, dword ptr [ebp - 4]
        add ecx, dword ptr [eax + edx + 238h]
        push ecx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 AF 30 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 200ch], 1
        movzx ecx, word ptr [ebp - 18h]
        test ecx, ecx
        ; Exact mapped bytes 74 57: je 0x587125e6
        __asm _emit 0x74
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 15ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 1e74h]
        movzx ecx, word ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + ecx*8 + 234h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 1e70h]
        movzx ecx, word ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + ecx*8 + 230h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 3B 30 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x587125f8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 3
        ; Exact mapped bytes 7D 5B: jge 0x58712659
        __asm _emit 0x7d
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2418h]
        mov dword ptr [ebp - 160h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*8 + 23ch]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 4]
        add ecx, dword ptr [eax + 1e74h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*8 + 238h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 1e70h]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 CA 2F 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 96: jmp 0x587125ef
        __asm _emit 0xeb
        __asm _emit 0x96
        movzx eax, word ptr [ebp - 18h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x5871266c
        __asm _emit 0x74
        __asm _emit 0x0b
        movzx ecx, word ptr [ebp - 18h]
        sub ecx, 1
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov edx, 8
        imul eax, edx, 0
        movzx ecx, word ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax + 238h]
        sub eax, dword ptr [esi + ecx*8 + 238h]
        mov dword ptr [ebp - 164h], eax
        push 0
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D EF FF FF: call 0x58711630
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2470h]
        mov dword ptr [ebp - 168h], eax
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 21 38 D7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x38
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 22ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1e78h], 0
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
