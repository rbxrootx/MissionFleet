// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047E8B0 .. +0x324 bytes.
extern "C" __declspec(naked) void FUN_0047e8b0_0047E8B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 51 09 00 00: call 0x47f210
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
        ; Exact mapped bytes 8B 15 B8 75 68 00: mov edx, dword ptr [0x6875b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        sbb edx, edx
        and edx, 0fffff005h
        add edx, 1002h
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes FF 15 D4 75 68 00: call dword ptr [0x6875d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x47e904
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 CC 75 68 00 00 00 00 00: mov dword ptr [0x6875cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 CA 02 00 00: jmp 0x47ebce
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 C8 75 68 00: mov edx, dword ptr [0x6875c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 2C 79 FF FF: call 0x476240
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 85 20 01 00 00: jne 0x47ea3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 78h
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D C0 75 68 00: mov ecx, dword ptr [0x6875c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffff002h
        add ecx, 1001h
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes FF 15 D4 75 68 00: call dword ptr [0x6875d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x47e95e
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 CC 75 68 00 00 00 00 00: mov dword ptr [0x6875cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 70 02 00 00: jmp 0x47ebce
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D C4 75 68 00: mov ecx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 D2 78 FF FF: call 0x476240
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x47e9a0
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 15 CC 75 68 00: mov edx, dword ptr [0x6875cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or edx, 304h
        ; Exact mapped bytes 89 15 CC 75 68 00: mov dword ptr [0x6875cc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 7ch]
        ; Exact mapped bytes A3 D0 75 68 00: mov dword ptr [0x6875d0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D0 75 68 00: mov ecx, dword ptr [0x6875d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D B4 75 68 00: mov dword ptr [0x6875b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x47ea3f
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 CC 75 68 00: mov edx, dword ptr [0x6875cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x47ea3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D BC 75 68 00 00: cmp dword ptr [0x6875bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 53: je 0x47ea0d
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes A1 BC 75 68 00: mov eax, dword ptr [0x6875bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 C4 75 68 00: mov edx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 C0 33 00 00: call 0x481d90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x47ea0d
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or al, 2
        ; Exact mapped bytes A3 CC 75 68 00: mov dword ptr [0x6875cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D D0 75 68 00: mov dword ptr [0x6875d0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 75 68 00: mov edx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 48 6D FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 3B 05 BC 75 68 00: cmp eax, dword ptr [0x6875bc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x47ea0b
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 7ch]
        ; Exact mapped bytes A3 B4 75 68 00: mov dword ptr [0x6875b4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x47ea3f
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D CC 75 68 00: mov ecx, dword ptr [0x6875cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 25: jne 0x47ea3f
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes E8 2D 05 00 00: call 0x47ef50
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x47ea3f
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or al, 1
        ; Exact mapped bytes A3 CC 75 68 00: mov dword ptr [0x6875cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D D0 75 68 00: mov dword ptr [0x6875d0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 CC 75 68 00: mov edx, dword ptr [0x6875cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        and edx, 300h
        cmp edx, 300h
        ; Exact mapped bytes 0F 84 6A 01 00 00: je 0x47ebc1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 78h
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D C0 75 68 00: mov ecx, dword ptr [0x6875c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffff002h
        add ecx, 1001h
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes FF 15 D4 75 68 00: call dword ptr [0x6875d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x47ea96
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 CC 75 68 00 00 00 00 00: mov dword ptr [0x6875cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x47ebce
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D C4 75 68 00: mov ecx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 9A 77 FF FF: call 0x476240
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x47eb60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 CC 75 68 00: mov edx, dword ptr [0x6875cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or dh, 2
        ; Exact mapped bytes 89 15 CC 75 68 00: mov dword ptr [0x6875cc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C0 75 68 00 00: cmp dword ptr [0x6875c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 21: je 0x47eaea
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or ah, 1
        ; Exact mapped bytes A3 CC 75 68 00: mov dword ptr [0x6875cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B4 75 68 00 00: cmp dword ptr [0x6875b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x47eae8
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D B4 75 68 00: mov dword ptr [0x6875b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 74: jmp 0x47eb5e
        __asm _emit 0xeb
        __asm _emit 0x74
        ; Exact mapped bytes 83 3D BC 75 68 00 00: cmp dword ptr [0x6875bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4C: je 0x47eb3f
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 15 C4 75 68 00: mov edx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 41 6C FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 3B 05 BC 75 68 00: cmp eax, dword ptr [0x6875bc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 35: jne 0x47eb3f
        __asm _emit 0x75
        __asm _emit 0x35
        push 1
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 8B 04 00 00: call 0x47efa0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x47eb3d
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D CC 75 68 00: mov ecx, dword ptr [0x6875cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or ch, 1
        ; Exact mapped bytes 89 0D CC 75 68 00: mov dword ptr [0x6875cc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B4 75 68 00 00: cmp dword ptr [0x6875b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x47eb3d
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 15 B4 75 68 00: mov dword ptr [0x6875b4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x47eb5e
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or ah, 1
        ; Exact mapped bytes A3 CC 75 68 00: mov dword ptr [0x6875cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B4 75 68 00 00: cmp dword ptr [0x6875b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x47eb5e
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D B4 75 68 00: mov dword ptr [0x6875b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 61: jmp 0x47ebc1
        __asm _emit 0xeb
        __asm _emit 0x61
        ; Exact mapped bytes 83 3D C0 75 68 00 00: cmp dword ptr [0x6875c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 58: jne 0x47ebc1
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D BC 75 68 00 00: cmp dword ptr [0x6875bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x47ebc1
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 BC 75 68 00: mov edx, dword ptr [0x6875bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D C4 75 68 00: mov ecx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 07 32 00 00: call 0x481d90
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x47ebc1
        __asm _emit 0x75
        __asm _emit 0x31
        push 0
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes E8 05 04 00 00: call 0x47efa0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x47ebc1
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or ah, 1
        ; Exact mapped bytes A3 CC 75 68 00: mov dword ptr [0x6875cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B4 75 68 00 00: cmp dword ptr [0x6875b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x47ebc1
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D B4 75 68 00: mov dword ptr [0x6875b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
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
