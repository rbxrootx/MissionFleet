// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000B530 .. +0x98C bytes.
extern "C" __declspec(naked) void FUN_1000b530_1000B530() {
    __asm {
        push -1
        push 1016d01eh
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
        sub esp, 134h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, 66666667h
        xor ebx, ebx
        mov ecx, dword ptr [esi + 330h]
        push edi
        imul ecx
        sar edx, 2
        mov eax, edx
        mov edi, 2710h
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esi + 46ch]
        sub ecx, edx
        cmp eax, ebx
        mov ebp, ecx
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esp + 20h], ebp
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x1000b699
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 79: je 0x1000b60c
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes E8 38 30 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x30
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x1000b60c
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 4c8h]
        mov eax, dword ptr [eax + 5ce0h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 310h]
        cmp eax, 2
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x1000b6e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c8h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [esi + 490h], edx
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [esi + 494h], eax
        mov ecx, dword ptr [esi + 490h]
        sub ecx, edx
        mov edx, dword ptr [esi + 4a0h]
        mov eax, 57619f1h
        mov edi, dword ptr [esi + 494h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        sub edi, edx
        mov edx, ecx
        imul edi, edi
        imul edx, ecx
        add edi, edx
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x1000b6e3
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 330h]
        mov dword ptr [esi + 4c8h], ebx
        mov dword ptr [esi + 318h], eax
        mov eax, dword ptr [esi + 310h]
        cmp eax, ebx
        mov dword ptr [esi + 4cch], 0ffffffffh
        ; Exact mapped bytes 75 0F: jne 0x1000b641
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [esi + 310h], 3
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x1000b6e3
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x1000b6e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 340h]
        lea edx, [esp + 14h]
        push ecx
        lea eax, [esp + 28h]
        push edx
        push eax
        mov dword ptr [esi + 310h], 2
        mov dword ptr [esp + 30h], 190h
        mov dword ptr [esp + 34h], ebx
        ; Exact mapped bytes E8 5A 68 01 00: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 24h]
        add ecx, edx
        mov edx, dword ptr [esi + 8]
        add esp, 0ch
        sub edx, eax
        mov dword ptr [esi + 490h], ecx
        mov dword ptr [esi + 494h], edx
        ; Exact mapped bytes EB 4A: jmp 0x1000b6e3
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [esi + 480h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 40: je 0x1000b6e3
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [esi + 4]
        mov dword ptr [esi + 490h], eax
        sub eax, edx
        mov edx, dword ptr [esi + 4a0h]
        mov ebx, eax
        mov eax, 57619f1h
        mov ecx, dword ptr [ecx + 8]
        imul edx
        sar edx, 6
        mov eax, edx
        mov dword ptr [esi + 494h], ecx
        shr eax, 1fh
        add edx, eax
        sub ecx, edx
        mov edi, ecx
        imul edi, ecx
        mov ecx, ebx
        imul ecx, ebx
        add edi, ecx
        xor ebx, ebx
        mov eax, dword ptr [esi + 310h]
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x1000b82c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 334h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        ; Exact mapped bytes 0F AF 15 48 43 1B 10: imul edx, dword ptr [0x101b4348]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x43
        __asm _emit 0x1b
        __asm _emit 0x10
        imul edx
        sar edx, 6
        mov eax, edx
        mov dword ptr [esi + 33ch], ebx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        imul eax, edx
        cmp edi, eax
        ; Exact mapped bytes 0F 8D D6 00 00 00: jge 0x1000b809
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 330h]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        mov dword ptr [esi + 310h], 1
        shr ecx, 1fh
        add edx, ecx
        mov eax, 7d000h
        mov dword ptr [esi + 318h], edx
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebp, dword ptr [esi + 4]
        mov edi, dword ptr [edx + 104e0h]
        cdq
        mov ebx, dword ptr [edi + 110h]
        mov ecx, dword ptr [edi + 50h]
        idiv ebx
        sub ecx, ebp
        mov edi, dword ptr [edi + 54h]
        sub edi, dword ptr [esi + 8]
        add ecx, eax
        mov eax, 5dc00h
        cdq
        idiv ebx
        mov edx, ecx
        imul edx, ecx
        add edi, eax
        mov eax, edi
        imul eax, edi
        add eax, edx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ecx
        ; Exact mapped bytes E8 F7 0F 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 E9 0F 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 1ch]
        mov ebx, dword ptr [ecx + 14h]
        sub edx, ebx
        sar edx, 1
        cmp eax, edx
        ; Exact mapped bytes 0F 8D 9A 06 00 00: jge 0x1000be6f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 E0 57 1C 10: mov eax, dword ptr [0x101c57e0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 4
        ; Exact mapped bytes 7E 19: jle 0x1000b7fc
        __asm _emit 0x7e
        __asm _emit 0x19
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x1000b7fc
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 10h]
        push 0
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes E9 73 06 00 00: jmp 0x1000be6f
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        push ecx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes E9 66 06 00 00: jmp 0x1000be6f
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 330h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 8D 58 06 00 00: jge 0x1000be6f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 33ch], 64h
        mov dword ptr [esi + 318h], eax
        ; Exact mapped bytes E9 43 06 00 00: jmp 0x1000be6f
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 99 05 00 00: jne 0x1000bdce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 33ch]
        mov ecx, 0fffffd12h
        cmp eax, ecx
        ; Exact mapped bytes 7E 34: jle 0x1000b878
        __asm _emit 0x7e
        __asm _emit 0x34
        mov eax, dword ptr [esi + 318h]
        mov edi, dword ptr [esi + 334h]
        sub eax, edi
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ebp
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esi + 33ch]
        cmp eax, ecx
        ; Exact mapped bytes 7E 0C: jle 0x1000b878
        __asm _emit 0x7e
        __asm _emit 0x0c
        cmp dword ptr [esi + 46ch], ebx
        ; Exact mapped bytes 0F 84 F7 05 00 00: je 0x1000be6f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 460h], ebx
        ; Exact mapped bytes 0F 84 9B 04 00 00: je 0x1000bd1f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 1D 9C 7D 1A 10: cmp dword ptr [0x101a7d9c], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x1000b95f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov edi, dword ptr [ebx + 14h]
        sub eax, edi
        mov ecx, dword ptr [ecx + 104e0h]
        sar eax, 1
        mov edx, dword ptr [ecx + 110h]
        mov edi, dword ptr [esi + 4]
        lea eax, [eax + eax*4]
        mov dword ptr [esp + 24h], edx
        mov ebp, dword ptr [ecx + 50h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv dword ptr [esp + 24h]
        mov edx, dword ptr [ebx + 18h]
        sub edi, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, edx
        sub edi, ebp
        sar eax, 1
        mov ebp, dword ptr [ecx + 54h]
        mov ecx, dword ptr [ecx + 110h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 518h]
        sub eax, edx
        add eax, ebp
        push eax
        push edi
        ; Exact mapped bytes E8 89 D0 03 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 21a34h]
        test ecx, ecx
        ; Exact mapped bytes 75 43: jne 0x1000b959
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [esi + 468h]
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x1000b959
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, eax
        ; Exact mapped bytes 75 29: jne 0x1000b959
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 20h
        ; Exact mapped bytes 7E 12: jle 0x1000b950
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000b950
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes EB 02: jmp 0x1000b952
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 20h]
        xor ebx, ebx
        ; Exact mapped bytes 66 FF 8E CA 02 00 00: dec word ptr [esi + 0x2ca]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x8e
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 CA 02 00 00: mov ax, word ptr [esi + 0x2ca]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4fch]
        and eax, 0ffffh
        push eax
        mov dword ptr [esi + 460h], ebx
        ; Exact mapped bytes E8 9C 3D 0F 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 334h]
        mov eax, dword ptr [esi + 330h]
        sub eax, ecx
        mov dword ptr [esp + 24h], ecx
        mov ecx, dword ptr [esi + 4b4h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 1
        cdq
        idiv ebp
        mov edi, eax
        mov eax, 51eb851fh
        imul ecx, edi
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add edi, edx
        cmp edi, 64h
        ; Exact mapped bytes 7E 05: jle 0x1000b9c9
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edi, 64h
        mov eax, 0cccccccdh
        mul dword ptr [esi + 4c4h]
        mov eax, dword ptr [esi + 78h]
        shr edx, 3
        mov ecx, edx
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        sub ecx, edi
        mov edi, 3e8h
        mov ebp, dword ptr [edx + 1047ch]
        mov ebx, dword ptr [edx + 10474h]
        add eax, ebp
        xor edx, edx
        add eax, ebx
        add ecx, 69h
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
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div edi
        mov eax, edx
        mov edx, edi
        mov edi, dword ptr [eax*4 + 101b9968h]
        mov eax, 10624dd3h
        sub edx, edi
        imul edx, ecx
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, ecx
        mov edi, edx
        cdq
        sub eax, edx
        mov ecx, eax
        mov eax, dword ptr [esi + 340h]
        sar ecx, 1
        sub ecx, edi
        add ecx, eax
        ; Exact mapped bytes 79 08: jns 0x1000ba50
        __asm _emit 0x79
        __asm _emit 0x08
        add ecx, 0e10h
        ; Exact mapped bytes EB 0C: jmp 0x1000ba5c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, ecx
        mov ecx, 0e10h
        cdq
        idiv ecx
        mov ecx, edx
        mov edx, dword ptr [esi + 304h]
        mov eax, 0ae147ae1h
        imul edx
        mov ebx, dword ptr [esi + 33ch]
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov edi, edx
        mov edx, dword ptr [ebx*4 + 101b09a0h]
        imul edx, edi
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [esp + 3ch], edx
        mov edx, dword ptr [ebx*4 + 101b41e0h]
        imul edx, edi
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov ebp, edx
        mov edx, dword ptr [ecx*4 + 101b09a0h]
        imul edx, ebp
        mov ecx, dword ptr [ecx*4 + 101ad160h]
        imul edx
        imul ecx, ebp
        sar edx, 5
        mov eax, edx
        mov dword ptr [esp + 40h], ebp
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esp + 34h], edx
        imul ecx
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        test eax, eax
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x1000bb8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esp + 28h]
        add ebx, 0e10h
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push edi
        mov edi, dword ptr [esi + 4a0h]
        mov eax, dword ptr [ecx + 10474h]
        push edi
        mov edi, dword ptr [esi + 49ch]
        push edi
        mov edi, dword ptr [esi + 8]
        push edi
        mov edi, dword ptr [esi + 4]
        push edi
        mov ecx, dword ptr [ecx + 1047ch]
        push edx
        mov edx, dword ptr [esp + 54h]
        push edx
        mov edx, dword ptr [esi + 74h]
        push ebp
        add edx, 37ch
        push 1017f33ch
        push edx
        push eax
        push ecx
        lea eax, [esp + 7ch]
        push 1017f2c4h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 40h
        lea ecx, [esp + 24h]
        lea edx, [esp + 44h]
        push 0
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea eax, [esp + 50h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 250h
        ; Exact mapped bytes E8 0B 0C 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x0c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, eax
        add esp, 4
        mov dword ptr [esp + 24h], ecx
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr [esp + 14ch], ebx
        ; Exact mapped bytes 74 55: je 0x1000bc00
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, 10624dd3h
        mov ebp, dword ptr [esi + 8]
        push 40h
        mov edi, dword ptr [edx + 104e0h]
        mov edx, dword ptr [esi + 334h]
        imul edx
        sar edx, 6
        mov eax, edx
        push ebx
        shr eax, 1fh
        add edx, eax
        push ebx
        add edx, ebp
        push ebx
        push edx
        mov edx, dword ptr [esi + 4]
        push edx
        mov edx, dword ptr [esi + 74h]
        lea eax, [esp + 4ch]
        push edi
        push eax
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 2C 03 00 00: mov ax, word ptr [edx + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push eax
        push 1
        push ebx
        push ebx
        push 1
        ; Exact mapped bytes E8 04 8B 0D 00: call 0x100e4700
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1000bc02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [edi + 40h]
        or ebp, 0ffffffffh
        cmp ecx, ebx
        mov dword ptr [esp + 14ch], ebp
        ; Exact mapped bytes 66 C7 47 26 E8 03: mov word ptr [edi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x1000bc1f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 81 33 0F 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1000bc2c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D4 32 0F 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x32
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 334h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, edi
        push edx
        push 0dh
        ; Exact mapped bytes E8 83 BB 0D 00: call 0x100e77d0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 74h]
        push ebx
        lea edx, [esi + 0b8h]
        push ebx
        push edx
        mov edx, dword ptr [esp + 44h]
        push ebx
        push ebx
        add edx, ecx
        push eax
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 92 AF 0D 00: call 0x100e6c00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp dword ptr [esi + 46ch], ebx
        ; Exact mapped bytes 75 20: jne 0x1000bc96
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esi + 4c8h]
        mov eax, dword ptr [eax + 5ce0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 4c8h], ebx
        mov dword ptr [esi + 4cch], ebp
        ; Exact mapped bytes EB 1C: jmp 0x1000bcb2
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [esi + 480h]
        mov dword ptr [esi + 46ch], ebx
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1000bcb2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 480h], ebx
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 6F 30 06 00: call 0x1006ed30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 330h]
        mov edx, dword ptr [esi + 340h]
        mov dword ptr [esi + 318h], ecx
        lea eax, [esp + 2ch]
        push edx
        lea ecx, [esp + 18h]
        push eax
        push ecx
        mov dword ptr [esi + 310h], 2
        mov dword ptr [esp + 20h], 190h
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes E8 D7 61 01 00: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        mov edi, dword ptr [esp + 38h]
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esp + 3ch]
        add esp, 0ch
        add edx, edi
        sub eax, ecx
        mov dword ptr [esi + 490h], edx
        mov dword ptr [esi + 494h], eax
        ; Exact mapped bytes E9 50 01 00 00: jmp 0x1000be6f
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 334h]
        mov eax, dword ptr [esi + 318h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 8F 3C 01 00 00: jg 0x1000be6f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 EE 2F 06 00: call 0x1006ed30
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 330h]
        mov ecx, dword ptr [esi + 340h]
        mov dword ptr [esi + 318h], eax
        lea edx, [esp + 14h]
        push ecx
        lea eax, [esp + 30h]
        push edx
        push eax
        mov dword ptr [esi + 310h], 2
        mov dword ptr [esp + 38h], 190h
        mov dword ptr [esp + 3ch], ebx
        ; Exact mapped bytes E8 56 61 01 00: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [esi + 46ch]
        add ecx, edx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [esi + 490h], ecx
        mov ecx, dword ptr [esp + 24h]
        add esp, 0ch
        sub edx, ecx
        cmp eax, ebx
        mov dword ptr [esi + 494h], edx
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x1000be6f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 480h]
        mov dword ptr [esi + 46ch], ebx
        cmp ecx, ebx
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x1000be6f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 480h], ebx
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x1000be6f
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 52: jne 0x1000be25
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [esi + 33ch]
        mov eax, 190h
        cmp ecx, eax
        ; Exact mapped bytes 7C 0C: jl 0x1000bdee
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esi + 33ch], eax
        ; Exact mapped bytes EB 1B: jmp 0x1000be09
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 318h]
        mov edx, dword ptr [esi + 334h]
        sub eax, edx
        lea eax, [eax + eax*4]
        shl eax, 4
        cdq
        idiv ebp
        mov dword ptr [esp + 1ch], eax
        mov ecx, dword ptr [esi + 334h]
        mov eax, dword ptr [esi + 318h]
        cmp ecx, eax
        ; Exact mapped bytes 7C 56: jl 0x1000be6f
        __asm _emit 0x7c
        __asm _emit 0x56
        mov dword ptr [esi + 310h], 3
        ; Exact mapped bytes EB 4A: jmp 0x1000be6f
        __asm _emit 0xeb
        __asm _emit 0x4a
        cmp eax, 3
        ; Exact mapped bytes 75 45: jne 0x1000be6f
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [esi + 33ch]
        cmp eax, ebx
        ; Exact mapped bytes 7F 32: jg 0x1000be66
        __asm _emit 0x7f
        __asm _emit 0x32
        ; Exact mapped bytes 66 39 9E CA 02 00 00: cmp word ptr [esi + 0x2ca], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 33ch], ebx
        mov dword ptr [esi + 310h], ebx
        ; Exact mapped bytes 74 08: je 0x1000be51
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esi + 4b8h], ebx
        ; Exact mapped bytes EB 1E: jmp 0x1000be6f
        __asm _emit 0xeb
        __asm _emit 0x1e
        lea edx, [esp + 13h]
        mov ecx, esi
        push edx
        push 5
        mov byte ptr [esp + 1bh], 61h
        ; Exact mapped bytes E8 EC CF FF FF: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x1000be6f
        __asm _emit 0xeb
        __asm _emit 0x09
        add eax, -64h
        mov dword ptr [esi + 33ch], eax
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [esi + 33ch]
        add edx, eax
        mov eax, edx
        mov dword ptr [esi + 33ch], edx
        cmp eax, 0fffffd12h
        ; Exact mapped bytes 7D 07: jge 0x1000be91
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0fffffd12h
        ; Exact mapped bytes EB 0C: jmp 0x1000be9d
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 2eeh
        ; Exact mapped bytes 7E 05: jle 0x1000be9d
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 2eeh
        mov ecx, dword ptr [esp + 144h]
        mov dword ptr [esi + 33ch], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 140h
        ret
    }
}
