// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10044DB0 .. +0x254 bytes.
extern "C" __declspec(naked) void FUN_10044db0_10044DB0() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 EC E7 16 10: push 0x1016e7ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0xe7
        __asm _emit 0x16
        __asm _emit 0x10
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 81 1C 02 00 00: mov ax, word ptr [ecx + 0x21c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 00: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 07: je 0x10044ddf
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x10044de4
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes B8 64 00 00 00: mov eax, 0x64
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 66 3D F4 01: cmp ax, 0x1f4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x01
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 89 81 1C 02 00 00: mov word ptr [ecx + 0x21c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 1D: jbe 0x10044e10
        __asm _emit 0x76
        __asm _emit 0x1d
        ; Exact mapped bytes 66 3D E8 03: cmp ax, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 76 10: jbe 0x10044e09
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes 66 B9 DC 05: mov cx, 0x5dc
        __asm _emit 0x66
        __asm _emit 0xb9
        __asm _emit 0xdc
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 1B F6: sbb esi, esi
        __asm _emit 0x1b
        __asm _emit 0xf6
        ; Exact mapped bytes F7 DE: neg esi
        __asm _emit 0xf7
        __asm _emit 0xde
        ; Exact mapped bytes 83 C6 02: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x02
        ; Exact mapped bytes EB 09: jmp 0x10044e12
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10044e12
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes E8 87 79 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x79
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 0C: mov dword ptr [esp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 74 41: je 0x10044e6d
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 25 01 00 00 80: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x10044e3e
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 C8 FE: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xfe
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D DC 57 1C 10: mov ecx, dword ptr [0x101c57dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8D 44 70 30: lea eax, [eax + esi*2 + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x70
        __asm _emit 0x30
        ; Exact mapped bytes 39 81 70 01 00 00: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x10044e63
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 0F: jl 0x10044e63
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 89 94 01 00 00: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 05: je 0x10044e63
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 02: jmp 0x10044e65
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 93 3A 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 24 08: mov edi, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 18 FF FF FF FF: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 47 60: mov dword ptr [edi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x60
        ; Exact mapped bytes 8B 87 4C 02 00 00: mov eax, dword ptr [edi + 0x24c]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 5E: jne 0x10044ee5
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes E8 12 79 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x79
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 0C: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes C7 44 24 18 01 00 00 00: mov dword ptr [esp + 0x18], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x10044fee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E4 57 1C 10: mov ecx, dword ptr [0x101c57e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 91 70 01 00 00: mov edx, dword ptr [ecx + 0x170]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 8E B9 00 00 00: jle 0x10044f72
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 94 01 00 00: mov edx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x10044f72
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 12: mov edx, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 2F 3A 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 64: mov dword ptr [edi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x64
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes F7 87 94 00 00 00 00 00 00 18: test dword ptr [edi + 0x94], 0x18000000
        __asm _emit 0xf7
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        ; Exact mapped bytes 8D 87 60 02 00 00: lea eax, [edi + 0x260]
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x10044efd
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 8D 87 14 03 00 00: lea eax, [edi + 0x314]
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 90 9A 00 00 00: mov dx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E2 00 0F 00 00: and edx, 0xf00
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 FA 00 01 00 00: cmp edx, 0x100
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 7E: jne 0x10044f90
        __asm _emit 0x75
        __asm _emit 0x7e
        ; Exact mapped bytes 66 83 B8 9C 00 00 00 02: cmp word ptr [eax + 0x9c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 77 74: ja 0x10044f90
        __asm _emit 0x77
        __asm _emit 0x74
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes E8 7D 78 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 0C: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes C7 44 24 18 02 00 00 00: mov dword ptr [esp + 0x18], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x10044fee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 57 1C 10: mov ecx, dword ptr [0x101c57f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B9 70 01 00 00 03: cmp dword ptr [ecx + 0x170], 3
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 7E 29: jle 0x10044f72
        __asm _emit 0x7e
        __asm _emit 0x29
        ; Exact mapped bytes 8B 91 94 01 00 00: mov edx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 1F: je 0x10044f72
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 52 0C: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 A2 39 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 64: mov dword ptr [edi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x64
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 84 39 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 64: mov dword ptr [edi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x64
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 66 8B 87 1C 02 00 00: mov ax, word ptr [edi + 0x21c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D F4 01: cmp ax, 0x1f4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x01
        ; Exact mapped bytes 76 14: jbe 0x10044fb1
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes 66 3D E8 03: cmp ax, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 76 0E: jbe 0x10044fb1
        __asm _emit 0x76
        __asm _emit 0x0e
        ; Exact mapped bytes 66 B9 DC 05: mov cx, 0x5dc
        __asm _emit 0x66
        __asm _emit 0xb9
        __asm _emit 0xdc
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 1B F6: sbb esi, esi
        __asm _emit 0x1b
        __asm _emit 0xf6
        ; Exact mapped bytes 83 C6 0C: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x10044fb3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes E8 E6 77 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x77
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 0C: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes C7 44 24 18 03 00 00 00: mov dword ptr [esp + 0x18], 3
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 21: je 0x10044fee
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B 15 D8 57 1C 10: mov edx, dword ptr [0x101c57d8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 B2 70 01 00 00: cmp dword ptr [edx + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xb2
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 97: jle 0x10044f72
        __asm _emit 0x7e
        __asm _emit 0x97
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 7C 93: jl 0x10044f72
        __asm _emit 0x7c
        __asm _emit 0x93
        ; Exact mapped bytes 8B 92 94 01 00 00: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 89: je 0x10044f72
        __asm _emit 0x74
        __asm _emit 0x89
        ; Exact mapped bytes 8B 14 B2: mov edx, dword ptr [edx + esi*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0xb2
        ; Exact mapped bytes EB 86: jmp 0x10044f74
        __asm _emit 0xeb
        __asm _emit 0x86
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 47 64: mov dword ptr [edi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x64
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
