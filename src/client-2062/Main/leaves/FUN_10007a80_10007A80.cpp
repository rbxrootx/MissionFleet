// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10007A80 .. +0xF65 bytes.
extern "C" __declspec(naked) void FUN_10007a80_10007A80() {
    __asm {
        push -1
        push 1016cf78h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 11ch
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 CC 46 00 00: call 0x1000c170
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 328h], eax
        mov eax, dword ptr [esi + 33ch]
        cdq
        xor eax, edx
        xor edi, edi
        sub eax, edx
        mov ecx, dword ptr [eax*4 + 101b09a0h]
        mov eax, 10624dd3h
        imul ecx, dword ptr [esi + 224h]
        imul ecx
        sar edx, 6
        mov eax, edx
        mov ecx, 64h
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esp + 8], ecx
        mov dword ptr [esi + 308h], edx
        mov eax, dword ptr [esi + 4b8h]
        cmp eax, 2
        ; Exact mapped bytes 74 3E: je 0x10007b2e
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp eax, 4
        ; Exact mapped bytes 74 39: je 0x10007b2e
        __asm _emit 0x74
        __asm _emit 0x39
        cmp eax, -1
        ; Exact mapped bytes 74 34: je 0x10007b2e
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [esi + 33ch]
        cmp eax, edi
        ; Exact mapped bytes 7E 12: jle 0x10007b16
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [esi + 334h]
        mov eax, dword ptr [esi + 318h]
        cmp edx, eax
        ; Exact mapped bytes 7E 1A: jle 0x10007b2e
        __asm _emit 0x7e
        __asm _emit 0x1a
        ; Exact mapped bytes EB 12: jmp 0x10007b28
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 7D 16: jge 0x10007b2e
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [esi + 334h]
        mov edx, dword ptr [esi + 318h]
        cmp eax, edx
        ; Exact mapped bytes 7D 06: jge 0x10007b2e
        __asm _emit 0x7d
        __asm _emit 0x06
        mov dword ptr [esi + 33ch], edi
        mov eax, dword ptr [esi + 4b8h]
        push ebx
        push ebp
        cmp eax, -1
        mov ebp, 1
        ; Exact mapped bytes 75 10: jne 0x10007b50
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, esi
        mov dword ptr [esp + 10h], edi
        ; Exact mapped bytes E8 D5 2D 00 00: call 0x1000a920
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 79 0C 00 00: jmp 0x100087c9
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 75 21: jne 0x10007b75
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [esi + 31ch]
        mov dword ptr [esp + 10h], 32h
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 5F 0C 00 00: jge 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 450h], ebp
        ; Exact mapped bytes E9 54 0C 00 00: jmp 0x100087c9
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebp
        ; Exact mapped bytes 75 42: jne 0x10007bbb
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [esi + 4e0h]
        mov dword ptr [esp + 10h], 1eh
        cmp eax, edi
        ; Exact mapped bytes 75 19: jne 0x10007ba4
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [esi + 74h]
        cmp eax, edi
        ; Exact mapped bytes 74 12: je 0x10007ba4
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 490h], edx
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esi + 494h], eax
        cmp dword ptr [esi + 31ch], ecx
        ; Exact mapped bytes 0F 8D 19 0C 00 00: jge 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 450h], ebp
        ; Exact mapped bytes E9 0E 0C 00 00: jmp 0x100087c9
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 A1 04 00 00: jne 0x10008065
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 35 25 00 00: call 0x1000a100
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE C0 02 00 00 02: cmp word ptr [esi + 0x2c0], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        mov ebp, eax
        ; Exact mapped bytes 75 1F: jne 0x10007bf6
        __asm _emit 0x75
        __asm _emit 0x1f
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 31 2F 00 00: call 0x1000ab10
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 310h]
        dec eax
        neg eax
        sbb eax, eax
        and eax, 32h
        add eax, 46h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes EB 08: jmp 0x10007bfe
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 41h
        cmp ebp, edi
        ; Exact mapped bytes 0F 84 C3 0B 00 00: je 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        mov eax, 57619f1h
        mov dword ptr [esi + 490h], ecx
        mov ecx, dword ptr [ebp + 4a0h]
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 494h], edx
        mov eax, dword ptr [esi + 328h]
        cmp eax, 32h
        ; Exact mapped bytes 7E 31: jle 0x10007c68
        __asm _emit 0x7e
        __asm _emit 0x31
        mov ecx, dword ptr [esi + 224h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 D2 02 00 00: mov ax, word ptr [esi + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 1
        cmp ecx, eax
        ; Exact mapped bytes 7E 4E: jle 0x10007c9a
        __asm _emit 0x7e
        __asm _emit 0x4e
        shl ecx, 3
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esi + 224h], edx
        ; Exact mapped bytes EB 38: jmp 0x10007ca0
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 224h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 D2 02 00 00: mov ax, word ptr [esi + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, eax
        ; Exact mapped bytes 7D 1F: jge 0x10007c9a
        __asm _emit 0x7d
        __asm _emit 0x1f
        lea ecx, [ecx + ecx*2]
        mov eax, 66666667h
        shl ecx, 2
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 224h], edx
        ; Exact mapped bytes EB 06: jmp 0x10007ca0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 224h], eax
        cmp dword ptr [esi + 31ch], 50h
        ; Exact mapped bytes 7C 17: jl 0x10007cc0
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [esi + 328h]
        cmp eax, edi
        ; Exact mapped bytes 0F 8C 12 0B 00 00: jl 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 32h
        ; Exact mapped bytes 0F 8D 09 0B 00 00: jge 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 4b0h], edi
        ; Exact mapped bytes 0F 85 FD 0A 00 00: jne 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 220h]
        dec ecx
        mov dword ptr [esi + 220h], ecx
        ; Exact mapped bytes A1 9C 7D 1A 10: mov eax, dword ptr [0x101a7d9c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, edi
        ; Exact mapped bytes 74 6F: je 0x10007d51
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes 8B 1D DC 56 1C 10: mov ebx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 1ch]
        mov edx, dword ptr [ebx + 14h]
        sub eax, edx
        mov edi, dword ptr [ecx + 104e0h]
        sar eax, 1
        mov ecx, dword ptr [edi + 110h]
        lea eax, [eax + eax*4]
        mov dword ptr [esp + 14h], ecx
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [ebx + 18h]
        sub ecx, eax
        mov eax, dword ptr [edi + 50h]
        sub ecx, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, edx
        mov ebx, dword ptr [edi + 54h]
        sar eax, 1
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv dword ptr [esp + 14h]
        sub eax, dword ptr [esi + 8]
        add eax, ebx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 514h]
        ; Exact mapped bytes E8 3F 0C 04 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi + 21ch], 0ah
        mov edx, dword ptr [ebp + 4]
        mov eax, 57619f1h
        sub ecx, edx
        mov edx, dword ptr [esi + 4a0h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 57619f1h
        mov edi, edx
        mov edx, dword ptr [ebp + 4a0h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        sub edi, edx
        lea eax, [edi + edi*4]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        shl edx, 3
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov ebx, edx
        mov edx, dword ptr [ebp + 334h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov edi, edx
        mov edx, dword ptr [esi + 334h]
        imul edx
        sar edx, 6
        mov eax, edx
        mov dword ptr [esp + 14h], edi
        shr eax, 1fh
        add edx, eax
        mov eax, ebx
        mov edi, edx
        mov edx, dword ptr [esp + 14h]
        sub edi, edx
        mov edx, ecx
        imul eax, ebx
        imul edx, ecx
        add eax, edx
        push eax
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes E8 CD 9E 01 00: call 0x10021cd0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        imul edi, edi
        mov ecx, eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov ecx, edx
        imul ecx, edx
        add ecx, edi
        push ecx
        ; Exact mapped bytes E8 AA 9E 01 00: call 0x10021cd0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DD 5C 24 24: fstp qword ptr [esp + 0x24]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 24h]
        push edx
        push eax
        ; Exact mapped bytes E8 6F 49 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x49
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes E8 64 49 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x49
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, eax
        imul ecx, eax
        add ecx, edi
        mov dword ptr [esp + 24h], ecx
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DD 5C 24 2C: fstp qword ptr [esp + 0x2c]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push edx
        push eax
        ; Exact mapped bytes E8 48 49 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x49
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 18h
        ; Exact mapped bytes E8 3A 49 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x49
        __asm _emit 0x16
        __asm _emit 0x00
        xor ecx, ecx
        cmp eax, 64h
        ; Exact mapped bytes 66 8B 8E C6 02 00 00: mov cx, word ptr [esi + 0x2c6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 4b0h], ecx
        ; Exact mapped bytes 0F 8D 45 09 00 00: jge 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 454h]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x10007e9d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dword ptr [esi + 4bch], 0
        ; Exact mapped bytes E9 2C 09 00 00: jmp 0x100087c9
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, 78h
        ; Exact mapped bytes 66 8B 8E C2 02 00 00: mov cx, word ptr [esi + 0x2c2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, eax
        imul ecx, edx
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        mov ecx, ebp
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 97 23 00 00: call 0x1000a260
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 F8 08 00 00: je 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 4bch], 0
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test byte ptr [ecx + 368h], 80h
        ; Exact mapped bytes 0F 84 DB 08 00 00: je 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D0 08 00 00: je 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D2 66 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x66
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C3 08 00 00: je 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 21a34h]
        test ecx, ecx
        ; Exact mapped bytes 75 1F: jne 0x10007f34
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [eax + 21710h]
        test ecx, ecx
        ; Exact mapped bytes 7E 15: jle 0x10007f34
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ebx, dword ptr [eax + 10560h]
        and bl, 1
        neg bl
        sbb ebx, ebx
        and ebx, 0fffffff7h
        add ebx, 0ah
        ; Exact mapped bytes EB 05: jmp 0x10007f39
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebx, 1
        ; Exact mapped bytes 66 83 BE C0 02 00 00 02: cmp word ptr [esi + 0x2c0], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        mov edi, dword ptr [ebp + 298h]
        ; Exact mapped bytes 75 12: jne 0x10007f5b
        __asm _emit 0x75
        __asm _emit 0x12
        lea edx, [edi + edi*2]
        mov eax, 0cccccccdh
        shl edx, 2
        mul edx
        shr edx, 3
        mov edi, edx
        lea eax, [edi*8]
        xor edx, edx
        sub eax, edi
        mov ecx, dword ptr [esi + 74h]
        lea eax, [eax + eax*4]
        shl eax, 1
        div ebx
        mov edx, dword ptr [ecx + 0eb0h]
        xor edx, 0aaaaaaaah
        add eax, edx
        xor edx, edx
        xor eax, 0aaaaaaaah
        mov dword ptr [ecx + 0eb0h], eax
        lea eax, [edi + edi*2]
        mov ecx, dword ptr [esi + 74h]
        lea eax, [eax + eax*4]
        shl eax, 2
        div ebx
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr [ecx + 0ed0h]
        sub edx, eax
        mov dword ptr [ecx + 0ed0h], edx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 74h]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 0F 85 0B 08 00 00: jne 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0eb0h]
        mov eax, 51eb851fh
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mul edx
        shr edx, 5
        push edx
        ; Exact mapped bytes E8 50 82 06 00: call 0x10070230
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 298h]
        mov ecx, dword ptr [ebp + 74h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 99 92 0E 00: call 0x100f1290
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x92
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 2cch]
        test eax, eax
        ; Exact mapped bytes 0F 84 BE 07 00 00: je 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        xor edx, edx
        shr eax, 1
        div ebx
        lea edx, [esp + 2ch]
        push eax
        push 1017f094h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [eax + 2cch]
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 ED 10 02 00: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea ecx, [esp + 30h]
        push 1
        push ecx
        mov ecx, dword ptr [edx + 2cch]
        ; Exact mapped bytes E8 D0 10 02 00: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 64 07 00 00: jmp 0x100087c9
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 49: jne 0x100080b3
        __asm _emit 0x75
        __asm _emit 0x49
        xor eax, eax
        mov dword ptr [esp + 10h], 78h
        ; Exact mapped bytes 66 8B 86 C0 02 00 00: mov ax, word ptr [esi + 0x2c0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 3
        ; Exact mapped bytes 74 27: je 0x100080a7
        __asm _emit 0x74
        __asm _emit 0x27
        dec eax
        ; Exact mapped bytes 0F 85 42 07 00 00: jne 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 A2 34 00 00: call 0x1000b530
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 310h], ebp
        ; Exact mapped bytes 0F 85 2F 07 00 00: jne 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], 14h
        ; Exact mapped bytes E9 22 07 00 00: jmp 0x100087c9
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 B2 2B 00 00: call 0x1000ac60
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 16 07 00 00: jmp 0x100087c9
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 0F 85 59 02 00 00: jne 0x10008315
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        mov ebx, 50h
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes E8 03 65 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x65
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 F4 06 00 00: je 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 310h]
        cmp eax, edi
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x100081bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ecx, 0e10h
        mov eax, dword ptr [eax + 5c44h]
        mov dword ptr [esp + 1ch], 0ffffff10h
        add eax, 384h
        mov dword ptr [esp + 20h], edi
        cdq
        idiv ecx
        lea eax, [esp + 1ch]
        push edx
        lea edx, [esp + 28h]
        push edx
        push eax
        ; Exact mapped bytes E8 BB 9D 01 00: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        add esp, 0ch
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [esp + 24h]
        add edx, ecx
        mov dword ptr [esi + 490h], edx
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [esp + 28h]
        sub ecx, eax
        mov dword ptr [esi + 494h], ecx
        mov ecx, dword ptr [esi + 32ch]
        mov edx, dword ptr [esi + 318h]
        lea eax, [ecx + ecx*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cmp edx, eax
        ; Exact mapped bytes 74 18: je 0x10008170
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [esi + 31ch], ebx
        ; Exact mapped bytes 7D 10: jge 0x10008170
        __asm _emit 0x7d
        __asm _emit 0x10
        mov dword ptr [esi + 318h], eax
        mov dword ptr [esi + 33ch], 0ffffff6ah
        lea eax, [ecx + ecx*4]
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        mov eax, dword ptr [esi + 334h]
        shl edx, 4
        cmp eax, edx
        ; Exact mapped bytes 0F 8F 3F 06 00 00: jg 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 224h]
        mov eax, 66666667h
        shl ecx, 3
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 224h], edx
        mov dword ptr [esi + 33ch], 0ffffffceh
        mov dword ptr [esi + 310h], ebp
        ; Exact mapped bytes E9 0A 06 00 00: jmp 0x100087c9
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebp
        ; Exact mapped bytes 75 4A: jne 0x1000820d
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [esi + 74h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [esi + 490h], edx
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [esi + 494h], eax
        mov eax, dword ptr [esi + 32ch]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        mov eax, dword ptr [esi + 334h]
        shl ecx, 3
        cmp eax, ecx
        ; Exact mapped bytes 0F 8F D1 05 00 00: jg 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 310h], 2
        mov dword ptr [esi + 33ch], edi
        ; Exact mapped bytes E9 BC 05 00 00: jmp 0x100087c9
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 B3 05 00 00: jne 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 74h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [esi + 490h], eax
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [esi + 494h], ecx
        mov eax, dword ptr [esi + 31ch]
        cmp eax, 14h
        ; Exact mapped bytes 0F 8D 8F 05 00 00: jge 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 2fch]
        xor edx, edx
        mov dword ptr [esi + 310h], 3
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], edx
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [esi + 510h]
        mov dword ptr [esi + 464h], edi
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 7ch]
        mov ecx, dword ptr [esi + 74h]
        push edi
        push eax
        push esi
        ; Exact mapped bytes E8 1A 8E 0E 00: call 0x100f1090
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        mov eax, dword ptr [esi + 74h]
        shl ecx, 4
        mov edx, dword ptr [esi + 78h]
        lea ebx, [ecx + eax + 0f78h]
        mov eax, dword ptr [ecx + eax + 0f7ch]
        cmp eax, edi
        ; Exact mapped bytes 74 46: je 0x100082da
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, eax
        mov eax, dword ptr [eax + 8]
        cmp dword ptr [ecx + 10h], edx
        ; Exact mapped bytes 74 06: je 0x100082a4
        __asm _emit 0x74
        __asm _emit 0x06
        cmp eax, edi
        ; Exact mapped bytes 75 F2: jne 0x10008294
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes EB 36: jmp 0x100082da
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ecx + 4]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100082b3
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 06: jmp 0x100082b9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [ebx + 4], eax
        mov eax, dword ptr [ecx + 8]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100082c8
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 06: jmp 0x100082ce
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebx + 8], eax
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x100082d7
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        push ebp
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        dec dword ptr [ebx + 0ch]
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [esi + 74h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 DC 04 00 00: jne 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 7ch]
        push edx
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 2F 81 09 00: call 0x100a0430
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 70 74 06 00: call 0x1006f780
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 B4 04 00 00: jmp 0x100087c9
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 0F 84 AB 04 00 00: je 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0ah
        ; Exact mapped bytes 0F 85 A2 04 00 00: jne 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 33ch]
        mov dword ptr [esp + 10h], edi
        cmp eax, 0fffffc7ch
        ; Exact mapped bytes 7C 0B: jl 0x10008343
        __asm _emit 0x7c
        __asm _emit 0x0b
        add eax, -0ah
        mov dword ptr [esi + 33ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x1000834d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 33ch], 0fffffc7ch
        cmp dword ptr [esi + 334h], edi
        ; Exact mapped bytes 0F 8F 83 03 00 00: jg 0x100086dc
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 510h]
        mov dword ptr [esi + 310h], 3
        mov dword ptr [esi + 464h], 0
        mov dword ptr [esi + 4b8h], 5
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 4f0h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [eax + 0ch]
        test ebx, ebx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 74 2B: je 0x100083c9
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, ebx
        ; Exact mapped bytes E8 2B 62 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x62
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x100083be
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push 0
        push ecx
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 B6 6D 0E 00: call 0x100ef170
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 58: jne 0x10008416
        __asm _emit 0x75
        __asm _emit 0x58
        mov ebx, dword ptr [ebx + 78h]
        test ebx, ebx
        ; Exact mapped bytes 75 D9: jne 0x1000839e
        __asm _emit 0x75
        __asm _emit 0xd9
        mov dword ptr [esp + 14h], ebx
        push 5ch
        ; Exact mapped bytes E8 D0 43 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x43
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        test eax, eax
        mov dword ptr [esp + 134h], 2
        ; Exact mapped bytes 0F 84 1A 02 00 00: je 0x10008604
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 0F 8E D8 01 00 00: jle 0x100085d5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 0F 84 CA 01 00 00: je 0x100085d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [edx + 240h]
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x100085d7
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 20 51 17 10: mov edi, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, eax
        and ebx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x10008431
        __asm _emit 0x79
        __asm _emit 0x05
        dec ebx
        or ebx, 0fffffffch
        inc ebx
        push 5ch
        add ebx, 7
        ; Exact mapped bytes E8 65 43 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x43
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        test eax, eax
        mov dword ptr [esp + 134h], 0
        ; Exact mapped bytes 74 48: je 0x10008499
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x10008472
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10008472
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [ecx + 380h]
        ; Exact mapped bytes EB 02: jmp 0x10008474
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        mov edx, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push ebp
        push edx
        push ebx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 37 00 04 00: call 0x100484d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esp + 134h], 0ffffffffh
        xor ebp, ebp
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x100084b4
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        test eax, eax
        ; Exact mapped bytes 0F 8E 9C 00 00 00: jle 0x10008558
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 DA 42 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 1ch], ebx
        test ebx, ebx
        mov dword ptr [esp + 134h], 1
        ; Exact mapped bytes 74 58: je 0x10008536
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x100084ec
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        ; Exact mapped bytes 8B 0D E8 57 1C 10: mov ecx, dword ptr [0x101c57e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 6
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x10008512
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x10008512
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x10008512
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x10008514
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1388h
        mov ecx, dword ptr [edx + 104e0h]
        mov edx, dword ptr [esi + 8]
        push edx
        mov edx, dword ptr [esi + 4]
        push edx
        push eax
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 CA 93 01 00: call 0x10021900
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esp + 134h], 0ffffffffh
        inc ebp
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x10008550
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        cmp ebp, eax
        ; Exact mapped bytes 0F 8C 64 FF FF FF: jl 0x100084bc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, 0c8h
        push 64h
        push 1
        mov eax, dword ptr [ecx + 1047ch]
        mov edx, dword ptr [ecx + 10474h]
        push 0
        push 0
        lea ebx, [eax + edx]
        xor edx, edx
        mov eax, ebx
        push 190h
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebp, dword ptr [esi + 74h]
        push 2710h
        push -1
        push 1
        mov edx, dword ptr [eax + edx*4]
        mov eax, edx
        xor edx, edx
        div edi
        mov eax, dword ptr [esp + 34h]
        add edx, 64h
        push edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 90 2C 03 00 00: mov dx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0dh
        push edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 95 2C 03 00 00: mov dx, word ptr [ebp + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov edx, dword ptr [esi + 4]
        push eax
        mov eax, dword ptr [esi + 8]
        push ebp
        push eax
        push edx
        push ebx
        ; Exact mapped bytes E8 BD E4 05 00: call 0x10066a90
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x1000860f
        __asm _emit 0xeb
        __asm _emit 0x3a
        xor ebx, ebx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        mov edx, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push ebx
        push edx
        ; Exact mapped bytes 8B 15 DC 57 1C 10: mov edx, dword ptr [0x101c57dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 3ch
        push edx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 5C 00 04 00: call 0x10048660
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esp + 134h], 0ffffffffh
        mov eax, dword ptr [esi + 454h]
        test eax, eax
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x100086ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 458h]
        test eax, eax
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x100086dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        mov ecx, dword ptr [esi + 74h]
        push 1
        push eax
        push esi
        mov dword ptr [esi + 458h], 0
        ; Exact mapped bytes E8 4C 8A 0E 00: call 0x100f1090
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        mov eax, dword ptr [esi + 74h]
        shl ecx, 4
        mov edx, dword ptr [esi + 78h]
        lea ebx, [ecx + eax + 0f78h]
        mov eax, dword ptr [ecx + eax + 0f7ch]
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x100086a9
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, eax
        mov eax, dword ptr [eax + 8]
        cmp dword ptr [ecx + 10h], edx
        ; Exact mapped bytes 74 06: je 0x10008672
        __asm _emit 0x74
        __asm _emit 0x06
        test eax, eax
        ; Exact mapped bytes 75 F2: jne 0x10008662
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes EB 37: jmp 0x100086a9
        __asm _emit 0xeb
        __asm _emit 0x37
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10008681
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 06: jmp 0x10008687
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [ebx + 4], eax
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10008696
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 06: jmp 0x1000869c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebx + 8], eax
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100086a6
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        dec dword ptr [ebx + 0ch]
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 4]
        cmp eax, ecx
        ; Exact mapped bytes 75 24: jne 0x100086dc
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 7ch]
        push edx
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 43 7E 09 00: call 0x100a0510
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 A4 70 06 00: call 0x1006f780
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 454h]
        test eax, eax
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x100087c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4ach]
        dec eax
        and eax, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x100086fd
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffffe0h
        inc eax
        mov ecx, dword ptr [esi + eax*8 + 34ch]
        mov ebp, dword ptr [esi + eax*8 + 348h]
        push 60h
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes E8 8A 40 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x40
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, eax
        add esp, 4
        mov dword ptr [esp + 1ch], ecx
        test ecx, ecx
        mov dword ptr [esp + 134h], 3
        ; Exact mapped bytes 74 5C: je 0x1000878a
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1eh
        ; Exact mapped bytes 7E 12: jle 0x1000874e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000874e
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 780h]
        ; Exact mapped bytes EB 02: jmp 0x10008750
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, 10624dd3h
        mov edi, dword ptr [edx + 104e0h]
        mov edx, dword ptr [esi + 334h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        mov edx, dword ptr [esp + 1ch]
        push 1388h
        push edx
        push ebp
        push ebx
        push edi
        ; Exact mapped bytes E8 CA BA 0E 00: call 0x100f4250
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xba
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1000878c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 330h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        push 0fffffeffh
        shr eax, 1fh
        add edx, eax
        mov ecx, edi
        mov dword ptr [esp + 138h], 0ffffffffh
        mov dword ptr [edi + 5ch], edx
        ; Exact mapped bytes E8 A3 69 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x69
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0c8h
        mov ecx, edi
        ; Exact mapped bytes E8 57 69 0F 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x69
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov eax, 91a2b3c5h
        imul ecx, dword ptr [esi + 328h]
        imul ecx
        add edx, ecx
        mov eax, dword ptr [esi + 340h]
        sar edx, 0ah
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        add eax, edx
        mov dword ptr [esi + 340h], eax
        ; Exact mapped bytes 79 08: jns 0x100087ff
        __asm _emit 0x79
        __asm _emit 0x08
        lea edi, [eax + 0e10h]
        ; Exact mapped bytes EB 0A: jmp 0x10008809
        __asm _emit 0xeb
        __asm _emit 0x0a
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov edi, edx
        mov ebx, dword ptr [esi + 308h]
        mov dword ptr [esi + 340h], edi
        mov ecx, dword ptr [edi*4 + 101b09a0h]
        mov eax, 10624dd3h
        imul ecx, ebx
        imul ecx
        sar edx, 6
        mov eax, edx
        mov ebp, dword ptr [esi + 33ch]
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [esi + 2fch], edx
        mov ecx, dword ptr [edi*4 + 101ad160h]
        imul ecx, ebx
        imul ecx
        sar edx, 6
        mov ecx, edx
        mov eax, ebp
        shr ecx, 1fh
        add edx, ecx
        mov ebx, dword ptr [esi + 224h]
        mov dword ptr [esi + 300h], edx
        cdq
        xor eax, edx
        sub eax, edx
        mov ecx, dword ptr [eax*4 + 101ad160h]
        lea edi, [eax*4 + 101ad160h]
        imul ecx, ebx
        mov eax, 10624dd3h
        imul ecx
        mov ecx, dword ptr [esi + 4b8h]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 4
        cmp ecx, eax
        mov dword ptr [esi + 304h], edx
        ; Exact mapped bytes 75 2E: jne 0x100088cf
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 66 39 86 C0 02 00 00: cmp word ptr [esi + 0x2c0], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x100088cf
        __asm _emit 0x75
        __asm _emit 0x25
        cmp dword ptr [esi + 310h], 1
        ; Exact mapped bytes 75 1C: jne 0x100088cf
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edi, dword ptr [edi]
        mov eax, 5d9f7391h
        imul edi, ebx
        imul edi
        sar edx, 9
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esi + 304h], edx
        mov eax, dword ptr [esi + 304h]
        test ebp, ebp
        pop ebp
        pop ebx
        ; Exact mapped bytes 7D 02: jge 0x100088dd
        __asm _emit 0x7d
        __asm _emit 0x02
        neg eax
        mov edx, dword ptr [esi + 2fch]
        mov edi, dword ptr [esi + 49ch]
        mov ecx, dword ptr [esi + 300h]
        add edi, edx
        mov edx, dword ptr [esi + 4a0h]
        mov dword ptr [esi + 49ch], edi
        mov edi, dword ptr [esi + 88h]
        sub edx, ecx
        mov ecx, dword ptr [esi + 334h]
        mov dword ptr [esi + 304h], eax
        add ecx, eax
        mov dword ptr [esi + 4a0h], edx
        mov dword ptr [esi + 334h], ecx
        xor ecx, ecx
        cmp edi, 1
        ; Exact mapped bytes 74 3E: je 0x10008964
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [esi + 33ch]
        test eax, eax
        ; Exact mapped bytes 7C 1B: jl 0x1000894b
        __asm _emit 0x7c
        __asm _emit 0x1b
        lea ecx, [eax + 0c8h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        lea ecx, [edx + eax + 2]
        ; Exact mapped bytes EB 19: jmp 0x10008964
        __asm _emit 0xeb
        __asm _emit 0x19
        lea ecx, [eax - 0c8h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 1fh
        lea ecx, [edx + ecx + 2]
        mov edx, dword ptr [esi + 340h]
        sub edx, 384h
        ; Exact mapped bytes 79 06: jns 0x10008978
        __asm _emit 0x79
        __asm _emit 0x06
        add edx, 0e10h
        mov eax, dword ptr [esi + 8ch]
        add eax, edx
        cdq
        idiv dword ptr [esi + 90h]
        mov edx, dword ptr [esi + 98h]
        imul eax, edi
        add eax, ecx
        pop edi
        imul eax, dword ptr [esi + 84h]
        mov dword ptr [esi + 94h], eax
        add edx, eax
        mov eax, dword ptr [esi + 4e4h]
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [esi + 4e4h]
        mov edx, dword ptr [esi + 4e8h]
        mov eax, dword ptr [ecx + 50h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 4e4h]
        mov edx, dword ptr [esi + 4f4h]
        pop esi
        mov eax, dword ptr [ecx + 50h]
        mov ecx, dword ptr [esp + 11ch]
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 128h
        ret
    }
}
