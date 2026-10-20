// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D5E60 .. +0x493 bytes.
extern "C" __declspec(naked) void FUN_584d5e60_584D5E60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 13 00 00: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3e9h
        ; Exact mapped bytes 72 30: jb 0x584d5eab
        __asm _emit 0x72
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 13 00 00: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3f1h
        ; Exact mapped bytes 77 1E: ja 0x584d5eab
        __asm _emit 0x77
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 12 00 00: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 6A 25 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6a
        __asm _emit 0x25
        __asm _emit 0x00
        nop
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
        mov ecx, 400h
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
        mov eax, 0fffdh
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
        ; Exact mapped bytes 66 83 C8 01: or ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 02: shr ax, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        or ecx, 1
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 E1 02: shl cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov edx, 0fffbh
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0B C1: or ax, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F3 FF FA FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 2E 86 FF FF: call 0x584ce580
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 23 86 FF FF: call 0x584ce580
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 18 86 FF FF: call 0x584ce580
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 0D 86 FF FF: call 0x584ce580
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 FB FA FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 386h
        ; Exact mapped bytes 74 2D: je 0x584d5fb8
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 387h
        ; Exact mapped bytes 74 1E: je 0x584d5fb8
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 388h
        ; Exact mapped bytes 74 0F: je 0x584d5fb8
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 3afh
        ; Exact mapped bytes 75 44: jne 0x584d5ffc
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D EA FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 35 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        push 64h
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 3a4h
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x584d60ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 3a5h
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x584d60ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 3a6h
        ; Exact mapped bytes 74 7B: je 0x584d60ac
        __asm _emit 0x74
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 3a7h
        ; Exact mapped bytes 74 6C: je 0x584d60ac
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 3ach
        ; Exact mapped bytes 74 5D: je 0x584d60ac
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 3aeh
        ; Exact mapped bytes 74 4E: je 0x584d60ac
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 32h
        ; Exact mapped bytes 74 42: je 0x584d60ac
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 2bh
        ; Exact mapped bytes 74 36: je 0x584d60ac
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 2ch
        ; Exact mapped bytes 74 2A: je 0x584d60ac
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 2eh
        ; Exact mapped bytes 74 1E: je 0x584d60ac
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 2714h
        ; Exact mapped bytes 74 0F: je 0x584d60ac
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 2715h
        ; Exact mapped bytes 75 5E: jne 0x584d610a
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 34 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A2 31 FE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 44: jne 0x584d610a
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F E9 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 34 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        push 64h
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x584d61ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 7d0h
        ; Exact mapped bytes 75 46: jne 0x584d616c
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F E9 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 33 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        push 64h
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 1
        ; Exact mapped bytes EB 4C: jmp 0x584d61b8
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0bb8h
        ; Exact mapped bytes 75 3D: jne 0x584d61b8
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 30 FE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 2A: jne 0x584d61b8
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes A1 4C 06 96 58: mov eax, dword ptr [0x5896064c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 F9 FA FF: call 0x58485ae0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 1
        ; Exact mapped bytes EB 7C: jmp 0x584d6236
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 15eh
        ; Exact mapped bytes 75 6D: jne 0x584d6236
        __asm _emit 0x75
        __asm _emit 0x6d
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 33 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x584d6236
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 33 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 30 FE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 44: jne 0x584d6236
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 E8 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 32 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        push 64h
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 BC: call dword ptr [ebp - 0x44]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xbc
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x584d62c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 74 44: je 0x584d6296
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 E7 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 48h], edx
        push 0
        push 64h
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes EB 32: jmp 0x584d62c8
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F E7 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes A1 00 06 96 58: mov eax, dword ptr [0x58960600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 50h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 177h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
