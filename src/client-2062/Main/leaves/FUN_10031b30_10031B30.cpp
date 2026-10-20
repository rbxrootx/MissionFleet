// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10031B30 .. +0x764 bytes.
extern "C" __declspec(naked) void FUN_10031b30_10031B30() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 A2 E2 16 10: push 0x1016e2a2
        __asm _emit 0x68
        __asm _emit 0xa2
        __asm _emit 0xe2
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
        ; Exact mapped bytes A1 40 57 1C 10: mov eax, dword ptr [0x101c5740]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 89 4C 24 00: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 7E 11: jle 0x10031b71
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 07: je 0x10031b71
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 05 80 00 00 00: add eax, 0x80
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10031b73
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 74 28: je 0x10031ba8
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 FC: mov edx, dword ptr [eax - 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xfc
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 AB 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xab
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 74 24 10: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 3B F5: cmp esi, ebp
        __asm _emit 0x3b
        __asm _emit 0xf5
        ; Exact mapped bytes 89 6C 24 1C: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 74 4E: je 0x10031c0f
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes A1 40 57 1C 10: mov eax, dword ptr [0x101c5740]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 60 01 00 00 03: cmp dword ptr [eax + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 7E 12: jle 0x10031be1
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 08: je 0x10031be1
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8D B8 C0 00 00 00: lea edi, [eax + 0xc0]
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10031be3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 B4 CD 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 06 F8 51 17 10: mov dword ptr [esi], 0x101751f8
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 89 6E 50: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x50
        ; Exact mapped bytes E8 33 3F FE FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10031c11
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 CB FF: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcb
        __asm _emit 0xff
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 35 CC 58 1C 10: mov dword ptr [0x101c58cc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 7A AB 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xab
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3B F5: cmp esi, ebp
        __asm _emit 0x3b
        __asm _emit 0xf5
        ; Exact mapped bytes C7 44 24 20 01 00 00 00: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x10031c69
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 5C CD 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 06 F8 51 17 10: mov dword ptr [esi], 0x101751f8
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 89 6E 50: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x50
        ; Exact mapped bytes E8 DB 3E FE FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes EB 02: jmp 0x10031c6b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 0D D0 58 1C 10: mov dword ptr [0x101c58d0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 E1 D4 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A AB 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xab
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3B F5: cmp esi, ebp
        __asm _emit 0x3b
        __asm _emit 0xf5
        ; Exact mapped bytes C7 44 24 20 02 00 00 00: mov dword ptr [esp + 0x20], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x10031cc9
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 FC CC 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 06 F8 51 17 10: mov dword ptr [esi], 0x101751f8
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 89 6E 50: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x50
        ; Exact mapped bytes E8 7B 3E FE FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes EB 02: jmp 0x10031ccb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 0D D4 58 1C 10: mov dword ptr [0x101c58d4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 81 D4 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 35 CC 58 1C 10: mov esi, dword ptr [0x101c58cc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 40 26: mov ax, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10031d01
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 9F D2 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10031d0e
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 F2 D1 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D CC 58 1C 10: mov ecx, dword ptr [0x101c58cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 35 D0 58 1C 10: mov esi, dword ptr [0x101c58d0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 41 26: mov ax, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 2D 02 00: sub ax, 2
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10031d33
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 6D D2 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10031d40
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 C0 D1 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 CC 58 1C 10: mov edx, dword ptr [0x101c58cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 35 D4 58 1C 10: mov esi, dword ptr [0x101c58d4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 2D 02 00: sub ax, 2
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10031d65
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 3B D2 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10031d72
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 8E D1 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 27 AA 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xaa
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3B F5: cmp esi, ebp
        __asm _emit 0x3b
        __asm _emit 0xf5
        ; Exact mapped bytes C7 44 24 20 03 00 00 00: mov dword ptr [esp + 0x20], 3
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x10031dbc
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 66 49: dec cx
        __asm _emit 0x66
        __asm _emit 0x49
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 04 CC 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 06 3C 52 17 10: mov dword ptr [esi], 0x1017523c
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x3c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 46 3D FE FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10031dbe
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 35 D8 58 1C 10: mov dword ptr [0x101c58d8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 CE A9 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa9
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes C7 44 24 20 04 00 00 00: mov dword ptr [esp + 0x20], 4
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB CC 00 00 00: mov ebx, 0xcc
        __asm _emit 0xbb
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x10031e2d
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 9A 60 01 00 00: cmp dword ptr [edx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 71 08: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x08
        ; Exact mapped bytes 8B 79 04: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 7E 12: jle 0x10031e16
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 92 90 01 00 00: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D5: cmp edx, ebp
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 74 08: je 0x10031e16
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C2 00 33 00 00: add edx, 0x3300
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10031e18
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 83 C6 10: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x10
        ; Exact mapped bytes 83 C7 1A: add edi, 0x1a
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x1a
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 65 D4 0C 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd4
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10031e2f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 24 FF FF FF FF: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A3 58 CE 1A 10: mov dword ptr [0x101ace58], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes E8 5A A9 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa9
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes C7 44 24 20 05 00 00 00: mov dword ptr [esp + 0x20], 5
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x10031e9c
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 99 60 01 00 00: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 72 08: mov esi, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7A 04: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x04
        ; Exact mapped bytes 7E 12: jle 0x10031e85
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 08: je 0x10031e85
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 00 33 00 00: add ecx, 0x3300
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10031e87
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 C6 1E: add esi, 0x1e
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x1e
        ; Exact mapped bytes 83 C7 1A: add edi, 0x1a
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x1a
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F6 D3 0C 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10031e9e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 35 58 CE 1A 10: mov esi, dword ptr [0x101ace58]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes A3 5C CE 1A 10: mov dword ptr [0x101ace5c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes C7 44 24 20 FF FF FF FF: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 66 49: dec cx
        __asm _emit 0x66
        __asm _emit 0x49
        ; Exact mapped bytes 66 89 4E 26: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10031ece
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 D2 D0 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10031edb
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 25 D0 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 35 5C CE 1A 10: mov esi, dword ptr [0x101ace5c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10031efe
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 A2 D0 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10031f0b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 F5 CF 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 58 CE 1A 10: mov ecx, dword ptr [0x101ace58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 45 D2 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 5C CE 1A 10: mov ecx, dword ptr [0x101ace5c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 35 D2 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 D8 58 1C 10: mov eax, dword ptr [0x101c58d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 58 CE 1A 10: mov eax, dword ptr [0x101ace58]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 5C CE 1A 10: mov eax, dword ptr [0x101ace5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 35 C8 58 1C 10: mov esi, dword ptr [0x101c58c8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 98 CF 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 30 D0 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 24 57 1C 10: mov esi, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 7C CF 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 14 D0 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 28 57 1C 10: mov esi, dword ptr [0x101c5728]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 60 CF 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 F8 CF 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 2C 57 1C 10: mov esi, dword ptr [0x101c572c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x2c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 44 CF 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 DC CF 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 F8 56 1C 10: mov esi, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 28 CF 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 C0 CF 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 F8 56 1C 10: mov esi, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 C7 46 26 4C 04: mov word ptr [esi + 0x26], 0x44c
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x4c
        __asm _emit 0x04
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10031ff9
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 A7 CF 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10032006
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 FA CE 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 FC 56 1C 10: mov esi, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 E6 CE 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 7E CF 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 FC 56 1C 10: mov esi, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 C7 46 26 E8 03: mov word ptr [esi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x1003203b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 65 CF 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10032048
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 B8 CE 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 10 57 1C 10: mov esi, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A4 CE 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 3C CF 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 F4 56 1C 10: mov esi, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 88 CE 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 20 CF 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 F0 56 1C 10: mov esi, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 6C CE 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 04 CF 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 08 57 1C 10: mov esi, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 50 CE 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 E8 CE 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 0C 57 1C 10: mov esi, dword ptr [0x101c570c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 34 CE 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 CC CE 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 54 CE 1A 10: mov esi, dword ptr [0x101ace54]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 18 CE 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 B0 CE 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 1C 57 1C 10: mov esi, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 FC CD 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 94 CE 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 18 57 1C 10: mov esi, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 E0 CD 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 78 CE 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 14 57 1C 10: mov esi, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 C4 CD 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 5C CE 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 30 57 1C 10: mov esi, dword ptr [0x101c5730]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D E4 56 1C 10: mov edi, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A8 CD 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 40 CE 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 30 57 1C 10: mov ecx, dword ptr [0x101c5730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 63 CB 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xcb
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 08 57 1C 10: mov esi, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 C7 46 26 D0 07: mov word ptr [esi + 0x26], 0x7d0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x07
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10032186
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 1A CE 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10032193
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 6D CD 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 1C 57 1C 10: mov esi, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 C7 46 26 B8 0B: mov word ptr [esi + 0x26], 0xbb8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xb8
        __asm _emit 0x0b
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x100321ac
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 F4 CD 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x100321b9
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 47 CD 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 18 57 1C 10: mov esi, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes BF A0 0F 00 00: mov edi, 0xfa0
        __asm _emit 0xbf
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 7E 26: mov word ptr [esi + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x26
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x100321d5
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 CB CD 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x100321e2
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 1E CD 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 14 57 1C 10: mov esi, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 7E 26: mov word ptr [esi + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x26
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 74 06: je 0x100321fa
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 A6 CD 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10032207
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 F9 CC 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 30 57 1C 10: mov esi, dword ptr [0x101c5730]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 C7 46 26 D0 39: mov word ptr [esi + 0x26], 0x39d0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x39
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10032220
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 80 CD 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x1003222d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 D3 CC 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 54 CE 1A 10: mov esi, dword ptr [0x101ace54]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 66 C7 46 26 20 4E: mov word ptr [esi + 0x26], 0x4e20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x4e
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10032246
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 5A CD 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10032253
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 AD CC 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 81 F8 9F 00 00: mov eax, dword ptr [ecx + 0x9ff8]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 49 24 01: or byte ptr [ecx + 0x24], 1
        __asm _emit 0x80
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes C7 40 28 00 01 00 00: mov dword ptr [eax + 0x28], 0x100
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 A8 84 00 00 00: mov dword ptr [eax + 0x84], ebp
        __asm _emit 0x89
        __asm _emit 0xa8
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 80 8C 00 00 00 00 00 00 40: mov dword ptr [eax + 0x8c], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 8B 89 F8 9F 00 00: mov ecx, dword ptr [ecx + 0x9ff8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xf8
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
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
