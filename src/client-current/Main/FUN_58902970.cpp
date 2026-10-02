// Complete Ghidra body ranges for the selected function.
// 4 discontiguous segments; total 490 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902970 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58902970_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 B0 A7 98 58: push 0x5898a7b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xa7
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
        ; Exact mapped bytes 83 EC 50: sub esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x50
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 44 24 4C: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
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
        ; Exact mapped bytes 8D 44 24 64: lea eax, [esp + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 74: mov eax, dword ptr [esp + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 4C 24 78: mov ecx, dword ptr [esp + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x78
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 6C 24 1C: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8D 48 01: lea ecx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x01
        ; Exact mapped bytes EB 03: jmp 0x589029c0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589029C0 .. +0x109 bytes.
extern "C" __declspec(naked) void FUN_58902970_segment_01() {
    __asm {
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 F9: jne 0x589029c0
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes C7 44 24 5C 0F 00 00 00: mov dword ptr [esp + 0x5c], 0xf
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 58: mov dword ptr [esp + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 88 5C 24 48: mov byte ptr [esp + 0x48], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8D 70 01: lea esi, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0x01
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 5C 24 70: mov dword ptr [esp + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 89 5C 24 1C: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 42 EB 06 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 7C 24 34: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes E8 4E A2 07 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa2
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 30: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 57 F1 E2 FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf1
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 5D 04: mov dword ptr [ebp + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x04
        ; Exact mapped bytes E8 A0 A4 07 00: call 0x5897cebc
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x58902b00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 50 01: lea edx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58902a35
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 8D 7D 01: lea edi, [ebp + 1]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0x01
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 E5 EA 06 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 F4 A1 07 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 01 F1 E2 FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf1
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 2E FF 0D: cmp byte ptr [esi + ebp - 1], 0xd
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0x0d
        ; Exact mapped bytes 75 05: jne 0x58902a6b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes C6 44 2E FF 00: mov byte ptr [esi + ebp - 1], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes C7 44 24 40 0F 00 00 00: mov dword ptr [esp + 0x40], 0xf
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 3C 00 00 00 00: mov dword ptr [esp + 0x3c], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 8D 50 01: lea edx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58902a85
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 4C 24 30: lea ecx, [esp + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes E8 67 25 E3 FF: call 0x58735000
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x25
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 30: lea edx, [esp + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 4C 24 50: lea ecx, [esp + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes C6 44 24 78 01: mov byte ptr [esp + 0x78], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x01
        ; Exact mapped bytes E8 70 24 E3 FF: call 0x58734f20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x24
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes 83 7C 24 40 10: cmp dword ptr [esp + 0x40], 0x10
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x10
        ; Exact mapped bytes C6 44 24 6C 00: mov byte ptr [esp + 0x6c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x00
        ; Exact mapped bytes 72 0D: jb 0x58902ac9
        __asm _emit 0x72
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7C A1 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902AC9 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_58902970_segment_02() {
    __asm {
        ; Exact mapped bytes 8D 4C 24 44: lea ecx, [esp + 0x44]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E8 E6 FD FF FF: call 0x589028c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 54 24 18: lea edx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 D1 A3 07 00: call 0x5897cebc
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 85 38 FF FF FF: jne 0x58902a30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 7C 24 24: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 6C 24 1C: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 09: je 0x58902b0d
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 1C A3 07 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 2B 4D 14: sub ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes C1 EE 1F: shr esi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0x1f
        ; Exact mapped bytes 03 F2: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xf2
        ; Exact mapped bytes 83 7C 24 5C 10: cmp dword ptr [esp + 0x5c], 0x10
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x10
        ; Exact mapped bytes 72 0D: jb 0x58902b3a
        __asm _emit 0x72
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 4C 24 48: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 0B A1 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902B3A .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58902970_segment_03() {
    __asm {
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 4C 24 64: mov ecx, dword ptr [esp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x64
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
        ; Exact mapped bytes 8B 4C 24 4C: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 83 A0 07 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 5C: add esp, 0x5c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x5c
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
