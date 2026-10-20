// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C3980 .. +0x324 bytes.
extern "C" __declspec(naked) void FUN_004c3980_004C3980() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 51 09 00 00: call 0x4c42e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        push 78h
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 A4 F0 5D 00: mov edx, dword ptr [0x5df0a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        sbb edx, edx
        and edx, 0fffff005h
        add edx, 1002h
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes FF 15 C0 F0 5D 00: call dword ptr [0x5df0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c39d4
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 B8 F0 5D 00 00 00 00 00: mov dword ptr [0x5df0b8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 CA 02 00 00: jmp 0x4c3c9e
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 B4 F0 5D 00: mov edx, dword ptr [0x5df0b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 3C 6D FF FF: call 0x4ba720
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 85 20 01 00 00: jne 0x4c3b0f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 78h
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D AC F0 5D 00: mov ecx, dword ptr [0x5df0ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffff002h
        add ecx, 1001h
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes FF 15 C0 F0 5D 00: call dword ptr [0x5df0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c3a2e
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 B8 F0 5D 00 00 00 00 00: mov dword ptr [0x5df0b8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 70 02 00 00: jmp 0x4c3c9e
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D B0 F0 5D 00: mov ecx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 E2 6C FF FF: call 0x4ba720
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x4c3a70
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 15 B8 F0 5D 00: mov edx, dword ptr [0x5df0b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or edx, 304h
        ; Exact mapped bytes 89 15 B8 F0 5D 00: mov dword ptr [0x5df0b8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 7ch]
        ; Exact mapped bytes A3 BC F0 5D 00: mov dword ptr [0x5df0bc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC F0 5D 00: mov ecx, dword ptr [0x5df0bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D A0 F0 5D 00: mov dword ptr [0x5df0a0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x4c3b0f
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B8 F0 5D 00: mov edx, dword ptr [0x5df0b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x4c3b0f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A8 F0 5D 00 00: cmp dword ptr [0x5df0a8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 53: je 0x4c3add
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes A1 A8 F0 5D 00: mov eax, dword ptr [0x5df0a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 B0 F0 5D 00: mov edx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 F0 31 00 00: call 0x4c6c90
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x4c3add
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or al, 2
        ; Exact mapped bytes A3 B8 F0 5D 00: mov dword ptr [0x5df0b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D BC F0 5D 00: mov dword ptr [0x5df0bc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B0 F0 5D 00: mov edx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 08 59 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 3B 05 A8 F0 5D 00: cmp eax, dword ptr [0x5df0a8]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x4c3adb
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 7ch]
        ; Exact mapped bytes A3 A0 F0 5D 00: mov dword ptr [0x5df0a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x4c3b0f
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D B8 F0 5D 00: mov ecx, dword ptr [0x5df0b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 25: jne 0x4c3b0f
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes E8 2D 05 00 00: call 0x4c4020
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4c3b0f
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or al, 1
        ; Exact mapped bytes A3 B8 F0 5D 00: mov dword ptr [0x5df0b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D BC F0 5D 00: mov dword ptr [0x5df0bc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B8 F0 5D 00: mov edx, dword ptr [0x5df0b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        and edx, 300h
        cmp edx, 300h
        ; Exact mapped bytes 0F 84 6A 01 00 00: je 0x4c3c91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 78h
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D AC F0 5D 00: mov ecx, dword ptr [0x5df0ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffff002h
        add ecx, 1001h
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes FF 15 C0 F0 5D 00: call dword ptr [0x5df0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c3b66
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 B8 F0 5D 00 00 00 00 00: mov dword ptr [0x5df0b8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x4c3c9e
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D B0 F0 5D 00: mov ecx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 AA 6B FF FF: call 0x4ba720
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x4c3c30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B8 F0 5D 00: mov edx, dword ptr [0x5df0b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or dh, 2
        ; Exact mapped bytes 89 15 B8 F0 5D 00: mov dword ptr [0x5df0b8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D AC F0 5D 00 00: cmp dword ptr [0x5df0ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 21: je 0x4c3bba
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or ah, 1
        ; Exact mapped bytes A3 B8 F0 5D 00: mov dword ptr [0x5df0b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 F0 5D 00 00: cmp dword ptr [0x5df0a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x4c3bb8
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D A0 F0 5D 00: mov dword ptr [0x5df0a0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 74: jmp 0x4c3c2e
        __asm _emit 0xeb
        __asm _emit 0x74
        ; Exact mapped bytes 83 3D A8 F0 5D 00 00: cmp dword ptr [0x5df0a8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4C: je 0x4c3c0f
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 15 B0 F0 5D 00: mov edx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 01 58 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 3B 05 A8 F0 5D 00: cmp eax, dword ptr [0x5df0a8]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 35: jne 0x4c3c0f
        __asm _emit 0x75
        __asm _emit 0x35
        push 1
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 8B 04 00 00: call 0x4c4070
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x4c3c0d
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D B8 F0 5D 00: mov ecx, dword ptr [0x5df0b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or ch, 1
        ; Exact mapped bytes 89 0D B8 F0 5D 00: mov dword ptr [0x5df0b8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 F0 5D 00 00: cmp dword ptr [0x5df0a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x4c3c0d
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 15 A0 F0 5D 00: mov dword ptr [0x5df0a0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x4c3c2e
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or ah, 1
        ; Exact mapped bytes A3 B8 F0 5D 00: mov dword ptr [0x5df0b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 F0 5D 00 00: cmp dword ptr [0x5df0a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x4c3c2e
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D A0 F0 5D 00: mov dword ptr [0x5df0a0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 61: jmp 0x4c3c91
        __asm _emit 0xeb
        __asm _emit 0x61
        ; Exact mapped bytes 83 3D AC F0 5D 00 00: cmp dword ptr [0x5df0ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 58: jne 0x4c3c91
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D A8 F0 5D 00 00: cmp dword ptr [0x5df0a8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x4c3c91
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 A8 F0 5D 00: mov edx, dword ptr [0x5df0a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D B0 F0 5D 00: mov ecx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 37 30 00 00: call 0x4c6c90
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x4c3c91
        __asm _emit 0x75
        __asm _emit 0x31
        push 0
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes E8 05 04 00 00: call 0x4c4070
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x4c3c91
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or ah, 1
        ; Exact mapped bytes A3 B8 F0 5D 00: mov dword ptr [0x5df0b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 F0 5D 00 00: cmp dword ptr [0x5df0a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x4c3c91
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D A0 F0 5D 00: mov dword ptr [0x5df0a0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 4
        neg eax
        sbb eax, eax
        inc eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
