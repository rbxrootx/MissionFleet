// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000E400 .. +0x65D bytes.
extern "C" __declspec(naked) void FUN_1000e400_1000E400() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016d0ech
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 28h
        mov eax, 1
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 98h], eax
        ; Exact mapped bytes 0F 85 1D 06 00 00: jne 0x1000ea49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 4ch], eax
        ; Exact mapped bytes 75 0C: jne 0x1000e43e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [edi + 60h]
        mov ecx, dword ptr [edi + 58h]
        mov dword ptr [esp + 8], eax
        ; Exact mapped bytes EB 0A: jmp 0x1000e448
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [edi + 64h]
        mov ecx, dword ptr [edi + 5ch]
        mov dword ptr [esp + 8], edx
        mov eax, dword ptr [esp + 50h]
        push ebx
        push ebp
        push esi
        test eax, eax
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 0F 8C 06 02 00 00: jl 0x1000e665
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 64 45 1C 10: mov ebp, dword ptr [0x101c4564]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 1D F4 56 1C 10: mov ebx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 74 38: je 0x1000e4a7
        __asm _emit 0x74
        __asm _emit 0x38
        cmp ecx, eax
        ; Exact mapped bytes 0F 8D EE 01 00 00: jge 0x1000e665
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 1047ch]
        mov edx, dword ptr [ebx + 10474h]
        add eax, edx
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        lea esi, [ecx + ecx*2]
        mov eax, dword ptr [ebp + edx*4]
        xor edx, edx
        div esi
        mov eax, ecx
        imul eax, dword ptr [esp + 5ch]
        cmp edx, eax
        ; Exact mapped bytes 0F 87 BE 01 00 00: ja 0x1000e665
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 50h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        mov eax, 10624dd3h
        shl ecx, 2
        imul ecx
        mov eax, dword ptr [esp + 50h]
        sar edx, 9
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        cmp eax, edx
        ; Exact mapped bytes 76 02: jbe 0x1000e4d1
        __asm _emit 0x76
        __asm _emit 0x02
        mov eax, edx
        mov edx, dword ptr [esp + 54h]
        mov ecx, dword ptr [esp + 60h]
        lea esi, [eax + edx]
        mov eax, 66666667h
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 1fh
        lea ecx, [edx + eax + 1eh]
        mov eax, dword ptr [ebx + 1047ch]
        mov edx, dword ptr [ebx + 10474h]
        mov ebx, 2710h
        add eax, edx
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebp + edx*4]
        xor edx, edx
        div ebx
        mov ebx, edx
        cmp ebx, ecx
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x1000e5a3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 51eb851fh
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp ebx, edx
        ; Exact mapped bytes 7D 05: jge 0x1000e535
        __asm _emit 0x7d
        __asm _emit 0x05
        shl esi, 4
        ; Exact mapped bytes EB 66: jmp 0x1000e59b
        __asm _emit 0xeb
        __asm _emit 0x66
        mov eax, 51eb851fh
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp ebx, edx
        ; Exact mapped bytes 7D 05: jge 0x1000e54f
        __asm _emit 0x7d
        __asm _emit 0x05
        shl esi, 3
        ; Exact mapped bytes EB 4C: jmp 0x1000e59b
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov eax, 66666667h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp ebx, edx
        ; Exact mapped bytes 7D 05: jge 0x1000e569
        __asm _emit 0x7d
        __asm _emit 0x05
        shl esi, 2
        ; Exact mapped bytes EB 32: jmp 0x1000e59b
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        cmp ebx, edx
        ; Exact mapped bytes 7D 04: jge 0x1000e582
        __asm _emit 0x7d
        __asm _emit 0x04
        add esi, esi
        ; Exact mapped bytes EB 19: jmp 0x1000e59b
        __asm _emit 0xeb
        __asm _emit 0x19
        lea eax, [esi + esi*2]
        lea ecx, [eax + eax*4]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov esi, edx
        mov dword ptr [esp + 10h], 1
        test esi, esi
        ; Exact mapped bytes 0F 8E 7B 04 00 00: jle 0x1000ea26
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [edi + 54h]
        xor edx, edx
        ; Exact mapped bytes DB 87 94 00 00 00: fild dword ptr [edi + 0x94]
        __asm _emit 0xdb
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, esi
        setle dl
        ; Exact mapped bytes D9 5C 24 5C: fstp dword ptr [esp + 0x5c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes D9 44 24 5C: fld dword ptr [esp + 0x5c]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        inc edx
        mov dword ptr [edi + 98h], edx
        ; Exact mapped bytes D8 0D 00 53 17 10: fmul dword ptr [0x10175300]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 D1 E1 15 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe1
        __asm _emit 0x15
        __asm _emit 0x00
        sub ebx, esi
        mov dword ptr [esp + 54h], eax
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 79 07: jns 0x1000e5e7
        __asm _emit 0x79
        __asm _emit 0x07
        mov dword ptr [edi + 54h], 0
        mov eax, dword ptr [edi + 54h]
        mov ecx, dword ptr [edi + 6ch]
        push eax
        ; Exact mapped bytes E8 FD BC 01 00: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 58h]
        mov ebx, 2
        cmp eax, ebx
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 0F 85 85 01 00 00: jne 0x1000e78d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        push 11ch
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x1000e717
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 86 E1 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe1
        __asm _emit 0x15
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 58h], ebp
        test ebp, ebp
        mov dword ptr [esp + 40h], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x1000e6d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [eax + 160h]
        cmp ecx, 31h
        mov dword ptr [esp + 5ch], edx
        ; Exact mapped bytes 7E 55: jle 0x1000e6a8
        __asm _emit 0x7e
        __asm _emit 0x55
        mov ebx, dword ptr [eax + 190h]
        test ebx, ebx
        ; Exact mapped bytes 74 4B: je 0x1000e6a8
        __asm _emit 0x74
        __asm _emit 0x4b
        add ebx, 0c40h
        ; Exact mapped bytes EB 45: jmp 0x1000e6aa
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, ecx
        mov esi, dword ptr [esp + 54h]
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        mov eax, 51eb851fh
        sar ecx, 2
        add ecx, 32h
        imul ecx, esi
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esp + 14h]
        sub esi, edx
        sub esi, ecx
        cmp esi, 1
        ; Exact mapped bytes 0F 8D 05 FF FF FF: jge 0x1000e5a3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, 1
        ; Exact mapped bytes E9 03 FF FF FF: jmp 0x1000e5ab
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        mov eax, dword ptr [edi + 8]
        push 40h
        push eax
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [esp + 64h]
        sub eax, edx
        push eax
        push ecx
        push ebx
        push 0ah
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 9C 76 00 00: call 0x10015d70
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1000e6d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 40h], 0ffffffffh
        cmp dword ptr [ecx + 160h], 33h
        ; Exact mapped bytes 7E 1B: jle 0x1000e70a
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x1000e70a
        __asm _emit 0x74
        __asm _emit 0x11
        add ecx, 0cc0h
        mov dword ptr [eax + 0f8h], ecx
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x1000e892
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [eax + 0f8h], ecx
        ; Exact mapped bytes E9 7B 01 00 00: jmp 0x1000e892
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 84 E0 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x15
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 58h], ebp
        test ebp, ebp
        mov dword ptr [esp + 40h], 1
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x1000e88a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 104e0h]
        mov dword ptr [esp + 5ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0ceh
        ; Exact mapped bytes 7E 12: jle 0x1000e768
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebx, dword ptr [eax + 190h]
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x1000e768
        __asm _emit 0x74
        __asm _emit 0x08
        add ebx, 3380h
        ; Exact mapped bytes EB 02: jmp 0x1000e76a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [edi + 8]
        push 40h
        push ecx
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [esp + 64h]
        sub eax, edx
        push eax
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x1000e87e
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        push 11ch
        ; Exact mapped bytes 74 7B: je 0x1000e811
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes E8 05 E0 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x15
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 58h], ebp
        test ebp, ebp
        mov dword ptr [esp + 40h], ebx
        ; Exact mapped bytes 0F 84 26 FF FF FF: je 0x1000e6d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 104e0h]
        mov dword ptr [esp + 5ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 32h
        ; Exact mapped bytes 7E 12: jle 0x1000e7e0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000e7e0
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 0c80h]
        ; Exact mapped bytes EB 02: jmp 0x1000e7e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [edi + 8]
        push 40h
        push ecx
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [esp + 64h]
        sub eax, edx
        push eax
        push ecx
        push ebx
        push 0ah
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 64 75 00 00: call 0x10015d70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C7 FE FF FF: jmp 0x1000e6d8
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 8A DF 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 58h], ebp
        test ebp, ebp
        mov dword ptr [esp + 40h], 3
        ; Exact mapped bytes 74 5F: je 0x1000e88a
        __asm _emit 0x74
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 104e0h]
        mov dword ptr [esp + 5ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0cch
        ; Exact mapped bytes 7E 12: jle 0x1000e85e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000e85e
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 3300h]
        ; Exact mapped bytes EB 02: jmp 0x1000e860
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [edi + 8]
        push 40h
        push ecx
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [esp + 64h]
        sub eax, edx
        push eax
        push ecx
        push ebx
        push 0ah
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 E6 74 00 00: call 0x10015d70
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 40h], 0ffffffffh
        cmp dword ptr [edi + 98h], 2
        ; Exact mapped bytes 0F 85 87 01 00 00: jne 0x1000ea26
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 48h]
        test esi, esi
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x1000ea26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5c50h]
        test eax, eax
        ; Exact mapped bytes 0F 84 6D 01 00 00: je 0x1000ea26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0eb0h]
        mov ebx, dword ptr [esp + 54h]
        xor edx, 0aaaaaaaah
        mov eax, 3ecccccdh
        add edx, ebx
        mov dword ptr [esp + 2ch], eax
        xor edx, 0aaaaaaaah
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esi + 0eb0h], edx
        mov dword ptr [esp + 34h], eax
        mov eax, dword ptr [esi + 0e74h]
        mov dword ptr [esp + 18h], 40000000h
        ; Exact mapped bytes DB 87 94 00 00 00: fild dword ptr [edi + 0x94]
        __asm _emit 0xdb
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [eax + 2]
        mov dword ptr [esp + 1ch], 3f99999ah
        and ecx, 1fh
        mov dword ptr [esp + 20h], 3f333333h
        ; Exact mapped bytes D9 5C 24 5C: fstp dword ptr [esp + 0x5c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes D9 44 24 5C: fld dword ptr [esp + 0x5c]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        mov dword ptr [esp + 24h], 3f000000h
        mov dword ptr [esp + 28h], 3e99999ah
        ; Exact mapped bytes D8 4C 8C 18: fmul dword ptr [esp + ecx*4 + 0x18]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x8c
        __asm _emit 0x18
        ; Exact mapped bytes D8 0D FC 52 17 10: fmul dword ptr [0x101752fc]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 0D 34 53 17 10: fmul dword ptr [0x10175334]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 67 DE 15 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xde
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ed0h]
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr [esi + 0ec8h]
        xor edx, 0aaaaaaaah
        sub ecx, eax
        inc edx
        mov dword ptr [esi + 0ed0h], ecx
        xor edx, 0aaaaaaaah
        mov dword ptr [esi + 0ec8h], edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dl, byte ptr [esi + 330h]
        mov ecx, dword ptr [eax + 4]
        cmp dl, byte ptr [ecx + 330h]
        ; Exact mapped bytes 75 2D: jne 0x1000e9ae
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [edi + 88h]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebp, dword ptr [ecx + eax*4 + 20be8h]
        inc ebp
        test eax, eax
        mov dword ptr [ecx + eax*4 + 20be8h], ebp
        mov edx, ebp
        ; Exact mapped bytes 75 0C: jne 0x1000e9ae
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ecx + 20c54h]
        push edx
        ; Exact mapped bytes E8 72 0D 0F 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 75 47: jne 0x1000e9ff
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [edi + 94h]
        mov ecx, dword ptr [eax + 20c48h]
        xor ecx, 0aaaaaaaah
        add ecx, edx
        xor ecx, 0aaaaaaaah
        mov dword ptr [eax + 20c48h], ecx
        mov edx, dword ptr [esi + 0eb0h]
        xor edx, 0aaaaaaaah
        mov eax, 51eb851fh
        mul edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        shr edx, 5
        push edx
        ; Exact mapped bytes E8 31 18 06 00: call 0x10070230
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov al, byte ptr [esi + 330h]
        push eax
        mov eax, dword ptr [edi + 94h]
        lea eax, [eax + eax*2]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 4A 33 06 00: call 0x10071d70
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 98h]
        xor eax, eax
        pop esi
        cmp ecx, 1
        pop ebp
        pop ebx
        setne al
        pop edi
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 34h
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        xor eax, eax
        pop edi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 34h
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
