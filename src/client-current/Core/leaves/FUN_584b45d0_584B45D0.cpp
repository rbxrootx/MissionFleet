// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B45D0 .. +0x3D6 bytes.
extern "C" __declspec(naked) void FUN_584b45d0_584B45D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC B6 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 03 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x584b45fb
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 A7 03 00 00: jmp 0x584b49a2
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 16ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 0F 87 7B 03 00 00: ja 0x584b498d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 95 A8 49 4B 58: jmp dword ptr [edx*4 + 0x584b49a8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0x49
        __asm _emit 0x4b
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 6
        ; Exact mapped bytes 74 6A: je 0x584b4699
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 7
        ; Exact mapped bytes 74 57: je 0x584b4699
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 74 44: je 0x584b4699
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 74 31: je 0x584b4699
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes E8 83 2B 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 588956fch
        ; Exact mapped bytes E8 76 D9 06 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd9
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 28h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DE 46 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 09 03 00 00: jmp 0x584b49a2
        __asm _emit 0xe9
        __asm _emit 0x09
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
        ; Exact mapped bytes E8 EC B5 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5F B4 FF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B8 B5 FF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        cmp ecx, 50h
        ; Exact mapped bytes 7C 22: jl 0x584b46e5
        __asm _emit 0x7c
        __asm _emit 0x22
        ; Exact mapped bytes E8 28 2B 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 7e0h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 92 46 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 BD 02 00 00: jmp 0x584b49a2
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A3 02 00 00: jmp 0x584b498d
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 8
        ; Exact mapped bytes 74 31: je 0x584b472e
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes E8 EE 2A 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 58895720h
        ; Exact mapped bytes E8 E1 D8 06 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 24h]
        push edx
        push 28h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 49 46 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 74 02 00 00: jmp 0x584b49a2
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1100h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A5 A8 FF FF: call 0x584aefe0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 7C 0F: jl 0x584b474f
        __asm _emit 0x7c
        __asm _emit 0x0f
        push 10h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 96 A8 FF FF: call 0x584aefe0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7D 22: jge 0x584b4771
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes E8 9C 2A 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 7e4h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 06 46 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 31 02 00 00: jmp 0x584b49a2
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 17 02 00 00: jmp 0x584b498d
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 74 44: je 0x584b47cd
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 74 31: je 0x584b47cd
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes E8 4F 2A 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        push 58895744h
        ; Exact mapped bytes E8 42 D8 06 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 30h]
        push eax
        push 28h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AA 45 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 D5 01 00 00: jmp 0x584b49a2
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 3]
        push ecx
        lea edx, [ebp - 1]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 53 B3 FF FF: call 0x584afb30
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        movzx eax, byte ptr [ebp - 1]
        cmp eax, 1eh
        ; Exact mapped bytes 7E 22: jle 0x584b4809
        __asm _emit 0x7e
        __asm _emit 0x22
        ; Exact mapped bytes E8 04 2A 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        push 0
        push 7d7h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 6E 45 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 99 01 00 00: jmp 0x584b49a2
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7F 01 00 00: jmp 0x584b498d
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 74 57: je 0x584b4878
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 3
        ; Exact mapped bytes 74 44: je 0x584b4878
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 5
        ; Exact mapped bytes 74 31: je 0x584b4878
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes E8 A4 29 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        push 58895768h
        ; Exact mapped bytes E8 97 D7 06 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd7
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        push 28h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 FF 44 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x584b49a2
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        lea eax, [ebp - 2]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A8 B2 FF FF: call 0x584afb30
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        movzx ecx, byte ptr [ebp - 2]
        cmp ecx, 55h
        ; Exact mapped bytes 7E 22: jle 0x584b48b4
        __asm _emit 0x7e
        __asm _emit 0x22
        ; Exact mapped bytes E8 59 29 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        push 0
        push 0
        push 0
        push 7d9h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C3 44 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x584b49a2
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x584b498d
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 7
        ; Exact mapped bytes 74 44: je 0x584b4910
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 74 31: je 0x584b4910
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes E8 0C 29 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        push 5889578ch
        ; Exact mapped bytes E8 FF D6 06 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 48h]
        push edx
        push 28h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 67 44 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x584b49a2
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 B3 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E8 B1 FF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 B3 FF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        cmp eax, 50h
        ; Exact mapped bytes 7D 1F: jge 0x584b4959
        __asm _emit 0x7d
        __asm _emit 0x1f
        ; Exact mapped bytes E8 B1 28 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        push 0
        push 0
        push 0
        push 7dfh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 1B 44 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 49: jmp 0x584b49a2
        __asm _emit 0xeb
        __asm _emit 0x49
        ; Exact mapped bytes EB 32: jmp 0x584b498d
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 74 1F: je 0x584b498d
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes E8 7D 28 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        push 0
        push 0
        push 0
        push 7e7h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E7 43 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 15: jmp 0x584b49a2
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6B C5 FF FF: call 0x584b0f00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x584b49a0
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b49a2
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
