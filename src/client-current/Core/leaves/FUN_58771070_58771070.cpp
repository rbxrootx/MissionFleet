// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58771070 .. +0x565 bytes.
extern "C" __declspec(naked) void FUN_58771070_58771070() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890079h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 78h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 01 05 00 00: je 0x587715b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 90h], 1
        ; Exact mapped bytes 0F 85 47 03 00 00: jne 0x5877140f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 45 D2 FF: call 0x58495670
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x45
        __asm _emit 0xd2
        __asm _emit 0xff
        cdq
        mov ecx, 3
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 2C 03 00 00: jne 0x5877140f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 B2 D1 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb2
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        movzx ecx, word ptr [edx + 98h]
        imul edx, ecx, 3
        add eax, edx
        mov ecx, dword ptr [ebp - 24h]
        imul edx, dword ptr [ecx + 4], 5
        add eax, edx
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 83 AB D1 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xab
        __asm _emit 0xd1
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 4
        div ecx
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes 83 3D CC 35 90 58 00: cmp dword ptr [0x589035cc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x5877121d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 B4 FE 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 6C: je 0x587711cf
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 24h]
        movzx eax, word ptr [edx + 96h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 24h]
        movzx edx, word ptr [ecx + 94h]
        mov dword ptr [ebp - 4ch], edx
        push 3
        ; Exact mapped bytes 8B 0D 4C 07 96 58: mov ecx, dword ptr [0x5896074c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 39 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x39
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 58 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x58
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 0
        push 0
        push 3e8h
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        push 4
        push 12h
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E6 C1 D5 FF: call 0x584cd3b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x587711d6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0B C4 D5 FF: call 0x584cd600
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc4
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AE 43 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        push 80h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 31 43 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        push 3e8h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 64 4C D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x4c
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D D0 35 90 58 00: cmp dword ptr [0x589035d0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x587712f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 D0 FD 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 6E: je 0x587712b5
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 24h]
        movzx eax, word ptr [edx + 96h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 24h]
        movzx edx, word ptr [ecx + 94h]
        mov dword ptr [ebp - 60h], edx
        push 3
        ; Exact mapped bytes 8B 0D 44 07 96 58: mov ecx, dword ptr [0x58960744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 38 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x38
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 57 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 0
        push 0
        push 3e9h
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        push 4
        push 12h
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        shl edx, 1
        push edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 00 C1 D5 FF: call 0x584cd3b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x587712bc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 6ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 28h], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 25 C3 D5 FF: call 0x584cd600
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc3
        __asm _emit 0xd5
        __asm _emit 0xff
        push 102h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C8 42 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        push 3e9h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8B 4B D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x587713db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        movzx esi, word ptr [edx + 94h]
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 56 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x56
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A1 36 D1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x36
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 45 D2 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xd2
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 56 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x56
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA 46 D2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x46
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        sub esi, edi
        mov dword ptr [ebp - 84h], esi
        mov edx, dword ptr [ebp - 24h]
        movzx esi, word ptr [edx + 96h]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 56 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x56
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB 43 D2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x43
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 45 D2 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x45
        __asm _emit 0xd2
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 56 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x56
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 46 D2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x46
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 80h], esi
        push 8
        ; Exact mapped bytes 8B 0D 10 07 96 58: mov ecx, dword ptr [0x58960710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 36 D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x36
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 E6 C7 DF FF: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc7
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 88 98 00 00 00: mov cx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 89 8A 98 00 00 00: mov word ptr [edx + 0x98], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        movzx ecx, word ptr [eax + 98h]
        cmp ecx, 3
        ; Exact mapped bytes 7E 0D: jle 0x5877140f
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 90h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 45 D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x45
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 C7 00 00 00: jne 0x587714ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 42 D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x42
        __asm _emit 0xd2
        __asm _emit 0xff
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x5877143a
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        test eax, eax
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x587714ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        movzx ecx, byte ptr [eax + 0a9h]
        test ecx, ecx
        ; Exact mapped bytes 75 45: jne 0x58771495
        __asm _emit 0x75
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0a0h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 0a0h], eax
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 0a0h], 0
        ; Exact mapped bytes 7D 24: jge 0x58771495
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 24h]
        mov byte ptr [eax + 0a9h], 1
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 0a0h], 0fh
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 0b0h], 1
        mov eax, dword ptr [ebp - 24h]
        movzx ecx, byte ptr [eax + 0a9h]
        cmp ecx, 2
        ; Exact mapped bytes 75 46: jne 0x587714ea
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 8ch], 1
        ; Exact mapped bytes 75 0F: jne 0x587714bf
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 2
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 0a0h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 0a0h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 0a0h], 0
        ; Exact mapped bytes 7D 0A: jge 0x587714ea
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 24h]
        mov byte ptr [ecx + 0a9h], 3
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB A9 D1 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa9
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x58771505
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2E AC D1 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xac
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 5E: je 0x58771569
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 3D 01 D6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 4D: jne 0x58771567
        __asm _emit 0x75
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DE 34 D1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x34
        __asm _emit 0xd1
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F5 43 D1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x43
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x5877155d
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 79 BA D1 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xba
        __asm _emit 0xd1
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 54 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x54
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 65 BA D1 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xba
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 0C: jne 0x5877155b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 28h], 96h
        ; Exact mapped bytes EB 0E: jmp 0x58771569
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes EB 0A: jmp 0x58771567
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 28h], 100h
        ; Exact mapped bytes EB 91: jmp 0x587714fa
        __asm _emit 0xeb
        __asm _emit 0x91
        mov ecx, dword ptr [ebp - 24h]
        movzx edx, byte ptr [ecx + 0a9h]
        cmp edx, 4
        ; Exact mapped bytes 75 41: jne 0x587715b9
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 75 35: jne 0x587715b9
        __asm _emit 0x75
        __asm _emit 0x35
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 52 49 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x49
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 17: je 0x587715b2
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 78h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587715b9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 7F FA 0B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
