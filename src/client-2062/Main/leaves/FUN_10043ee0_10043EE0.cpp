// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043EE0 .. +0x8A7 bytes.
extern "C" __declspec(naked) void FUN_10043ee0_10043EE0() {
    __asm {
        push -1
        push 1016e7b6h
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
        sub esp, 144h
        mov eax, dword ptr [esp + 154h]
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [eax]
        push edi
        mov dword ptr [esi + 94h], eax
        mov ecx, eax
        shr eax, 5
        and eax, 3ffh
        xor ebp, ebp
        mov edi, eax
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 24 02 00 00: mov ax, word ptr [esi + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 0ch], edi
        shr ecx, 0fh
        mov dword ptr [esp + 18h], eax
        mov al, byte ptr [esi + 214h]
        and ecx, 0fffh
        mov dword ptr [esp + 1ch], ebp
        test al, 7
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 86 17 08 00 00: jbe 0x10044764
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov dword ptr [esp + 34h], ebp
        mov dword ptr [esp + 30h], ebp
        mov dword ptr [esp + 28h], ebp
        mov dword ptr [esp + 2ch], ebp
        ; Exact mapped bytes EB 06: jmp 0x10043f66
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 10h]
        xor ebp, ebp
        ; Exact mapped bytes 39 2D 34 56 1C 10: cmp dword ptr [0x101c5634], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x34
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 0F 85 C9 01 00 00: jne 0x1004413b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 86 1C 02 00 00: mov ax, word ptr [esi + 0x21c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ffffff38h
        cmp eax, ebp
        setl cl
        dec ecx
        and ecx, eax
        mov eax, 66666667h
        imul ecx
        mov ecx, edx
        mov eax, 51eb851fh
        sar ecx, 3
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        imul edi
        sar edx, 4
        mov eax, edx
        add edx, ecx
        mov ecx, dword ptr [esi + 70h]
        shr eax, 1fh
        lea ebx, [eax + edx + 40h]
        mov eax, 88888889h
        imul ecx, ebx
        imul ecx
        add edx, ecx
        sar edx, 8
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        sub ebx, edx
        cmp ebx, ebp
        ; Exact mapped bytes 7F 02: jg 0x10043fd3
        __asm _emit 0x7f
        __asm _emit 0x02
        xor ebx, ebx
        add ebx, 8
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x1004413b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [eax + 1047ch]
        mov ebp, dword ptr [eax + 10474h]
        mov eax, dword ptr [esi + 138h]
        add edx, ebp
        lea ebp, [edx + eax]
        xor edx, edx
        lea eax, [ecx + ebp]
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
        mov ecx, dword ptr [eax + edx*4]
        mov eax, ebx
        cdq
        sub eax, edx
        xor edx, edx
        mov edi, eax
        mov eax, ecx
        mov ecx, 3e8h
        div ecx
        sar edi, 1
        mov eax, dword ptr [edx*4 + 101b9968h]
        sub ecx, eax
        mov eax, 10624dd3h
        imul ecx, ebx
        imul ecx
        sar edx, 6
        mov eax, edx
        mov ecx, edi
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 14h]
        sub ecx, edx
        add eax, ecx
        ; Exact mapped bytes 79 0B: jns 0x10044057
        __asm _emit 0x79
        __asm _emit 0x0b
        add eax, 0e10h
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 0C: jmp 0x10044063
        __asm _emit 0xeb
        __asm _emit 0x0c
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [esp + 14h], edx
        mov edx, dword ptr [esp + 28h]
        mov ecx, 3e8h
        lea eax, [edx + ebp]
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
        mov eax, dword ptr [edx*4 + 101b9968h]
        sub ecx, eax
        mov eax, 10624dd3h
        imul ecx, ebx
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edi
        sub eax, edx
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        mov eax, dword ptr [esp + 10h]
        sar ecx, 2
        add eax, ecx
        ; Exact mapped bytes 79 0B: jns 0x100440c2
        __asm _emit 0x79
        __asm _emit 0x0b
        add eax, 0e10h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes EB 0C: jmp 0x100440ce
        __asm _emit 0xeb
        __asm _emit 0x0c
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [esp + 10h], edx
        mov edx, dword ptr [esp + 30h]
        mov ecx, 3e8h
        lea eax, [edx + ebp]
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
        mov eax, 10624dd3h
        sub ecx, dword ptr [edx*4 + 101b9968h]
        imul ecx, ebx
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 55555556h
        sub edi, edx
        imul edi
        mov ecx, edx
        mov eax, 10624dd3h
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esp + 1ch]
        imul edx, ecx
        imul edx
        sar edx, 6
        mov eax, edx
        mov edi, dword ptr [esp + 10h]
        shr eax, 1fh
        add edx, eax
        add ecx, edx
        mov dword ptr [esp + 1ch], ecx
        cmp dword ptr [esi + 24ch], 1
        ; Exact mapped bytes 75 18: jne 0x1004415c
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [esp + 20h]
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [esi + 8]
        and eax, 3
        sub ebp, eax
        lea ecx, [ebx + eax]
        mov dword ptr [esp + 48h], ecx
        ; Exact mapped bytes EB 35: jmp 0x10044191
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [esi + 0a4h]
        mov eax, dword ptr [esp + 20h]
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [esi + 8]
        lea eax, [edx + eax*8]
        mov edx, dword ptr [esi + 0a0h]
        lea ecx, [eax + eax*8]
        lea eax, [edx + ecx*4]
        mov ecx, dword ptr [esi + eax*8 + 3d0h]
        add ecx, ebx
        mov dword ptr [esp + 48h], ecx
        mov ecx, dword ptr [esi + eax*8 + 3d4h]
        sub ebp, ecx
        mov ecx, dword ptr [edi*4 + 101ad160h]
        mov eax, 51eb851fh
        imul ecx, dword ptr [esp + 1ch]
        imul ecx
        mov ecx, dword ptr [edi*4 + 101b09a0h]
        imul ecx, dword ptr [esp + 1ch]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [esp + 40h], edx
        imul ecx
        sar edx, 6
        mov ecx, edx
        mov eax, 51eb851fh
        shr ecx, 1fh
        add edx, ecx
        mov edi, edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [esp + 44h], edi
        mov ecx, dword ptr [edx*4 + 101b09a0h]
        imul ecx, edi
        imul ecx
        mov ecx, dword ptr [esp + 14h]
        sar edx, 5
        mov ecx, dword ptr [ecx*4 + 101ad160h]
        mov eax, edx
        imul ecx, edi
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esp + 38h], edx
        imul ecx
        sar edx, 5
        mov eax, edx
        xor edi, edi
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esi + 24ch]
        cmp eax, 1
        mov dword ptr [esp + 3ch], edx
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 75 37: jne 0x10044263
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebx + ebx*4]
        mov ebx, dword ptr [ecx + 1047ch]
        mov edx, dword ptr [ecx + 10474h]
        mov ecx, dword ptr [esp + 34h]
        add eax, ebx
        add eax, edx
        xor edx, edx
        add eax, ecx
        ; Exact mapped bytes 8B 0D 64 45 1C 10: mov ecx, dword ptr [0x101c4564]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + edx*4]
        and edx, 7
        mov dword ptr [esp + 18h], edx
        push 250h
        ; Exact mapped bytes E8 33 85 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        cmp eax, edi
        mov dword ptr [esp + 15ch], edi
        ; Exact mapped bytes 74 46: je 0x100442c5
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 48h]
        push 40h
        push edi
        mov edx, dword ptr [edx + 104e0h]
        push edi
        push edi
        push ebp
        push ebx
        lea ecx, [esp + 50h]
        push edx
        mov edx, dword ptr [esp + 2ch]
        push ecx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E 3C 02 00 00: mov cx, word ptr [esi + 0x23c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov edx, dword ptr [esp + 3ch]
        push ecx
        mov ecx, dword ptr [esi + 24ch]
        push 1
        push edx
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 3F 04 0A 00: call 0x100e4700
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 04: jmp 0x100442c9
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 48h]
        mov eax, dword ptr [esi + 3cch]
        mov dword ptr [esp + 15ch], 0ffffffffh
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x100442f2
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [esi + 178h]
        mov ecx, dword ptr [esp + 10h]
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 7E 35 0A 00: call 0x100e7870
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 E8 03: mov word ptr [edi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10044305
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9B AC 0B 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10044312
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EE AB 0B 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xab
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        lea ecx, [esi + 314h]
        and eax, 18000000h
        ; Exact mapped bytes 75 06: jne 0x1004432b
        __asm _emit 0x75
        __asm _emit 0x06
        lea ecx, [esi + 260h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10044337
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi + 310h]
        ; Exact mapped bytes EB 06: jmp 0x1004433d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [esi + 25ch]
        mov edx, dword ptr [esi + 70h]
        push edx
        push 0
        push ecx
        push eax
        mov eax, dword ptr [esi + 88h]
        push esi
        push eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 1047ch]
        mov edx, dword ptr [eax + 10474h]
        mov eax, dword ptr [esp + 38h]
        add ecx, edx
        add ecx, eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 92 28 0A 00: call 0x100e6c00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24ch]
        mov edi, 1
        cmp eax, edi
        push 94h
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x10044416
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 15 84 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 15ch], edi
        ; Exact mapped bytes 74 53: je 0x100443f0
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 94 57 1C 10: mov ecx, dword ptr [0x101c5794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100443b7
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edi, dword ptr [ecx + 190h]
        test edi, edi
        ; Exact mapped bytes 75 02: jne 0x100443b9
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 3e8h
        mov edx, dword ptr [edx + 104e0h]
        push ebp
        push ebx
        push edi
        push edx
        mov edx, dword ptr [esp + 34h]
        push 1
        lea ecx, [esp + 58h]
        push 1
        push ecx
        mov ecx, dword ptr [esi + 24ch]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E2 3D FD FF: call 0x100181d0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x3d
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100443f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0
        push 0
        mov ecx, eax
        mov dword ptr [esp + 164h], 0ffffffffh
        mov edi, eax
        ; Exact mapped bytes E8 C6 41 FD FF: call 0x100185d0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esi + 68h], 2
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x100444c3
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 85 83 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 15ch], 2
        ; Exact mapped bytes 74 66: je 0x10044497
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D 90 57 1C 10: mov ecx, dword ptr [0x101c5790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 244h]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 17: jle 0x1004445c
        __asm _emit 0x7e
        __asm _emit 0x17
        test edx, edx
        ; Exact mapped bytes 7C 13: jl 0x1004445c
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x1004445c
        __asm _emit 0x74
        __asm _emit 0x09
        shl edx, 6
        add edx, ecx
        mov edi, edx
        ; Exact mapped bytes EB 02: jmp 0x1004445e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 3e8h
        mov edx, dword ptr [edx + 104e0h]
        push ebp
        push ebx
        push edi
        push edx
        mov edx, dword ptr [esp + 34h]
        push 4
        lea ecx, [esp + 58h]
        push 12h
        push ecx
        mov ecx, dword ptr [esi + 24ch]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 3D 3D FD FF: call 0x100181d0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes EB 02: jmp 0x10044499
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [esi + 0a4h]
        mov dword ptr [esp + 15ch], 0ffffffffh
        cdq
        sub eax, edx
        mov edi, ecx
        sar eax, 1
        push eax
        mov eax, dword ptr [esi + 0a0h]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        ; Exact mapped bytes E8 0D 41 FD FF: call 0x100185d0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0fffffeffh
        mov ecx, edi
        ; Exact mapped bytes E8 91 AC 0B 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x00
        push 80h
        mov ecx, edi
        ; Exact mapped bytes E8 45 AC 0B 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 E8 03: mov word ptr [edi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100444f0
        __asm _emit 0x74
        __asm _emit 0x08
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 B0 AA 0B 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xaa
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100444fd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 03 AA 0B 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xaa
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24ch]
        push 94h
        cmp eax, 1
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x1004459c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8A 82 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x82
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 15ch], 3
        ; Exact mapped bytes 74 56: je 0x10044582
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D 8C 57 1C 10: mov ecx, dword ptr [0x101c578c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x10044546
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edi, dword ptr [ecx + 190h]
        test edi, edi
        ; Exact mapped bytes 75 02: jne 0x10044548
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 3e9h
        mov edx, dword ptr [edx + 104e0h]
        push ebp
        push ebx
        push edi
        push edx
        mov edx, dword ptr [esp + 34h]
        push 1
        lea ecx, [esp + 58h]
        push 1
        push ecx
        lea ecx, [edx + edx]
        mov edx, dword ptr [esi + 24ch]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 50 3C FD FF: call 0x100181d0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10044584
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0
        mov dword ptr [esp + 160h], 0ffffffffh
        mov edi, eax
        push 0
        mov ecx, eax
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x10044647
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF 81 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x81
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 15ch], 4
        ; Exact mapped bytes 74 69: je 0x10044620
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 8B 0D 88 57 1C 10: mov ecx, dword ptr [0x101c5788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 244h]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 17: jle 0x100445e2
        __asm _emit 0x7e
        __asm _emit 0x17
        test edx, edx
        ; Exact mapped bytes 7C 13: jl 0x100445e2
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x100445e2
        __asm _emit 0x74
        __asm _emit 0x09
        shl edx, 6
        add edx, ecx
        mov edi, edx
        ; Exact mapped bytes EB 02: jmp 0x100445e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 3e9h
        mov edx, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esp + 24h]
        push ebp
        push ebx
        push edi
        push edx
        push 4
        lea edx, [esp + 58h]
        push 12h
        push edx
        lea edx, [ecx + ecx]
        mov ecx, dword ptr [esi + 24ch]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B4 3B FD FF: call 0x100181d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes EB 02: jmp 0x10044622
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [esi + 0a4h]
        mov dword ptr [esp + 15ch], 0ffffffffh
        cdq
        sub eax, edx
        mov edi, ecx
        sar eax, 1
        push eax
        mov eax, dword ptr [esi + 0a0h]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        ; Exact mapped bytes E8 84 3F FD FF: call 0x100185d0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        push 102h
        mov ecx, edi
        ; Exact mapped bytes E8 08 AB 0B 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xab
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 E9 03: mov word ptr [edi + 0x26], 0x3e9
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xe9
        __asm _emit 0x03
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1004466d
        __asm _emit 0x74
        __asm _emit 0x08
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 33 A9 0B 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa9
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1004467a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 86 A8 0B 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x1004471a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov ecx, dword ptr [eax + 5c0ch]
        add eax, 37ch
        mov edx, dword ptr [ecx + 88h]
        mov ecx, dword ptr [ecx + 84h]
        push edx
        mov edx, dword ptr [esp + 20h]
        push ecx
        mov ecx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 20h]
        push ecx
        mov ecx, dword ptr [esp + 4ch]
        push edx
        mov edx, dword ptr [esp + 4ch]
        push ebp
        push ebx
        push ecx
        mov ecx, dword ptr [esp + 64h]
        push edx
        push ecx
        push eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 101aa6dch
        lea ecx, [esp + 84h]
        mov edx, dword ptr [eax + 10474h]
        mov eax, dword ptr [eax + 1047ch]
        push edx
        push eax
        push 101aa664h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 40h
        lea edx, [esp + 50h]
        lea eax, [esp + 54h]
        push 0
        push edx
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F0 51 1C 10: mov edx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esp + 5ch]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 34h]
        add ecx, 40h
        mov dword ptr [esp + 28h], ecx
        mov cl, byte ptr [esi + 214h]
        inc eax
        and ecx, 7
        add edx, 20h
        add ebp, 80h
        add ebx, 3
        cmp eax, ecx
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 2ch], edx
        mov dword ptr [esp + 30h], ebp
        mov dword ptr [esp + 34h], ebx
        ; Exact mapped bytes 0F 82 FD F7 FF FF: jb 0x10043f60
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        mov al, byte ptr [esi + 214h]
        mov ecx, dword ptr [esp + 150h]
        pop edi
        pop esi
        and eax, 7
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 150h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
