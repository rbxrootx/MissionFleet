// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 532 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884A600 .. +0x214 bytes.
extern "C" __declspec(naked) void FUN_5884a600_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 46 4E 98 58: push 0x58984e46
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0x4e
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 24: lea eax, [esp + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 89 74 24 1C: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 86 9C 00 00 00: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 84 00 00 00: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 86 98 00 00 00: sub eax, dword ptr [esi + 0x98]
        __asm _emit 0x2b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E 80 00 00 00: sub ecx, dword ptr [esi + 0x80]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 8C 00 00 00: lea edi, [esi + 0x8c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 6E 74: lea ebp, [esi + 0x74]
        __asm _emit 0x8d
        __asm _emit 0x6e
        __asm _emit 0x74
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 33 C1: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 7C 24 18: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes A9 FC FF FF FF: test eax, 0xfffffffc
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 54: jne 0x5884a6b5
        __asm _emit 0x75
        __asm _emit 0x54
        ; Exact mapped bytes 68 A4 0C 00 00: push 0xca4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E3 25 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 5C 24 2C: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1C: je 0x5884a696
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 81 C1 C3 00 00 00: add ecx, 0xc3
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5C 60 FD FF: call 0x588206f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884a698
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 54 24 14: lea edx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes C7 44 24 30 FF FF FF FF: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 20 AE F5 FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xae
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x5884a7ac
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7D 0C: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 7D 10: cmp edi, dword ptr [ebp + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x7d
        __asm _emit 0x10
        ; Exact mapped bytes 76 05: jbe 0x5884a6c2
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 B0 25 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 75 00: mov esi, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5D 10: mov ebx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0x10
        ; Exact mapped bytes 39 5D 0C: cmp dword ptr [ebp + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5d
        __asm _emit 0x0c
        ; Exact mapped bytes 76 05: jbe 0x5884a6d2
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 A0 25 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 04: je 0x5884a6dd
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 74 05: je 0x5884a6e2
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 90 25 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 62: je 0x5884a748
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 52: jne 0x5884a73c
        __asm _emit 0x75
        __asm _emit 0x52
        ; Exact mapped bytes E8 83 25 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 10: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5884a6fb
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 77 25 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 B8 98 0C 00 00 00: cmp word ptr [eax + 0xc98], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1B: jne 0x5884a722
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 35: jne 0x5884a740
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes E8 62 25 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 10: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5884a71c
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 56 25 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 1E: jne 0x5884a744
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 47 25 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 10: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5884a737
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 3B 25 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes EB 89: jmp 0x5884a6c5
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes EB B1: jmp 0x5884a6f1
        __asm _emit 0xeb
        __asm _emit 0xb1
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes EB CE: jmp 0x5884a712
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes EB E5: jmp 0x5884a72d
        __asm _emit 0xeb
        __asm _emit 0xe5
        ; Exact mapped bytes 83 7C 24 14 00: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 75 59: jne 0x5884a7a8
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes 68 A4 0C 00 00: push 0xca4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F5 24 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x24
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
        ; Exact mapped bytes C7 44 24 2C 01 00 00 00: mov dword ptr [esp + 0x2c], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 22: je 0x5884a78e
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 81 C2 C3 00 00 00: add edx, 0xc3
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 64 5F FD FF: call 0x588206f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884a790
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 44 24 14: lea eax, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes C7 44 24 30 FF FF FF FF: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 28 AD F5 FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xad
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 7C 24 18: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 7C 24 34 00: cmp dword ptr [esp + 0x34], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        ; Exact mapped bytes 74 47: je 0x5884a7fa
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 77 0C: mov esi, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x77
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 77 10: cmp esi, dword ptr [edi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x77
        __asm _emit 0x10
        ; Exact mapped bytes 76 05: jbe 0x5884a7c0
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 B2 24 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 8D 4C 24 14: lea ecx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 28: lea edx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 BB C0 0A 00: call 0x588f6890
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 05: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 11: jne 0x5884a7fa
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes EB 04: jmp 0x5884a7fe
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
