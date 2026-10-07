// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 339 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B280 .. +0x153 bytes.
extern "C" __declspec(naked) void FUN_5884b280_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 28: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x28
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 6C 24 34: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 34: mov esi, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 44 24 14: lea eax, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 50 B4 A0 58: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4C 24 14: lea ecx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 4C: jne 0x5884b309
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes 83 C6 18: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x18
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 0A D1 FF FF: call 0x588483d0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 10: jne 0x5884b2da
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 AE D0 FF FF: call 0x58848380
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x5884b3bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 A4 00 00 00: mov eax, dword ptr [eax + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x5884b3bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 54 24 14: lea edx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8B 61 FD FF: call 0x58821480
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x61
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 D7 18 13 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x18
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 10: lea eax, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 44 24 10 01 00 00 00: mov dword ptr [esp + 0x10], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B5 D0 FF FF: call 0x588483d0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 1A: jne 0x5884b33b
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8D 4C 24 10: lea ecx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 53 D0 FF FF: call 0x58848380
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes C7 44 24 0C 00 00 00 00: mov dword ptr [esp + 0xc], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 71: je 0x5884b3ac
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 8B 8E A4 00 00 00: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 37: jne 0x5884b37d
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E B0 00 00 00: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 96 68 F0 FF: call 0x58751bf0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 9D F2 FF FF: call 0x5884a600
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 1F: je 0x5884b388
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 7D 5F FD FF: call 0x588212f0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 54 24 18: lea edx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes EB 06: jmp 0x5884b383
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F8 60 FD FF: call 0x58821480
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes BA 00 1F 00 00: mov edx, 0x1f00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 05 00 00: mov eax, 0x500
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 20: jne 0x5884b3bf
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 4C 24 0C: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 54 24 18: lea edx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes EB 08: jmp 0x5884b3b4
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 2F FD FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x2f
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 0D 18 13 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
