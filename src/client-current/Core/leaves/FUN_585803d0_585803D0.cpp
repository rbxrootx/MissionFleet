// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585803D0 .. +0x27B5 bytes.
extern "C" __declspec(naked) void FUN_585803d0_585803D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 590h
        mov dword ptr [ebp - 1e0h], ecx
        mov eax, dword ptr [ebp - 1e0h]
        mov dword ptr [eax], 588aa934h
        ; Exact mapped bytes 83 3D 14 06 96 58 00: cmp dword ptr [0x58960614], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58580437
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x58580423
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1e4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 95 1C FE FF FF: call dword ptr [ebp - 0x1e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858042d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes C7 05 14 06 96 58 00 00 00 00: mov dword ptr [0x58960614], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D EC 1F 96 58 00: cmp dword ptr [0x58961fec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58580483
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 EC 1F 96 58: mov edx, dword ptr [0x58961fec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 20: je 0x5858046f
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ech], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 95 14 FE FF FF: call dword ptr [ebp - 0x1ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580479
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        ; Exact mapped bytes C7 05 EC 1F 96 58 00 00 00 00: mov dword ptr [0x58961fec], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E8 1F 96 58 00: cmp dword ptr [0x58961fe8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x585804ce
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 E8 1F 96 58: mov eax, dword ptr [0x58961fe8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 20: je 0x585804ba
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 95 0C FE FF FF: call dword ptr [ebp - 0x1f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585804c4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        ; Exact mapped bytes C7 05 E8 1F 96 58 00 00 00 00: mov dword ptr [0x58961fe8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 04 06 96 58 00: cmp dword ptr [0x58960604], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x5858051a
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x58580506
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 95 04 FE FF FF: call dword ptr [ebp - 0x1fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580510
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 200h], 0
        ; Exact mapped bytes C7 05 04 06 96 58 00 00 00 00: mov dword ptr [0x58960604], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 80 75 94 58 00: cmp dword ptr [0x58947580], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58580566
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 80 75 94 58: mov edx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x58580552
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 204h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 FC FD FF FF: call dword ptr [ebp - 0x204]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858055c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 208h], 0
        ; Exact mapped bytes C7 05 80 75 94 58 00 00 00 00: mov dword ptr [0x58947580], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 80 75 94 58 00: cmp dword ptr [0x58947580], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x585805b1
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 80 75 94 58: mov eax, dword ptr [0x58947580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x5858059d
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 F4 FD FF FF: call dword ptr [ebp - 0x20c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585805a7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 210h], 0
        ; Exact mapped bytes C7 05 80 75 94 58 00 00 00 00: mov dword ptr [0x58947580], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 1C 20 96 58 00: cmp dword ptr [0x5896201c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585805fd
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 1C 20 96 58: mov ecx, dword ptr [0x5896201c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x585805e9
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 214h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 EC FD FF FF: call dword ptr [ebp - 0x214]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585805f3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 218h], 0
        ; Exact mapped bytes C7 05 1C 20 96 58 00 00 00 00: mov dword ptr [0x5896201c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 20 20 96 58 00: cmp dword ptr [0x58962020], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58580649
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 20 20 96 58: mov edx, dword ptr [0x58962020]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x58580635
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 21ch], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 E4 FD FF FF: call dword ptr [ebp - 0x21c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858063f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 220h], 0
        ; Exact mapped bytes C7 05 20 20 96 58 00 00 00 00: mov dword ptr [0x58962020], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 24 20 96 58 00: cmp dword ptr [0x58962024], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x58580694
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x58580680
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 224h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 DC FD FF FF: call dword ptr [ebp - 0x224]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858068a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 228h], 0
        ; Exact mapped bytes C7 05 24 20 96 58 00 00 00 00: mov dword ptr [0x58962024], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 2C 20 96 58 00: cmp dword ptr [0x5896202c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585806e0
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 2C 20 96 58: mov ecx, dword ptr [0x5896202c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x585806cc
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 22ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 D4 FD FF FF: call dword ptr [ebp - 0x22c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585806d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 230h], 0
        ; Exact mapped bytes C7 05 2C 20 96 58 00 00 00 00: mov dword ptr [0x5896202c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 28 20 96 58 00: cmp dword ptr [0x58962028], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x5858072c
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x58580718
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 234h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 CC FD FF FF: call dword ptr [ebp - 0x234]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580722
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 238h], 0
        ; Exact mapped bytes C7 05 28 20 96 58 00 00 00 00: mov dword ptr [0x58962028], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 20 96 58 00: cmp dword ptr [0x58962030], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x58580777
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x58580763
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 23ch], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 C4 FD FF FF: call dword ptr [ebp - 0x23c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858076d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 240h], 0
        ; Exact mapped bytes C7 05 30 20 96 58 00 00 00 00: mov dword ptr [0x58962030], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 20 96 58 00: cmp dword ptr [0x58962034], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585807c3
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 34 20 96 58: mov ecx, dword ptr [0x58962034]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x585807af
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 244h], ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 BC FD FF FF: call dword ptr [ebp - 0x244]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585807b9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 248h], 0
        ; Exact mapped bytes C7 05 34 20 96 58 00 00 00 00: mov dword ptr [0x58962034], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 38 20 96 58 00: cmp dword ptr [0x58962038], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x5858080f
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 38 20 96 58: mov edx, dword ptr [0x58962038]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x585807fb
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 B4 FD FF FF: call dword ptr [ebp - 0x24c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580805
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 250h], 0
        ; Exact mapped bytes C7 05 38 20 96 58 00 00 00 00: mov dword ptr [0x58962038], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 3C 20 96 58 00: cmp dword ptr [0x5896203c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x5858085a
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 3C 20 96 58: mov eax, dword ptr [0x5896203c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x58580846
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 254h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 AC FD FF FF: call dword ptr [ebp - 0x254]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580850
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 258h], 0
        ; Exact mapped bytes C7 05 3C 20 96 58 00 00 00 00: mov dword ptr [0x5896203c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 20 96 58 00: cmp dword ptr [0x58962040], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585808a6
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 40 20 96 58: mov ecx, dword ptr [0x58962040]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x58580892
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 25ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 A4 FD FF FF: call dword ptr [ebp - 0x25c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858089c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 260h], 0
        ; Exact mapped bytes C7 05 40 20 96 58 00 00 00 00: mov dword ptr [0x58962040], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 4C 20 96 58 00: cmp dword ptr [0x5896204c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585808f2
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 4C 20 96 58: mov edx, dword ptr [0x5896204c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x585808de
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 264h], edx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 9C FD FF FF: call dword ptr [ebp - 0x264]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585808e8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 268h], 0
        ; Exact mapped bytes C7 05 4C 20 96 58 00 00 00 00: mov dword ptr [0x5896204c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 7C 75 94 58 00: cmp dword ptr [0x5894757c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x5858093d
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 7C 75 94 58: mov eax, dword ptr [0x5894757c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x58580929
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 26ch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 94 FD FF FF: call dword ptr [ebp - 0x26c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580933
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 270h], 0
        ; Exact mapped bytes C7 05 7C 75 94 58 00 00 00 00: mov dword ptr [0x5894757c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 44: je 0x5858098a
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 21: je 0x58580976
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 274h], ecx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 8C FD FF FF: call dword ptr [ebp - 0x274]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580980
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 278h], 0
        ; Exact mapped bytes C7 05 94 75 94 58 00 00 00 00: mov dword ptr [0x58947594], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 44: je 0x585809d7
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 15 98 75 94 58: mov edx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 54h], edx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 21: je 0x585809c3
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 27ch], edx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 84 FD FF FF: call dword ptr [ebp - 0x27c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585809cd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 280h], 0
        ; Exact mapped bytes C7 05 98 75 94 58 00 00 00 00: mov dword ptr [0x58947598], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 18 22 96 58: mov eax, dword ptr [0x58962218]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 90 40 89 58: call dword ptr [0x58894090]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 22 96 58: mov ecx, dword ptr [0x5896221c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes FF 15 90 40 89 58: call dword ptr [0x58894090]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 20 22 96 58: mov edx, dword ptr [0x58962220]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 90 40 89 58: call dword ptr [0x58894090]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A1 24 22 96 58: mov eax, dword ptr [0x58962224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 90 40 89 58: call dword ptr [0x58894090]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes 83 3D 04 06 96 58 00: cmp dword ptr [0x58960604], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4C: je 0x58580a5f
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 83 3D 04 06 96 58 00: cmp dword ptr [0x58960604], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58580a5f
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x58580a4b
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 284h], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 7C FD FF FF: call dword ptr [ebp - 0x284]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580a55
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 288h], 0
        ; Exact mapped bytes C7 05 04 06 96 58 00 00 00 00: mov dword ptr [0x58960604], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 7C 06 96 58 00: cmp dword ptr [0x5896067c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58580aab
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 7C 06 96 58: mov edx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x58580a97
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 28ch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 74 FD FF FF: call dword ptr [ebp - 0x28c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580aa1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 290h], 0
        ; Exact mapped bytes C7 05 7C 06 96 58 00 00 00 00: mov dword ptr [0x5896067c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 80 06 96 58 00: cmp dword ptr [0x58960680], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x58580af6
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 80 06 96 58: mov eax, dword ptr [0x58960680]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x58580ae2
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 294h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 6C FD FF FF: call dword ptr [ebp - 0x294]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580aec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 298h], 0
        ; Exact mapped bytes C7 05 80 06 96 58 00 00 00 00: mov dword ptr [0x58960680], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 84 06 96 58 00: cmp dword ptr [0x58960684], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58580b42
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x58580b2e
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 29ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 64 FD FF FF: call dword ptr [ebp - 0x29c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580b38
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a0h], 0
        ; Exact mapped bytes C7 05 84 06 96 58 00 00 00 00: mov dword ptr [0x58960684], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 8C 94 58 00: cmp dword ptr [0x58948c54], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58580b8e
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 54 8C 94 58: mov edx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x58580b7a
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2a4h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 5C FD FF FF: call dword ptr [ebp - 0x2a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580b84
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a8h], 0
        ; Exact mapped bytes C7 05 54 8C 94 58 00 00 00 00: mov dword ptr [0x58948c54], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 88 06 96 58 00: cmp dword ptr [0x58960688], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x58580bd9
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 88 06 96 58: mov eax, dword ptr [0x58960688]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x58580bc5
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ach], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 54 FD FF FF: call dword ptr [ebp - 0x2ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580bcf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b0h], 0
        ; Exact mapped bytes C7 05 88 06 96 58 00 00 00 00: mov dword ptr [0x58960688], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [edx + 5896068ch], 0
        ; Exact mapped bytes 74 53: je 0x58580c3d
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ecx + 5896068ch]
        mov dword ptr [ebp - 70h], edx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x58580c21
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2b4h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 4C FD FF FF: call dword ptr [ebp - 0x2b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580c2b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b8h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [ecx + 5896068ch], 0
        mov edx, 4
        shl edx, 0
        cmp dword ptr [edx + 5896068ch], 0
        ; Exact mapped bytes 74 53: je 0x58580ca1
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [eax + 5896068ch]
        mov dword ptr [ebp - 74h], ecx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x58580c85
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 44 FD FF FF: call dword ptr [ebp - 0x2bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580c8f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c0h], 0
        mov edx, 4
        shl edx, 0
        mov dword ptr [edx + 5896068ch], 0
        ; Exact mapped bytes 83 3D 2C 06 96 58 00: cmp dword ptr [0x5896062c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x58580cec
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 2C 06 96 58: mov eax, dword ptr [0x5896062c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 78h], eax
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x58580cd8
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2c4h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 3C FD FF FF: call dword ptr [ebp - 0x2c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580ce2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c8h], 0
        ; Exact mapped bytes C7 05 2C 06 96 58 00 00 00 00: mov dword ptr [0x5896062c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 10 06 96 58 00: cmp dword ptr [0x58960610], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58580d38
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], ecx
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x58580d24
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2cch], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 34 FD FF FF: call dword ptr [ebp - 0x2cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580d2e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d0h], 0
        ; Exact mapped bytes C7 05 10 06 96 58 00 00 00 00: mov dword ptr [0x58960610], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C 06 96 58 00: cmp dword ptr [0x5896060c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58580d84
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 0C 06 96 58: mov edx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 80h], edx
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x58580d70
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2d4h], edx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 2C FD FF FF: call dword ptr [ebp - 0x2d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580d7a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d8h], 0
        ; Exact mapped bytes C7 05 0C 06 96 58 00 00 00 00: mov dword ptr [0x5896060c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 1C 06 96 58 00: cmp dword ptr [0x5896061c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58580ddb
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 1C 06 96 58: mov eax, dword ptr [0x5896061c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], eax
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x58580dc7
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2dch], eax
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 24 FD FF FF: call dword ptr [ebp - 0x2dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580dd1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e0h], 0
        ; Exact mapped bytes C7 05 1C 06 96 58 00 00 00 00: mov dword ptr [0x5896061c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 20 06 96 58 00: cmp dword ptr [0x58960620], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58580e33
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x58580e1f
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2e4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 1C FD FF FF: call dword ptr [ebp - 0x2e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580e29
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e8h], 0
        ; Exact mapped bytes C7 05 20 06 96 58 00 00 00 00: mov dword ptr [0x58960620], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 68 06 96 58 00: cmp dword ptr [0x58960668], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58580e8b
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 68 06 96 58: mov edx, dword ptr [0x58960668]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8ch], edx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x58580e77
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ech], edx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 14 FD FF FF: call dword ptr [ebp - 0x2ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580e81
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f0h], 0
        ; Exact mapped bytes C7 05 68 06 96 58 00 00 00 00: mov dword ptr [0x58960668], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 70 06 96 58 00: cmp dword ptr [0x58960670], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58580ee2
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 70 06 96 58: mov eax, dword ptr [0x58960670]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], eax
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x58580ece
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 0C FD FF FF: call dword ptr [ebp - 0x2f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580ed8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f8h], 0
        ; Exact mapped bytes C7 05 70 06 96 58 00 00 00 00: mov dword ptr [0x58960670], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 28 06 96 58 00: cmp dword ptr [0x58960628], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58580f3a
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 94h], ecx
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x58580f26
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 04 FD FF FF: call dword ptr [ebp - 0x2fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580f30
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 300h], 0
        ; Exact mapped bytes C7 05 28 06 96 58 00 00 00 00: mov dword ptr [0x58960628], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 06 96 58 00: cmp dword ptr [0x58960634], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58580f92
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 34 06 96 58: mov edx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 98h], edx
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x58580f7e
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 304h], edx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 FC FC FF FF: call dword ptr [ebp - 0x304]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580f88
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 308h], 0
        ; Exact mapped bytes C7 05 34 06 96 58 00 00 00 00: mov dword ptr [0x58960634], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 75 94 58 00: cmp dword ptr [0x58947578], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58580fe9
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 78 75 94 58: mov eax, dword ptr [0x58947578]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], eax
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 26: je 0x58580fd5
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 30ch], eax
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 F4 FC FF FF: call dword ptr [ebp - 0x30c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 310h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58580fdf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 310h], 0
        ; Exact mapped bytes C7 05 78 75 94 58 00 00 00 00: mov dword ptr [0x58947578], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 3C 06 96 58 00: cmp dword ptr [0x5896063c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581041
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a0h], ecx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 26: je 0x5858102d
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 314h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 EC FC FF FF: call dword ptr [ebp - 0x314]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581037
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 318h], 0
        ; Exact mapped bytes C7 05 3C 06 96 58 00 00 00 00: mov dword ptr [0x5896063c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 06 96 58 00: cmp dword ptr [0x58960640], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581099
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 40 06 96 58: mov edx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a4h], edx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 26: je 0x58581085
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 31ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 E4 FC FF FF: call dword ptr [ebp - 0x31c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858108f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 320h], 0
        ; Exact mapped bytes C7 05 40 06 96 58 00 00 00 00: mov dword ptr [0x58960640], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B8 06 96 58 00: cmp dword ptr [0x589606b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x585810f0
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 B8 06 96 58: mov eax, dword ptr [0x589606b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a8h], eax
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 26: je 0x585810dc
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 324h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 DC FC FF FF: call dword ptr [ebp - 0x324]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 328h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585810e6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 328h], 0
        ; Exact mapped bytes C7 05 B8 06 96 58 00 00 00 00: mov dword ptr [0x589606b8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 48 06 96 58 00: cmp dword ptr [0x58960648], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581148
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ach], ecx
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 26: je 0x58581134
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ach]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 32ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 D4 FC FF FF: call dword ptr [ebp - 0x32c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 330h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858113e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 330h], 0
        ; Exact mapped bytes C7 05 48 06 96 58 00 00 00 00: mov dword ptr [0x58960648], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 4C 06 96 58 00: cmp dword ptr [0x5896064c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585811a0
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 4C 06 96 58: mov edx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 26: je 0x5858118c
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0b0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 334h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 95 CC FC FF FF: call dword ptr [ebp - 0x334]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581196
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 338h], 0
        ; Exact mapped bytes C7 05 4C 06 96 58 00 00 00 00: mov dword ptr [0x5896064c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 50 06 96 58 00: cmp dword ptr [0x58960650], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x585811f7
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 50 06 96 58: mov eax, dword ptr [0x58960650]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x585811e3
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 33ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 95 C4 FC FF FF: call dword ptr [ebp - 0x33c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 340h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585811ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 340h], 0
        ; Exact mapped bytes C7 05 50 06 96 58 00 00 00 00: mov dword ptr [0x58960650], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 06 96 58 00: cmp dword ptr [0x58960654], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x5858124f
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 54 06 96 58: mov ecx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b8h], ecx
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 26: je 0x5858123b
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 344h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 BC FC FF FF: call dword ptr [ebp - 0x344]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 348h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581245
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 348h], 0
        ; Exact mapped bytes C7 05 54 06 96 58 00 00 00 00: mov dword ptr [0x58960654], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 58 06 96 58 00: cmp dword ptr [0x58960658], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585812a7
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 58 06 96 58: mov edx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 26: je 0x58581293
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 34ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 B4 FC FF FF: call dword ptr [ebp - 0x34c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858129d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 350h], 0
        ; Exact mapped bytes C7 05 58 06 96 58 00 00 00 00: mov dword ptr [0x58960658], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C4 79 94 58 00: cmp dword ptr [0x589479c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x585812fe
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 C4 79 94 58: mov eax, dword ptr [0x589479c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0c0h], eax
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 26: je 0x585812ea
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 354h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes FF 95 AC FC FF FF: call dword ptr [ebp - 0x354]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 358h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585812f4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 358h], 0
        ; Exact mapped bytes C7 05 C4 79 94 58 00 00 00 00: mov dword ptr [0x589479c4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 2C 7C 94 58 00: cmp dword ptr [0x58947c2c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581356
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0c4h], ecx
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 26: je 0x58581342
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0c4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 35ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 95 A4 FC FF FF: call dword ptr [ebp - 0x35c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858134c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 360h], 0
        ; Exact mapped bytes C7 05 2C 7C 94 58 00 00 00 00: mov dword ptr [0x58947c2c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 58 8C 94 58 00: cmp dword ptr [0x58948c58], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585813ae
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 58 8C 94 58: mov edx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0c8h], edx
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 26: je 0x5858139a
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 364h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes FF 95 9C FC FF FF: call dword ptr [ebp - 0x364]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585813a4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 368h], 0
        ; Exact mapped bytes C7 05 58 8C 94 58 00 00 00 00: mov dword ptr [0x58948c58], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 06 96 58 00: cmp dword ptr [0x58960674], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58581405
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 74 06 96 58: mov eax, dword ptr [0x58960674]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0cch], eax
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 26: je 0x585813f1
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 36ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 95 94 FC FF FF: call dword ptr [ebp - 0x36c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585813fb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 370h], 0
        ; Exact mapped bytes C7 05 74 06 96 58 00 00 00 00: mov dword ptr [0x58960674], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 06 96 58 00: cmp dword ptr [0x58960678], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x5858145d
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 78 06 96 58: mov ecx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d0h], ecx
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 26: je 0x58581449
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 374h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes FF 95 8C FC FF FF: call dword ptr [ebp - 0x374]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 378h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581453
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 378h], 0
        ; Exact mapped bytes C7 05 78 06 96 58 00 00 00 00: mov dword ptr [0x58960678], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D0 20 96 58 00: cmp dword ptr [0x589620d0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585814b5
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 D0 20 96 58: mov edx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d4h], edx
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 26: je 0x585814a1
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 37ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes FF 95 84 FC FF FF: call dword ptr [ebp - 0x37c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 380h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585814ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 380h], 0
        ; Exact mapped bytes C7 05 D0 20 96 58 00 00 00 00: mov dword ptr [0x589620d0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D DC 06 96 58 00: cmp dword ptr [0x589606dc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x5858150c
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 DC 06 96 58: mov eax, dword ptr [0x589606dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d8h], eax
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 26: je 0x585814f8
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0d8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 384h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes FF 95 7C FC FF FF: call dword ptr [ebp - 0x384]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581502
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 388h], 0
        ; Exact mapped bytes C7 05 DC 06 96 58 00 00 00 00: mov dword ptr [0x589606dc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 6C 75 94 58 00: cmp dword ptr [0x5894756c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581564
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0dch], ecx
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 26: je 0x58581550
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes FF 95 74 FC FF FF: call dword ptr [ebp - 0x38c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 390h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858155a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 390h], 0
        ; Exact mapped bytes C7 05 6C 75 94 58 00 00 00 00: mov dword ptr [0x5894756c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 07 96 58 00: cmp dword ptr [0x58960778], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585815bc
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 78 07 96 58: mov edx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e0h], edx
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 26: je 0x585815a8
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0e0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 394h], edx
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes FF 95 6C FC FF FF: call dword ptr [ebp - 0x394]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 398h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585815b2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 398h], 0
        ; Exact mapped bytes C7 05 78 07 96 58 00 00 00 00: mov dword ptr [0x58960778], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D BC 06 96 58 00: cmp dword ptr [0x589606bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58581613
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 BC 06 96 58: mov eax, dword ptr [0x589606bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], eax
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 26: je 0x585815ff
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 39ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes FF 95 64 FC FF FF: call dword ptr [ebp - 0x39c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581609
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3a0h], 0
        ; Exact mapped bytes C7 05 BC 06 96 58 00 00 00 00: mov dword ptr [0x589606bc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C0 06 96 58 00: cmp dword ptr [0x589606c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x5858166b
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e8h], ecx
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 26: je 0x58581657
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3a4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes FF 95 5C FC FF FF: call dword ptr [ebp - 0x3a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581661
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3a8h], 0
        ; Exact mapped bytes C7 05 C0 06 96 58 00 00 00 00: mov dword ptr [0x589606c0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C4 06 96 58 00: cmp dword ptr [0x589606c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585816c3
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 C4 06 96 58: mov edx, dword ptr [0x589606c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ech], edx
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 26: je 0x585816af
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0ech]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3ach], edx
        push 1
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes FF 95 54 FC FF FF: call dword ptr [ebp - 0x3ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585816b9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3b0h], 0
        ; Exact mapped bytes C7 05 C4 06 96 58 00 00 00 00: mov dword ptr [0x589606c4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 88 07 96 58 00: cmp dword ptr [0x58960788], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x5858171a
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 88 07 96 58: mov eax, dword ptr [0x58960788]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f0h], eax
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 26: je 0x58581706
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0f0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3b4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes FF 95 4C FC FF FF: call dword ptr [ebp - 0x3b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581710
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3b8h], 0
        ; Exact mapped bytes C7 05 88 07 96 58 00 00 00 00: mov dword ptr [0x58960788], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 80 07 96 58 00: cmp dword ptr [0x58960780], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581772
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f4h], ecx
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 26: je 0x5858175e
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0f4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes FF 95 44 FC FF FF: call dword ptr [ebp - 0x3bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581768
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3c0h], 0
        ; Exact mapped bytes C7 05 80 07 96 58 00 00 00 00: mov dword ptr [0x58960780], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 84 07 96 58 00: cmp dword ptr [0x58960784], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585817ca
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 84 07 96 58: mov edx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f8h], edx
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 26: je 0x585817b6
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes FF 95 3C FC FF FF: call dword ptr [ebp - 0x3c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585817c0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3c8h], 0
        ; Exact mapped bytes C7 05 84 07 96 58 00 00 00 00: mov dword ptr [0x58960784], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 07 96 58 00: cmp dword ptr [0x58960794], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58581821
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 94 07 96 58: mov eax, dword ptr [0x58960794]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0fch], eax
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 26: je 0x5858180d
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0fch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3cch], eax
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes FF 95 34 FC FF FF: call dword ptr [ebp - 0x3cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581817
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3d0h], 0
        ; Exact mapped bytes C7 05 94 07 96 58 00 00 00 00: mov dword ptr [0x58960794], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 7C 07 96 58 00: cmp dword ptr [0x5896077c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581879
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 100h], ecx
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 26: je 0x58581865
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3d4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes FF 95 2C FC FF FF: call dword ptr [ebp - 0x3d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858186f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3d8h], 0
        ; Exact mapped bytes C7 05 7C 07 96 58 00 00 00 00: mov dword ptr [0x5896077c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 06 96 58 00: cmp dword ptr [0x58960698], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585818d1
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 98 06 96 58: mov edx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 104h], edx
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 26: je 0x585818bd
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3dch], edx
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes FF 95 24 FC FF FF: call dword ptr [ebp - 0x3dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585818c7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3e0h], 0
        ; Exact mapped bytes C7 05 98 06 96 58 00 00 00 00: mov dword ptr [0x58960698], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 9C 06 96 58 00: cmp dword ptr [0x5896069c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58581928
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 9C 06 96 58: mov eax, dword ptr [0x5896069c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 26: je 0x58581914
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3e4h], eax
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes FF 95 1C FC FF FF: call dword ptr [ebp - 0x3e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858191e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3e8h], 0
        ; Exact mapped bytes C7 05 9C 06 96 58 00 00 00 00: mov dword ptr [0x5896069c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 70 75 94 58 00: cmp dword ptr [0x58947570], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581980
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 10ch], ecx
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 26: je 0x5858196c
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ech], ecx
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 95 14 FC FF FF: call dword ptr [ebp - 0x3ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581976
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3f0h], 0
        ; Exact mapped bytes C7 05 70 75 94 58 00 00 00 00: mov dword ptr [0x58947570], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 07 96 58 00: cmp dword ptr [0x58960734], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585819d8
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 34 07 96 58: mov edx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 110h], edx
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 26: je 0x585819c4
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3f4h], edx
        push 1
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes FF 95 0C FC FF FF: call dword ptr [ebp - 0x3f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585819ce
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3f8h], 0
        ; Exact mapped bytes C7 05 34 07 96 58 00 00 00 00: mov dword ptr [0x58960734], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 38 07 96 58 00: cmp dword ptr [0x58960738], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58581a2f
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 38 07 96 58: mov eax, dword ptr [0x58960738]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 26: je 0x58581a1b
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3fch], eax
        push 1
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes FF 95 04 FC FF FF: call dword ptr [ebp - 0x3fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 400h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581a25
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 400h], 0
        ; Exact mapped bytes C7 05 38 07 96 58 00 00 00 00: mov dword ptr [0x58960738], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 3C 07 96 58 00: cmp dword ptr [0x5896073c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581a87
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 3C 07 96 58: mov ecx, dword ptr [0x5896073c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 118h], ecx
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 26: je 0x58581a73
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 118h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 404h], ecx
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes FF 95 FC FB FF FF: call dword ptr [ebp - 0x404]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 408h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581a7d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 408h], 0
        ; Exact mapped bytes C7 05 3C 07 96 58 00 00 00 00: mov dword ptr [0x5896073c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 07 96 58 00: cmp dword ptr [0x58960740], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581adf
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 40 07 96 58: mov edx, dword ptr [0x58960740]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 11ch], edx
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 26: je 0x58581acb
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 11ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 40ch], edx
        push 1
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes FF 95 F4 FB FF FF: call dword ptr [ebp - 0x40c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 410h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581ad5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 410h], 0
        ; Exact mapped bytes C7 05 40 07 96 58 00 00 00 00: mov dword ptr [0x58960740], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 07 96 58 00: cmp dword ptr [0x58960744], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58581b36
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 44 07 96 58: mov eax, dword ptr [0x58960744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 120h], eax
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 26: je 0x58581b22
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 120h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 414h], eax
        push 1
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes FF 95 EC FB FF FF: call dword ptr [ebp - 0x414]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 418h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581b2c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 418h], 0
        ; Exact mapped bytes C7 05 44 07 96 58 00 00 00 00: mov dword ptr [0x58960744], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 48 07 96 58 00: cmp dword ptr [0x58960748], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581b8e
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 48 07 96 58: mov ecx, dword ptr [0x58960748]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 124h], ecx
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 26: je 0x58581b7a
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 41ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes FF 95 E4 FB FF FF: call dword ptr [ebp - 0x41c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 420h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581b84
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 420h], 0
        ; Exact mapped bytes C7 05 48 07 96 58 00 00 00 00: mov dword ptr [0x58960748], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 4C 07 96 58 00: cmp dword ptr [0x5896074c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581be6
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 4C 07 96 58: mov edx, dword ptr [0x5896074c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 128h], edx
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 26: je 0x58581bd2
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 424h], edx
        push 1
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes FF 95 DC FB FF FF: call dword ptr [ebp - 0x424]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 428h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581bdc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 428h], 0
        ; Exact mapped bytes C7 05 4C 07 96 58 00 00 00 00: mov dword ptr [0x5896074c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 50 07 96 58 00: cmp dword ptr [0x58960750], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58581c3d
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 50 07 96 58: mov eax, dword ptr [0x58960750]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 12ch], eax
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 26: je 0x58581c29
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 42ch], eax
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes FF 95 D4 FB FF FF: call dword ptr [ebp - 0x42c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581c33
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 430h], 0
        ; Exact mapped bytes C7 05 50 07 96 58 00 00 00 00: mov dword ptr [0x58960750], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 07 96 58 00: cmp dword ptr [0x58960754], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581c95
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 54 07 96 58: mov ecx, dword ptr [0x58960754]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 130h], ecx
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 26: je 0x58581c81
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 130h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 434h], ecx
        push 1
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes FF 95 CC FB FF FF: call dword ptr [ebp - 0x434]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 438h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581c8b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 438h], 0
        ; Exact mapped bytes C7 05 54 07 96 58 00 00 00 00: mov dword ptr [0x58960754], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 58 07 96 58 00: cmp dword ptr [0x58960758], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581ced
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 58 07 96 58: mov edx, dword ptr [0x58960758]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 134h], edx
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 26: je 0x58581cd9
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 134h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 43ch], edx
        push 1
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes FF 95 C4 FB FF FF: call dword ptr [ebp - 0x43c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 440h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581ce3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 440h], 0
        ; Exact mapped bytes C7 05 58 07 96 58 00 00 00 00: mov dword ptr [0x58960758], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 5C 07 96 58 00: cmp dword ptr [0x5896075c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58581d44
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 5C 07 96 58: mov eax, dword ptr [0x5896075c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 138h], eax
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 26: je 0x58581d30
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 138h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 444h], eax
        push 1
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes FF 95 BC FB FF FF: call dword ptr [ebp - 0x444]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 448h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581d3a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 448h], 0
        ; Exact mapped bytes C7 05 5C 07 96 58 00 00 00 00: mov dword ptr [0x5896075c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F0 06 96 58 00: cmp dword ptr [0x589606f0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581d9c
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 13ch], ecx
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 26: je 0x58581d88
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 44ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes FF 95 B4 FB FF FF: call dword ptr [ebp - 0x44c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 450h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581d92
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 450h], 0
        ; Exact mapped bytes C7 05 F0 06 96 58 00 00 00 00: mov dword ptr [0x589606f0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F4 06 96 58 00: cmp dword ptr [0x589606f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581df4
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 F4 06 96 58: mov edx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 140h], edx
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 26: je 0x58581de0
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 140h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 454h], edx
        push 1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes FF 95 AC FB FF FF: call dword ptr [ebp - 0x454]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 458h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581dea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 458h], 0
        ; Exact mapped bytes C7 05 F4 06 96 58 00 00 00 00: mov dword ptr [0x589606f4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D FC 06 96 58 00: cmp dword ptr [0x589606fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58581e4b
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 FC 06 96 58: mov eax, dword ptr [0x589606fc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 144h], eax
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 26: je 0x58581e37
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 45ch], eax
        push 1
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes FF 95 A4 FB FF FF: call dword ptr [ebp - 0x45c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 460h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581e41
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 460h], 0
        ; Exact mapped bytes C7 05 FC 06 96 58 00 00 00 00: mov dword ptr [0x589606fc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D EC 06 96 58 00: cmp dword ptr [0x589606ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581ea3
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 148h], ecx
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 26: je 0x58581e8f
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 148h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 464h], ecx
        push 1
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes FF 95 9C FB FF FF: call dword ptr [ebp - 0x464]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 468h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581e99
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 468h], 0
        ; Exact mapped bytes C7 05 EC 06 96 58 00 00 00 00: mov dword ptr [0x589606ec], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C 07 96 58 00: cmp dword ptr [0x5896070c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581efb
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 0C 07 96 58: mov edx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14ch], edx
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 26: je 0x58581ee7
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 14ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 46ch], edx
        push 1
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes FF 95 94 FB FF FF: call dword ptr [ebp - 0x46c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 470h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581ef1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 470h], 0
        ; Exact mapped bytes C7 05 0C 07 96 58 00 00 00 00: mov dword ptr [0x5896070c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 10 07 96 58 00: cmp dword ptr [0x58960710], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58581f52
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 10 07 96 58: mov eax, dword ptr [0x58960710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 150h], eax
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 26: je 0x58581f3e
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 150h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 474h], eax
        push 1
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes FF 95 8C FB FF FF: call dword ptr [ebp - 0x474]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 478h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581f48
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 478h], 0
        ; Exact mapped bytes C7 05 10 07 96 58 00 00 00 00: mov dword ptr [0x58960710], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 14 07 96 58 00: cmp dword ptr [0x58960714], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58581faa
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 14 07 96 58: mov ecx, dword ptr [0x58960714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 154h], ecx
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 26: je 0x58581f96
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 154h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 47ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes FF 95 84 FB FF FF: call dword ptr [ebp - 0x47c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 480h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581fa0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 480h], 0
        ; Exact mapped bytes C7 05 14 07 96 58 00 00 00 00: mov dword ptr [0x58960714], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B0 06 96 58 00: cmp dword ptr [0x589606b0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58582002
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 B0 06 96 58: mov edx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 158h], edx
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 26: je 0x58581fee
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 158h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 484h], edx
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes FF 95 7C FB FF FF: call dword ptr [ebp - 0x484]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 488h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58581ff8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 488h], 0
        ; Exact mapped bytes C7 05 B0 06 96 58 00 00 00 00: mov dword ptr [0x589606b0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B4 06 96 58 00: cmp dword ptr [0x589606b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58582059
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 B4 06 96 58: mov eax, dword ptr [0x589606b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 15ch], eax
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 26: je 0x58582045
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 15ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 48ch], eax
        push 1
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes FF 95 74 FB FF FF: call dword ptr [ebp - 0x48c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 490h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858204f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 490h], 0
        ; Exact mapped bytes C7 05 B4 06 96 58 00 00 00 00: mov dword ptr [0x589606b4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 18 07 96 58 00: cmp dword ptr [0x58960718], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585820b1
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 18 07 96 58: mov ecx, dword ptr [0x58960718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 160h], ecx
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 26: je 0x5858209d
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 160h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 494h], ecx
        push 1
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes FF 95 6C FB FF FF: call dword ptr [ebp - 0x494]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 498h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585820a7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 498h], 0
        ; Exact mapped bytes C7 05 18 07 96 58 00 00 00 00: mov dword ptr [0x58960718], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D FC 1F 96 58 00: cmp dword ptr [0x58961ffc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58582109
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 FC 1F 96 58: mov edx, dword ptr [0x58961ffc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 164h], edx
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 26: je 0x585820f5
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 164h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 49ch], edx
        push 1
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes FF 95 64 FB FF FF: call dword ptr [ebp - 0x49c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585820ff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4a0h], 0
        ; Exact mapped bytes C7 05 FC 1F 96 58 00 00 00 00: mov dword ptr [0x58961ffc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 00 20 96 58 00: cmp dword ptr [0x58962000], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58582160
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 00 20 96 58: mov eax, dword ptr [0x58962000]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 168h], eax
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 26: je 0x5858214c
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 168h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes FF 95 5C FB FF FF: call dword ptr [ebp - 0x4a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582156
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4a8h], 0
        ; Exact mapped bytes C7 05 00 20 96 58 00 00 00 00: mov dword ptr [0x58962000], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 04 20 96 58 00: cmp dword ptr [0x58962004], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585821b8
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 16ch], ecx
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 74 26: je 0x585821a4
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 16ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes FF 95 54 FB FF FF: call dword ptr [ebp - 0x4ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585821ae
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4b0h], 0
        ; Exact mapped bytes C7 05 04 20 96 58 00 00 00 00: mov dword ptr [0x58962004], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 08 20 96 58 00: cmp dword ptr [0x58962008], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58582210
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 08 20 96 58: mov edx, dword ptr [0x58962008]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 170h], edx
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 74 26: je 0x585821fc
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 170h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4b4h], edx
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes FF 95 4C FB FF FF: call dword ptr [ebp - 0x4b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582206
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4b8h], 0
        ; Exact mapped bytes C7 05 08 20 96 58 00 00 00 00: mov dword ptr [0x58962008], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C 20 96 58 00: cmp dword ptr [0x5896200c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58582267
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 174h], eax
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 74 26: je 0x58582253
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 174h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4bch], eax
        push 1
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes FF 95 44 FB FF FF: call dword ptr [ebp - 0x4bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858225d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4c0h], 0
        ; Exact mapped bytes C7 05 0C 20 96 58 00 00 00 00: mov dword ptr [0x5896200c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 10 20 96 58 00: cmp dword ptr [0x58962010], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585822bf
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 178h], ecx
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 74 26: je 0x585822ab
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 178h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes FF 95 3C FB FF FF: call dword ptr [ebp - 0x4c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585822b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4c8h], 0
        ; Exact mapped bytes C7 05 10 20 96 58 00 00 00 00: mov dword ptr [0x58962010], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 14 20 96 58 00: cmp dword ptr [0x58962014], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58582317
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 14 20 96 58: mov edx, dword ptr [0x58962014]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 17ch], edx
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 74 26: je 0x58582303
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4cch], edx
        push 1
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes FF 95 34 FB FF FF: call dword ptr [ebp - 0x4cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858230d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4d0h], 0
        ; Exact mapped bytes C7 05 14 20 96 58 00 00 00 00: mov dword ptr [0x58962014], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 18 20 96 58 00: cmp dword ptr [0x58962018], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x5858236e
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 18 20 96 58: mov eax, dword ptr [0x58962018]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 180h], eax
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 74 26: je 0x5858235a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 180h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4d4h], eax
        push 1
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes FF 95 2C FB FF FF: call dword ptr [ebp - 0x4d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582364
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4d8h], 0
        ; Exact mapped bytes C7 05 18 20 96 58 00 00 00 00: mov dword ptr [0x58962018], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 20 96 58 00: cmp dword ptr [0x58962054], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585823c6
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 54 20 96 58: mov ecx, dword ptr [0x58962054]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 184h], ecx
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 74 26: je 0x585823b2
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 184h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4dch], ecx
        push 1
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes FF 95 24 FB FF FF: call dword ptr [ebp - 0x4dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585823bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4e0h], 0
        ; Exact mapped bytes C7 05 54 20 96 58 00 00 00 00: mov dword ptr [0x58962054], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 58 20 96 58 00: cmp dword ptr [0x58962058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x5858241e
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 58 20 96 58: mov edx, dword ptr [0x58962058]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 188h], edx
        cmp dword ptr [ebp - 188h], 0
        ; Exact mapped bytes 74 26: je 0x5858240a
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4e4h], edx
        push 1
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes FF 95 1C FB FF FF: call dword ptr [ebp - 0x4e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582414
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4e8h], 0
        ; Exact mapped bytes C7 05 58 20 96 58 00 00 00 00: mov dword ptr [0x58962058], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 60 07 96 58 00: cmp dword ptr [0x58960760], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58582475
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 60 07 96 58: mov eax, dword ptr [0x58960760]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18ch], eax
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 74 26: je 0x58582461
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 18ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4ech], eax
        push 1
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes FF 95 14 FB FF FF: call dword ptr [ebp - 0x4ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858246b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4f0h], 0
        ; Exact mapped bytes C7 05 60 07 96 58 00 00 00 00: mov dword ptr [0x58960760], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 6C 07 96 58 00: cmp dword ptr [0x5896076c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585824cd
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 190h], ecx
        cmp dword ptr [ebp - 190h], 0
        ; Exact mapped bytes 74 26: je 0x585824b9
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 190h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4f4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes FF 95 0C FB FF FF: call dword ptr [ebp - 0x4f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585824c3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4f8h], 0
        ; Exact mapped bytes C7 05 6C 07 96 58 00 00 00 00: mov dword ptr [0x5896076c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 70 07 96 58 00: cmp dword ptr [0x58960770], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58582525
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 70 07 96 58: mov edx, dword ptr [0x58960770]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 194h], edx
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 26: je 0x58582511
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 194h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4fch], edx
        push 1
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes FF 95 04 FB FF FF: call dword ptr [ebp - 0x4fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 500h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858251b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 500h], 0
        ; Exact mapped bytes C7 05 70 07 96 58 00 00 00 00: mov dword ptr [0x58960770], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A4 07 96 58 00: cmp dword ptr [0x589607a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x5858257c
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 A4 07 96 58: mov eax, dword ptr [0x589607a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 198h], eax
        cmp dword ptr [ebp - 198h], 0
        ; Exact mapped bytes 74 26: je 0x58582568
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 504h], eax
        push 1
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes FF 95 FC FA FF FF: call dword ptr [ebp - 0x504]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 508h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582572
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 508h], 0
        ; Exact mapped bytes C7 05 A4 07 96 58 00 00 00 00: mov dword ptr [0x589607a4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A8 07 96 58 00: cmp dword ptr [0x589607a8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585825d4
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 19ch], ecx
        cmp dword ptr [ebp - 19ch], 0
        ; Exact mapped bytes 74 26: je 0x585825c0
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes FF 95 F4 FA FF FF: call dword ptr [ebp - 0x50c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 510h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585825ca
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 510h], 0
        ; Exact mapped bytes C7 05 A8 07 96 58 00 00 00 00: mov dword ptr [0x589607a8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B0 07 96 58 00: cmp dword ptr [0x589607b0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x5858262c
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 B0 07 96 58: mov edx, dword ptr [0x589607b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a0h], edx
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 74 26: je 0x58582618
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1a0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 514h], edx
        push 1
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes FF 95 EC FA FF FF: call dword ptr [ebp - 0x514]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582622
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 518h], 0
        ; Exact mapped bytes C7 05 B0 07 96 58 00 00 00 00: mov dword ptr [0x589607b0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B4 07 96 58 00: cmp dword ptr [0x589607b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58582683
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 B4 07 96 58: mov eax, dword ptr [0x589607b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a4h], eax
        cmp dword ptr [ebp - 1a4h], 0
        ; Exact mapped bytes 74 26: je 0x5858266f
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1a4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 51ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes FF 95 E4 FA FF FF: call dword ptr [ebp - 0x51c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 520h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582679
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 520h], 0
        ; Exact mapped bytes C7 05 B4 07 96 58 00 00 00 00: mov dword ptr [0x589607b4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D CC 07 96 58 00: cmp dword ptr [0x589607cc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585826db
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], ecx
        cmp dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes 74 26: je 0x585826c7
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1a8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 524h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes FF 95 DC FA FF FF: call dword ptr [ebp - 0x524]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 528h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585826d1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 528h], 0
        ; Exact mapped bytes C7 05 CC 07 96 58 00 00 00 00: mov dword ptr [0x589607cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D4 06 96 58 00: cmp dword ptr [0x589606d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58582733
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 D4 06 96 58: mov edx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ach], edx
        cmp dword ptr [ebp - 1ach], 0
        ; Exact mapped bytes 74 26: je 0x5858271f
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 52ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes FF 95 D4 FA FF FF: call dword ptr [ebp - 0x52c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 530h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582729
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 530h], 0
        ; Exact mapped bytes C7 05 D4 06 96 58 00 00 00 00: mov dword ptr [0x589606d4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D0 06 96 58 00: cmp dword ptr [0x589606d0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x5858278a
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 D0 06 96 58: mov eax, dword ptr [0x589606d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b0h], eax
        cmp dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 74 26: je 0x58582776
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1b0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 534h], eax
        push 1
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes FF 95 CC FA FF FF: call dword ptr [ebp - 0x534]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 538h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582780
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 538h], 0
        ; Exact mapped bytes C7 05 D0 06 96 58 00 00 00 00: mov dword ptr [0x589606d0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D4 06 96 58 00: cmp dword ptr [0x589606d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585827e2
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], ecx
        cmp dword ptr [ebp - 1b4h], 0
        ; Exact mapped bytes 74 26: je 0x585827ce
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1b4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 53ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes FF 95 C4 FA FF FF: call dword ptr [ebp - 0x53c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 540h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585827d8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 540h], 0
        ; Exact mapped bytes C7 05 D4 06 96 58 00 00 00 00: mov dword ptr [0x589606d4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D0 06 96 58 00: cmp dword ptr [0x589606d0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x5858283a
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 D0 06 96 58: mov edx, dword ptr [0x589606d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b8h], edx
        cmp dword ptr [ebp - 1b8h], 0
        ; Exact mapped bytes 74 26: je 0x58582826
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1b8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 544h], edx
        push 1
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes FF 95 BC FA FF FF: call dword ptr [ebp - 0x544]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 548h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582830
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 548h], 0
        ; Exact mapped bytes C7 05 D0 06 96 58 00 00 00 00: mov dword ptr [0x589606d0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E8 06 96 58 00: cmp dword ptr [0x589606e8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58582891
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 E8 06 96 58: mov eax, dword ptr [0x589606e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1bch], eax
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 74 26: je 0x5858287d
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1bch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 54ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes FF 95 B4 FA FF FF: call dword ptr [ebp - 0x54c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 550h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582887
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 550h], 0
        ; Exact mapped bytes C7 05 E8 06 96 58 00 00 00 00: mov dword ptr [0x589606e8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 90 07 96 58 00: cmp dword ptr [0x58960790], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585828e9
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c0h], ecx
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 74 26: je 0x585828d5
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1c0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 554h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes FF 95 AC FA FF FF: call dword ptr [ebp - 0x554]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 558h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585828df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 558h], 0
        ; Exact mapped bytes C7 05 90 07 96 58 00 00 00 00: mov dword ptr [0x58960790], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 28 07 96 58 00: cmp dword ptr [0x58960728], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58582941
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 28 07 96 58: mov edx, dword ptr [0x58960728]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c4h], edx
        cmp dword ptr [ebp - 1c4h], 0
        ; Exact mapped bytes 74 26: je 0x5858292d
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1c4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 55ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes FF 95 A4 FA FF FF: call dword ptr [ebp - 0x55c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 560h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582937
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 560h], 0
        ; Exact mapped bytes C7 05 28 07 96 58 00 00 00 00: mov dword ptr [0x58960728], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 2C 07 96 58 00: cmp dword ptr [0x5896072c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58582998
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 2C 07 96 58: mov eax, dword ptr [0x5896072c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c8h], eax
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 74 26: je 0x58582984
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1c8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 564h], eax
        push 1
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes FF 95 9C FA FF FF: call dword ptr [ebp - 0x564]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 568h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858298e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 568h], 0
        ; Exact mapped bytes C7 05 2C 07 96 58 00 00 00 00: mov dword ptr [0x5896072c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 48 24 96 58 00: cmp dword ptr [0x58962448], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585829f0
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1cch], ecx
        cmp dword ptr [ebp - 1cch], 0
        ; Exact mapped bytes 74 26: je 0x585829dc
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1cch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 56ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes FF 95 94 FA FF FF: call dword ptr [ebp - 0x56c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 570h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585829e6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 570h], 0
        ; Exact mapped bytes C7 05 48 24 96 58 00 00 00 00: mov dword ptr [0x58962448], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 9C 07 96 58 00: cmp dword ptr [0x5896079c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58582a48
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 9C 07 96 58: mov edx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d0h], edx
        cmp dword ptr [ebp - 1d0h], 0
        ; Exact mapped bytes 74 26: je 0x58582a34
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 574h], edx
        push 1
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes FF 95 8C FA FF FF: call dword ptr [ebp - 0x574]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 578h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582a3e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 578h], 0
        ; Exact mapped bytes C7 05 9C 07 96 58 00 00 00 00: mov dword ptr [0x5896079c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58582a5a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 66: jge 0x58582ac6
        __asm _emit 0x7d
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx*4 + 58948c34h], 0
        ; Exact mapped bytes 74 57: je 0x58582ac4
        __asm _emit 0x74
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx*4 + 58948c34h]
        mov dword ptr [ebp - 1d4h], eax
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 74 26: je 0x58582aac
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1d4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 57ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes FF 95 84 FA FF FF: call dword ptr [ebp - 0x57c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 580h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582ab6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 580h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx*4 + 58948c34h], 0
        ; Exact mapped bytes EB 8B: jmp 0x58582a51
        __asm _emit 0xeb
        __asm _emit 0x8b
        ; Exact mapped bytes 83 3D 6C 79 94 58 00: cmp dword ptr [0x5894796c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58582b1e
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 6C 79 94 58: mov edx, dword ptr [0x5894796c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 1d8h], edx
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 74 26: je 0x58582b0a
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1d8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 584h], edx
        push 1
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes FF 95 7C FA FF FF: call dword ptr [ebp - 0x584]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 588h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582b14
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 588h], 0
        ; Exact mapped bytes C7 05 6C 79 94 58 00 00 00 00: mov dword ptr [0x5894796c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A4 20 96 58 00: cmp dword ptr [0x589620a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58582b75
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 A4 20 96 58: mov eax, dword ptr [0x589620a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1dch], eax
        cmp dword ptr [ebp - 1dch], 0
        ; Exact mapped bytes 74 26: je 0x58582b61
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1dch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 58ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes FF 95 74 FA FF FF: call dword ptr [ebp - 0x58c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 590h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58582b6b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 590h], 0
        ; Exact mapped bytes C7 05 A4 20 96 58 00 00 00 00: mov dword ptr [0x589620a4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 30 2D 23 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x2d
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
