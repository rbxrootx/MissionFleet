// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AF770 .. +0x358 bytes.
extern "C" __declspec(naked) void FUN_584af770_584AF770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 05 00 00: call 0x584afd30
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x584af78f
        __asm _emit 0x74
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 37 03 00 00: jmp 0x584afac6
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 04 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x584af7c0
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 4D 7A 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 1ddh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B7 95 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 06 03 00 00: jmp 0x584afac6
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 98h], 40000000h
        ; Exact mapped bytes 75 0F: jne 0x584af7de
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 94h], 40000000h
        ; Exact mapped bytes 74 07: je 0x584af7e5
        __asm _emit 0x74
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 E1 02 00 00: jmp 0x584afac6
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, 12ch
        push edx
        ; Exact mapped bytes 8B 0D 78 06 96 58: mov ecx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 BA 08 00: call 0x5853b220
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xba
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 24: jne 0x584af827
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes E8 E8 79 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 3c0h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 52 95 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 A1 02 00 00: jmp 0x584afac6
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x584af857
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 160h]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 22: je 0x584af857
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 B6 79 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        push 0
        push 3c1h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 20 95 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 6F 02 00 00: jmp 0x584afac6
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 4F 0E 00: call 0x58594840
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x4f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 1], al
        movzx edx, byte ptr [ebp - 1]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x584af911
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0b0h], 15h
        ; Exact mapped bytes 74 18: je 0x584af896
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0b0h], 16h
        ; Exact mapped bytes 74 0C: je 0x584af896
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0b0h], 10h
        ; Exact mapped bytes 75 79: jne 0x584af90f
        __asm _emit 0x75
        __asm _emit 0x79
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584af8a8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 61: jge 0x584af90f
        __asm _emit 0x7d
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 03 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 48 02 00 00: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3C: je 0x584af90d
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 97 03 00 00: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        xor edx, 55h
        mov byte ptr [ebp - 2], dl
        movzx eax, byte ptr [ebp - 2]
        cmp eax, 0eh
        ; Exact mapped bytes 7E 22: jle 0x584af90d
        __asm _emit 0x7e
        __asm _emit 0x22
        ; Exact mapped bytes E8 00 79 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        push 0
        push 199h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6A 94 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x584afac6
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 90: jmp 0x584af89f
        __asm _emit 0xeb
        __asm _emit 0x90
        ; Exact mapped bytes EB 73: jmp 0x584af984
        __asm _emit 0xeb
        __asm _emit 0x73
        movzx ecx, byte ptr [ebp - 1]
        test ecx, ecx
        ; Exact mapped bytes 75 6B: jne 0x584af984
        __asm _emit 0x75
        __asm _emit 0x6b
        ; Exact mapped bytes E8 D2 78 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        push 0
        push 0
        push 0
        push 454h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 3C 94 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 588952ech
        push 588952f0h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 CD 19 3A 00: call 0x58851315
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x19
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x584af97d
        __asm _emit 0x74
        __asm _emit 0x2e
        push 58895308h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 53 1C 00 00: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push 58895304h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 42 1C 00 00: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 07 1B 3A 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1b
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        xor al, al
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x584afac6
        __asm _emit 0xe9
        __asm _emit 0x42
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
        ; Exact mapped bytes E8 01 03 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4A 50 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 7
        ; Exact mapped bytes 75 48: jne 0x584af9ee
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 02 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 28 50 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 8
        ; Exact mapped bytes 75 22: jne 0x584af9ee
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 1F 78 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        push 0
        push 516h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 89 93 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x584afac6
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 170h]
        shr edx, 1
        and edx, 1
        ; Exact mapped bytes 74 5B: je 0x584afa59
        __asm _emit 0x74
        __asm _emit 0x5b
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x584afa10
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 7D 43: jge 0x584afa59
        __asm _emit 0x7d
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 02 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 30 D6 FD FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 75 1F: jne 0x584afa57
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 B3 77 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        push 0
        push 0
        push 0
        push 3b7h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 1D 93 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 6F: jmp 0x584afac6
        __asm _emit 0xeb
        __asm _emit 0x6f
        ; Exact mapped bytes EB AE: jmp 0x584afa07
        __asm _emit 0xeb
        __asm _emit 0xae
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 34h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x584afa71
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 55: jmp 0x584afac6
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B7 19 00 00: call 0x584b1430
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x584afa84
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 42: jmp 0x584afac6
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x584afa9c
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 2A: jmp 0x584afac6
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 2ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584afab4
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 12: jmp 0x584afac6
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 24 06 00 00: call 0x584b00e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584afac4
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584afac6
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
    }
}
