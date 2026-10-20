// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58536860 .. +0x2B75 bytes.
extern "C" __declspec(naked) void FUN_58536860_58536860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 608h
        push 6
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 FB 12 F9 FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F B6 05 14 22 96 58: movzx eax, byte ptr [0x58962214]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x585368b0
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes 0F B6 0D 14 22 96 58: movzx ecx, byte ptr [0x58962214]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 75 0C: jne 0x58536898
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 208h], 1
        ; Exact mapped bytes EB 0A: jmp 0x585368a2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 208h], 0
        mov dl, byte ptr [ebp - 208h]
        ; Exact mapped bytes 88 15 14 22 96 58: mov byte ptr [0x58962214], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 07: jmp 0x585368b7
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1A 2B 00 00: jmp 0x585393d1
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push 7
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 AD 12 F9 FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 6C 06 96 58 00: cmp dword ptr [0x5896066c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x5853690f
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 6C 06 96 58: mov eax, dword ptr [0x5896066c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x585368fb
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20ch], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 95 F4 FD FF FF: call dword ptr [ebp - 0x20c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536905
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 210h], 0
        ; Exact mapped bytes C7 05 6C 06 96 58 00 00 00 00: mov dword ptr [0x5896066c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
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
        ; Exact mapped bytes 74 43: je 0x5853695b
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 1C 20 96 58: mov ecx, dword ptr [0x5896201c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 20: je 0x58536947
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 214h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 95 EC FD FF FF: call dword ptr [ebp - 0x214]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536951
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
        ; Exact mapped bytes 74 43: je 0x585369a7
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 20 20 96 58: mov edx, dword ptr [0x58962020]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 20: je 0x58536993
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 21ch], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 95 E4 FD FF FF: call dword ptr [ebp - 0x21c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853699d
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
        ; Exact mapped bytes 74 42: je 0x585369f2
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x585369de
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 224h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 95 DC FD FF FF: call dword ptr [ebp - 0x224]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585369e8
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
        ; Exact mapped bytes 74 43: je 0x58536a3e
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 2C 20 96 58: mov ecx, dword ptr [0x5896202c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x58536a2a
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 22ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 D4 FD FF FF: call dword ptr [ebp - 0x22c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536a34
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
        ; Exact mapped bytes 74 43: je 0x58536a8a
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x58536a76
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 234h], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 CC FD FF FF: call dword ptr [ebp - 0x234]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536a80
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
        ; Exact mapped bytes 74 42: je 0x58536ad5
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x58536ac1
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 23ch], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 C4 FD FF FF: call dword ptr [ebp - 0x23c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536acb
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
        ; Exact mapped bytes 74 43: je 0x58536b21
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 34 20 96 58: mov ecx, dword ptr [0x58962034]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x58536b0d
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 244h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 BC FD FF FF: call dword ptr [ebp - 0x244]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536b17
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
        ; Exact mapped bytes 74 43: je 0x58536b6d
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 38 20 96 58: mov edx, dword ptr [0x58962038]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x58536b59
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24ch], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 B4 FD FF FF: call dword ptr [ebp - 0x24c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536b63
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
        ; Exact mapped bytes 74 42: je 0x58536bb8
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 3C 20 96 58: mov eax, dword ptr [0x5896203c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x58536ba4
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 254h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 AC FD FF FF: call dword ptr [ebp - 0x254]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536bae
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
        ; Exact mapped bytes 74 43: je 0x58536c04
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 40 20 96 58: mov ecx, dword ptr [0x58962040]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x58536bf0
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 25ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 A4 FD FF FF: call dword ptr [ebp - 0x25c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536bfa
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
        ; Exact mapped bytes 74 43: je 0x58536c50
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 4C 20 96 58: mov edx, dword ptr [0x5896204c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x58536c3c
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 264h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 9C FD FF FF: call dword ptr [ebp - 0x264]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536c46
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
        ; Exact mapped bytes 74 42: je 0x58536c9b
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 7C 75 94 58: mov eax, dword ptr [0x5894757c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x58536c87
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 26ch], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 94 FD FF FF: call dword ptr [ebp - 0x26c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536c91
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
        ; Exact mapped bytes 74 44: je 0x58536ce8
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 21: je 0x58536cd4
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 274h], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 8C FD FF FF: call dword ptr [ebp - 0x274]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536cde
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
        ; Exact mapped bytes 74 44: je 0x58536d35
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 15 98 75 94 58: mov edx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 21: je 0x58536d21
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 27ch], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 84 FD FF FF: call dword ptr [ebp - 0x27c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536d2b
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
        ; Exact mapped bytes 83 3D 00 06 96 58 00: cmp dword ptr [0x58960600], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58536db4
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x58536da0
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 284h], ecx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 7C FD FF FF: call dword ptr [ebp - 0x284]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536daa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 288h], 0
        ; Exact mapped bytes C7 05 00 06 96 58 00 00 00 00: mov dword ptr [0x58960600], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x06
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
        ; Exact mapped bytes 74 4C: je 0x58536e09
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
        ; Exact mapped bytes 74 43: je 0x58536e09
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 04 06 96 58: mov edx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x58536df5
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 28ch], edx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 74 FD FF FF: call dword ptr [ebp - 0x28c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536dff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 290h], 0
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
        ; Exact mapped bytes 74 42: je 0x58536e54
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 7C 06 96 58: mov eax, dword ptr [0x5896067c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x58536e40
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 294h], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 6C FD FF FF: call dword ptr [ebp - 0x294]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536e4a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 298h], 0
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
        ; Exact mapped bytes 74 43: je 0x58536ea0
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x58536e8c
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 29ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 64 FD FF FF: call dword ptr [ebp - 0x29c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536e96
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a0h], 0
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
        ; Exact mapped bytes 74 43: je 0x58536eec
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 84 06 96 58: mov edx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 54h], edx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x58536ed8
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2a4h], edx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 5C FD FF FF: call dword ptr [ebp - 0x2a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536ee2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a8h], 0
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
        ; Exact mapped bytes 74 42: je 0x58536f37
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 54 8C 94 58: mov eax, dword ptr [0x58948c54]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x58536f23
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ach], eax
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 54 FD FF FF: call dword ptr [ebp - 0x2ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536f2d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b0h], 0
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
        ; Exact mapped bytes 74 43: je 0x58536f83
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 88 06 96 58: mov ecx, dword ptr [0x58960688]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5ch], ecx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x58536f6f
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2b4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 4C FD FF FF: call dword ptr [ebp - 0x2b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536f79
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b8h], 0
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
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [eax + 5896068ch], 0
        ; Exact mapped bytes 74 53: je 0x58536fe7
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [edx + 5896068ch]
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x58536fcb
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2bch], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 44 FD FF FF: call dword ptr [ebp - 0x2bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58536fd5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c0h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [edx + 5896068ch], 0
        mov eax, 4
        shl eax, 0
        cmp dword ptr [eax + 5896068ch], 0
        ; Exact mapped bytes 74 53: je 0x5853704b
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ecx + 5896068ch]
        mov dword ptr [ebp - 64h], edx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x5853702f
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 3C FD FF FF: call dword ptr [ebp - 0x2c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537039
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c8h], 0
        mov eax, 4
        shl eax, 0
        mov dword ptr [eax + 5896068ch], 0
        ; Exact mapped bytes 83 3D 14 06 96 58 00: cmp dword ptr [0x58960614], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x58537097
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 68h], ecx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x58537083
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2cch], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 34 FD FF FF: call dword ptr [ebp - 0x2cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853708d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d0h], 0
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
        ; Exact mapped bytes 83 3D 2C 06 96 58 00: cmp dword ptr [0x5896062c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585370e3
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 2C 06 96 58: mov edx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6ch], edx
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x585370cf
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2d4h], edx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 2C FD FF FF: call dword ptr [ebp - 0x2d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585370d9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d8h], 0
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
        ; Exact mapped bytes 74 42: je 0x5853712e
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 10 06 96 58: mov eax, dword ptr [0x58960610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 70h], eax
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x5853711a
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2dch], eax
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 24 FD FF FF: call dword ptr [ebp - 0x2dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537124
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e0h], 0
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
        ; Exact mapped bytes 74 43: je 0x5853717a
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 74h], ecx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x58537166
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2e4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 1C FD FF FF: call dword ptr [ebp - 0x2e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537170
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e8h], 0
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
        ; Exact mapped bytes 74 43: je 0x585371c6
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 1C 06 96 58: mov edx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 78h], edx
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x585371b2
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ech], edx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 14 FD FF FF: call dword ptr [ebp - 0x2ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585371bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f0h], 0
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
        ; Exact mapped bytes 74 42: je 0x58537211
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 20 06 96 58: mov eax, dword ptr [0x58960620]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], eax
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x585371fd
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 0C FD FF FF: call dword ptr [ebp - 0x2f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537207
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f8h], 0
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
        ; Exact mapped bytes 83 3D 24 06 96 58 00: cmp dword ptr [0x58960624], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x5853725d
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 24 06 96 58: mov ecx, dword ptr [0x58960624]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 80h], ecx
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x58537249
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 04 FD FF FF: call dword ptr [ebp - 0x2fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537253
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 300h], 0
        ; Exact mapped bytes C7 05 24 06 96 58 00 00 00 00: mov dword ptr [0x58960624], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x24
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
        ; Exact mapped bytes 74 4F: je 0x585372b5
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 68 06 96 58: mov edx, dword ptr [0x58960668]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], edx
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x585372a1
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 304h], edx
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 FC FC FF FF: call dword ptr [ebp - 0x304]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585372ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 308h], 0
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
        ; Exact mapped bytes 74 4E: je 0x5853730c
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 70 06 96 58: mov eax, dword ptr [0x58960670]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x585372f8
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 30ch], eax
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 F4 FC FF FF: call dword ptr [ebp - 0x30c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 310h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537302
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 310h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537364
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8ch], ecx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x58537350
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 314h], ecx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 EC FC FF FF: call dword ptr [ebp - 0x314]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853735a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 318h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585373bc
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 34 06 96 58: mov edx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], edx
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x585373a8
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 31ch], edx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 E4 FC FF FF: call dword ptr [ebp - 0x31c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585373b2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 320h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58537413
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 78 75 94 58: mov eax, dword ptr [0x58947578]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x585373ff
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 324h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 DC FC FF FF: call dword ptr [ebp - 0x324]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 328h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537409
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 328h], 0
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
        ; Exact mapped bytes 74 4F: je 0x5853746b
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x58537457
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 32ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 D4 FC FF FF: call dword ptr [ebp - 0x32c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 330h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537461
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 330h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585374c3
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 40 06 96 58: mov edx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], edx
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 26: je 0x585374af
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 334h], edx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 CC FC FF FF: call dword ptr [ebp - 0x334]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585374b9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 338h], 0
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
        ; Exact mapped bytes 83 3D 44 06 96 58 00: cmp dword ptr [0x58960644], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x5853751a
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 44 06 96 58: mov eax, dword ptr [0x58960644]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a0h], eax
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 26: je 0x58537506
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 33ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 C4 FC FF FF: call dword ptr [ebp - 0x33c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 340h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537510
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 340h], 0
        ; Exact mapped bytes C7 05 44 06 96 58 00 00 00 00: mov dword ptr [0x58960644], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x44
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
        ; Exact mapped bytes 74 4F: je 0x58537572
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a4h], ecx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 26: je 0x5853755e
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 344h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 BC FC FF FF: call dword ptr [ebp - 0x344]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 348h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537568
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 348h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585375ca
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 48 06 96 58: mov edx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a8h], edx
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 26: je 0x585375b6
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 34ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 B4 FC FF FF: call dword ptr [ebp - 0x34c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585375c0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 350h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58537621
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 4C 06 96 58: mov eax, dword ptr [0x5896064c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ach], eax
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 26: je 0x5853760d
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ach]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 354h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 AC FC FF FF: call dword ptr [ebp - 0x354]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 358h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537617
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 358h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537679
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 50 06 96 58: mov ecx, dword ptr [0x58960650]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b0h], ecx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 26: je 0x58537665
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 35ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 95 A4 FC FF FF: call dword ptr [ebp - 0x35c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853766f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 360h], 0
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
        ; Exact mapped bytes 83 3D 58 06 96 58 00: cmp dword ptr [0x58960658], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585376d1
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 58 06 96 58: mov edx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], edx
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x585376bd
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0b4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 364h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 95 9C FC FF FF: call dword ptr [ebp - 0x364]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585376c7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 368h], 0
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
        ; Exact mapped bytes 83 3D 5C 06 96 58 00: cmp dword ptr [0x5896065c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58537728
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 5C 06 96 58: mov eax, dword ptr [0x5896065c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b8h], eax
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 26: je 0x58537714
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 36ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 94 FC FF FF: call dword ptr [ebp - 0x36c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853771e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 370h], 0
        ; Exact mapped bytes C7 05 5C 06 96 58 00 00 00 00: mov dword ptr [0x5896065c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x5c
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
        ; Exact mapped bytes 74 4F: je 0x58537780
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0bch], ecx
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 26: je 0x5853776c
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 374h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 8C FC FF FF: call dword ptr [ebp - 0x374]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 378h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537776
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 378h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585377d8
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 2C 7C 94 58: mov edx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0c0h], edx
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 26: je 0x585377c4
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 37ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes FF 95 84 FC FF FF: call dword ptr [ebp - 0x37c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 380h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585377ce
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 380h], 0
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
        ; Exact mapped bytes 74 4E: je 0x5853782f
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 58 8C 94 58: mov eax, dword ptr [0x58948c58]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0c4h], eax
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 26: je 0x5853781b
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0c4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 384h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 95 7C FC FF FF: call dword ptr [ebp - 0x384]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537825
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 388h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537887
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 74 06 96 58: mov ecx, dword ptr [0x58960674]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c8h], ecx
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 26: je 0x58537873
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes FF 95 74 FC FF FF: call dword ptr [ebp - 0x38c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 390h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853787d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 390h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585378df
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 78 06 96 58: mov edx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0cch], edx
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 26: je 0x585378cb
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 394h], edx
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 95 6C FC FF FF: call dword ptr [ebp - 0x394]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 398h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585378d5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 398h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58537936
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 D0 20 96 58: mov eax, dword ptr [0x589620d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d0h], eax
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 26: je 0x58537922
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 39ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes FF 95 64 FC FF FF: call dword ptr [ebp - 0x39c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853792c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3a0h], 0
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
        ; Exact mapped bytes 74 4F: je 0x5853798e
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d4h], ecx
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 26: je 0x5853797a
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3a4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes FF 95 5C FC FF FF: call dword ptr [ebp - 0x3a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537984
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3a8h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585379e6
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 6C 75 94 58: mov edx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0d8h], edx
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 26: je 0x585379d2
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0d8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3ach], edx
        push 1
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes FF 95 54 FC FF FF: call dword ptr [ebp - 0x3ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585379dc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3b0h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58537a3d
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 78 07 96 58: mov eax, dword ptr [0x58960778]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0dch], eax
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 26: je 0x58537a29
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3b4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes FF 95 4C FC FF FF: call dword ptr [ebp - 0x3b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537a33
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3b8h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537a95
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e0h], ecx
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 26: je 0x58537a81
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0e0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes FF 95 44 FC FF FF: call dword ptr [ebp - 0x3bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537a8b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3c0h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537aed
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 C0 06 96 58: mov edx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], edx
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 26: je 0x58537ad9
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes FF 95 3C FC FF FF: call dword ptr [ebp - 0x3c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537ae3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3c8h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58537b44
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 C4 06 96 58: mov eax, dword ptr [0x589606c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e8h], eax
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 26: je 0x58537b30
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3cch], eax
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes FF 95 34 FC FF FF: call dword ptr [ebp - 0x3cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537b3a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3d0h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537b9c
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ech], ecx
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 26: je 0x58537b88
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ech]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3d4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes FF 95 2C FC FF FF: call dword ptr [ebp - 0x3d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537b92
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3d8h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537bf4
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 80 07 96 58: mov edx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f0h], edx
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 26: je 0x58537be0
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0f0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3dch], edx
        push 1
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes FF 95 24 FC FF FF: call dword ptr [ebp - 0x3dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537bea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3e0h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58537c4b
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 84 07 96 58: mov eax, dword ptr [0x58960784]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f4h], eax
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 26: je 0x58537c37
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0f4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3e4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes FF 95 1C FC FF FF: call dword ptr [ebp - 0x3e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537c41
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3e8h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537ca3
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f8h], ecx
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 26: je 0x58537c8f
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0f8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ech], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes FF 95 14 FC FF FF: call dword ptr [ebp - 0x3ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537c99
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3f0h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537cfb
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 7C 07 96 58: mov edx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0fch], edx
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 26: je 0x58537ce7
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0fch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3f4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes FF 95 0C FC FF FF: call dword ptr [ebp - 0x3f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537cf1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3f8h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58537d52
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 98 06 96 58: mov eax, dword ptr [0x58960698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 100h], eax
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 26: je 0x58537d3e
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3fch], eax
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes FF 95 04 FC FF FF: call dword ptr [ebp - 0x3fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 400h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537d48
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 400h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537daa
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 104h], ecx
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 26: je 0x58537d96
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 404h], ecx
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes FF 95 FC FB FF FF: call dword ptr [ebp - 0x404]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 408h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537da0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 408h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537e02
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 70 75 94 58: mov edx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 108h], edx
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 26: je 0x58537dee
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 40ch], edx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes FF 95 F4 FB FF FF: call dword ptr [ebp - 0x40c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 410h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537df8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 410h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58537e59
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 34 07 96 58: mov eax, dword ptr [0x58960734]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 26: je 0x58537e45
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 414h], eax
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 95 EC FB FF FF: call dword ptr [ebp - 0x414]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 418h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537e4f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 418h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537eb1
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 38 07 96 58: mov ecx, dword ptr [0x58960738]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 110h], ecx
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 26: je 0x58537e9d
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 41ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes FF 95 E4 FB FF FF: call dword ptr [ebp - 0x41c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 420h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537ea7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 420h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537f09
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 3C 07 96 58: mov edx, dword ptr [0x5896073c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 114h], edx
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 26: je 0x58537ef5
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 424h], edx
        push 1
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes FF 95 DC FB FF FF: call dword ptr [ebp - 0x424]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 428h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537eff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 428h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58537f60
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 40 07 96 58: mov eax, dword ptr [0x58960740]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 118h], eax
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 26: je 0x58537f4c
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 42ch], eax
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes FF 95 D4 FB FF FF: call dword ptr [ebp - 0x42c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537f56
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 430h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58537fb8
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 44 07 96 58: mov ecx, dword ptr [0x58960744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 11ch], ecx
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 26: je 0x58537fa4
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 11ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 434h], ecx
        push 1
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes FF 95 CC FB FF FF: call dword ptr [ebp - 0x434]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 438h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58537fae
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 438h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538010
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 48 07 96 58: mov edx, dword ptr [0x58960748]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 120h], edx
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 26: je 0x58537ffc
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 120h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 43ch], edx
        push 1
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes FF 95 C4 FB FF FF: call dword ptr [ebp - 0x43c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 440h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538006
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 440h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58538067
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 4C 07 96 58: mov eax, dword ptr [0x5896074c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 124h], eax
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 26: je 0x58538053
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 444h], eax
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes FF 95 BC FB FF FF: call dword ptr [ebp - 0x444]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 448h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853805d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 448h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585380bf
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 50 07 96 58: mov ecx, dword ptr [0x58960750]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 128h], ecx
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 26: je 0x585380ab
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 44ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes FF 95 B4 FB FF FF: call dword ptr [ebp - 0x44c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 450h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585380b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 450h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538117
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 54 07 96 58: mov edx, dword ptr [0x58960754]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 12ch], edx
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 26: je 0x58538103
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 454h], edx
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes FF 95 AC FB FF FF: call dword ptr [ebp - 0x454]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 458h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853810d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 458h], 0
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
        ; Exact mapped bytes 74 4E: je 0x5853816e
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 58 07 96 58: mov eax, dword ptr [0x58960758]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 130h], eax
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 26: je 0x5853815a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 45ch], eax
        push 1
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes FF 95 A4 FB FF FF: call dword ptr [ebp - 0x45c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 460h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538164
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 460h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585381c6
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 5C 07 96 58: mov ecx, dword ptr [0x5896075c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 134h], ecx
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 26: je 0x585381b2
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 134h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 464h], ecx
        push 1
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes FF 95 9C FB FF FF: call dword ptr [ebp - 0x464]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 468h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585381bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 468h], 0
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
        ; Exact mapped bytes 74 4F: je 0x5853821e
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 F0 06 96 58: mov edx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 138h], edx
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 26: je 0x5853820a
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 138h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 46ch], edx
        push 1
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes FF 95 94 FB FF FF: call dword ptr [ebp - 0x46c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 470h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538214
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 470h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58538275
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 F4 06 96 58: mov eax, dword ptr [0x589606f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 13ch], eax
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 26: je 0x58538261
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 474h], eax
        push 1
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes FF 95 8C FB FF FF: call dword ptr [ebp - 0x474]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 478h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853826b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 478h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585382cd
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D FC 06 96 58: mov ecx, dword ptr [0x589606fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 140h], ecx
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 26: je 0x585382b9
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 140h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 47ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes FF 95 84 FB FF FF: call dword ptr [ebp - 0x47c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 480h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585382c3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 480h], 0
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
        ; Exact mapped bytes 83 3D 20 07 96 58 00: cmp dword ptr [0x58960720], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58538325
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 20 07 96 58: mov edx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 144h], edx
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 26: je 0x58538311
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 484h], edx
        push 1
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes FF 95 7C FB FF FF: call dword ptr [ebp - 0x484]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 488h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853831b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 488h], 0
        ; Exact mapped bytes C7 05 20 07 96 58 00 00 00 00: mov dword ptr [0x58960720], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 38 06 96 58 00: cmp dword ptr [0x58960638], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x5853837c
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 38 06 96 58: mov eax, dword ptr [0x58960638]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 148h], eax
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 26: je 0x58538368
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 48ch], eax
        push 1
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes FF 95 74 FB FF FF: call dword ptr [ebp - 0x48c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 490h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538372
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 490h], 0
        ; Exact mapped bytes C7 05 38 06 96 58 00 00 00 00: mov dword ptr [0x58960638], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
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
        ; Exact mapped bytes 74 4F: je 0x585383d4
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14ch], ecx
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 26: je 0x585383c0
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 14ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 494h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes FF 95 6C FB FF FF: call dword ptr [ebp - 0x494]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 498h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585383ca
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 498h], 0
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
        ; Exact mapped bytes 74 4F: je 0x5853842c
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 0C 07 96 58: mov edx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 150h], edx
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 26: je 0x58538418
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 150h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 49ch], edx
        push 1
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes FF 95 64 FB FF FF: call dword ptr [ebp - 0x49c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538422
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4a0h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58538483
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 10 07 96 58: mov eax, dword ptr [0x58960710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 154h], eax
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 26: je 0x5853846f
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 154h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes FF 95 5C FB FF FF: call dword ptr [ebp - 0x4a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538479
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4a8h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585384db
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 14 07 96 58: mov ecx, dword ptr [0x58960714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 158h], ecx
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 26: je 0x585384c7
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 158h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes FF 95 54 FB FF FF: call dword ptr [ebp - 0x4ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585384d1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4b0h], 0
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
        ; Exact mapped bytes 83 3D 1C 07 96 58 00: cmp dword ptr [0x5896071c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58538533
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 1C 07 96 58: mov edx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 15ch], edx
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 26: je 0x5853851f
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 15ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4b4h], edx
        push 1
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes FF 95 4C FB FF FF: call dword ptr [ebp - 0x4b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538529
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4b8h], 0
        ; Exact mapped bytes C7 05 1C 07 96 58 00 00 00 00: mov dword ptr [0x5896071c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
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
        ; Exact mapped bytes 74 4E: je 0x5853858a
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 B0 06 96 58: mov eax, dword ptr [0x589606b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 160h], eax
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 26: je 0x58538576
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 160h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4bch], eax
        push 1
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes FF 95 44 FB FF FF: call dword ptr [ebp - 0x4bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538580
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4c0h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585385e2
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B4 06 96 58: mov ecx, dword ptr [0x589606b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 164h], ecx
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 26: je 0x585385ce
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 164h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes FF 95 3C FB FF FF: call dword ptr [ebp - 0x4c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585385d8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4c8h], 0
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
        ; Exact mapped bytes 83 3D D4 07 96 58 00: cmp dword ptr [0x589607d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x5853863a
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 D4 07 96 58: mov edx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 168h], edx
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 26: je 0x58538626
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 168h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4cch], edx
        push 1
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes FF 95 34 FB FF FF: call dword ptr [ebp - 0x4cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538630
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4d0h], 0
        ; Exact mapped bytes C7 05 D4 07 96 58 00 00 00 00: mov dword ptr [0x589607d4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D8 07 96 58 00: cmp dword ptr [0x589607d8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x58538691
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 D8 07 96 58: mov eax, dword ptr [0x589607d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 16ch], eax
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 74 26: je 0x5853867d
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 16ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4d4h], eax
        push 1
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes FF 95 2C FB FF FF: call dword ptr [ebp - 0x4d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538687
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4d8h], 0
        ; Exact mapped bytes C7 05 D8 07 96 58 00 00 00 00: mov dword ptr [0x589607d8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x07
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
        ; Exact mapped bytes 74 4F: je 0x585386e9
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 18 07 96 58: mov ecx, dword ptr [0x58960718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 170h], ecx
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 74 26: je 0x585386d5
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 170h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4dch], ecx
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes FF 95 24 FB FF FF: call dword ptr [ebp - 0x4dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585386df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4e0h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538741
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 FC 1F 96 58: mov edx, dword ptr [0x58961ffc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 174h], edx
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 74 26: je 0x5853872d
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 174h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4e4h], edx
        push 1
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes FF 95 1C FB FF FF: call dword ptr [ebp - 0x4e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538737
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4e8h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58538798
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 00 20 96 58: mov eax, dword ptr [0x58962000]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 178h], eax
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 74 26: je 0x58538784
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 178h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4ech], eax
        push 1
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes FF 95 14 FB FF FF: call dword ptr [ebp - 0x4ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853878e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4f0h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585387f0
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 17ch], ecx
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 74 26: je 0x585387dc
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4f4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes FF 95 0C FB FF FF: call dword ptr [ebp - 0x4f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585387e6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4f8h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538848
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 08 20 96 58: mov edx, dword ptr [0x58962008]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 180h], edx
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 74 26: je 0x58538834
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 180h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4fch], edx
        push 1
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes FF 95 04 FB FF FF: call dword ptr [ebp - 0x4fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 500h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853883e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 500h], 0
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
        ; Exact mapped bytes 74 4E: je 0x5853889f
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 184h], eax
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 74 26: je 0x5853888b
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 184h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 504h], eax
        push 1
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes FF 95 FC FA FF FF: call dword ptr [ebp - 0x504]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 508h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538895
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 508h], 0
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
        ; Exact mapped bytes 74 4F: je 0x585388f7
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 188h], ecx
        cmp dword ptr [ebp - 188h], 0
        ; Exact mapped bytes 74 26: je 0x585388e3
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes FF 95 F4 FA FF FF: call dword ptr [ebp - 0x50c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 510h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585388ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 510h], 0
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
        ; Exact mapped bytes 74 4F: je 0x5853894f
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 14 20 96 58: mov edx, dword ptr [0x58962014]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18ch], edx
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 74 26: je 0x5853893b
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 18ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 514h], edx
        push 1
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes FF 95 EC FA FF FF: call dword ptr [ebp - 0x514]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538945
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 518h], 0
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
        ; Exact mapped bytes 74 4E: je 0x585389a6
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 18 20 96 58: mov eax, dword ptr [0x58962018]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 190h], eax
        cmp dword ptr [ebp - 190h], 0
        ; Exact mapped bytes 74 26: je 0x58538992
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 190h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 51ch], eax
        push 1
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes FF 95 E4 FA FF FF: call dword ptr [ebp - 0x51c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 520h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853899c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 520h], 0
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
        ; Exact mapped bytes 83 3D D4 06 96 58 00: cmp dword ptr [0x589606d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585389fe
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 194h], ecx
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 26: je 0x585389ea
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 194h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 524h], ecx
        push 1
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes FF 95 DC FA FF FF: call dword ptr [ebp - 0x524]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 528h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585389f4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 528h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538a56
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 D0 06 96 58: mov edx, dword ptr [0x589606d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 198h], edx
        cmp dword ptr [ebp - 198h], 0
        ; Exact mapped bytes 74 26: je 0x58538a42
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 52ch], edx
        push 1
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes FF 95 D4 FA FF FF: call dword ptr [ebp - 0x52c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 530h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538a4c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 530h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58538aad
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 D4 06 96 58: mov eax, dword ptr [0x589606d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 19ch], eax
        cmp dword ptr [ebp - 19ch], 0
        ; Exact mapped bytes 74 26: je 0x58538a99
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 534h], eax
        push 1
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes FF 95 CC FA FF FF: call dword ptr [ebp - 0x534]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 538h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538aa3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 538h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538b05
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D D0 06 96 58: mov ecx, dword ptr [0x589606d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a0h], ecx
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 74 26: je 0x58538af1
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1a0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 53ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes FF 95 C4 FA FF FF: call dword ptr [ebp - 0x53c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 540h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538afb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 540h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538b5d
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 E8 06 96 58: mov edx, dword ptr [0x589606e8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a4h], edx
        cmp dword ptr [ebp - 1a4h], 0
        ; Exact mapped bytes 74 26: je 0x58538b49
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1a4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 544h], edx
        push 1
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes FF 95 BC FA FF FF: call dword ptr [ebp - 0x544]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 548h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538b53
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 548h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58538bb4
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 90 07 96 58: mov eax, dword ptr [0x58960790]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], eax
        cmp dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes 74 26: je 0x58538ba0
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1a8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 54ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes FF 95 B4 FA FF FF: call dword ptr [ebp - 0x54c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 550h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538baa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 550h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538c0c
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 28 07 96 58: mov ecx, dword ptr [0x58960728]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ach], ecx
        cmp dword ptr [ebp - 1ach], 0
        ; Exact mapped bytes 74 26: je 0x58538bf8
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1ach]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 554h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes FF 95 AC FA FF FF: call dword ptr [ebp - 0x554]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 558h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538c02
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 558h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538c64
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 2C 07 96 58: mov edx, dword ptr [0x5896072c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b0h], edx
        cmp dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 74 26: je 0x58538c50
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1b0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 55ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes FF 95 A4 FA FF FF: call dword ptr [ebp - 0x55c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 560h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538c5a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 560h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58538cbb
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 48 24 96 58: mov eax, dword ptr [0x58962448]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], eax
        cmp dword ptr [ebp - 1b4h], 0
        ; Exact mapped bytes 74 26: je 0x58538ca7
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1b4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 564h], eax
        push 1
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes FF 95 9C FA FF FF: call dword ptr [ebp - 0x564]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 568h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538cb1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 568h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538d13
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b8h], ecx
        cmp dword ptr [ebp - 1b8h], 0
        ; Exact mapped bytes 74 26: je 0x58538cff
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1b8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 56ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes FF 95 94 FA FF FF: call dword ptr [ebp - 0x56c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 570h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538d09
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 570h], 0
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
        ; Exact mapped bytes 83 3D 54 20 96 58 00: cmp dword ptr [0x58962054], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58538d6b
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 54 20 96 58: mov edx, dword ptr [0x58962054]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1bch], edx
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 74 26: je 0x58538d57
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1bch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 574h], edx
        push 1
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes FF 95 8C FA FF FF: call dword ptr [ebp - 0x574]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 578h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538d61
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 578h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58538dc2
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 58 20 96 58: mov eax, dword ptr [0x58962058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c0h], eax
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 74 26: je 0x58538dae
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1c0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 57ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes FF 95 84 FA FF FF: call dword ptr [ebp - 0x57c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 580h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538db8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 580h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538e1a
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 60 07 96 58: mov ecx, dword ptr [0x58960760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c4h], ecx
        cmp dword ptr [ebp - 1c4h], 0
        ; Exact mapped bytes 74 26: je 0x58538e06
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1c4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 584h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes FF 95 7C FA FF FF: call dword ptr [ebp - 0x584]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 588h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538e10
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 588h], 0
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
        ; Exact mapped bytes 83 3D 8C 07 96 58 00: cmp dword ptr [0x5896078c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58538e72
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 8C 07 96 58: mov edx, dword ptr [0x5896078c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c8h], edx
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 74 26: je 0x58538e5e
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1c8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 58ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes FF 95 74 FA FF FF: call dword ptr [ebp - 0x58c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 590h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538e68
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 590h], 0
        ; Exact mapped bytes C7 05 8C 07 96 58 00 00 00 00: mov dword ptr [0x5896078c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
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
        ; Exact mapped bytes 74 4E: je 0x58538ec9
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 6C 07 96 58: mov eax, dword ptr [0x5896076c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1cch], eax
        cmp dword ptr [ebp - 1cch], 0
        ; Exact mapped bytes 74 26: je 0x58538eb5
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1cch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 594h], eax
        push 1
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes FF 95 6C FA FF FF: call dword ptr [ebp - 0x594]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 598h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538ebf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 598h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538f21
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 70 07 96 58: mov ecx, dword ptr [0x58960770]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d0h], ecx
        cmp dword ptr [ebp - 1d0h], 0
        ; Exact mapped bytes 74 26: je 0x58538f0d
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 59ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes FF 95 64 FA FF FF: call dword ptr [ebp - 0x59c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538f17
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5a0h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58538f79
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 A4 07 96 58: mov edx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d4h], edx
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 74 26: je 0x58538f65
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1d4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 5a4h], edx
        push 1
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes FF 95 5C FA FF FF: call dword ptr [ebp - 0x5a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538f6f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5a8h], 0
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
        ; Exact mapped bytes 74 4E: je 0x58538fd0
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 A8 07 96 58: mov eax, dword ptr [0x589607a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d8h], eax
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 74 26: je 0x58538fbc
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1d8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 5ach], eax
        push 1
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes FF 95 54 FA FF FF: call dword ptr [ebp - 0x5ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58538fc6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5b0h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58539028
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B0 07 96 58: mov ecx, dword ptr [0x589607b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1dch], ecx
        cmp dword ptr [ebp - 1dch], 0
        ; Exact mapped bytes 74 26: je 0x58539014
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1dch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 5b4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes FF 95 4C FA FF FF: call dword ptr [ebp - 0x5b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853901e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5b8h], 0
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
        ; Exact mapped bytes 74 4F: je 0x58539080
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 B4 07 96 58: mov edx, dword ptr [0x589607b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e0h], edx
        cmp dword ptr [ebp - 1e0h], 0
        ; Exact mapped bytes 74 26: je 0x5853906c
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1e0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 5bch], edx
        push 1
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes FF 95 44 FA FF FF: call dword ptr [ebp - 0x5bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58539076
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5c0h], 0
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
        ; Exact mapped bytes 74 4E: je 0x585390d7
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 CC 07 96 58: mov eax, dword ptr [0x589607cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e4h], eax
        cmp dword ptr [ebp - 1e4h], 0
        ; Exact mapped bytes 74 26: je 0x585390c3
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1e4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 5c4h], eax
        push 1
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes FF 95 3C FA FF FF: call dword ptr [ebp - 0x5c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585390cd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5c8h], 0
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
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585390e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 66: jge 0x58539155
        __asm _emit 0x7d
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx*4 + 58948c34h], 0
        ; Exact mapped bytes 74 57: je 0x58539153
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        mov dword ptr [ebp - 1e8h], ecx
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 74 26: je 0x5853913b
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1e8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 5cch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes FF 95 34 FA FF FF: call dword ptr [ebp - 0x5cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58539145
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5d0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx*4 + 58948c34h], 0
        ; Exact mapped bytes EB 8B: jmp 0x585390e0
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
        ; Exact mapped bytes 74 4E: je 0x585391ac
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 6C 79 94 58: mov eax, dword ptr [0x5894796c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 1ech], eax
        cmp dword ptr [ebp - 1ech], 0
        ; Exact mapped bytes 74 26: je 0x58539198
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1ech]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 5d4h], eax
        push 1
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes FF 95 2C FA FF FF: call dword ptr [ebp - 0x5d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585391a2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5d8h], 0
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
        ; Exact mapped bytes 83 3D 30 8C 94 58 00: cmp dword ptr [0x58948c30], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58539204
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 1f0h], ecx
        cmp dword ptr [ebp - 1f0h], 0
        ; Exact mapped bytes 74 26: je 0x585391f0
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1f0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 5dch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes FF 95 24 FA FF FF: call dword ptr [ebp - 0x5dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585391fa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5e0h], 0
        ; Exact mapped bytes C7 05 30 8C 94 58 00 00 00 00: mov dword ptr [0x58948c30], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 50 20 96 58 00: cmp dword ptr [0x58962050], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x5853925c
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 50 20 96 58: mov edx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f4h], edx
        cmp dword ptr [ebp - 1f4h], 0
        ; Exact mapped bytes 74 26: je 0x58539248
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1f4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 5e4h], edx
        push 1
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes FF 95 1C FA FF FF: call dword ptr [ebp - 0x5e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58539252
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5e8h], 0
        ; Exact mapped bytes C7 05 50 20 96 58 00 00 00 00: mov dword ptr [0x58962050], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 20 96 58 00: cmp dword ptr [0x58962044], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x585392b3
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 44 20 96 58: mov eax, dword ptr [0x58962044]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f8h], eax
        cmp dword ptr [ebp - 1f8h], 0
        ; Exact mapped bytes 74 26: je 0x5853929f
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1f8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 5ech], eax
        push 1
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes FF 95 14 FA FF FF: call dword ptr [ebp - 0x5ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585392a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5f0h], 0
        ; Exact mapped bytes C7 05 44 20 96 58 00 00 00 00: mov dword ptr [0x58962044], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 48 20 96 58 00: cmp dword ptr [0x58962048], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x5853930b
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 48 20 96 58: mov ecx, dword ptr [0x58962048]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1fch], ecx
        cmp dword ptr [ebp - 1fch], 0
        ; Exact mapped bytes 74 26: je 0x585392f7
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1fch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 5f4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes FF 95 0C FA FF FF: call dword ptr [ebp - 0x5f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58539301
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5f8h], 0
        ; Exact mapped bytes C7 05 48 20 96 58 00 00 00 00: mov dword ptr [0x58962048], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F4 1F 96 58 00: cmp dword ptr [0x58961ff4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x58539363
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 15 F4 1F 96 58: mov edx, dword ptr [0x58961ff4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 200h], edx
        cmp dword ptr [ebp - 200h], 0
        ; Exact mapped bytes 74 26: je 0x5853934f
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 200h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 5fch], edx
        push 1
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes FF 95 04 FA FF FF: call dword ptr [ebp - 0x5fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 600h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58539359
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 600h], 0
        ; Exact mapped bytes C7 05 F4 1F 96 58 00 00 00 00: mov dword ptr [0x58961ff4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B8 A7 28 00: call 0x587c3b20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa7
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D A4 20 96 58 00: cmp dword ptr [0x589620a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x585393c0
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 A4 20 96 58: mov eax, dword ptr [0x589620a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 204h], eax
        cmp dword ptr [ebp - 204h], 0
        ; Exact mapped bytes 74 26: je 0x585393ac
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 204h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 604h], eax
        push 1
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes FF 95 FC F9 FF FF: call dword ptr [ebp - 0x604]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 608h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585393b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 608h], 0
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
        ; Exact mapped bytes E8 2B DE F9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xde
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 84 DB F9 FF: call 0x584d6f50
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
