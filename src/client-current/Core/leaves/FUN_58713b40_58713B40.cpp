// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58713B40 .. +0x471 bytes.
extern "C" __declspec(naked) void FUN_58713b40_58713B40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 44 DE FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 42 04 00 00: je 0x58713fab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB B8 D8 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb8
        __asm _emit 0xd8
        __asm _emit 0xff
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 24 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x24
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
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
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E9 75 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D1 75 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B9 75 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 9E 75 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 268h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 26ch]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58713c2a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 0F 8D 62 01 00 00: jge 0x58713da7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 80000000h
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x58713cf6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 0F 8D 93 00 00 00: jge 0x58713cf1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a4h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 18h]
        and edx, 80000000h
        ; Exact mapped bytes 74 09: je 0x58713c82
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0dbh
        ; Exact mapped bytes EB 07: jmp 0x58713c89
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0cbh
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 0E D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 19 BB D8 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xbb
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a4h]
        mov dword ptr [ebp - 40h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 CF 22 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x22
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a4h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + edx*2 + 0dah]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D8 9B D9 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x58713d92
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 0F 8D 92 00 00 00: jge 0x58713d92
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 84h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 18h]
        and eax, 80000000h
        ; Exact mapped bytes 74 09: je 0x58713d23
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0dbh
        ; Exact mapped bytes EB 07: jmp 0x58713d2a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0cbh
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 0D D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0d
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 78 BA D8 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xba
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 84h]
        mov dword ptr [ebp - 50h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 2E 22 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x22
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 84h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + eax*2 + 0dah]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 37 9B D9 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x9b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        shl ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 18h]
        shl edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes E9 7A FE FF FF: jmp 0x58713c21
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x58713db2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 1D: jge 0x58713dd5
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 84h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 BE 21 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58713da9
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes EB 09: jmp 0x58713de0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 1D: jge 0x58713e03
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a4h]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 90 21 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58713dd7
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 C4 D9 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + ecx + 18h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 95 0C D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 16 2E D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58713f0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 74h], ecx
        push 93h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 0C D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 7E 20 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 7ch], ecx
        push 95h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 0C D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 56 20 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 84h], ecx
        push 97h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 0C D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 28 20 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x58713fab
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 8ch], ecx
        push 94h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 0B D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 EE 1F D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 94h], ecx
        push 96h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 0B D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 BA 1F D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 9ch], ecx
        push 98h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 0B D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 86 1F D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
