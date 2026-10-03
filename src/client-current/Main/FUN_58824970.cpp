// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 9635 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58824970 .. +0x127B bytes.
extern "C" __declspec(naked) void FUN_58824970_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 5E 3B 98 58: push 0x58983b5e
        __asm _emit 0x68
        __asm _emit 0x5e
        __asm _emit 0x3b
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
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
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
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
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
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 44 24 3C: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 54 24 34: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 7C 24 30: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 5C 24 2C: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 E0 E7 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 06 00 C5 98 58: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 5E 50: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x50
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 7E 54: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x54
        ; Exact mapped bytes C7 46 58 00 01 00 00: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5E 5C: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x5c
        ; Exact mapped bytes 68 98 01 00 00: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes C7 06 04 DC 99 58: mov dword ptr [esi], 0x5899dc04
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 82 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x82
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 01: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 11: je 0x58824a12
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 6C DC 99 58: push 0x5899dc6c
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0xdc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 60 F3 0C 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58824a14
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 5C: push 0x5c
        __asm _emit 0x6a
        __asm _emit 0x5c
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 64: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes E8 2B 82 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x82
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 02: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x58824a43
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1F 55 F3 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58824a45
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 68: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes E8 CB 54 F3 FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x54
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8D 46 6C: lea eax, [esi + 0x6c]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x6c
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 E7 81 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x81
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 38: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 03: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 71: je 0x58824aea
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 39 98 64 01 00 00: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x58824a97
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 7C 0F: jl 0x58824a97
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x58824a97
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 2C 98: mov ebp, dword ptr [eax + ebx*4]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x98
        ; Exact mapped bytes EB 02: jmp 0x58824a99
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 46 68: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 EC E6 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe6
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x58824aec
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x58824aec
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 3C: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 FB 08: cmp ebx, 8
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x08
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 0F 8C 56 FF FF FF: jl 0x58824a60
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 0C 01 00 00: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A 81 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x81
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 5C 24 30: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 6C 24 2C: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 04: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3E: je 0x58824b6a
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B A1 00 00 00: lea ecx, [ebx + 0xa1]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 95 F2 01 00 00: lea edx, [ebp + 0x1f2]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8B 89 00 00 00: lea ecx, [ebx + 0x89]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 95 86 00 00 00: lea edx, [ebp + 0x86]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 68: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 28 C5 F3 FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc5
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58824b6c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 0C 01 00 00: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 74: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes E8 D0 80 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x80
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 05: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3E: je 0x58824bcc
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B D9 00 00 00: lea ecx, [ebx + 0xd9]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 95 F2 01 00 00: lea edx, [ebp + 0x1f2]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8B C1 00 00 00: lea ecx, [ebx + 0xc1]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 95 86 00 00 00: lea edx, [ebp + 0x86]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 68: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 C6 C4 F3 FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc4
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58824bce
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 0C 01 00 00: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 78: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        ; Exact mapped bytes E8 6E 80 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x80
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 06: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3E: je 0x58824c2e
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B 0F 01 00 00: lea ecx, [ebx + 0x10f]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 95 F2 01 00 00: lea edx, [ebp + 0x1f2]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8B F7 00 00 00: lea ecx, [ebx + 0xf7]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 95 86 00 00 00: lea edx, [ebp + 0x86]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 68: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 64 C4 F3 FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc4
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58824c30
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 0C 01 00 00: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 7C: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes E8 0C 80 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x80
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 07: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3E: je 0x58824c90
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B 45 01 00 00: lea ecx, [ebx + 0x145]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 95 F2 01 00 00: lea edx, [ebp + 0x1f2]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8B 2D 01 00 00: lea ecx, [ebx + 0x12d]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 95 86 00 00 00: lea edx, [ebp + 0x86]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 68: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 02 C4 F3 FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc4
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58824c92
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 80 00 00 00: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AA 7F 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x7f
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 08: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 74: je 0x58824d2a
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 08: cmp dword ptr [eax + 0x164], 8
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 7E 0F: jle 0x58824cd1
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x58824cd1
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 68 20: mov ebp, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x58824cd3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 46 68: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4B 7F: lea ecx, [ebx + 0x7f]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x7f
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 79: add edx, 0x79
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x79
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 B0 E4 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 27: je 0x58824d24
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes 8B 6C 24 2C: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes EB 02: jmp 0x58824d2c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE A0 00 00 00: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 10 7F 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x7f
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 09: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 77: je 0x58824dc7
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 08: cmp dword ptr [eax + 0x164], 8
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 7E 0F: jle 0x58824d6b
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x58824d6b
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 68 20: mov ebp, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x58824d6d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 46 68: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B B5 00 00 00: lea ecx, [ebx + 0xb5]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 79: add edx, 0x79
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x79
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 13 E4 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 27: je 0x58824dc1
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes 8B 6C 24 2C: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes EB 02: jmp 0x58824dc9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE A4 00 00 00: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 73 7E 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7e
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 0A: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0a
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 77: je 0x58824e64
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 08: cmp dword ptr [eax + 0x164], 8
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 7E 0F: jle 0x58824e08
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x58824e08
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 68 20: mov ebp, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x58824e0a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 46 68: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B EB 00 00 00: lea ecx, [ebx + 0xeb]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 79: add edx, 0x79
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x79
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 76 E3 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 27: je 0x58824e5e
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes 8B 6C 24 2C: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes EB 02: jmp 0x58824e66
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE A8 00 00 00: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D6 7D 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7d
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 0B: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0b
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 77: je 0x58824f01
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 08: cmp dword ptr [eax + 0x164], 8
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 7E 0F: jle 0x58824ea5
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x58824ea5
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 68 20: mov ebp, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x58824ea7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 46 68: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B 21 01 00 00: lea ecx, [ebx + 0x121]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 79: add edx, 0x79
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x79
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 D9 E2 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe2
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 27: je 0x58824efb
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes 8B 6C 24 2C: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes EB 02: jmp 0x58824f03
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE AC 00 00 00: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 36 7D 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x7d
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 0C: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 44: je 0x58824f6c
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0A: jle 0x58824f3e
        __asm _emit 0x7e
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 02: jne 0x58824f40
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 93 85 00 00 00: lea edx, [ebx + 0x85]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 0A 02 00 00: lea edx, [ebp + 0x20a]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 36 8E F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8e
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58824f6e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B0 00 00 00: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CB 7C 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7c
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 0D: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0d
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 44: je 0x58824fd7
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0A: jle 0x58824fa9
        __asm _emit 0x7e
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 02: jne 0x58824fab
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 93 F1 00 00 00: lea edx, [ebx + 0xf1]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 0A 02 00 00: lea edx, [ebp + 0x20a]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 CB 8D F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58824fd9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B4 00 00 00: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 60 7C 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7c
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 0E: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0e
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 44: je 0x58825042
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0A: jle 0x58825014
        __asm _emit 0x7e
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 02: jne 0x58825016
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 93 27 01 00 00: lea edx, [ebx + 0x127]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 0A 02 00 00: lea edx, [ebp + 0x20a]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 60 8D F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825044
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B8 00 00 00: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F5 7B 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7b
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 0F: mov byte ptr [esp + 0x20], 0xf
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0f
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4C: je 0x588250b5
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 03: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 7E 12: jle 0x58825087
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x58825087
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 C0 00 00 00: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58825089
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 93 BB 00 00 00: lea edx, [ebx + 0xbb]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 FA 01 00 00: lea edx, [ebp + 0x1fa]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 ED 8C F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588250b7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 BC 00 00 00: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 82 7B 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x7b
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 10: mov byte ptr [esp + 0x20], 0x10
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4C: je 0x58825128
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 05: cmp dword ptr [ecx + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 7E 12: jle 0x588250fa
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x588250fa
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 40 01 00 00: add ecx, 0x140
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588250fc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 93 D5 00 00 00: lea edx, [ebx + 0xd5]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 FA 01 00 00: lea edx, [ebp + 0x1fa]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7A 8C F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882512a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C0 00 00 00: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0F 7B 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x7b
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 11: mov byte ptr [esp + 0x20], 0x11
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x11
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4C: je 0x5882519b
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 03: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 7E 12: jle 0x5882516d
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x5882516d
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 C0 00 00 00: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882516f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 93 27 01 00 00: lea edx, [ebx + 0x127]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 FA 01 00 00: lea edx, [ebp + 0x1fa]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 07 8C F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882519d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C4 00 00 00: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9C 7A 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7a
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 12: mov byte ptr [esp + 0x20], 0x12
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x12
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4C: je 0x5882520e
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 05: cmp dword ptr [ecx + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 7E 12: jle 0x588251e0
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x588251e0
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 40 01 00 00: add ecx, 0x140
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588251e2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 93 41 01 00 00: lea edx, [ebx + 0x141]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 C5 FA 01 00 00: add ebp, 0x1fa
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 94 8B F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x8b
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825210
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E 6C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x6c
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C8 00 00 00: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F8 DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EB DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A0 00 00 00: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DB DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A4 00 00 00: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CB DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A8 00 00 00: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BB DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E AC 00 00 00: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AB DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B0 00 00 00: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9B DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B4 00 00 00: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B8 00 00 00: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7B DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E BC 00 00 00: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6B DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 00 00 00: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5B DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C4 00 00 00: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4B DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C8 00 00 00: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3B DA 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 A0 00 00 00: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 A4 00 00 00: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 A8 00 00 00: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 AC 00 00 00: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 46 74: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 46 78: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x78
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 46 7C: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 5C: push 0x5c
        __asm _emit 0x6a
        __asm _emit 0x5c
        ; Exact mapped bytes E8 0D 79 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 13: mov byte ptr [esp + 0x20], 0x13
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x13
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 14: je 0x58825365
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 FD 4B F3 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x4b
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825367
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 CC 00 00 00: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A6 4B F3 FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x4b
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 CD 78 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 14: mov byte ptr [esp + 0x20], 0x14
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x14
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 76: je 0x58825409
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 0B: cmp dword ptr [eax + 0x164], 0xb
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        ; Exact mapped bytes 7E 0F: jle 0x588253ae
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x588253ae
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 68 2C: mov ebp, dword ptr [eax + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x2c
        ; Exact mapped bytes EB 02: jmp 0x588253b0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 81 C3 91 00 00 00: add ebx, 0x91
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C2 55: add edx, 0x55
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x55
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 CD DD 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xdd
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5882540b
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5882540b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D 86 D0 00 00 00: lea eax, [esi + 0xd0]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 24 01 00 00: mov dword ptr [esi + 0x124], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 3C 01 00 00 00: mov dword ptr [esp + 0x3c], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes BB 04 00 00 00: mov ebx, 4
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 17 78 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 34: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 20 15: mov byte ptr [esp + 0x20], 0x15
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x15
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 78: je 0x588254c1
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x5882546b
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 0F: jl 0x5882546b
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x5882546b
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 2C 18: mov ebp, dword ptr [eax + ebx]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x18
        ; Exact mapped bytes EB 02: jmp 0x5882546d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 15 DD 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xdd
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x588254c3
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588254c3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 38: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 83 44 24 3C 04: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x04
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 83 C3 10: add ebx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x10
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 FB 24: cmp ebx, 0x24
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x24
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 0F 8C 4A FF FF FF: jl 0x58825430
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 77 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x77
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 16: mov byte ptr [esp + 0x20], 0x16
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x16
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 76: je 0x58825575
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 00: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x5882551e
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x5882551e
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58825520
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 68 DC 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x58825577
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x58825577
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 5C 24 30: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 89 BE D8 00 00 00: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 F0 FF 00 00: mov eax, 0xfff0
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D8 00 00 00: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FB FF 00 00: mov ecx, 0xfffb
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8D 96 DC 00 00 00: lea edx, [esi + 0xdc]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 3C: mov dword ptr [esp + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 81 C3 92 00 00 00: add ebx, 0x92
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 38 07 00 00 00: mov dword ptr [esp + 0x38], 7
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 76 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x76
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 34: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 20 17: mov byte ptr [esp + 0x20], 0x17
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x17
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 7B: je 0x5882564a
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 00: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x588255ee
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x588255ee
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588255f0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C1 4E: add ecx, 0x4e
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x4e
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 93 DB 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5882564c
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 55 18: mov edx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 1C: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 1C: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4F 20: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5882564c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 3C: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes BA FB FF 00 00: mov edx, 0xfffb
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 C3 18: add ebx, 0x18
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x18
        ; Exact mapped bytes 83 6C 24 38 01: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 0F 85 41 FF FF FF: jne 0x588255b6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CF 75 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x75
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 18: mov byte ptr [esp + 0x20], 0x18
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 41: je 0x588256d0
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 7F 7F 7F 00: push 0x7f7f7f
        __asm _emit 0x68
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x00
        ; Exact mapped bytes 8D 91 32 01 00 00: lea edx, [ecx + 0x132]
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 3C: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8D BA C4 00 00 00: lea edi, [edx + 0xc4]
        __asm _emit 0x8d
        __asm _emit 0xba
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 81 C1 95 00 00 00: add ecx, 0x95
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C2 64: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 CC 00 00 00: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B2 4B F6 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x4b
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588256d2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F8 00 00 00: mov dword ptr [esi + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6A 75 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x75
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 19: mov byte ptr [esp + 0x20], 0x19
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x19
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 27: je 0x5882571d
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 92 DA 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882571f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 6C 24 30: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE FC 00 00 00: mov dword ptr [esi + 0xfc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9E 00 01 00 00: lea ebx, [esi + 0x100]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 92 00 00 00: add ebp, 0x92
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 3C 07 00 00 00: mov dword ptr [esp + 0x3c], 7
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 05 75 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x75
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 38: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 1A: mov byte ptr [esp + 0x20], 0x1a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x1a
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 2F: je 0x5882578a
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 81 C1 CA 00 00 00: add ecx, 0xca
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 25 DA 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882578c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 3B: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3b
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 83 6C 24 3C 01: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 75 A2: jne 0x58825742
        __asm _emit 0x75
        __asm _emit 0xa2
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A4 74 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x74
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 5C 24 30: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 7C 24 2C: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 1B: mov byte ptr [esp + 0x20], 0x1b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x1b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3C: je 0x588257fe
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 7F 7F 7F 00: push 0x7f7f7f
        __asm _emit 0x68
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x00
        ; Exact mapped bytes 8D 93 32 01 00 00: lea edx, [ebx + 0x132]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8F C0 01 00 00: lea ecx, [edi + 0x1c0]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 93 95 00 00 00: lea edx, [ebx + 0x95]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8F E3 00 00 00: lea ecx, [edi + 0xe3]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E CC 00 00 00: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
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
        ; Exact mapped bytes E8 84 4A F6 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825800
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 1C 01 00 00: mov dword ptr [esi + 0x11c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 39 74 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 1C: mov byte ptr [esp + 0x20], 0x1c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x1c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3C: je 0x58825861
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 7F 7F 7F 00: push 0x7f7f7f
        __asm _emit 0x68
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x00
        ; Exact mapped bytes 8D 93 32 01 00 00: lea edx, [ebx + 0x132]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8F 1C 02 00 00: lea ecx, [edi + 0x21c]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 93 95 00 00 00: lea edx, [ebx + 0x95]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 CC 00 00 00: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C7 C7 01 00 00: add edi, 0x1c7
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 21 4A F6 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4a
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825863
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 20 01 00 00: mov dword ptr [esi + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 73 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x73
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 1D: mov byte ptr [esp + 0x20], 0x1d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x1d
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 73: je 0x588258fa
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 0A: cmp dword ptr [eax + 0x164], 0xa
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 0F: jle 0x588258a2
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x588258a2
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 68 28: mov ebp, dword ptr [eax + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x28
        ; Exact mapped bytes EB 02: jmp 0x588258a4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4B 75: lea ecx, [ebx + 0x75]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x75
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 33: add edx, 0x33
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x33
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 DC D8 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x588258fc
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588258fc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 F8 00 00 00: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 28 01 00 00: mov dword ptr [esi + 0x128], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD FF FF FF 00: mov ebp, 0xffffff
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 89 68 6C: mov dword ptr [eax + 0x6c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 68 6C: mov dword ptr [eax + 0x6c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 86 20 01 00 00: mov eax, dword ptr [esi + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 68 6C: mov dword ptr [eax + 0x6c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 86 F8 00 00 00: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 18 00 00 00: mov edi, 0x18
        __asm _emit 0xbf
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 78 5C: mov dword ptr [eax + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 78 5C: mov dword ptr [eax + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 86 20 01 00 00: mov eax, dword ptr [esi + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 78 5C: mov dword ptr [eax + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x5c
        ; Exact mapped bytes E8 FD 72 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x72
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 1E: mov byte ptr [esp + 0x20], 0x1e
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x1e
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 40: je 0x588259a1
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 7F 7F 7F 00: push 0x7f7f7f
        __asm _emit 0x68
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B 32 01 00 00: lea ecx, [ebx + 0x132]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8D 91 C0 01 00 00: lea edx, [ecx + 0x1c0]
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 93 95 00 00 00: lea edx, [ebx + 0x95]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 CC 00 00 00: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 54 01 00 00: add ecx, 0x154
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 E1 48 F6 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x48
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588259a3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 2C 01 00 00: mov dword ptr [esi + 0x12c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 68 6C: mov dword ptr [eax + 0x6c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 86 2C 01 00 00: mov eax, dword ptr [esi + 0x12c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 78 5C: mov dword ptr [eax + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x5c
        ; Exact mapped bytes E8 8A 72 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x72
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 1F: mov byte ptr [esp + 0x20], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x1f
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 53: je 0x58825a27
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 06: cmp dword ptr [ecx + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 7E 12: jle 0x588259f2
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x588259f2
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 80 01 00 00: add ecx, 0x180
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588259f4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 7C 24 2C: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 93 48 01 00 00: lea edx, [ebx + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 97 E0 01 00 00: lea edx, [edi + 0x1e0]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E CC 00 00 00: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7B 83 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x83
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x58825a2d
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 7C 24 2C: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 30 01 00 00: mov dword ptr [esi + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0C 72 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x72
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 20: mov byte ptr [esp + 0x20], 0x20
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x20
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4F: je 0x58825aa1
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 03: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 7E 12: jle 0x58825a70
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x58825a70
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 C0 00 00 00: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58825a72
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 93 8C 00 00 00: lea edx, [ebx + 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 97 20 02 00 00: lea edx, [edi + 0x220]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E CC 00 00 00: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 01 83 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x83
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825aa3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 34 01 00 00: mov dword ptr [esi + 0x134], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 71 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x71
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 21: mov byte ptr [esp + 0x20], 0x21
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x21
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4F: je 0x58825b17
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 05: cmp dword ptr [ecx + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 7E 12: jle 0x58825ae6
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x58825ae6
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 40 01 00 00: add ecx, 0x140
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58825ae8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 CC 00 00 00: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 81 C3 37 01 00 00: add ebx, 0x137
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 81 C7 20 02 00 00: add edi, 0x220
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8B 82 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825b19
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E D0 00 00 00: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 38 01 00 00: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EC D1 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E D4 00 00 00: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DC D1 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 28 01 00 00: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CC D1 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 30 01 00 00: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BC D1 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 34 01 00 00: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AC D1 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 38 01 00 00: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9C D1 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 28 01 00 00: mov eax, dword ptr [esi + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 6A 5C: push 0x5c
        __asm _emit 0x6a
        __asm _emit 0x5c
        ; Exact mapped bytes E8 B4 70 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x70
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 22: mov byte ptr [esp + 0x20], 0x22
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x22
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 14: je 0x58825bbe
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A4 43 F3 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x43
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825bc0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 48 01 00 00: mov dword ptr [esi + 0x148], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4D 43 F3 FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x43
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes BD 02 00 00 00: mov ebp, 2
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 4C 01 00 00: lea eax, [esi + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6C 24 3C: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8D 5D 06: lea ebx, [ebp + 6]
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0x06
        ; Exact mapped bytes EB 09: jmp 0x58825bf4
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58825BF0 .. +0x709 bytes.
extern "C" __declspec(naked) void FUN_58824970_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 6C 24 3C: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 53 70 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x70
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 34: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 20 23: mov byte ptr [esp + 0x20], 0x23
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x23
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 74 00 00 00: je 0x58825c85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 39 A8 64 01 00 00: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x58825c2f
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 7C 0F: jl 0x58825c2f
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x58825c2f
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 2C 18: mov ebp, dword ptr [eax + ebx]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x18
        ; Exact mapped bytes EB 02: jmp 0x58825c31
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 30: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 48 01 00 00: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 51 D5 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd5
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x58825c87
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 1C: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4F 20: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x58825c87
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 38: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 83 44 24 3C 04: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x04
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 83 C3 10: add ebx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x10
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 FB 28: cmp ebx, 0x28
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x28
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 0F 8C 46 FF FF FF: jl 0x58825bf0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 6C 24 30: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8D 9E 54 01 00 00: lea ebx, [esi + 0x154]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 8D 00 00 00: add ebp, 0x8d
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 3C 08 00 00 00: mov dword ptr [esp + 0x3c], 8
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 85 6F 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 38: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 24: mov byte ptr [esp + 0x20], 0x24
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x24
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 2C: je 0x58825d07
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 48 01 00 00: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 83 C2 4A: add edx, 0x4a
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x4a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A8 D4 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd4
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58825d09
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 3B: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3b
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 83 6C 24 3C 01: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 75 A5: jne 0x58825cc2
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 6F 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6f
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 7C 24 30: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 5C 24 2C: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 25: mov byte ptr [esp + 0x20], 0x25
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x25
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 39: je 0x58825d78
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8F 2C 01 00 00: lea ecx, [edi + 0x12c]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 93 0F 01 00 00: lea edx, [ebx + 0x10f]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 97 92 00 00 00: lea edx, [edi + 0x92]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4B 65: lea ecx, [ebx + 0x65]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x65
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 48 01 00 00: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0A 45 F6 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x45
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825d7a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 01 00 00: mov dword ptr [esi + 0x174], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF 6E 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x6e
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 26: mov byte ptr [esp + 0x20], 0x26
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x26
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4C: je 0x58825deb
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 07: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 7E 12: jle 0x58825dbd
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x58825dbd
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 C0 01 00 00: add ecx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58825dbf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 97 44 01 00 00: lea edx, [edi + 0x144]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 53 7C: lea edx, [ebx + 0x7c]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x7c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 48 01 00 00: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B7 7F F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7f
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825ded
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 78 01 00 00: mov dword ptr [esi + 0x178], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4C 6E 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6e
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 27: mov byte ptr [esp + 0x20], 0x27
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x27
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4F: je 0x58825e61
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 08: cmp dword ptr [ecx + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 7E 12: jle 0x58825e30
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x58825e30
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 00 02 00 00: add ecx, 0x200
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58825e32
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 97 44 01 00 00: lea edx, [edi + 0x144]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 93 D7 00 00 00: lea edx, [ebx + 0xd7]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 48 01 00 00: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 41 7F F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7f
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825e63
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 7C 01 00 00: mov dword ptr [esi + 0x17c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D6 6D 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6d
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 28: mov byte ptr [esp + 0x20], 0x28
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x28
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4F: je 0x58825ed7
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 03: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 7E 12: jle 0x58825ea6
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x58825ea6
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 C0 00 00 00: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58825ea8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 97 87 00 00 00: lea edx, [edi + 0x87]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 93 11 01 00 00: lea edx, [ebx + 0x111]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 48 01 00 00: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 CB 7E F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7e
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825ed9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 80 01 00 00: mov dword ptr [esi + 0x180], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 60 6D 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x6d
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 29: mov byte ptr [esp + 0x20], 0x29
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x29
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4F: je 0x58825f4d
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 05: cmp dword ptr [ecx + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 7E 12: jle 0x58825f1c
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x58825f1c
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 40 01 00 00: add ecx, 0x140
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58825f1e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 48 01 00 00: mov edx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 81 C7 33 01 00 00: add edi, 0x133
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 81 C3 11 01 00 00: add ebx, 0x111
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 55 7E F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x7e
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58825f4f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 6C 24 30: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 84 01 00 00: mov dword ptr [esi + 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9E 94 01 00 00: lea ebx, [esi + 0x194]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 9C 00 00 00: add ebp, 0x9c
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 3C 03 00 00 00: mov dword ptr [esp + 0x3c], 3
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 D5 6C 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6c
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 38: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 2A: mov byte ptr [esp + 0x20], 0x2a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x2a
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 32: je 0x58825fbd
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 48 01 00 00: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D F1: lea ecx, [ebp - 0xf]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf1
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 81 C2 35 01 00 00: add edx, 0x135
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 F2 D1 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58825fbf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 7B F4: mov dword ptr [ebx - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 80 6C 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x6c
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 2B: mov byte ptr [esp + 0x20], 0x2b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x2b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 40: je 0x5882601e
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 8A FC 01 00 00: lea ecx, [edx + 0x1fc]
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 44: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 81 C1 92 00 00 00: add ecx, 0x92
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 48 01 00 00: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 4F 01 00 00: add edx, 0x14f
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 64 D2 F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd2
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826020
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes E8 20 6C 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6c
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 38: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 2C: mov byte ptr [esp + 0x20], 0x2c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x2c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 32: je 0x58826072
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 48 01 00 00: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 55 5D: lea edx, [ebp + 0x5d]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x5d
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 81 C1 35 01 00 00: add ecx, 0x135
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 3D D1 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58826074
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 7B 0C: mov dword ptr [ebx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7b
        __asm _emit 0x0c
        ; Exact mapped bytes E8 CB 6B 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6b
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 2D: mov byte ptr [esp + 0x20], 0x2d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x2d
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 43: je 0x588260d6
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 55 6B: lea edx, [ebp + 0x6b]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x6b
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 91 FC 01 00 00: lea edx, [ecx + 0x1fc]
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 44: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 81 C2 FD 00 00 00: add edx, 0xfd
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 48 01 00 00: mov edx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 4F 01 00 00: add ecx, 0x14f
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AC D1 F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd1
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588260d8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 43 18: mov dword ptr [ebx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x18
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 83 6C 24 3C 01: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 81 FE FF FF: jne 0x58825f72
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 56 6B 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6b
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 2E: mov byte ptr [esp + 0x20], 0x2e
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x2e
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 7A 00 00 00: je 0x58826188
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 0C: cmp dword ptr [eax + 0x164], 0xc
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        ; Exact mapped bytes 7E 0F: jle 0x58826129
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x58826129
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 68 30: mov ebp, dword ptr [eax + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x30
        ; Exact mapped bytes EB 02: jmp 0x5882612b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 5C 24 30: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 48 01 00 00: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B 84 00 00 00: lea ecx, [ebx + 0x84]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 3B: add edx, 0x3b
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x3b
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 4E D0 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd0
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2F: je 0x5882618e
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 06: jmp 0x5882618e
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 5C 24 30: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE B8 01 00 00: mov dword ptr [esi + 0x1b8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AE 6A 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x6a
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 2F: mov byte ptr [esp + 0x20], 0x2f
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x2f
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 79 00 00 00: je 0x5882622f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 0D: cmp dword ptr [eax + 0x164], 0xd
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 7E 0F: jle 0x588261d1
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x588261d1
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 68 34: mov ebp, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x34
        ; Exact mapped bytes EB 02: jmp 0x588261d3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 48 01 00 00: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B 84 00 00 00: lea ecx, [ebx + 0x84]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 81 C2 24 01 00 00: add edx, 0x124
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A7 CF 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xcf
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x58826231
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x58826231
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE BC 01 00 00: mov dword ptr [esi + 0x1bc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B 6A 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6a
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 30: mov byte ptr [esp + 0x20], 0x30
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x30
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 79 00 00 00: je 0x588262d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 0D: cmp dword ptr [eax + 0x164], 0xd
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 7E 0F: jle 0x58826274
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x58826274
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 68 34: mov ebp, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x34
        ; Exact mapped bytes EB 02: jmp 0x58826276
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 48 01 00 00: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B F0 00 00 00: lea ecx, [ebx + 0xf0]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 81 C2 24 01 00 00: add edx, 0x124
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 04 CF 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xcf
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x588262d4
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588262d4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE C0 01 00 00: mov dword ptr [esi + 0x1c0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D AB FC 00 00 00: lea ebp, [ebx + 0xfc]
        __asm _emit 0x8d
        __asm _emit 0xab
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5C 24 2C: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE D0 01 00 00: lea edi, [esi + 0x1d0]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 3C 03 00 00 00: mov dword ptr [esp + 0x3c], 3
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x58826300
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58826300 .. +0xC1F bytes.
extern "C" __declspec(naked) void FUN_58824970_segment_02() {
    __asm {
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 44 69 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x69
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 31: mov byte ptr [esp + 0x20], 0x31
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x31
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 48: je 0x58826362
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0E: jle 0x58826334
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 04: je 0x58826334
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes EB 02: jmp 0x58826336
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 4D 94: lea ecx, [ebp - 0x6c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x94
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 8B 03 02 00 00: lea ecx, [ebx + 0x203]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 48 01 00 00: mov edx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 40 7A F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826364
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 F4: mov dword ptr [edi - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xf4
        ; Exact mapped bytes E8 D8 68 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x68
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 32: mov byte ptr [esp + 0x20], 0x32
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x32
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 41: je 0x588263c7
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0A: jle 0x5882639c
        __asm _emit 0x7e
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 02: jne 0x5882639e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 93 03 02 00 00: lea edx, [ebx + 0x203]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 48 01 00 00: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 DB 79 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x79
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588263c9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 07: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 74 68 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 33: mov byte ptr [esp + 0x20], 0x33
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x33
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 44: je 0x5882642e
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0A: jle 0x58826400
        __asm _emit 0x7e
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 02: jne 0x58826402
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 55 94: lea edx, [ebp - 0x6c]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x94
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 93 03 02 00 00: lea edx, [ebx + 0x203]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 48 01 00 00: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 74 79 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x79
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826430
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes E8 0C 68 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x68
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C6 44 24 20 34: mov byte ptr [esp + 0x20], 0x34
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x34
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 41: je 0x58826493
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0A: jle 0x58826468
        __asm _emit 0x7e
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 02: jne 0x5882646a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 93 03 02 00 00: lea edx, [ebx + 0x203]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 48 01 00 00: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0F 79 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x79
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826495
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4F F4: mov ecx, dword ptr [edi - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xf4
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes E8 76 C8 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6A C8 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5D C8 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 18: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 50 C8 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 C5 16: add ebp, 0x16
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x16
        ; Exact mapped bytes 83 6C 24 3C 01: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 1F FE FF FF: jne 0x58826300
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 4C 01 00 00: mov ecx, dword ptr [esi + 0x14c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 2F C8 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 50 01 00 00: mov ecx, dword ptr [esi + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1F C8 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 78 01 00 00: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0F C8 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 7C 01 00 00: mov ecx, dword ptr [esi + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF C7 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 78 01 00 00: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EF C7 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 7C 01 00 00: mov ecx, dword ptr [esi + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DF C7 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 01 00 00: mov ecx, dword ptr [esi + 0x180]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CF C7 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 84 01 00 00: mov ecx, dword ptr [esi + 0x184]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF C7 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B8 01 00 00: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AF C7 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E BC 01 00 00: mov ecx, dword ptr [esi + 0x1bc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9F C7 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 01 00 00: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8F C7 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 B8 01 00 00: mov eax, dword ptr [esi + 0x1b8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 BC 01 00 00: mov eax, dword ptr [esi + 0x1bc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 C0 01 00 00: mov eax, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 6A 5C: push 0x5c
        __asm _emit 0x6a
        __asm _emit 0x5c
        ; Exact mapped bytes E8 91 66 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x66
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 35: mov byte ptr [esp + 0x20], 0x35
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x35
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 14: je 0x588265e1
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 81 39 F3 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588265e3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 20 02 00 00: mov dword ptr [esi + 0x220], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2A 39 F3 FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8D 86 24 02 00 00: lea eax, [esi + 0x224]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 3C 03 00 00 00: mov dword ptr [esp + 0x3c], 3
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes BB 0C 00 00 00: mov ebx, 0xc
        __asm _emit 0xbb
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 37 66 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x66
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 34: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 20 36: mov byte ptr [esp + 0x20], 0x36
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x36
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x588266a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x5882664f
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 0F: jl 0x5882664f
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x5882664f
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 2C 18: mov ebp, dword ptr [eax + ebx]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x18
        ; Exact mapped bytes EB 02: jmp 0x58826651
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 20 02 00 00: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 31 CB 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xcb
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x588266a7
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x588266a7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 38: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 83 44 24 3C 04: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x04
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 83 C3 10: add ebx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x10
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 FB 2C: cmp ebx, 0x2c
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 0F 8C 46 FF FF FF: jl 0x58826610
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 7D 65 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x65
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 7C 24 30: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 5C 24 2C: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 37: mov byte ptr [esp + 0x20], 0x37
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x37
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3B: je 0x58826724
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8F AA 00 00 00: lea ecx, [edi + 0xaa]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 93 2D 01 00 00: lea edx, [ebx + 0x12d]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8F 9E 00 00 00: lea ecx, [edi + 0x9e]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 53 5B: lea edx, [ebx + 0x5b]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x5b
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 20 02 00 00: mov edx, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5E CB F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xcb
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826726
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 2C 02 00 00: mov dword ptr [esi + 0x22c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 16 65 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x65
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 38: mov byte ptr [esp + 0x20], 0x38
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x38
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3E: je 0x58826786
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8F AA 00 00 00: lea ecx, [edi + 0xaa]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 93 C5 01 00 00: lea edx, [ebx + 0x1c5]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8F 9E 00 00 00: lea ecx, [edi + 0x9e]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 93 60 01 00 00: lea edx, [ebx + 0x160]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 20 02 00 00: mov edx, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 FC CA F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xca
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826788
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 30 02 00 00: mov dword ptr [esi + 0x230], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 64 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x64
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 39: mov byte ptr [esp + 0x20], 0x39
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x39
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3E: je 0x588267e8
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8F C8 00 00 00: lea ecx, [edi + 0xc8]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 93 C5 01 00 00: lea edx, [ebx + 0x1c5]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 20 02 00 00: mov edx, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C7 BC 00 00 00: add edi, 0xbc
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 81 C3 60 01 00 00: add ebx, 0x160
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 9A CA F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xca
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588267ea
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 5C 24 30: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 81 C3 19 01 00 00: add ebx, 0x119
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 20 00: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 34 02 00 00: mov dword ptr [esi + 0x234], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 48 02 00 00: lea edi, [esi + 0x248]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 3C: mov dword ptr [esp + 0x3c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C7 44 24 38 02 00 00 00: mov dword ptr [esp + 0x38], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 36 64 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x64
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 34: mov dword ptr [esp + 0x34], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 20 3A: mov byte ptr [esp + 0x20], 0x3a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x3a
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x588268ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 35: cmp dword ptr [eax + 0x164], 0x35
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x35
        ; Exact mapped bytes 7E 12: jle 0x5882684c
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x5882684c
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 98 D4 00 00 00: mov ebx, dword ptr [eax + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882684e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 86 20 02 00 00: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 83 C1 E6: add ecx, -0x1a
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xe6
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 5F: add edx, 0x5f
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x5f
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 2E C9 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 00 5C C5 98 58: mov dword ptr [ebp], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5D 50: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x50
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 26: je 0x588268a6
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 43 10: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x10
        ; Exact mapped bytes 89 45 0C: mov dword ptr [ebp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4B 14: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x14
        ; Exact mapped bytes 8D 43 18: lea eax, [ebx + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x18
        ; Exact mapped bytes 89 4D 10: mov dword ptr [ebp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 89 55 14: mov dword ptr [ebp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 4D 18: mov dword ptr [ebp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 55 1C: mov dword ptr [ebp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 20: mov dword ptr [ebp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 8B 5C 24 3C: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes EB 02: jmp 0x588268b0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 0C 01 00 00: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 F0: mov dword ptr [edi - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xf0
        ; Exact mapped bytes E8 8C 63 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x63
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 6C 24 2C: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 3B: mov byte ptr [esp + 0x20], 0x3b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x3b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 38: je 0x5882690e
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 8D CE 01 00 00: lea ecx, [ebp + 0x1ce]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 53 E4: lea edx, [ebx - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0xe4
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8D 8F 00 00 00: lea ecx, [ebp + 0x8f]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 20 02 00 00: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 84 A7 F3 FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826910
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 F8: mov dword ptr [edi - 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xf8
        ; Exact mapped bytes E8 2C 63 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x63
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 3C: mov byte ptr [esp + 0x20], 0x3c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4C: je 0x5882697e
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 09: cmp dword ptr [ecx + 0x160], 9
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        ; Exact mapped bytes 7E 12: jle 0x58826950
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x58826950
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 40 02 00 00: add ecx, 0x240
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58826952
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 53 E1: lea edx, [ebx - 0x1f]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0xe1
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 DD 01 00 00: lea edx, [ebp + 0x1dd]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 20 02 00 00: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 24 74 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826980
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 07: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 BD 62 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x62
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 20 3D: mov byte ptr [esp + 0x20], 0x3d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x3d
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4C: je 0x588269ed
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 0A: cmp dword ptr [ecx + 0x160], 0xa
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 12: jle 0x588269bf
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x588269bf
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 80 02 00 00: add ecx, 0x280
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588269c1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 53 E1: lea edx, [ebx - 0x1f]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0xe1
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 FF 01 00 00: lea edx, [ebp + 0x1ff]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 20 02 00 00: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B5 73 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588269ef
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4F F0: mov ecx, dword ptr [edi - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xf0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 08: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes E8 1C C3 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 10 C3 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 08: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 C3 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 F8: mov eax, dword ptr [edi - 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0xf8
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 83 C3 36: add ebx, 0x36
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x36
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 6C 24 38 01: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        ; Exact mapped bytes 89 5C 24 3C: mov dword ptr [esp + 0x3c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 0F 85 D3 FD FF FF: jne 0x58826811
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 09 62 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x62
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 2C: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes C6 44 24 20 3E: mov byte ptr [esp + 0x20], 0x3e
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x3e
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 77 00 00 00: je 0x58826ad4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 B8 64 01 00 00 10: cmp dword ptr [eax + 0x164], 0x10
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 7E 0F: jle 0x58826a78
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 05: je 0x58826a78
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 58 40: mov ebx, dword ptr [eax + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x40
        ; Exact mapped bytes EB 02: jmp 0x58826a7a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 86 20 02 00 00: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 E8 00 00 00: add ecx, 0xe8
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 55 4C: lea edx, [ebp + 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x4c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 03 C7 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 26: je 0x58826ad0
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 43 10: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4B 14: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x14
        ; Exact mapped bytes 8D 43 18: lea eax, [ebx + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 4F 18: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 1C: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 47 20: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes EB 02: jmp 0x58826ad6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 58 02 00 00: mov dword ptr [esi + 0x258], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 63 61 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x61
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 3F: mov byte ptr [esp + 0x20], 0x3f
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x3f
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 53: je 0x58826b4e
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 03: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 7E 12: jle 0x58826b19
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 08: je 0x58826b19
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 C0 00 00 00: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58826b1b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 7C 24 30: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 97 F2 00 00 00: lea edx, [edi + 0xf2]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 22 02 00 00: lea edx, [ebp + 0x222]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 20 02 00 00: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 54 72 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x58826b54
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 7C 24 30: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 5C 02 00 00: mov dword ptr [esi + 0x25c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E5 60 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x60
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 40: mov byte ptr [esp + 0x20], 0x40
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x40
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 4F: je 0x58826bc8
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 05: cmp dword ptr [ecx + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 7E 12: jle 0x58826b97
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 08: je 0x58826b97
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 40 01 00 00: add ecx, 0x140
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58826b99
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 97 4D 01 00 00: lea edx, [edi + 0x14d]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 22 02 00 00: lea edx, [ebp + 0x222]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 20 02 00 00: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 DA 71 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x71
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826bca
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 24 02 00 00: mov ecx, dword ptr [esi + 0x224]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 60 02 00 00: mov dword ptr [esi + 0x260], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3B C1 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 28 02 00 00: mov ecx, dword ptr [esi + 0x228]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2B C1 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 58 02 00 00: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1B C1 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 5C 02 00 00: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B C1 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 60 02 00 00: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FB C0 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc0
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 58 02 00 00: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 10 60 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x60
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 41: mov byte ptr [esp + 0x20], 0x41
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x41
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 43: je 0x58826c91
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 01: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0F: jle 0x58826c69
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 05: je 0x58826c69
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 C1 40: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x40
        ; Exact mapped bytes EB 02: jmp 0x58826c6b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 57 64: lea edx, [edi + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x64
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 95 01 02 00 00: lea edx, [ebp + 0x201]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 11 71 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x71
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826c93
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 70 02 00 00: mov dword ptr [esi + 0x270], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A6 5F 15 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5f
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 24 20 42: mov byte ptr [esp + 0x20], 0x42
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x42
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 43: je 0x58826cfb
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 83 B9 60 01 00 00 02: cmp dword ptr [ecx + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 7E 0F: jle 0x58826cd3
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 05: je 0x58826cd3
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 E9 80: sub ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x80
        ; Exact mapped bytes EB 02: jmp 0x58826cd5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 83 C7 64: add edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x64
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 81 C5 2D 02 00 00: add ebp, 0x22d
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A7 70 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x70
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58826cfd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 70 02 00 00: mov ecx, dword ptr [esi + 0x270]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 02 00 00: mov dword ptr [esi + 0x274], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 08 C0 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 02 00 00: mov ecx, dword ptr [esi + 0x274]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F8 BF 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 9E 78 02 00 00: mov dword ptr [esi + 0x278], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 84 00 00 00: mov word ptr [esi + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 88 00 00 00: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 46 60 01: mov byte ptr [esi + 0x60], 1
        __asm _emit 0xc6
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 8E 8C 00 00 00: mov word ptr [esi + 0x8c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 90 00 00 00: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 94 00 00 00: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 98 00 00 00: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8D 86 D8 00 00 00: lea eax, [esi + 0xd8]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 3C 01 00 00: mov dword ptr [esi + 0x13c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 44 01 00 00: mov dword ptr [esi + 0x144], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 88 8E 9C 00 00 00: mov byte ptr [esi + 0x9c], cl
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 8E 9D 00 00 00: mov byte ptr [esi + 0x9d], cl
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 40 01 00 00: mov word ptr [esi + 0x140], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes BF B0 AA 9B 58: mov edi, 0x589baab0
        __asm _emit 0xbf
        __asm _emit 0xb0
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 83 7F E4 00: cmp dword ptr [edi - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0xe4
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x58826ea5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 07: movzx eax, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x07
        ; Exact mapped bytes B9 A9 00 00 00: mov ecx, 0xa9
        __asm _emit 0xb9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 1B: jne 0x58826dc6
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 83 FD 08: cmp ebp, 8
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x08
        ; Exact mapped bytes 0F 8D F1 00 00 00: jge 0x58826ea5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 57 02: movzx edx, byte ptr [edi + 2]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x57
        __asm _emit 0x02
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 50: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x58826ea5
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 21 08 00 00: mov edx, 0x821
        __asm _emit 0xba
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 08: jne 0x58826dd8
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes B8 29 08 00 00: mov eax, 0x829
        __asm _emit 0xb8
        __asm _emit 0x29
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes 68 70 70 70 00: push 0x707070
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4F E0: lea ecx, [edi - 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E F8 00 00 00: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 57 E8: lea edx, [edi - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0xe8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 E0 1A 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1a
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 FD 08: cmp ebp, 8
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x08
        ; Exact mapped bytes 7D 0D: jge 0x58826e02
        __asm _emit 0x7d
        __asm _emit 0x0d
        ; Exact mapped bytes 0F B6 47 02: movzx eax, byte ptr [edi + 2]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x47
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 89 42 50: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 59: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        ; Exact mapped bytes 7E 17: jle 0x58826e27
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58826e27
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 64 01 00 00: mov eax, dword ptr [eax + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58826e29
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 70 70 70 00: push 0x707070
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 44 DC 99 58: push 0x5899dc44
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xdc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8B 1A 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x1a
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 70 70 00: push 0x707070
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 20 DC 99 58: push 0x5899dc20
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xdc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 8E 20 01 00 00: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6E 1A 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1a
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 59: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        ; Exact mapped bytes 7E 17: jle 0x58826e87
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58826e87
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 64 01 00 00: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58826e89
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 70 70 70 00: push 0x707070
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 44 DC 99 58: push 0x5899dc44
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xdc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 8E 2C 01 00 00: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2B 1A 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1a
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 44 24 2C 04: add dword ptr [esp + 0x2c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x04
        ; Exact mapped bytes 81 C7 84 0E 00 00: add edi, 0xe84
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 81 FF 54 2D 9C 58: cmp edi, 0x589c2d54
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x54
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 8C D7 FE FF FF: jl 0x58826d94
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 66 89 96 F4 01 00 00: mov word ptr [esi + 0x1f4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 03 02 00 00: lea ecx, [esi + 0x203]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 14 02 00 00: lea eax, [esi + 0x214]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 03 00 00 00: mov edx, 3
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 41 FD 00: mov byte ptr [ecx - 3], 0
        __asm _emit 0xc6
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0x00
        ; Exact mapped bytes C6 01 00: mov byte ptr [ecx], 0
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 78 F4: mov dword ptr [eax - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0xf4
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 EB: jne 0x58826ee0
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 88 96 64 02 00 00: mov byte ptr [esi + 0x264], dl
        __asm _emit 0x88
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 68 02 00 00: mov dword ptr [esi + 0x268], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 96 6C 02 00 00: mov byte ptr [esi + 0x26c], dl
        __asm _emit 0x88
        __asm _emit 0x96
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
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
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
