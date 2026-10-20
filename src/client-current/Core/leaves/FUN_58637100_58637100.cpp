// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58637100 .. +0x2A7 bytes.
extern "C" __declspec(naked) void FUN_58637100_58637100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 18dh], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 170h], 0
        ; Exact mapped bytes 0F 84 69 02 00 00: je 0x586373a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 EA 6A ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6a
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0bh
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A C2 E8 FF: call 0x584c3390
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        imul eax, dword ptr [ebp - 14h], 14h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 184h]
        push edx
        ; Exact mapped bytes E8 A1 5C 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58637184
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 83 11 02 00 00: jae 0x586373a1
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 0
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 73 5C 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x5c
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 0ch], 0bh
        ; Exact mapped bytes 66 8B 45 F0: mov ax, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 66 89 45 F6: mov word ptr [ebp - 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf6
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 FC EB FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 D4 01 00 00: je 0x5863739c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 0a2h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 85 C1 01 00 00: jne 0x5863739c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 F2 00 00 00: jne 0x586372d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x5863721e
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x586372d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18dh]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 184h]
        add ecx, edx
        push ecx
        ; Exact mapped bytes E8 4E 56 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x56
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18dh]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 184h]
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 70h]
        mov dword ptr [eax + ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18dh]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ecx + edx + 4], 1869fh
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18dh]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 184h]
        mov dword ptr [eax + ecx + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18dh]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 184h]
        mov dword ptr [edx + eax + 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 18dh]
        add cl, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 18dh], cl
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x5863739c
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 8]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x5863739c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x5863739c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18dh]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 184h]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 68 55 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x55
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18dh]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 184h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 70h]
        mov dword ptr [edx + eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18dh]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 184h]
        mov dword ptr [eax + ecx + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18dh]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 184h]
        mov dword ptr [edx + eax + 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 18dh]
        add cl, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 18dh], cl
        ; Exact mapped bytes E9 DA FD FF FF: jmp 0x5863717b
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
