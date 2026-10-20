// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E1020 .. +0x68B bytes.
extern "C" __declspec(naked) void FUN_100e1020_100E1020() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 1ch]
        push edi
        mov dword ptr [esi + 140h], ecx
        ; Exact mapped bytes E8 38 14 01 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 140h]
        mov ecx, dword ptr [eax + 0b54h]
        mov edx, dword ptr [eax + 0b60h]
        mov ebx, dword ptr [eax + 0b4ch]
        mov edi, dword ptr [eax + 0b58h]
        mov ebp, dword ptr [eax + 0b5ch]
        mov dword ptr [esp + 18h], ecx
        mov ecx, dword ptr [eax + 0b68h]
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [eax + 0b64h]
        mov dword ptr [esp + 10h], ecx
        mov ecx, dword ptr [esi + 64h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 43 18: mov ax, word ptr [ebx + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x18
        mov dword ptr [esp + 14h], edx
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x100e109e
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100e109e
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100e109e
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100e10a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a0h], eax
        mov ecx, dword ptr [esi + 9ch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100e10db
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0a4h]
        mov eax, dword ptr [esi + 140h]
        add eax, 54h
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100e10fd
        __asm _emit 0x74
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100e10fd
        __asm _emit 0x74
        __asm _emit 0x08
        push eax
        push ecx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0a8h]
        lea ecx, [ebx + 328h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100e111c
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e111c
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 140h]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [esi + 0ach]
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 E9 E5 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 54h]
        mov ecx, dword ptr [esi + 0b0h]
        push eax
        ; Exact mapped bytes E8 DA E5 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 140h]
        mov eax, 10624dd3h
        mov ecx, dword ptr [ecx + 904h]
        xor ecx, 0aaaaaaaah
        imul ecx
        sar edx, 6
        mov ecx, dword ptr [esi + 0b4h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 AB E5 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 64h]
        push ecx
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes E8 9C E5 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 46: je 0x100e11ce
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [esi + 0bch]
        lea ecx, [edi + 78h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100e11a4
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e11a4
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0c0h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 97 9A 00 00 00: mov dx, word ptr [edi + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 67 E5 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 87 98 00 00 00: mov ax, word ptr [edi + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 52 E5 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esp + 18h]
        test edi, edi
        ; Exact mapped bytes 74 4B: je 0x100e1221
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [esi + 0c8h]
        lea ecx, [edi + 78h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100e11f2
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e11f2
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 98h]
        push ecx
        mov ecx, dword ptr [esi + 0cch]
        ; Exact mapped bytes E8 1C E5 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 140h]
        mov ecx, dword ptr [esi + 0d0h]
        mov eax, dword ptr [edx + 924h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 FF E4 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x100e12ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d4h]
        mov ecx, dword ptr [esi + 140h]
        mov eax, dword ptr [eax + 6ch]
        ; Exact mapped bytes 66 8B 79 7A: mov di, word ptr [ecx + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x7a
        test eax, eax
        lea ecx, [ebp + 78h]
        ; Exact mapped bytes 74 0C: je 0x100e124f
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e124f
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 140h]
        xor ecx, ecx
        mov eax, 66666667h
        ; Exact mapped bytes 66 8B 4A 7A: mov cx, word ptr [edx + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x7a
        imul ecx
        sar edx, 2
        mov ecx, dword ptr [esi + 0e4h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 A8 E4 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 140h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 7A: mov ax, word ptr [ecx + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x7a
        mov ecx, 0ah
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 0ech]
        push edx
        ; Exact mapped bytes E8 88 E4 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 0C 01 00 00: mov dx, word ptr [ebx + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and edi, 0ffffh
        imul ecx, edx
        imul ecx, edi
        mov eax, 10624dd3h
        mul ecx
        mov ecx, dword ptr [esi + 0fch]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 5A E4 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [edi + 13h]
        xor eax, eax
        imul edx, dword ptr [ebp + 70h]
        ; Exact mapped bytes 66 8B 83 0C 01 00 00: mov ax, word ptr [ebx + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, eax
        imul edx, edi
        imul edx, edi
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        ; Exact mapped bytes EB 47: jmp 0x100e1333
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, dword ptr [esi + 0d4h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100e130a
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101a858ch
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e130a
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0e4h]
        push 0
        ; Exact mapped bytes E8 09 E4 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        push 0
        ; Exact mapped bytes E8 FC E3 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0fch]
        push 0
        ; Exact mapped bytes E8 EF E3 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [esi + 10ch]
        ; Exact mapped bytes E8 E2 E3 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        test eax, eax
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x100e140f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 140h]
        mov ebp, eax
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 8B 7A 7C: mov di, word ptr [edx + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x7c
        lea ecx, [ebp + 78h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100e1372
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e1372
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 140h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 7C: mov cx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7c
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 0e8h]
        push edx
        ; Exact mapped bytes E8 85 E3 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 140h]
        xor eax, eax
        mov ecx, 0ah
        ; Exact mapped bytes 66 8B 42 7C: mov ax, word ptr [edx + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x7c
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 0f0h]
        push edx
        ; Exact mapped bytes E8 65 E3 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 0A 01 00 00: mov dx, word ptr [ebx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and edi, 0ffffh
        imul ecx, edx
        imul ecx, edi
        mov eax, 10624dd3h
        mul ecx
        mov ecx, dword ptr [esi + 100h]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 37 E3 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [edi + 13h]
        xor eax, eax
        imul edx, dword ptr [ebp + 70h]
        ; Exact mapped bytes 66 8B 83 0A 01 00 00: mov ax, word ptr [ebx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, eax
        imul edx, edi
        imul edx, edi
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        ; Exact mapped bytes EB 47: jmp 0x100e1456
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, dword ptr [esi + 0d8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100e142d
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101a858ch
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e142d
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0e8h]
        push 0
        ; Exact mapped bytes E8 E6 E2 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f0h]
        push 0
        ; Exact mapped bytes E8 D9 E2 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        push 0
        ; Exact mapped bytes E8 CC E2 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [esi + 110h]
        ; Exact mapped bytes E8 BF E2 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x100e14f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 140h]
        mov ebp, eax
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 8B BA 80 00 00 00: mov di, word ptr [edx + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 78h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100e1498
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e1498
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 140h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 80 00 00 00: mov cx, word ptr [eax + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [esi + 0f4h]
        ; Exact mapped bytes E8 6D E2 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 10 01 00 00: mov dx, word ptr [ebx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and edi, 0ffffh
        imul ecx, edx
        imul ecx, edi
        mov eax, 10624dd3h
        mul ecx
        mov ecx, dword ptr [esi + 104h]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 3F E2 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 70h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 10 01 00 00: mov dx, word ptr [ebx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, edx
        imul eax, edi
        push eax
        ; Exact mapped bytes EB 3A: jmp 0x100e1530
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 0dch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100e1514
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101a858ch
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e1514
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0f4h]
        push 0
        ; Exact mapped bytes E8 FF E1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104h]
        push 0
        ; Exact mapped bytes E8 F2 E1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 E5 E1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x100e15db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 140h]
        mov ebp, eax
        mov eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 8B 7A 7E: mov di, word ptr [edx + 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x7e
        lea ecx, [ebp + 78h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100e156f
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e156f
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 140h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 7E: mov cx, word ptr [eax + 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7e
        push ecx
        mov ecx, dword ptr [esi + 0f8h]
        ; Exact mapped bytes E8 99 E1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 0E 01 00 00: mov dx, word ptr [ebx + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and edi, 0ffffh
        imul ecx, edx
        imul ecx, edi
        mov eax, 10624dd3h
        mul ecx
        mov ecx, dword ptr [esi + 108h]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 6B E1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [edi + 13h]
        xor eax, eax
        imul edx, dword ptr [ebp + 70h]
        ; Exact mapped bytes 66 8B 83 0E 01 00 00: mov ax, word ptr [ebx + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, eax
        imul edx, edi
        imul edx, edi
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        ; Exact mapped bytes EB 3A: jmp 0x100e1615
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 0e0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100e15f9
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101a858ch
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e15f9
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0f8h]
        push 0
        ; Exact mapped bytes E8 1A E1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        push 0
        ; Exact mapped bytes E8 0D E1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 00 E1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 89 00 00 00: call 0x100e16b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        test eax, eax
        ; Exact mapped bytes 75 3E: jne 0x100e166d
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [esi + 74h]
        mov ecx, 1
        mov dword ptr [esi + 50h], 1cch
        mov dword ptr [esi + 54h], 32h
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        pop edi
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7ch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ecx, 0fffeh
        mov dword ptr [esi + 50h], 0ah
        mov dword ptr [esi + 54h], 32h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        pop edi
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7ch]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
