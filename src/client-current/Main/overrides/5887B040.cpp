// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B040 .. +0x1FB bytes.
extern "C" __declspec(naked) void FUN_5887b040_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 08 08 00 00: sub esp, 0x808
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 04 08 00 00: mov dword ptr [esp + 0x804], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 68 FF 03 00 00: push 0x3ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 19: lea eax, [esp + 0x19]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x19
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes C6 44 24 20 20: mov byte ptr [esp + 0x20], 0x20
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x20
        ; Exact mapped bytes E8 D8 1B 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x1b
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF 03 00 00: push 0x3ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 25 04 00 00: lea ecx, [esp + 0x425]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes C6 84 24 2C 04 00 00 20: mov byte ptr [esp + 0x42c], 0x20
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes E8 BC 1B 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1b
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 7C 24 10: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 53 74: mov edx, dword ptr [ebx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x74
        ; Exact mapped bytes 8A 44 3A 44: mov al, byte ptr [edx + edi + 0x44]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x3a
        __asm _emit 0x44
        ; Exact mapped bytes 88 84 34 14 04 00 00: mov byte ptr [esp + esi + 0x414], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 74 16: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 3C 09: cmp al, 9
        __asm _emit 0x3c
        __asm _emit 0x09
        ; Exact mapped bytes 74 12: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 3C 0A: cmp al, 0xa
        __asm _emit 0x3c
        __asm _emit 0x0a
        ; Exact mapped bytes 74 0E: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0A: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 3C 0D: cmp al, 0xd
        __asm _emit 0x3c
        __asm _emit 0x0d
        ; Exact mapped bytes 74 06: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x5887b1f8
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 8D 04 2E: lea eax, [esi + ebp]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x2e
        ; Exact mapped bytes 83 F8 32: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x32
        ; Exact mapped bytes 8D 4C 24 14: lea ecx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F 8F 80 00 00 00: jg 0x5887b159
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 00 04 00 00: mov eax, 0x400
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 39 00: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x5887b0ed
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 F5: jne 0x5887b0e0
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes EB 55: jmp 0x5887b142
        __asm _emit 0xeb
        __asm _emit 0x55
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 51: je 0x5887b142
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes BA 00 04 00 00: mov edx, 0x400
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 04 00 00: mov ecx, 0x400
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 8D 44 14 14: lea eax, [esp + edx + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x14
        ; Exact mapped bytes 74 33: je 0x5887b138
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8D BC 24 14 04 00 00: lea edi, [esp + 0x414]
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B4 11 FF FB FF 7F: lea esi, [ecx + edx + 0x7ffffbff]
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 17: je 0x5887b130
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8A 14 07: mov dl, byte ptr [edi + eax]
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x07
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 74 10: je 0x5887b130
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 88 10: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 4E: dec esi
        __asm _emit 0x4e
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 EC: jne 0x5887b115
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes EB 0F: jmp 0x5887b13f
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 07: jne 0x5887b13b
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes EB 04: jmp 0x5887b13f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 32: push 0x32
        __asm _emit 0x6a
        __asm _emit 0x32
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8D 84 24 18 04 00 00: lea eax, [esp + 0x418]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F4 1A 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB 51: jmp 0x5887b1aa
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8B B8 01 00 00: mov ecx, dword ptr [ebx + 0x1b8]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 64 D7 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd7
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B EE: mov ebp, esi
        __asm _emit 0x8b
        __asm _emit 0xee
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8D 54 24 18: lea edx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 C8 1A 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 20 04 00 00: lea eax, [esp + 0x420]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 24: lea ecx, [esp + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 F5 1C 10 00: call 0x5897ce8c
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 6A 32: push 0x32
        __asm _emit 0x6a
        __asm _emit 0x32
        ; Exact mapped bytes 8D 94 24 30 04 00 00: lea edx, [esp + 0x430]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 A1 1A 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 24: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x24
        ; Exact mapped bytes 8B 43 74: mov eax, dword ptr [ebx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x74
        ; Exact mapped bytes 8A 44 38 44: mov al, byte ptr [eax + edi + 0x44]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x38
        __asm _emit 0x44
        ; Exact mapped bytes 3C 0A: cmp al, 0xa
        __asm _emit 0x3c
        __asm _emit 0x0a
        ; Exact mapped bytes 74 56: je 0x5887b20b
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 52: je 0x5887b20b
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 3C 0D: cmp al, 0xd
        __asm _emit 0x3c
        __asm _emit 0x0d
        ; Exact mapped bytes 75 3B: jne 0x5887b1f8
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 7E 0A: jle 0x5887b1cb
        __asm _emit 0x7e
        __asm _emit 0x0a
        ; Exact mapped bytes C6 44 2C 13 20: mov byte ptr [esp + ebp + 0x13], 0x20
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x2c
        __asm _emit 0x13
        __asm _emit 0x20
        ; Exact mapped bytes C6 44 2C 14 00: mov byte ptr [esp + ebp + 0x14], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x2c
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4C 24 1C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8B B8 01 00 00: mov ecx, dword ptr [ebx + 0x1b8]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes E8 EB D6 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 18: lea edx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 53 1A 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 89 7C 24 10: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 81 FF 00 04 00 00: cmp edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 82 97 FE FF FF: jb 0x5887b0a0
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x5887b222
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes 8B 8B B8 01 00 00: mov ecx, dword ptr [ebx + 0x1b8]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AE D6 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 14 08 00 00: mov ecx, dword ptr [esp + 0x814]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 A6 19 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 08 08 00 00: add esp, 0x808
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
