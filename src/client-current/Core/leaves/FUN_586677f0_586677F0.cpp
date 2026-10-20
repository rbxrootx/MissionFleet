// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586677F0 .. +0xA21 bytes.
extern "C" __declspec(naked) void FUN_586677f0_586677F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 FC 09 00 00: je 0x5866820e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x586678aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x5866783e
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 D6 09 00 00: jmp 0x58668214
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 F7 D0 E1 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5866785d
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 B9 09 00 00: jmp 0x58668214
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x58667889
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 C0 D0 E1 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd0
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x58667889
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x586678aa
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 19: je 0x586678a8
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x586678a8
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 10h], 0
        xor eax, eax
        ; Exact mapped bytes E9 6C 09 00 00: jmp 0x58668214
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x5866784e
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 203h
        ; Exact mapped bytes 77 28: ja 0x586678e4
        __asm _emit 0x77
        __asm _emit 0x28
        cmp dword ptr [ebp - 14h], 203h
        ; Exact mapped bytes 0F 84 24 05 00 00: je 0x58667ded
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 100h
        ; Exact mapped bytes 74 31: je 0x58667903
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 14h], 201h
        ; Exact mapped bytes 0F 84 D8 04 00 00: je 0x58667db7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2A 09 00 00: jmp 0x5866820e
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 204h
        ; Exact mapped bytes 0F 84 AD 06 00 00: je 0x58667f9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 20ah
        ; Exact mapped bytes 0F 84 CB 06 00 00: je 0x58667fc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0B 09 00 00: jmp 0x5866820e
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 D0 E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd0
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F7 DF E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xdf
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 81 04 00 00: je 0x58667db2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        sub edx, 21h
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 7
        ; Exact mapped bytes 0F 87 65 04 00 00: ja 0x58667db2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 85 1C 82 66 58: jmp dword ptr [eax*4 + 0x5866821c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x82
        __asm _emit 0x66
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 DE 00 00 00: movsx edx, word ptr [ecx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 68: jne 0x586679cd
        __asm _emit 0x75
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e8h], 0
        ; Exact mapped bytes 74 5A: je 0x586679cb
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes E8 41 D0 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd0
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x586679cb
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 E2 00 00 00: movsx eax, word ptr [edx + 0xe2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 3A: jle 0x586679cb
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 E2 00 00 00: mov dx, word ptr [ecx + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E2 00 00 00: mov word ptr [eax + 0xe2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes E8 09 D0 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xd0
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 21 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 75: jmp 0x58667a42
        __asm _emit 0xeb
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 DE 00 00 00: movsx ecx, word ptr [eax + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 75 66: jne 0x58667a42
        __asm _emit 0x75
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0e8h], 0
        ; Exact mapped bytes 74 5A: je 0x58667a42
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        ; Exact mapped bytes E8 CA CF E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x58667a42
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 E0 00 00 00: movsx edx, word ptr [ecx + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 7E 3A: jle 0x58667a42
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 E0 00 00 00: mov cx, word ptr [eax + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A E0 00 00 00: mov word ptr [edx + 0xe0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        ; Exact mapped bytes E8 92 CF E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcf
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F 21 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6B 03 00 00: jmp 0x58667db2
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 73: jne 0x58667ac8
        __asm _emit 0x75
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e8h], 0
        ; Exact mapped bytes 74 67: je 0x58667ac8
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e8h]
        ; Exact mapped bytes E8 C1 DC E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xdc
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x58667ac8
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 E2 00 00 00: movsx ecx, word ptr [eax + 0xe2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DA 00 00 00: movsx eax, word ptr [edx + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        cmp ecx, eax
        ; Exact mapped bytes 7D 3A: jge 0x58667ac8
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 E2 00 00 00: mov dx, word ptr [ecx + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E2 00 00 00: mov word ptr [eax + 0xe2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes E8 7C DC E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xdc
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 20 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E5 02 00 00: jmp 0x58667db2
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x58667b88
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e8h], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x58667b88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 E2 00 00 00: movsx eax, word ptr [edx + 0xe2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        test eax, eax
        ; Exact mapped bytes 7E 62: jle 0x58667b62
        __asm _emit 0x7e
        __asm _emit 0x62
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58667b12
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 5
        ; Exact mapped bytes 7D 3D: jge 0x58667b55
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0e8h], 0
        ; Exact mapped bytes 74 2F: je 0x58667b53
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        ; Exact mapped bytes E8 8E CE E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xce
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 E2 00 00 00: mov ax, word ptr [edx + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 E2 00 00 00: mov word ptr [ecx + 0xe2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B4: jmp 0x58667b09
        __asm _emit 0xeb
        __asm _emit 0xb4
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 20 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 26: jmp 0x58667b88
        __asm _emit 0xeb
        __asm _emit 0x26
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E2 00 00 00: mov word ptr [eax + 0xe2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ecx + 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 20 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 25 02 00 00: jmp 0x58667db2
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 DE 00 00 00: movsx ecx, word ptr [eax + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 85 2B 01 00 00: jne 0x58667cca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0e8h], 0
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x58667cca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 E2 00 00 00: movsx ecx, word ptr [eax + 0xe2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 5
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DA 00 00 00: movsx eax, word ptr [edx + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        cmp ecx, eax
        ; Exact mapped bytes 7D 65: jge 0x58667c32
        __asm _emit 0x7d
        __asm _emit 0x65
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x58667bdf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 5
        ; Exact mapped bytes 7D 3D: jge 0x58667c22
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0e8h], 0
        ; Exact mapped bytes 74 2F: je 0x58667c20
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        ; Exact mapped bytes E8 31 DB E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xdb
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 E2 00 00 00: mov ax, word ptr [edx + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 E2 00 00 00: mov word ptr [ecx + 0xe2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B4: jmp 0x58667bd6
        __asm _emit 0xeb
        __asm _emit 0xb4
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 1F 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x58667cca
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DA 00 00 00: movsx eax, word ptr [edx + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 E2 00 00 00: mov word ptr [ecx + 0xe2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 E2 00 00 00: movsx eax, word ptr [edx + 0xe2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 28: jge 0x58667c7f
        __asm _emit 0x7d
        __asm _emit 0x28
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A E2 00 00 00: mov word ptr [edx + 0xe2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [eax + 0e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 34 1F 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4B: jmp 0x58667cca
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [eax + 0e8h], edx
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58667ca0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 4
        ; Exact mapped bytes 7D 19: jge 0x58667cbf
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes E8 0C CD E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcd
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e8h], eax
        ; Exact mapped bytes EB D8: jmp 0x58667c97
        __asm _emit 0xeb
        __asm _emit 0xd8
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 1E 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x58667db2
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x58667d03
        __asm _emit 0x75
        __asm _emit 0x26
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A E2 00 00 00: mov word ptr [edx + 0xe2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [eax + 0e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 1E 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x58667db2
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x58667db2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 DA 00 00 00: movsx edx, word ptr [ecx + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, 5
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E2 00 00 00: mov word ptr [eax + 0xe2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 E2 00 00 00: movsx edx, word ptr [ecx + 0xe2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 7D 28: jge 0x58667d67
        __asm _emit 0x7d
        __asm _emit 0x28
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 E2 00 00 00: mov word ptr [ecx + 0xe2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [edx + 0e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 1E 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4B: jmp 0x58667db2
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [edx + 0e8h], ecx
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x58667d88
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 4
        ; Exact mapped bytes 7D 19: jge 0x58667da7
        __asm _emit 0x7d
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        ; Exact mapped bytes E8 24 CC E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        ; Exact mapped bytes EB D8: jmp 0x58667d7f
        __asm _emit 0xeb
        __asm _emit 0xd8
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 1D 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 57 04 00 00: jmp 0x5866820e
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 CC E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xcc
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 43 DB E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xdb
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58667de8
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 2C 04 00 00: jmp 0x58668214
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 21 04 00 00: jmp 0x5866820e
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC CB E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcb
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 0D DB E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xdb
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x58667f99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 DE 00 00 00: movsx edx, word ptr [ecx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 0E: jne 0x58667e3e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 1B: jmp 0x58667e59
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0C: jne 0x58667e59
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58667e6b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 5
        ; Exact mapped bytes 7D 2A: jge 0x58667e9b
        __asm _emit 0x7d
        __asm _emit 0x2a
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x58667e7e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 96 03 00 00: jmp 0x58668214
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0A CA E5 FF: call 0x584c4890
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xca
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x58667e8e
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes EB 0F: jmp 0x58667e9b
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes EB 0B: jmp 0x58667e99
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9A D8 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB C7: jmp 0x58667e62
        __asm _emit 0xeb
        __asm _emit 0xc7
        cmp dword ptr [ebp - 20h], 5
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x58667f92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 43 0F FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x58667f5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 50 84 E4 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 31: jne 0x58667efa
        __asm _emit 0x75
        __asm _emit 0x31
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 0C 00 00: call 0x58668bb0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1C: je 0x58667ef8
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 96 6E FB FF: call 0x5861ed80
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x6e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 61: jmp 0x58667f5b
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5E 13 E5 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x13
        __asm _emit 0xe5
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 10: jne 0x58667f1a
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 41: jmp 0x58667f5b
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6E D9 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd9
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x58667f36
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD 82 FB FF: call 0x58620210
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 25: jmp 0x58667f5b
        __asm _emit 0xeb
        __asm _emit 0x25
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 82 FB FF: call 0x58620210
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 0F 00 00: call 0x58668e80
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 0D: je 0x58667f5b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 09 00 00: call 0x58668860
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 35: jmp 0x58667f92
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AB 83 E4 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58667f92
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9F 83 E4 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 50 81 FB FF: call 0x586200d0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 88 83 E4 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 08 00 00: call 0x58668860
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        ; Exact mapped bytes E9 7B 02 00 00: jmp 0x58668214
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 70 02 00 00: jmp 0x5866820e
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B CA E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xca
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 5C D9 E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd9
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes E9 45 02 00 00: jmp 0x5866820e
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 60h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 CA E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xca
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 31 D9 E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd9
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 17 02 00 00: je 0x5866820e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        shr ecx, 10h
        and ecx, 0ffffh
        ; Exact mapped bytes 0F BF D1: movsx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd1
        test edx, edx
        ; Exact mapped bytes 7E 07: jle 0x5866801b
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 DE 00 00 00: movsx ecx, word ptr [eax + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x58668118
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0e8h], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x5866810c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 69: je 0x586680ac
        __asm _emit 0x74
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        ; Exact mapped bytes E8 DF D6 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x586680ac
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 E2 00 00 00: movsx edx, word ptr [ecx + 0xe2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 DA 00 00 00: movsx ecx, word ptr [eax + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 5
        cmp edx, ecx
        ; Exact mapped bytes 7D 3A: jge 0x586680aa
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 E2 00 00 00: mov ax, word ptr [edx + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 E2 00 00 00: mov word ptr [ecx + 0xe2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e8h]
        ; Exact mapped bytes E8 9A D6 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 1B 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 60: jmp 0x5866810c
        __asm _emit 0xeb
        __asm _emit 0x60
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 5A: jne 0x5866810c
        __asm _emit 0x75
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e8h]
        ; Exact mapped bytes E8 00 C9 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc9
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x5866810c
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 E2 00 00 00: movsx ecx, word ptr [eax + 0xe2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 7E 3A: jle 0x5866810c
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 E2 00 00 00: mov ax, word ptr [edx + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 E2 00 00 00: mov word ptr [ecx + 0xe2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e8h]
        ; Exact mapped bytes E8 C8 C8 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc8
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 1A 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x58668214
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x5866820e
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x5866820e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e4h], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x5866820a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 69: je 0x586681aa
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e4h]
        ; Exact mapped bytes E8 E1 D5 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd5
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x586681aa
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 E0 00 00 00: movsx ecx, word ptr [eax + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 D8 00 00 00: movsx eax, word ptr [edx + 0xd8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        cmp ecx, eax
        ; Exact mapped bytes 7D 3A: jge 0x586681a8
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 E0 00 00 00: mov dx, word ptr [ecx + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E0 00 00 00: mov word ptr [eax + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e4h]
        ; Exact mapped bytes E8 9C D5 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 1A 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 60: jmp 0x5866820a
        __asm _emit 0xeb
        __asm _emit 0x60
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 5A: jne 0x5866820a
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        ; Exact mapped bytes E8 02 C8 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc8
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x5866820a
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 E0 00 00 00: movsx edx, word ptr [ecx + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 7E 3A: jle 0x5866820a
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 E0 00 00 00: mov cx, word ptr [eax + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A E0 00 00 00: mov word ptr [edx + 0xe0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        ; Exact mapped bytes E8 CA C7 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc7
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 19 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x58668214
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 4]
    }
}
