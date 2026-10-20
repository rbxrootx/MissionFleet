// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BE630 .. +0x3C8 bytes.
extern "C" __declspec(naked) void FUN_586be630_586BE630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        mov dword ptr [ebp - 0ch], ecx
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 41 78: mov word ptr [ecx + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 80h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586be661
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7D 15: jge 0x586be67c
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx*4 + 22ch]
        ; Exact mapped bytes E8 47 22 10 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x22
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x586be658
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 AF E2 FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xaf
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x586be69e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 15 DA DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xda
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 41 03 00 00: je 0x586be9e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 30 D8 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B9 4C E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 64h], 10000000h
        ; Exact mapped bytes 0F 85 20 03 00 00: jne 0x586be9e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 14 D8 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D 4C E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 12: mov ax, word ptr [eax + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x12
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        movzx ecx, word ptr [ebp - 2]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 98 E3 FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x98
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 EC 02 00 00: je 0x586be9e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB D7 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 62 DC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x62
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0ffffffh
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 588b0de3h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EB 1D 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7F D7 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 15 DF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x15
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        mov dword ptr [ebp - 28h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 4A 1D 10 00: call 0x587c04d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 30h], eax
        push 0ffffffh
        push 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 33ch
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6C 1D 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 23 D7 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AC 4B E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x4b
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 75 3F: jne 0x586be80c
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 38h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F7 D6 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 DD F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdd
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0ffffffh
        push 8
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 1A 1D 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x586be8b9
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CC D6 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 4B E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4b
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 3C: jne 0x586be860
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 40h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A0 D6 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 39 DD F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xdd
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0ffffffh
        push 9
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C3 1C 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 59: jmp 0x586be8b9
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 64 D6 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED 4A E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4a
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov dword ptr [ebp - 44h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 D6 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 DC F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdc
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 0ffffffh
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 68 1C 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F D6 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A8 4A E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4a
        __asm _emit 0xe0
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
        movzx ecx, word ptr [ebp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 74 30: je 0x586be90b
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FD D5 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 4A E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x4a
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 74 18: je 0x586be90b
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E5 D5 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E 4A E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4a
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 3E: jne 0x586be949
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 54h], ecx
        push 588b0ee4h
        ; Exact mapped bytes E8 C6 36 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x36
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        push 4848ceh
        push -1
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 DD 1B 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1b
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x586be9d2
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F D5 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 4A E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x4a
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 74 3B: je 0x586be999
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 5ch], edx
        push 588b0ef8h
        ; Exact mapped bytes E8 73 36 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x36
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        push 4848ceh
        push -1
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 8A 1B 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x1b
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x586be9d2
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 64h], eax
        push 588b0f08h
        ; Exact mapped bytes E8 38 36 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x36
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        push 0ffffffh
        push 1
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 4F 1B 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x1b
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 42 78: mov ax, word ptr [edx + 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x78
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 41 78: mov word ptr [ecx + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        ; Exact mapped bytes E9 AA FC FF FF: jmp 0x586be693
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8F 42 00 00: call 0x586c2c80
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
