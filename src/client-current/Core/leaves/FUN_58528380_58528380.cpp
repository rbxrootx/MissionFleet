// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58528380 .. +0x764 bytes.
extern "C" __declspec(naked) void FUN_58528380_58528380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 12ch
        mov dword ptr [ebp - 12ch], ecx
        ; Exact mapped bytes 83 3D 08 06 96 58 00: cmp dword ptr [0x58960608], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 36: je 0x585283ce
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes A1 08 06 96 58: mov eax, dword ptr [0x58960608]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x585283bd
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585283c4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes C7 05 08 06 96 58 00 00 00 00: mov dword ptr [0x58960608], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 38 73 94 58 00: cmp dword ptr [0x58947338], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x5852840e
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 38 73 94 58: mov ecx, dword ptr [0x58947338]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x585283fd
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 70h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 90: call dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x90
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58528404
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        ; Exact mapped bytes C7 05 38 73 94 58 00 00 00 00: mov dword ptr [0x58947338], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 18 06 96 58 00: cmp dword ptr [0x58960618], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x5852844e
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 15 18 06 96 58: mov edx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x5852843d
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 78h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58528444
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes C7 05 18 06 96 58 00 00 00 00: mov dword ptr [0x58960618], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 60 20 96 58 00: cmp dword ptr [0x58962060], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3C: je 0x58528493
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes A1 60 20 96 58: mov eax, dword ptr [0x58962060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1A: je 0x5852847f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 80h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 80: call dword ptr [ebp - 0x80]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x80
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58528489
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        ; Exact mapped bytes C7 05 60 20 96 58 00 00 00 00: mov dword ptr [0x58962060], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 06 96 58 00: cmp dword ptr [0x58960630], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585284df
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 30 06 96 58: mov ecx, dword ptr [0x58960630]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x585284cb
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 88h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 78 FF FF FF: call dword ptr [ebp - 0x88]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585284d5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes C7 05 30 06 96 58 00 00 00 00: mov dword ptr [0x58960630], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 5C 8C 94 58 00: cmp dword ptr [0x58948c5c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 76: je 0x5852855e
        __asm _emit 0x74
        __asm _emit 0x76
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585284fa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 9
        ; Exact mapped bytes 7D 5E: jge 0x5852855e
        __asm _emit 0x7d
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 5C 8C 94 58: mov ecx, dword ptr [0x58948c5c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        cmp dword ptr [ecx + eax*4], 0
        ; Exact mapped bytes 74 4D: je 0x5852855c
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 5C 8C 94 58: mov eax, dword ptr [0x58948c5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x58528543
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 90h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 70 FF FF FF: call dword ptr [ebp - 0x90]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852854d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 5C 8C 94 58: mov eax, dword ptr [0x58948c5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [eax + edx*4], 0
        ; Exact mapped bytes EB 93: jmp 0x585284f1
        __asm _emit 0xeb
        __asm _emit 0x93
        ; Exact mapped bytes 83 3D 5C 8C 94 58 00: cmp dword ptr [0x58948c5c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x5852858e
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 5C 8C 94 58: mov ecx, dword ptr [0x58948c5c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 98h], ecx
        push 4
        mov edx, dword ptr [ebp - 98h]
        push edx
        ; Exact mapped bytes E8 B3 8A 30 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8a
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes C7 05 5C 8C 94 58 00 00 00 00: mov dword ptr [0x58948c5c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E4 07 96 58 00: cmp dword ptr [0x589607e4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x585285d9
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 E4 07 96 58: mov eax, dword ptr [0x589607e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x585285c5
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 9ch], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 64 FF FF FF: call dword ptr [ebp - 0x9c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585285cf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes C7 05 E4 07 96 58 00 00 00 00: mov dword ptr [0x589607e4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E0 07 96 58 00: cmp dword ptr [0x589607e0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58528625
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D E0 07 96 58: mov ecx, dword ptr [0x589607e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x58528611
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0a4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 5C FF FF FF: call dword ptr [ebp - 0xa4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852861b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes C7 05 E0 07 96 58 00 00 00 00: mov dword ptr [0x589607e0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D DC 07 96 58 00: cmp dword ptr [0x589607dc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58528671
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 DC 07 96 58: mov edx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x5852865d
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ach], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 54 FF FF FF: call dword ptr [ebp - 0xac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58528667
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes C7 05 DC 07 96 58 00 00 00 00: mov dword ptr [0x589607dc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 64 75 94 58 00: cmp dword ptr [0x58947564], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x585286bc
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 64 75 94 58: mov eax, dword ptr [0x58947564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x585286a8
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0b4h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 4C FF FF FF: call dword ptr [ebp - 0xb4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585286b2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes C7 05 64 75 94 58 00 00 00 00: mov dword ptr [0x58947564], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 68 20 96 58 00: cmp dword ptr [0x58962068], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58528708
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x585286f4
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 44 FF FF FF: call dword ptr [ebp - 0xbc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585286fe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes C7 05 68 20 96 58 00 00 00 00: mov dword ptr [0x58962068], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D0 07 96 58 00: cmp dword ptr [0x589607d0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58528754
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 D0 07 96 58: mov edx, dword ptr [0x589607d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x58528740
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 3C FF FF FF: call dword ptr [ebp - 0xc4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852874a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes C7 05 D0 07 96 58 00 00 00 00: mov dword ptr [0x589607d0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C4 07 96 58 00: cmp dword ptr [0x589607c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x5852879f
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 C4 07 96 58: mov eax, dword ptr [0x589607c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x5852878b
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0cch], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 34 FF FF FF: call dword ptr [ebp - 0xcc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58528795
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes C7 05 C4 07 96 58 00 00 00 00: mov dword ptr [0x589607c4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C0 07 96 58 00: cmp dword ptr [0x589607c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585287eb
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D C0 07 96 58: mov ecx, dword ptr [0x589607c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x585287d7
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0d4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 2C FF FF FF: call dword ptr [ebp - 0xd4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585287e1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes C7 05 C0 07 96 58 00 00 00 00: mov dword ptr [0x589607c0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D BC 07 96 58 00: cmp dword ptr [0x589607bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58528837
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 BC 07 96 58: mov edx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x58528823
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0dch], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 24 FF FF FF: call dword ptr [ebp - 0xdc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852882d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes C7 05 BC 07 96 58 00 00 00 00: mov dword ptr [0x589607bc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B8 07 96 58 00: cmp dword ptr [0x589607b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x58528882
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 B8 07 96 58: mov eax, dword ptr [0x589607b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x5852886e
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0e4h], eax
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 1C FF FF FF: call dword ptr [ebp - 0xe4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58528878
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes C7 05 B8 07 96 58 00 00 00 00: mov dword ptr [0x589607b8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D8 06 96 58 00: cmp dword ptr [0x589606d8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585288ce
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x585288ba
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ech], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 14 FF FF FF: call dword ptr [ebp - 0xec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585288c4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes C7 05 D8 06 96 58 00 00 00 00: mov dword ptr [0x589606d8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D CC 06 96 58 00: cmp dword ptr [0x589606cc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x5852891a
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 CC 06 96 58: mov edx, dword ptr [0x589606cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x58528906
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0f4h], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 0C FF FF FF: call dword ptr [ebp - 0xf4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58528910
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes C7 05 CC 06 96 58 00 00 00 00: mov dword ptr [0x589606cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 24 07 96 58 00: cmp dword ptr [0x58960724], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x58528965
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 24 07 96 58: mov eax, dword ptr [0x58960724]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x58528951
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0fch], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852895b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        ; Exact mapped bytes C7 05 24 07 96 58 00 00 00 00: mov dword ptr [0x58960724], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F8 06 96 58 00: cmp dword ptr [0x589606f8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585289b1
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D F8 06 96 58: mov ecx, dword ptr [0x589606f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x5852899d
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 104h], ecx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 FC FE FF FF: call dword ptr [ebp - 0x104]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585289a7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes C7 05 F8 06 96 58 00 00 00 00: mov dword ptr [0x589606f8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A4 06 96 58 00: cmp dword ptr [0x589606a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585289fd
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 A4 06 96 58: mov edx, dword ptr [0x589606a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x585289e9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10ch], edx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 F4 FE FF FF: call dword ptr [ebp - 0x10c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585289f3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes C7 05 A4 06 96 58 00 00 00 00: mov dword ptr [0x589606a4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 07 96 58 00: cmp dword ptr [0x58960730], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x58528a48
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 30 07 96 58: mov eax, dword ptr [0x58960730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x58528a34
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 114h], eax
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 EC FE FF FF: call dword ptr [ebp - 0x114]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58528a3e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes C7 05 30 07 96 58 00 00 00 00: mov dword ptr [0x58960730], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 06 96 58 00: cmp dword ptr [0x58960694], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58528a94
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x58528a80
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 11ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 E4 FE FF FF: call dword ptr [ebp - 0x11c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58528a8a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        ; Exact mapped bytes C7 05 94 06 96 58 00 00 00 00: mov dword ptr [0x58960694], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 07 96 58 00: cmp dword ptr [0x589607a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58528ae0
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 A0 07 96 58: mov edx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 64h], edx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x58528acc
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 124h], edx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 DC FE FF FF: call dword ptr [ebp - 0x124]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58528ad6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        ; Exact mapped bytes C7 05 A0 07 96 58 00 00 00 00: mov dword ptr [0x589607a0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
