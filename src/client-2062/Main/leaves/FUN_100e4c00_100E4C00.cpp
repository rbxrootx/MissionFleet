// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E4C00 .. +0x2000 bytes.
extern "C" __declspec(naked) void FUN_100e4c00_100E4C00() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        push -1
        push 10173d8bh
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
        sub esp, 78h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 BC 1F 00 00: je 0x100e6bea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ebx, 1
        cmp eax, ebx
        ; Exact mapped bytes 75 21: jne 0x100e4c5b
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [esi + 78h]
        test eax, eax
        ; Exact mapped bytes 76 1A: jbe 0x100e4c5b
        __asm _emit 0x76
        __asm _emit 0x1a
        dec eax
        mov dword ptr [esi + 78h], eax
        mov ecx, dword ptr [esp + 88h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov edx, dword ptr [esi + 1d0h]
        mov ecx, dword ptr [esi + 1d4h]
        inc edx
        mov eax, 51eb851fh
        mov dword ptr [esi + 1d0h], edx
        mov edi, dword ptr [esi + 90h]
        imul edi
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx, edi
        imul edx
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 2710h
        sub eax, ecx
        imul edx, eax
        mov eax, 447a7a9h
        imul edx
        sar edx, 0dh
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add ecx, edx
        cmp ecx, 2710h
        ; Exact mapped bytes 7E 05: jle 0x100e4cc3
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ecx, 2710h
        mov edx, ecx
        mov eax, 68db8badh
        imul edx, dword ptr [esi + 94h]
        imul edx
        sar edx, 0ch
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 68db8badh
        mov dword ptr [esi + 94h], edx
        mov edx, dword ptr [esi + 98h]
        imul edx, ecx
        imul edx
        sar edx, 0ch
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 98h], edx
        ; Exact mapped bytes 8B 15 F0 55 1C 10: mov edx, dword ptr [0x101c55f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 9ch]
        add eax, edx
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes 78 22: js 0x100e4d3b
        __asm _emit 0x78
        __asm _emit 0x22
        add ecx, 0ffffec78h
        imul ecx, eax
        shl ecx, 1
        mov eax, 68db8badh
        imul ecx
        sar edx, 0ch
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 9ch], edx
        mov edi, dword ptr [esi + 90h]
        cmp edi, 0fa0h
        ; Exact mapped bytes 0F 8E 7A 09 00 00: jle 0x100e56c7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        add ecx, edi
        cmp ecx, 0fa0h
        ; Exact mapped bytes 0F 8E 5C 08 00 00: jle 0x100e55bd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 94h]
        mov ebp, dword ptr [esi + 88h]
        add ebp, edx
        mov dword ptr [esi + 88h], ebp
        mov eax, dword ptr [esi + 98h]
        mov edi, dword ptr [esi + 8ch]
        add edi, eax
        mov dword ptr [esi + 8ch], edi
        mov ecx, dword ptr [esi + 9ch]
        mov edx, dword ptr [esi + 90h]
        add edx, ecx
        mov dword ptr [esi + 90h], edx
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebp, edx
        lea edx, [edi + edi*2]
        lea eax, [edi + edx*4]
        lea edi, [edi + edi*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, dword ptr [esi + 8ch]
        cdq
        idiv ecx
        mov ecx, eax
        mov eax, 51eb851fh
        imul ebp
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        sub ecx, edx
        push ecx
        lea ecx, [edi + edi*4]
        shl ecx, 2
        imul ecx
        mov eax, dword ptr [esi + 88h]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 C3 9E 01 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [edi + edi*2]
        lea eax, [edi + eax*4]
        lea edi, [edi + edi*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        lea ecx, [edi + edi*4]
        shl ecx, 2
        push eax
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, dword ptr [esi + 88h]
        cdq
        idiv ecx
        push eax
        mov ecx, dword ptr [esi + 1f4h]
        ; Exact mapped bytes E8 66 9E 01 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 9E D8 01 00 00: cmp word ptr [esi + 0x1d8], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 55 1C 00 00: jne 0x100e6acc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 12 25 00 00: call 0x100e7390
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 75 52: jne 0x100e4ed6
        __asm _emit 0x75
        __asm _emit 0x52
        mov eax, dword ptr [esi + 9ch]
        cmp eax, 0fffff448h
        ; Exact mapped bytes 0F 8F 37 1C 00 00: jg 0x100e6acc
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x37
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, ebx
        ; Exact mapped bytes 75 3A: jne 0x100e4ed6
        __asm _emit 0x75
        __asm _emit 0x3a
        cmp eax, 0fffff448h
        ; Exact mapped bytes 0F 8F 25 1C 00 00: jg 0x100e6acc
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x25
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 1B 1C 00 00: jne 0x100e6acc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, ebp
        ; Exact mapped bytes 0F 84 31 1D 00 00: je 0x100e6bea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov ecx, dword ptr [esp + 88h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        cmp dword ptr [esi + 244h], ebp
        ; Exact mapped bytes 0F 84 E4 02 00 00: je 0x100e51c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 20h
        mov eax, dword ptr [ecx + 1047ch]
        mov edx, dword ptr [ecx + 10474h]
        add eax, edx
        xor edx, edx
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
        mov ecx, 3
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        mov eax, dword ptr [esi + 248h]
        mov edi, edx
        lea edx, [eax + eax*2]
        add edi, edx
        ; Exact mapped bytes E8 7D 78 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebp
        mov dword ptr [esp + 90h], ebp
        ; Exact mapped bytes 74 3F: je 0x100e4f74
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 15 F0 57 1C 10: mov edx, dword ptr [0x101c57f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 248h]
        cmp dword ptr [edx + 170h], ecx
        ; Exact mapped bytes 7E 1D: jle 0x100e4f66
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp ecx, ebp
        ; Exact mapped bytes 7C 19: jl 0x100e4f66
        __asm _emit 0x7c
        __asm _emit 0x19
        mov edx, dword ptr [edx + 194h]
        cmp edx, ebp
        ; Exact mapped bytes 74 0F: je 0x100e4f66
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [edx + ecx*4]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 9E 39 F6 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x39
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes EB 10: jmp 0x100e4f76
        __asm _emit 0xeb
        __asm _emit 0x10
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 90 39 F6 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x39
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x100e4f76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 248h]
        mov ebp, 2
        cmp eax, ebp
        mov dword ptr [esp + 90h], 0ffffffffh
        push 5ch
        ; Exact mapped bytes 0F 85 0F 01 00 00: jne 0x100e50a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 78 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov dword ptr [esp + 90h], 1
        ; Exact mapped bytes 0F 84 F3 01 00 00: je 0x100e51a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 57 1C 10: mov eax, dword ptr [0x101c57f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 19: jle 0x100e4fdb
        __asm _emit 0x7e
        __asm _emit 0x19
        test edi, edi
        ; Exact mapped bytes 7C 15: jl 0x100e4fdb
        __asm _emit 0x7c
        __asm _emit 0x15
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100e4fdb
        __asm _emit 0x74
        __asm _emit 0x0b
        shl edi, 6
        add edi, eax
        mov dword ptr [esp + 2ch], edi
        ; Exact mapped bytes EB 08: jmp 0x100e4fe3
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 2ch], 0
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        mov ebp, dword ptr [eax + 104e0h]
        lea ecx, [edi + edi*2]
        lea eax, [edi + ecx*4]
        lea edi, [edi + edi*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 90h]
        mov edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esp + 38h], edx
        imul ecx
        mov ecx, dword ptr [esp + 38h]
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        sub ecx, edx
        sub ecx, 0a3h
        push ecx
        lea ecx, [edi + edi*4]
        shl ecx, 2
        imul ecx
        mov eax, dword ptr [esi + 88h]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        sub eax, 0a6h
        push eax
        mov eax, dword ptr [esp + 38h]
        push eax
        push ebp
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100e508b
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov ecx, dword ptr [esi + 204h]
        lea edx, [eax + ecx*2 + 8]
        mov ecx, dword ptr [esp + 44h]
        push edx
        push ebx
        ; Exact mapped bytes E8 30 34 F6 FF: call 0x100484d0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x34
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x100e51aa
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F6 76 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov dword ptr [esp + 90h], ebp
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x100e51a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 57 1C 10: mov eax, dword ptr [0x101c57f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 19: jle 0x100e50e6
        __asm _emit 0x7e
        __asm _emit 0x19
        test edi, edi
        ; Exact mapped bytes 7C 15: jl 0x100e50e6
        __asm _emit 0x7c
        __asm _emit 0x15
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100e50e6
        __asm _emit 0x74
        __asm _emit 0x0b
        shl edi, 6
        add edi, eax
        mov dword ptr [esp + 2ch], edi
        ; Exact mapped bytes EB 08: jmp 0x100e50ee
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 2ch], 0
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        mov ebp, dword ptr [eax + 104e0h]
        lea ecx, [edi + edi*2]
        lea eax, [edi + ecx*4]
        lea edi, [edi + edi*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 90h]
        mov edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esp + 38h], edx
        imul ecx
        mov ecx, dword ptr [esp + 38h]
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        sub ecx, edx
        sub ecx, 64h
        push ecx
        lea ecx, [edi + edi*4]
        shl ecx, 2
        imul ecx
        mov eax, dword ptr [esi + 88h]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        sub eax, 64h
        push eax
        mov eax, dword ptr [esp + 38h]
        push eax
        push ebp
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100e5191
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov ecx, dword ptr [esi + 204h]
        lea edx, [eax + ecx*2 + 8]
        mov ecx, dword ptr [esp + 44h]
        push edx
        push ebx
        ; Exact mapped bytes E8 2A 33 F6 FF: call 0x100484d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x33
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e51aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 94h], 0ffffffffh
        ; Exact mapped bytes E8 9F 9F 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 D2 17 00 00: jmp 0x100e6998
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1c0h]
        xor ecx, 0aah
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x100e5305
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 74h], ebx
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x100e530e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 204h]
        add eax, 1eh
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 19: jle 0x100e5211
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, ebp
        ; Exact mapped bytes 7C 15: jl 0x100e5211
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x100e5211
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, ecx
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes EB 04: jmp 0x100e5215
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 2ch], ebp
        push 68h
        ; Exact mapped bytes E8 84 75 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebx
        test ebx, ebx
        mov dword ptr [esp + 90h], 3
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x100e52cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D EC 55 1C 10: mov ebp, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 176fh
        mov ecx, dword ptr [edx + 104e0h]
        lea eax, [ebp + ebp*2]
        lea eax, [ebp + eax*4]
        lea ebp, [ebp + ebp*4]
        lea edx, [eax + eax*8]
        mov eax, 51eb851fh
        imul edx
        mov eax, dword ptr [esi + 8ch]
        mov edi, edx
        sar edi, 5
        mov edx, edi
        shr edx, 1fh
        add edi, edx
        cdq
        idiv edi
        mov edx, dword ptr [esi + 90h]
        mov edi, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        sub edi, edx
        lea edx, [ebp + ebp*4]
        shl edx, 2
        imul edx
        push edi
        mov eax, dword ptr [esi + 88h]
        mov edi, edx
        sar edi, 5
        mov edx, edi
        shr edx, 1fh
        add edi, edx
        cdq
        idiv edi
        push eax
        mov eax, dword ptr [esp + 38h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 74h]
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 35 BD F1 FF: call 0x10001000
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xbd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes EB 02: jmp 0x100e52d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 90h]
        mov eax, 51eb851fh
        imul edx
        sar edx, 7
        mov eax, edx
        mov dword ptr [esp + 90h], 0ffffffffh
        shr eax, 1fh
        add edx, eax
        push edx
        mov edx, dword ptr [esi + 204h]
        push edx
        ; Exact mapped bytes E8 00 BF F1 FF: call 0x10001200
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xbf
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ebx, 1
        cmp dword ptr [esi + 74h], ebx
        ; Exact mapped bytes 0F 85 79 01 00 00: jne 0x100e5487
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 8B 74 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov dword ptr [esp + 90h], 4
        ; Exact mapped bytes 74 3A: je 0x100e5365
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D D8 57 1C 10: mov ecx, dword ptr [0x101c57d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 13h
        ; Exact mapped bytes 7E 1B: jle 0x100e5355
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov edx, dword ptr [ecx + 194h]
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x100e5355
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [edx + 4ch]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 B1 35 F6 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes EB 18: jmp 0x100e536d
        __asm _emit 0xeb
        __asm _emit 0x18
        xor edx, edx
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 A1 35 F6 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes EB 08: jmp 0x100e536d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 2ch], 0
        push 5ch
        mov dword ptr [esp + 94h], 0ffffffffh
        ; Exact mapped bytes E8 21 74 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov dword ptr [esp + 90h], 5
        ; Exact mapped bytes 0F 84 F4 01 00 00: je 0x100e558d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100e53ab
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        ; Exact mapped bytes 8B 0D E8 57 1C 10: mov ecx, dword ptr [0x101c57e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 0ah
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x100e53d3
        __asm _emit 0x7e
        __asm _emit 0x17
        test eax, eax
        ; Exact mapped bytes 7C 13: jl 0x100e53d3
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x100e53d3
        __asm _emit 0x74
        __asm _emit 0x09
        shl eax, 6
        add eax, ecx
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x100e53d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        mov ebp, dword ptr [eax + 104e0h]
        lea ecx, [edi + edi*2]
        lea eax, [edi + ecx*4]
        lea edi, [edi + edi*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 90h]
        mov edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esp + 38h], edx
        imul ecx
        mov ecx, dword ptr [esp + 38h]
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        sub ecx, edx
        push ecx
        lea ecx, [edi + edi*4]
        shl ecx, 2
        imul ecx
        mov eax, dword ptr [esi + 88h]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        push eax
        push ebx
        push ebp
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100e546e
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov ecx, dword ptr [esi + 204h]
        lea edx, [eax + ecx*2 + 8]
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 44h]
        push edx
        push eax
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x100e5583
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 12 73 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x73
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov dword ptr [esp + 90h], 6
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x100e558d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 204h]
        add eax, 1ah
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x100e54d6
        __asm _emit 0x7e
        __asm _emit 0x17
        test eax, eax
        ; Exact mapped bytes 7C 13: jl 0x100e54d6
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x100e54d6
        __asm _emit 0x74
        __asm _emit 0x09
        shl eax, 6
        add eax, ecx
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x100e54d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        mov ebp, dword ptr [ecx + 104e0h]
        lea edx, [edi + edi*2]
        lea eax, [edi + edx*4]
        lea edi, [edi + edi*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, dword ptr [esi + 8ch]
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 90h]
        mov edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esp + 38h], edx
        imul ecx
        mov eax, dword ptr [esp + 38h]
        sar edx, 7
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        lea ecx, [edi + edi*4]
        sub eax, edx
        push eax
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        mov eax, dword ptr [esi + 88h]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        push eax
        push ebx
        push ebp
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100e5572
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov ecx, dword ptr [esi + 204h]
        lea edx, [eax + ecx*2 + 8]
        mov ecx, dword ptr [esp + 44h]
        push edx
        push 0
        ; Exact mapped bytes E8 48 2F F6 FF: call 0x100484d0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x2f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ebx, 1
        test esi, esi
        mov dword ptr [esp + 90h], 0ffffffffh
        ; Exact mapped bytes 0F 84 4A 16 00 00: je 0x100e6bea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 88h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        cmp edi, 0fa0h
        ; Exact mapped bytes 0F 8E FE 00 00 00: jle 0x100e56c7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 9ch]
        lea eax, [edi + edi*4 - 4e20h]
        mov ebx, dword ptr [esi + 94h]
        mov dword ptr [esp + 68h], 0fa0h
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ebp
        cdq
        mov ecx, eax
        mov eax, 51eb851fh
        xor ecx, edx
        sub ecx, edx
        mov edx, dword ptr [esi + 88h]
        mov dword ptr [esp + 14h], edx
        mov edx, ecx
        imul edx, ebx
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 14h]
        add edx, eax
        mov eax, dword ptr [esi + 98h]
        imul ecx, eax
        mov eax, 51eb851fh
        mov dword ptr [esp + 60h], edx
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        add edx, eax
        lea eax, [edi + ebp]
        test eax, eax
        mov dword ptr [esp + 64h], edx
        ; Exact mapped bytes 7D 60: jge 0x100e56ab
        __asm _emit 0x7d
        __asm _emit 0x60
        lea edi, [edi + edi*4]
        lea eax, [edi + edi*4]
        mov edi, dword ptr [esp + 14h]
        shl eax, 2
        cdq
        idiv ebp
        cdq
        mov ecx, eax
        mov eax, 51eb851fh
        xor ecx, edx
        sub ecx, edx
        mov edx, ecx
        imul ecx, dword ptr [esi + 98h]
        imul edx, ebx
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        add edx, edi
        mov ebp, edx
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        mov dword ptr [esp + 54h], ebp
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        add edx, eax
        xor eax, eax
        mov dword ptr [esp + 58h], edx
        ; Exact mapped bytes E9 37 01 00 00: jmp 0x100e57e2
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 98h]
        lea ebp, [edx + ebx]
        mov edx, dword ptr [esi + 8ch]
        mov dword ptr [esp + 54h], ebp
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x100e57dc
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esi + 88h]
        mov eax, ebx
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 60h], ecx
        mov ecx, dword ptr [esi + 9ch]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esp + 64h], edx
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esp + 68h], eax
        lea eax, [ecx + edi]
        test eax, eax
        ; Exact mapped bytes 7D 62: jge 0x100e5752
        __asm _emit 0x7d
        __asm _emit 0x62
        lea edi, [edi + edi*4]
        lea eax, [edi + edi*4]
        mov edi, dword ptr [ebx]
        shl eax, 2
        cdq
        idiv ecx
        cdq
        mov ecx, eax
        mov eax, 51eb851fh
        xor ecx, edx
        sub ecx, edx
        mov edx, ecx
        imul ecx, dword ptr [esi + 98h]
        imul edx, dword ptr [esi + 94h]
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        add edx, edi
        mov ebp, edx
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        mov dword ptr [esp + 54h], ebp
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        add edx, eax
        xor eax, eax
        mov dword ptr [esp + 58h], edx
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x100e57e2
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fa0h
        ; Exact mapped bytes 7E 69: jle 0x100e57c2
        __asm _emit 0x7e
        __asm _emit 0x69
        mov eax, 0fa0h
        sub eax, edi
        mov edi, dword ptr [ebx]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ecx
        cdq
        mov ecx, eax
        mov eax, 51eb851fh
        xor ecx, edx
        sub ecx, edx
        mov edx, ecx
        imul ecx, dword ptr [esi + 98h]
        imul edx, dword ptr [esi + 94h]
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        add edx, edi
        mov ebp, edx
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        mov dword ptr [esp + 54h], ebp
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        add edx, eax
        mov eax, 0fa0h
        mov dword ptr [esp + 58h], edx
        ; Exact mapped bytes EB 20: jmp 0x100e57e2
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ebp, dword ptr [ebx]
        mov edx, dword ptr [esi + 94h]
        mov ecx, dword ptr [esi + 98h]
        add ebp, edx
        mov edx, dword ptr [esi + 8ch]
        mov dword ptr [esp + 54h], ebp
        add edx, ecx
        mov dword ptr [esp + 58h], edx
        mov ebx, dword ptr [esp + 60h]
        mov edi, dword ptr [esp + 64h]
        mov ecx, ebp
        mov dword ptr [esp + 5ch], eax
        sub ecx, ebx
        mov ebx, edx
        mov edx, dword ptr [esp + 68h]
        sub ebx, edi
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        sub eax, edx
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 30h], ecx
        lea edx, [edi + edi*2]
        mov dword ptr [esp + 34h], ebx
        lea eax, [edi + edx*4]
        lea edx, [eax + eax*8]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        lea eax, [edi + edi*4]
        mov dword ptr [esp + 28h], edx
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        shl edx, 2
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, ecx
        mov dword ptr [esp + 2ch], edx
        cdq
        xor eax, edx
        sub eax, edx
        cdq
        idiv dword ptr [esp + 2ch]
        mov ecx, eax
        mov eax, ebx
        cdq
        xor eax, edx
        sub eax, edx
        cdq
        idiv dword ptr [esp + 28h]
        cmp ecx, eax
        ; Exact mapped bytes 7E 0B: jle 0x100e5873
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [esp + 30h]
        cdq
        idiv dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 09: jmp 0x100e587c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esp + 34h]
        cdq
        idiv dword ptr [esp + 28h]
        cdq
        xor eax, edx
        xor ecx, ecx
        sub eax, edx
        mov dword ptr [esp + 2ch], ecx
        cdq
        sub eax, edx
        sar eax, 1
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes 0F 8E 5A 01 00 00: jle 0x100e59f3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 14h], ecx
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 28h]
        cdq
        idiv ecx
        mov ebx, dword ptr [esp + 60h]
        mov ebp, eax
        mov eax, dword ptr [esp + 18h]
        cdq
        idiv ecx
        mov edx, dword ptr [esp + 64h]
        add ebp, ebx
        mov dword ptr [esp + 44h], ebp
        mov dword ptr [esp + 54h], ebp
        mov ebx, eax
        mov eax, dword ptr [esp + 20h]
        add ebx, edx
        cdq
        idiv ecx
        mov ecx, dword ptr [esp + 68h]
        mov dword ptr [esp + 48h], ebx
        mov dword ptr [esp + 58h], ebx
        add eax, ecx
        mov dword ptr [esp + 5ch], eax
        lea eax, [edi + edi*4]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        mov ecx, edx
        mov eax, ebp
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov dword ptr [esp + 44h], eax
        lea eax, [edi + edi*2]
        lea eax, [edi + eax*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        mov eax, ebx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov dword ptr [esp + 48h], eax
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 0ch]
        test eax, eax
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 74 48: je 0x100e598a
        __asm _emit 0x74
        __asm _emit 0x48
        mov ebp, dword ptr [esp + 48h]
        mov ebx, dword ptr [esp + 44h]
        mov edi, eax
        mov ecx, edi
        ; Exact mapped bytes E8 7D 8C 00 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 17: jne 0x100e5971
        __asm _emit 0x75
        __asm _emit 0x17
        cmp edi, dword ptr [esi + 23ch]
        ; Exact mapped bytes 74 0F: je 0x100e5971
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push ebp
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 03 98 00 00: call 0x100ef170
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x100e59ca
        __asm _emit 0x75
        __asm _emit 0x59
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes 75 D0: jne 0x100e594c
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 58h]
        mov ebp, dword ptr [esp + 54h]
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 14h]
        add edx, ecx
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 14h], edx
        mov edx, dword ptr [esp + 34h]
        inc eax
        add ecx, edx
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [esp + 18h], ecx
        mov ecx, dword ptr [esp + 3ch]
        add edx, ecx
        mov ecx, dword ptr [esp + 28h]
        cmp eax, ecx
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 20h], edx
        ; Exact mapped bytes 7D 32: jge 0x100e59f7
        __asm _emit 0x7d
        __asm _emit 0x32
        ; Exact mapped bytes E9 DB FE FF FF: jmp 0x100e58a5
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        mov ebx, dword ptr [esp + 58h]
        mov ebp, dword ptr [esp + 54h]
        xor edx, edx
        mov dword ptr [esi + 200h], eax
        ; Exact mapped bytes 66 8B 90 2C 03 00 00: mov dx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 1e4h], edx
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes EB 04: jmp 0x100e59f7
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 58h]
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 7C 08 00 00: je 0x100e6283
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 224h]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x100e5a44
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [esi + 240h]
        lea eax, [esp + 54h]
        push eax
        lea eax, [esi + 0a4h]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [esi + 1d0h]
        push eax
        mov eax, dword ptr [esi + 84h]
        push eax
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 58h]
        mov ebp, dword ptr [esp + 54h]
        mov ecx, dword ptr [esi + 230h]
        test ecx, ecx
        ; Exact mapped bytes 74 31: je 0x100e5a7f
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [esi + 234h]
        cmp eax, 32h
        ; Exact mapped bytes 7E 26: jle 0x100e5a7f
        __asm _emit 0x7e
        __asm _emit 0x26
        mov edx, dword ptr [esi + 238h]
        push edx
        lea edx, [esi + 4]
        push edx
        lea edx, [esi + 228h]
        push edx
        push eax
        ; Exact mapped bytes E8 EF E2 F1 FF: call 0x10003d60
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe2
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 58h]
        mov ebp, dword ptr [esp + 54h]
        mov eax, dword ptr [esi + 80h]
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 07 00 00: je 0x100e6258
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi + edi*4]
        mov dword ptr [esp + 18h], ebp
        mov dword ptr [esp + 1ch], ebx
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, ebp
        cdq
        idiv ecx
        lea ecx, [edi + edi*2]
        lea edi, [edi + ecx*4]
        lea ecx, [edi + edi*8]
        mov dword ptr [esp + 54h], eax
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        mov eax, ebx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov ecx, eax
        mov eax, 51eb851fh
        imul dword ptr [esp + 5ch]
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esi + 98h]
        sub ecx, edx
        mov dword ptr [esp + 5ch], edx
        mov dword ptr [esp + 58h], ecx
        mov ecx, dword ptr [esi + 94h]
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 3ch], edx
        ; Exact mapped bytes DB 44 24 3C: fild dword ptr [esp + 0x3c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes DD 5C 24 44: fstp qword ptr [esp + 0x44]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        mov ecx, dword ptr [esp + 48h]
        mov edx, dword ptr [esp + 44h]
        push ecx
        push edx
        ; Exact mapped bytes E8 7F 6C 08 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 71 6C 08 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        mov dword ptr [esp + 34h], edi
        ; Exact mapped bytes 75 09: jne 0x100e5b48
        __asm _emit 0x75
        __asm _emit 0x09
        mov edi, 1
        mov dword ptr [esp + 34h], edi
        ; Exact mapped bytes DB 44 24 34: fild dword ptr [esp + 0x34]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes DD 5C 24 44: fstp qword ptr [esp + 0x44]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        mov eax, dword ptr [esp + 48h]
        mov ecx, dword ptr [esp + 44h]
        push eax
        mov eax, dword ptr [esi + 9ch]
        cdq
        sub eax, edx
        push ecx
        sar eax, 1
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes DB 44 24 44: fild dword ptr [esp + 0x44]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes DD 5C 24 4C: fstp qword ptr [esp + 0x4c]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x4c
        mov edx, dword ptr [esp + 50h]
        mov eax, dword ptr [esp + 4ch]
        push edx
        push eax
        ; Exact mapped bytes E8 32 6C 08 00: call 0x1016c7b2
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes D8 0D 88 65 17 10: fmul dword ptr [0x10176588]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes DC 0D 70 52 17 10: fmul qword ptr [0x10175270]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 12 6C 08 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 23ch]
        cdq
        mov ebx, eax
        xor ebx, edx
        sub ebx, edx
        test ecx, ecx
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 74 07: je 0x100e5bb0
        __asm _emit 0x74
        __asm _emit 0x07
        push 0bh
        ; Exact mapped bytes E8 90 97 00 00: call 0x100ef340
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + ebx*2 + 384h]
        mov eax, dword ptr [edx + 1047ch]
        mov ebp, dword ptr [edx + 10474h]
        add eax, ebp
        xor edx, edx
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
        div ecx
        lea ecx, [ebx*4]
        inc edx
        cmp edx, ecx
        ; Exact mapped bytes 76 32: jbe 0x100e5c1d
        __asm _emit 0x76
        __asm _emit 0x32
        mov ecx, edi
        mov eax, 51eb851fh
        imul ecx, edi
        imul ecx
        sar edx, 5
        mov eax, edx
        mov dword ptr [esp + 30h], 2
        shr eax, 1fh
        add edx, eax
        mov ecx, edx
        imul ecx, dword ptr [esi + 1c4h]
        mov eax, ecx
        cdq
        sub eax, edx
        mov edx, eax
        sar edx, 1
        ; Exact mapped bytes EB 40: jmp 0x100e5c5d
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 9ch]
        mov eax, 51eb851fh
        imul ecx, ecx
        imul ecx
        sar edx, 5
        mov ecx, edx
        mov eax, edx
        shr ecx, 1fh
        add eax, ecx
        mov dword ptr [esp + 30h], 1
        imul eax, dword ptr [esi + 1c4h]
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        sar ecx, 2
        lea eax, [ecx + ecx*2]
        cdq
        sub eax, edx
        mov edx, eax
        sar edx, 1
        mov eax, 88888889h
        mov edi, dword ptr [esi + 1cch]
        mul edx
        shr edx, 6
        mov eax, 51eb851fh
        mov ebp, edx
        imul ecx
        imul ebp, edi
        mov ebx, dword ptr [esi + 1c8h]
        mov dword ptr [esp + 14h], ebp
        sar edx, 5
        mov ecx, edx
        mov eax, edx
        shr ecx, 1fh
        add eax, ecx
        mov ecx, ebx
        imul eax, edi
        imul ecx, ebx
        cdq
        idiv ecx
        mov ebx, eax
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 D8 01 00 00: mov ax, word ptr [esi + 0x1d8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 2ch], ebx
        sub eax, 0
        ; Exact mapped bytes 74 28: je 0x100e5cd6
        __asm _emit 0x74
        __asm _emit 0x28
        dec eax
        ; Exact mapped bytes 74 0F: je 0x100e5cc0
        __asm _emit 0x74
        __asm _emit 0x0f
        dec eax
        ; Exact mapped bytes 75 49: jne 0x100e5cfd
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, 10624dd3h
        mul ebp
        shr edx, 7
        ; Exact mapped bytes EB 39: jmp 0x100e5cf9
        __asm _emit 0xeb
        __asm _emit 0x39
        xor ebx, ebx
        mov dword ptr [esi + 1c0h], 0aah
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes EB 27: jmp 0x100e5cfd
        __asm _emit 0xeb
        __asm _emit 0x27
        lea ebx, [ebx + ebx*2]
        mov eax, 66666667h
        imul ebx
        sar edx, 1
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 91a2b3c5h
        mov ebx, edx
        mul ebp
        mov dword ptr [esp + 2ch], ebx
        shr edx, 0ah
        mov dword ptr [esp + 14h], edx
        mov ecx, dword ptr [esi + 23ch]
        test ecx, ecx
        ; Exact mapped bytes 74 37: je 0x100e5d3e
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [esi + 240h]
        lea eax, [esp + 18h]
        push edx
        push eax
        ; Exact mapped bytes E8 88 84 00 00: call 0x100ee1a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x100e5dad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE B8 01 00 00 0D: cmp word ptr [esi + 0x1b8], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 75 14: jne 0x100e5d3e
        __asm _emit 0x75
        __asm _emit 0x14
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 23ch]
        ; Exact mapped bytes E8 C6 85 00 00: call 0x100ee300
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 6F: jne 0x100e5dad
        __asm _emit 0x75
        __asm _emit 0x6f
        mov eax, dword ptr [esi + 23ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 58 04 00 00: jne 0x100e61a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [edi + edi*2]
        lea eax, [edi + edx*4]
        lea edi, [edi + edi*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, dword ptr [esp + 1ch]
        cdq
        idiv ecx
        lea ecx, [edi + edi*4]
        shl ecx, 2
        push eax
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esp + 1ch]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 5B 8E F8 FF: call 0x1006ec00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F7 03 00 00: je 0x100e61a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 431bde83h
        mov ecx, dword ptr [esi + 1c0h]
        imul ebx
        sar edx, 12h
        mov eax, edx
        xor ecx, 0aah
        shr eax, 1fh
        add edx, eax
        mov eax, 66666667h
        add edx, ecx
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 0ah
        ; Exact mapped bytes 7E 3D: jle 0x100e5e1f
        __asm _emit 0x7e
        __asm _emit 0x3d
        cmp edx, 32h
        ; Exact mapped bytes 7E 31: jle 0x100e5e18
        __asm _emit 0x7e
        __asm _emit 0x31
        cmp edx, 78h
        ; Exact mapped bytes 7E 25: jle 0x100e5e11
        __asm _emit 0x7e
        __asm _emit 0x25
        cmp edx, 12ch
        ; Exact mapped bytes 7E 16: jle 0x100e5e0a
        __asm _emit 0x7e
        __asm _emit 0x16
        xor ecx, ecx
        cmp edx, 1f4h
        setle cl
        dec ecx
        and ecx, 14h
        add ecx, 28h
        mov edi, ecx
        ; Exact mapped bytes EB 1A: jmp 0x100e5e24
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edi, 19h
        ; Exact mapped bytes EB 13: jmp 0x100e5e24
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edi, 0fh
        ; Exact mapped bytes EB 0C: jmp 0x100e5e24
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edi, 0ah
        ; Exact mapped bytes EB 05: jmp 0x100e5e24
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edi, 5
        mov edx, dword ptr [esp + 58h]
        mov eax, dword ptr [esp + 54h]
        ; Exact mapped bytes 8B 1D 20 51 17 10: mov ebx, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 3ch], edx
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cdq
        idiv edi
        mov eax, 55555556h
        mov ecx, edx
        imul edi
        mov eax, edx
        add edx, ecx
        shr eax, 1fh
        add eax, edx
        test eax, eax
        ; Exact mapped bytes 0F 8E B9 00 00 00: jle 0x100e5f12
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 34h], eax
        push 84h
        ; Exact mapped bytes E8 39 69 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 90h], 7
        ; Exact mapped bytes 74 7B: je 0x100e5ef8
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x100e5e8b
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
        ; Exact mapped bytes 7E 17: jle 0x100e5eb3
        __asm _emit 0x7e
        __asm _emit 0x17
        test eax, eax
        ; Exact mapped bytes 7C 13: jl 0x100e5eb3
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x100e5eb3
        __asm _emit 0x74
        __asm _emit 0x09
        shl eax, 6
        add eax, ecx
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x100e5eb5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1388h
        mov edi, dword ptr [edx + 104e0h]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cdq
        mov ecx, 14h
        idiv ecx
        mov eax, dword ptr [esp + 40h]
        lea ecx, [edx + eax - 0ah]
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cdq
        mov ecx, 14h
        idiv ecx
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        sub eax, edx
        add eax, 0ah
        push eax
        push ebp
        push edi
        ; Exact mapped bytes E8 08 BA F3 FF: call 0x10021900
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xba
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [esp + 90h], 0ffffffffh
        dec eax
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 4B FF FF FF: jne 0x100e5e5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 23ch]
        mov ecx, dword ptr [ecx + 4]
        cmp eax, ecx
        ; Exact mapped bytes 75 47: jne 0x100e5f6c
        __asm _emit 0x75
        __asm _emit 0x47
        mov ecx, dword ptr [esi + 24ch]
        test ecx, ecx
        ; Exact mapped bytes 74 3D: je 0x100e5f6c
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [esi + 200h]
        mov al, byte ptr [eax + 330h]
        cmp al, byte ptr [edx + 330h]
        ; Exact mapped bytes 74 29: je 0x100e5f6c
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 21h
        ; Exact mapped bytes 7E 12: jle 0x100e5f63
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100e5f63
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes EB 02: jmp 0x100e5f65
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 1c0h]
        xor eax, 0aah
        ; Exact mapped bytes 0F 84 99 01 00 00: je 0x100e6116
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edi, eax
        and edi, 80000003h
        ; Exact mapped bytes 79 05: jns 0x100e5f8e
        __asm _emit 0x79
        __asm _emit 0x05
        dec edi
        or edi, 0fffffffch
        inc edi
        push 58h
        add edi, 19h
        ; Exact mapped bytes E8 08 68 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov dword ptr [esp + 90h], 8
        ; Exact mapped bytes 74 54: je 0x100e6002
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 218h]
        add edx, 4
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x100e5fda
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x100e5fda
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ebx, dword ptr [ecx + 190h]
        test ebx, ebx
        ; Exact mapped bytes 74 07: je 0x100e5fda
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, ebx
        ; Exact mapped bytes EB 02: jmp 0x100e5fdc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 176fh
        mov ebx, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        push edx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 90 98 01 00: call 0x100ff890
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e6004
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebp, 0ffffffffh
        push 0fffffeffh
        mov ecx, eax
        mov dword ptr [esp + 94h], ebp
        ; Exact mapped bytes E8 46 91 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 7F 67 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov dword ptr [esp + 90h], 9
        ; Exact mapped bytes 74 52: je 0x100e6089
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 218h]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x100e6060
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x100e6060
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ebx, dword ptr [ecx + 190h]
        test ebx, ebx
        ; Exact mapped bytes 74 07: je 0x100e6060
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, ebx
        ; Exact mapped bytes EB 02: jmp 0x100e6062
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        mov ebx, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        push edx
        push ebx
        push edi
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 47 24 F6 FF: call 0x100484d0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0xff
        push 54h
        mov dword ptr [esp + 94h], ebp
        ; Exact mapped bytes E8 09 67 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov dword ptr [esp + 90h], 0ah
        ; Exact mapped bytes 74 4F: je 0x100e60fc
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 214h]
        cmp dword ptr [ecx + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x100e60d4
        __asm _emit 0x7e
        __asm _emit 0x13
        test edx, edx
        ; Exact mapped bytes 7C 0F: jl 0x100e60d4
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edi, dword ptr [ecx + 18ch]
        test edi, edi
        ; Exact mapped bytes 74 05: je 0x100e60d4
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [edi + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x100e60d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1b58h
        mov edi, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 F6 76 F2 FF: call 0x1000d7f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e60fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 102h
        mov ecx, eax
        mov dword ptr [esp + 94h], ebp
        ; Exact mapped bytes E8 4F 90 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x100e61a4
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edi, eax
        and edi, 80000003h
        ; Exact mapped bytes 79 05: jns 0x100e6127
        __asm _emit 0x79
        __asm _emit 0x05
        dec edi
        or edi, 0fffffffch
        inc edi
        push 5ch
        add edi, 19h
        ; Exact mapped bytes E8 6F 66 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov dword ptr [esp + 90h], 0bh
        ; Exact mapped bytes 74 52: je 0x100e6199
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 218h]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x100e6170
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x100e6170
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100e6170
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, ecx
        ; Exact mapped bytes EB 02: jmp 0x100e6172
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [esp + 58h]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        push ebx
        mov ebx, dword ptr [esp + 5ch]
        mov ecx, dword ptr [ecx + 104e0h]
        push ebx
        push edx
        push ecx
        push edi
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 37 23 F6 FF: call 0x100484d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x23
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [esp + 90h], 0ffffffffh
        mov eax, dword ptr [esi + 200h]
        mov ecx, dword ptr [esi + 23ch]
        cmp eax, ecx
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x100e6258
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0c24h]
        mov edi, dword ptr [esi + 1b4h]
        xor eax, 0aaaaaaaah
        cdq
        sub eax, edx
        sar eax, 1
        sub edi, eax
        ; Exact mapped bytes 79 02: jns 0x100e61d4
        __asm _emit 0x79
        __asm _emit 0x02
        xor edi, edi
        lea edx, [esp + 18h]
        push 64h
        push edx
        ; Exact mapped bytes E8 20 81 00 00: call 0x100ee300
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1c8h]
        mov edx, dword ptr [esi + 1c4h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 38h]
        push edi
        push ecx
        mov ecx, dword ptr [esp + 44h]
        push edx
        mov edx, dword ptr [esi + 1c0h]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 34h]
        xor edx, 0aah
        mov eax, 24924925h
        push edx
        mul ecx
        sub ecx, edx
        mov eax, dword ptr [esi + 1e4h]
        shr ecx, 1
        add ecx, edx
        mov edx, dword ptr [esi + 200h]
        shr ecx, 5
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        push 0bh
        push eax
        mov eax, dword ptr [esi + 23ch]
        push ecx
        mov ecx, dword ptr [esp + 50h]
        push edx
        mov edx, dword ptr [esp + 50h]
        push eax
        mov eax, dword ptr [esi + 7ch]
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push eax
        ; Exact mapped bytes E8 38 08 F8 FF: call 0x10066a90
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [esi + 240h]
        test eax, eax
        ; Exact mapped bytes 0F 84 32 07 00 00: je 0x100e6998
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 23ch]
        lea ecx, [esp + 54h]
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push edx
        ; Exact mapped bytes E8 12 4B F8 FF: call 0x1006ad90
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x4b
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 15 07 00 00: jmp 0x100e6998
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 5ch]
        test eax, eax
        ; Exact mapped bytes 0F 8F 2F 07 00 00: jg 0x100e69be
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 224h]
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x100e62be
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esi + 240h]
        lea eax, [esp + 54h]
        push eax
        lea eax, [esi + 0a4h]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [esi + 1d0h]
        push eax
        mov eax, dword ptr [esi + 84h]
        push eax
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push edx
        mov ecx, dword ptr [ecx + 104e0h]
        push eax
        ; Exact mapped bytes E8 89 87 F6 FF: call 0x1004ea60
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 04 00 00: je 0x100e67cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 E3 04 00 00: je 0x100e67cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        test eax, eax
        ; Exact mapped bytes 0F 84 A2 06 00 00: je 0x100e6998
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 54h]
        mov ebp, dword ptr [esp + 58h]
        mov dword ptr [esp + 44h], ebx
        lea eax, [edi + edi*4]
        mov dword ptr [esp + 48h], ebp
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        mov ecx, edx
        mov eax, ebx
        sar ecx, 5
        mov edx, ecx
        mov ebx, 0dh
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov dword ptr [esp + 54h], eax
        lea eax, [edi + edi*2]
        lea eax, [edi + eax*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        mov eax, ebp
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 23ch]
        test ecx, ecx
        mov dword ptr [esp + 58h], eax
        ; Exact mapped bytes 74 32: je 0x100e6397
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [esi + 240h]
        lea edx, [esp + 44h]
        push eax
        push edx
        ; Exact mapped bytes E8 2A 7E 00 00: call 0x100ee1a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 48: jne 0x100e63c2
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 66 39 9E B8 01 00 00: cmp word ptr [esi + 0x1b8], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x100e6397
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 23ch]
        lea eax, [esp + 44h]
        push eax
        ; Exact mapped bytes E8 6D 7F 00 00: call 0x100ee300
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x100e63c2
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 23ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 28 02 00 00: jne 0x100e65cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 58h]
        mov edx, dword ptr [esp + 54h]
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 46 88 F8 FF: call 0x1006ec00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 0B 02 00 00: je 0x100e65cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1c0h]
        xor eax, 0aah
        ; Exact mapped bytes 0F 84 7F 01 00 00: je 0x100e6552
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 C6 63 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov dword ptr [esp + 90h], 0ch
        ; Exact mapped bytes 74 54: je 0x100e6444
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 3D EC 57 1C 10: mov edi, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 218h]
        add edx, 4
        cmp dword ptr [edi + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x100e641c
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x100e641c
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edi, dword ptr [edi + 190h]
        test edi, edi
        ; Exact mapped bytes 74 07: je 0x100e641c
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, edi
        ; Exact mapped bytes EB 02: jmp 0x100e641e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 176fh
        mov edi, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 4E 94 01 00: call 0x100ff890
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e6446
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebp, 0ffffffffh
        push 0fffffeffh
        mov ecx, eax
        mov dword ptr [esp + 94h], ebp
        ; Exact mapped bytes E8 04 8D 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 3D 63 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov dword ptr [esp + 90h], ebx
        ; Exact mapped bytes 74 53: je 0x100e64c8
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 218h]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x100e649e
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x100e649e
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edi, dword ptr [ecx + 190h]
        test edi, edi
        ; Exact mapped bytes 74 07: je 0x100e649e
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, edi
        ; Exact mapped bytes EB 02: jmp 0x100e64a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        mov edi, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        push edx
        push edi
        push 1
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 08 20 F6 FF: call 0x100484d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0xf6
        __asm _emit 0xff
        push 54h
        mov dword ptr [esp + 94h], ebp
        ; Exact mapped bytes E8 CA 62 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov dword ptr [esp + 90h], 0eh
        ; Exact mapped bytes 74 4F: je 0x100e653b
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 3D EC 57 1C 10: mov edi, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 214h]
        cmp dword ptr [edi + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x100e6513
        __asm _emit 0x7e
        __asm _emit 0x13
        test edx, edx
        ; Exact mapped bytes 7C 0F: jl 0x100e6513
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edi, dword ptr [edi + 18ch]
        test edi, edi
        ; Exact mapped bytes 74 05: je 0x100e6513
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [edi + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x100e6515
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1b58h
        mov edi, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 B7 72 F2 FF: call 0x1000d7f0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x72
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e653d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 94h], ebp
        ; Exact mapped bytes E8 10 8C 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 7B: jmp 0x100e65cd
        __asm _emit 0xeb
        __asm _emit 0x7b
        push 5ch
        ; Exact mapped bytes E8 47 62 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov dword ptr [esp + 90h], 0fh
        ; Exact mapped bytes 74 53: je 0x100e65c2
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 3D EC 57 1C 10: mov edi, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 218h]
        cmp dword ptr [edi + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x100e6598
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x100e6598
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edi, dword ptr [edi + 190h]
        test edi, edi
        ; Exact mapped bytes 74 07: je 0x100e6598
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, edi
        ; Exact mapped bytes EB 02: jmp 0x100e659a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        mov edi, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        push edx
        push edi
        push 1
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 0E 1F F6 FF: call 0x100484d0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [esp + 90h], 0ffffffffh
        mov eax, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 94h]
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 3ch], edx
        ; Exact mapped bytes DB 44 24 3C: fild dword ptr [esp + 0x3c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes DD 5C 24 3C: fstp qword ptr [esp + 0x3c]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        mov ecx, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 3ch]
        push ecx
        push edx
        ; Exact mapped bytes E8 AC 61 08 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 30 58 17 10: fmul qword ptr [0x10175830]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        ; Exact mapped bytes E8 98 61 08 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        mov dword ptr [esp + 34h], edi
        ; Exact mapped bytes 75 09: jne 0x100e6621
        __asm _emit 0x75
        __asm _emit 0x09
        mov edi, 1
        mov dword ptr [esp + 34h], edi
        ; Exact mapped bytes DB 44 24 34: fild dword ptr [esp + 0x34]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes DD 5C 24 3C: fstp qword ptr [esp + 0x3c]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        push eax
        mov eax, dword ptr [esi + 9ch]
        cdq
        sub eax, edx
        push ecx
        sar eax, 1
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes DB 44 24 44: fild dword ptr [esp + 0x44]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes DD 5C 24 44: fstp qword ptr [esp + 0x44]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        mov edx, dword ptr [esp + 48h]
        mov eax, dword ptr [esp + 44h]
        push edx
        push eax
        ; Exact mapped bytes E8 59 61 08 00: call 0x1016c7b2
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes D8 0D 88 65 17 10: fmul dword ptr [0x10176588]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes DC 0D 70 52 17 10: fmul qword ptr [0x10175270]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 39 61 08 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D F4 56 1C 10: mov ebx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cdq
        mov ecx, eax
        mov eax, dword ptr [ebx + 1047ch]
        xor ecx, edx
        sub ecx, edx
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
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ebp, [ecx + ecx*2 + 384h]
        shl ecx, 2
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ebp
        inc edx
        cmp edx, ecx
        ; Exact mapped bytes 76 31: jbe 0x100e66dc
        __asm _emit 0x76
        __asm _emit 0x31
        mov ecx, edi
        mov eax, 51eb851fh
        imul ecx, edi
        imul ecx
        sar edx, 5
        mov ecx, edx
        mov eax, edx
        shr ecx, 1fh
        add eax, ecx
        mov edi, 2
        imul eax, dword ptr [esi + 1c4h]
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        sar ecx, 2
        ; Exact mapped bytes EB 33: jmp 0x100e670f
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [esi + 9ch]
        mov eax, 51eb851fh
        imul ecx, ecx
        imul ecx
        sar edx, 5
        mov ecx, edx
        mov eax, edx
        shr ecx, 1fh
        add eax, ecx
        mov edi, 1
        imul eax, dword ptr [esi + 1c4h]
        cdq
        and edx, 0fh
        add eax, edx
        mov ecx, eax
        sar ecx, 4
        mov eax, 51eb851fh
        mov dword ptr [esp + 78h], edi
        mul ecx
        shr edx, 5
        mov ecx, edx
        mov eax, 45e7b273h
        imul ecx, dword ptr [esi + 1cch]
        mov edi, dword ptr [esi + 1c8h]
        mul ecx
        mov ebp, edi
        mov eax, ecx
        imul ebp, edi
        shr edx, 0eh
        mov dword ptr [esp + 70h], edx
        mov edx, dword ptr [esi + 1c0h]
        xor edx, 0aah
        mov ecx, dword ptr [esi + 1b4h]
        mov dword ptr [esp + 74h], edx
        xor edx, edx
        div ebp
        lea edx, [esp + 6ch]
        mov dword ptr [esp + 80h], ecx
        mov ecx, dword ptr [esp + 58h]
        push edx
        mov edx, dword ptr [esp + 58h]
        mov dword ptr [esp + 70h], 0bh
        mov dword ptr [esp + 88h], edi
        lea eax, [eax + eax*4]
        shr eax, 1
        mov dword ptr [esp + 80h], eax
        mov eax, dword ptr [esi + 1dch]
        push eax
        mov eax, dword ptr [esi + 23ch]
        push ecx
        mov ecx, dword ptr [ebx + 104e0h]
        push edx
        push eax
        ; Exact mapped bytes E8 2B 83 F6 FF: call 0x1004ead0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 0F 84 3D 04 00 00: je 0x100e6bea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov ecx, dword ptr [esp + 88h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov eax, dword ptr [esi + 80h]
        test eax, eax
        ; Exact mapped bytes 0F 84 BF 01 00 00: je 0x100e6998
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 54h]
        mov ebp, dword ptr [esp + 58h]
        mov dword ptr [esp + 34h], ebx
        lea eax, [edi + edi*4]
        mov dword ptr [esp + 38h], ebp
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        lea ecx, [edi + edi*2]
        mov dword ptr [esp + 54h], eax
        lea eax, [edi + ecx*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        mov eax, ebp
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 23ch]
        test ecx, ecx
        mov dword ptr [esp + 58h], eax
        ; Exact mapped bytes 74 33: je 0x100e6876
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [esi + 240h]
        lea edx, [esp + 34h]
        push eax
        push edx
        ; Exact mapped bytes E8 4C 79 00 00: call 0x100ee1a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x100e68a1
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes 66 83 BE B8 01 00 00 0D: cmp word ptr [esi + 0x1b8], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 75 14: jne 0x100e6876
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 23ch]
        lea eax, [esp + 34h]
        push eax
        ; Exact mapped bytes E8 8E 7A 00 00: call 0x100ee300
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x100e68a1
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 23ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x100e695c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 58h]
        mov edx, dword ptr [esp + 54h]
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 67 83 F8 FF: call 0x1006ec00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x100e695c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100e68b3
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov ecx, dword ptr [esi + 204h]
        push 5ch
        lea ebx, [eax + ecx*2 + 3ch]
        ; Exact mapped bytes E8 DC 5E 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x5e
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov dword ptr [esp + 90h], 10h
        ; Exact mapped bytes 74 59: je 0x100e6933
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 21ch]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x100e6903
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x100e6903
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edi, dword ptr [ecx + 190h]
        test edi, edi
        ; Exact mapped bytes 74 07: je 0x100e6903
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, edi
        ; Exact mapped bytes EB 02: jmp 0x100e6905
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1770h
        mov edi, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        mov ecx, dword ptr [esp + 5ch]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 DC 57 1C 10: mov edx, dword ptr [0x101c57dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push ebx
        push edx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 2D 1D F6 FF: call 0x10048660
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1d
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 240h]
        mov edx, dword ptr [esi + 23ch]
        lea eax, [esp + 54h]
        mov dword ptr [esp + 90h], 0ffffffffh
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 34 44 F8 FF: call 0x1006ad90
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        lea edi, [esi + 4]
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 D2 05 00 00: call 0x100e6f40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 230h]
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x100e6998
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [esi + 234h]
        cmp eax, 32h
        ; Exact mapped bytes 7E 15: jle 0x100e6998
        __asm _emit 0x7e
        __asm _emit 0x15
        mov edx, dword ptr [esi + 238h]
        push edx
        lea edx, [esi + 228h]
        push edi
        push edx
        push eax
        ; Exact mapped bytes E8 C8 D3 F1 FF: call 0x10003d60
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd3
        __asm _emit 0xf1
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 0F 84 4A 02 00 00: je 0x100e6bea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 88h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [esi + 94h]
        mov ebx, dword ptr [esi + 88h]
        add ebx, ecx
        mov dword ptr [esi + 88h], ebx
        mov edx, dword ptr [esi + 98h]
        mov edi, dword ptr [esi + 8ch]
        add edi, edx
        mov dword ptr [esi + 8ch], edi
        mov eax, dword ptr [esi + 9ch]
        mov ecx, dword ptr [esi + 90h]
        add ecx, eax
        mov dword ptr [esi + 90h], ecx
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, ecx
        lea ecx, [edi + edi*2]
        lea eax, [edi + ecx*4]
        lea edi, [edi + edi*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov ecx, eax
        mov eax, 51eb851fh
        imul ebx
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        sub ecx, edx
        push ecx
        lea ecx, [edi + edi*4]
        shl ecx, 2
        imul ecx
        mov eax, dword ptr [esi + 88h]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 66 82 01 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [edi + edi*2]
        lea eax, [edi + eax*4]
        lea edi, [edi + edi*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        lea ecx, [edi + edi*4]
        shl ecx, 2
        push eax
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, dword ptr [esi + 88h]
        cdq
        idiv ecx
        push eax
        mov ecx, dword ptr [esi + 1f4h]
        ; Exact mapped bytes E8 09 82 01 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, 1
        mov ecx, dword ptr [esi + 88h]
        mov edx, dword ptr [esi + 8ch]
        mov dword ptr [esp + 4ch], ecx
        mov ecx, dword ptr [esi + 23ch]
        test ecx, ecx
        mov dword ptr [esp + 50h], edx
        ; Exact mapped bytes 74 37: je 0x100e6b21
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [esi + 240h]
        lea edx, [esp + 4ch]
        push eax
        push edx
        ; Exact mapped bytes E8 A5 76 00 00: call 0x100ee1a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x100e6b8c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE B8 01 00 00 0D: cmp word ptr [esi + 0x1b8], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 75 14: jne 0x100e6b21
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 23ch]
        lea eax, [esp + 4ch]
        push eax
        ; Exact mapped bytes E8 E3 77 00 00: call 0x100ee300
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 6B: jne 0x100e6b8c
        __asm _emit 0x75
        __asm _emit 0x6b
        mov eax, dword ptr [esi + 23ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x100e6bbc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [edi + edi*2]
        lea eax, [edi + ecx*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esp + 50h]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        push eax
        lea eax, [edi + edi*4]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, dword ptr [esp + 50h]
        cdq
        idiv ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 78 80 F8 FF: call 0x1006ec00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x80
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x100e6bbc
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [esi + 28h]
        ; Exact mapped bytes 66 09 5E 24: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x24
        cmp eax, 0f0h
        ; Exact mapped bytes 7C 1D: jl 0x100e6bb7
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov dword ptr [esi + 28h], 100h
        mov ecx, dword ptr [esp + 88h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        add eax, 10h
        ; Exact mapped bytes EB 2B: jmp 0x100e6be7
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 28h]
        cmp eax, 10h
        ; Exact mapped bytes 7F 1C: jg 0x100e6be0
        __asm _emit 0x7f
        __asm _emit 0x1c
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 88h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes 66 09 5E 24: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x24
        add eax, -10h
        mov dword ptr [esi + 28h], eax
        mov ecx, dword ptr [esp + 88h]
        pop edi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
