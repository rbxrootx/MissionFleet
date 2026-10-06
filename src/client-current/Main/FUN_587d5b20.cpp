// Complete Ghidra body ranges for the selected function.
// 6 discontiguous segments; total 2296 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D5B20 .. +0x1B8 bytes.
extern "C" __declspec(naked) void FUN_587d5b20_segment_00() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A8 04: test al, 4
        __asm _emit 0xa8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 08 09 00 00: je 0x587d6438
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes BA 00 1F 00 00: mov edx, 0x1f00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 01 00 00: mov eax, 0x100
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 64 00 00 00: mov edi, 0x64
        __asm _emit 0xbf
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 5F 9D: lea ebx, [edi - 0x63]
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x9d
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 15: je 0x587d5b66
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 04 00 00: mov eax, 0x400
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 13 02 00 00: jne 0x587d5d79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B 46 54: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x54
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 3E: je 0x587d5bae
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 8D 48 07: lea ecx, [eax + 7]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x07
        ; Exact mapped bytes 83 F9 0E: cmp ecx, 0xe
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0e
        ; Exact mapped bytes 77 23: ja 0x587d5b9d
        __asm _emit 0x77
        __asm _emit 0x23
        ; Exact mapped bytes 8D 50 03: lea edx, [eax + 3]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x03
        ; Exact mapped bytes 83 FA 06: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 77 14: ja 0x587d5b96
        __asm _emit 0x77
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 05: jge 0x587d5b8b
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes EB 1B: jmp 0x587d5ba6
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 9F C1: setg cl
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc1
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes EB 10: jmp 0x587d5ba6
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes EB 09: jmp 0x587d5ba6
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F2 D2 12 00: call 0x58902ea0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd2
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 5C: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 2A: je 0x587d5be2
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x587d5bcb
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 83 FA 20: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 7F 03: jg 0x587d5bc6
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 15: jmp 0x587d5bdb
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 83 C1 20: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes EB 0F: jmp 0x587d5bda
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 83 FA 20: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 7F 03: jg 0x587d5bd7
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 04: jmp 0x587d5bdb
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 E0: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 3E D1 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd1
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 58: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4E 28: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x28
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 2A: je 0x587d5c16
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x587d5bff
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 83 FA 20: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 7F 03: jg 0x587d5bfa
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 15: jmp 0x587d5c0f
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 83 C1 20: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes EB 0F: jmp 0x587d5c0e
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 83 FA 20: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 7F 03: jg 0x587d5c0b
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 04: jmp 0x587d5c0f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 E0: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CA D0 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd0
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 3B 46 54: cmp eax, dword ptr [esi + 0x54]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x54
        ; Exact mapped bytes 0F 85 57 01 00 00: jne 0x587d5d79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 58: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x58
        ; Exact mapped bytes 3B 4E 28: cmp ecx, dword ptr [esi + 0x28]
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x28
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x587d5d79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 5C: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x5c
        ; Exact mapped bytes 3B 56 2C: cmp edx, dword ptr [esi + 0x2c]
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x2c
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x587d5d79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B9 00 1F 00 00: mov ecx, 0x1f00
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 01 00 00: mov edx, 0x100
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 75 66: jne 0x587d5cba
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes B9 FF E2 00 00: mov ecx, 0xe2ff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 02 00 00: mov edx, 0x200
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 00 00 01 00: push 0x10000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 F6 30 0B 00: call 0x58888d80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 32 0B 00: call 0x58888ed0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x32
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 BE 88 07 00 00: mov dword ptr [esi + 0x788], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AE 9C FF FF: call 0x587cf950
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E F8 04 00 00: mov ecx, dword ptr [esi + 0x4f8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 42 B9 F5 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb9
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CB A2 FF FF: call 0x587cff80
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x587d5d79
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 04 00 00: mov edx, 0x400
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x587d5d79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 98 07 00 00: lea ecx, [esi + 0x798]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x587d5ce0
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D5CE0 .. +0x273 bytes.
extern "C" __declspec(naked) void FUN_587d5b20_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BD FE FF 00 00: mov ebp, 0xfffe
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 2B D3: sub edx, ebx
        __asm _emit 0x2b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 EE: jne 0x587d5ce0
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes 8B 86 A0 07 00 00: mov eax, dword ptr [esi + 0x7a0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B8 FF E5 00 00: mov eax, 0xe5ff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 05 00 00: mov ecx, 0x500
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes BA F0 FF 00 00: mov edx, 0xfff0
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 30: je 0x587d5d58
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 80 47 A2 58: mov eax, dword ptr [0x58a24780]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 46 60: cmp eax, dword ptr [esi + 0x60]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 75 06: jne 0x587d5d3f
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 2D 80 47 A2 58: mov dword ptr [0x58a24780], ebp
        __asm _emit 0x89
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 2D 34 90 9C 58: cmp dword ptr [0x589c9034], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 74 11: je 0x587d5d58
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 07: je 0x587d5d55
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 6E 60: mov dword ptr [esi + 0x60], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x60
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 71 9D FF FF: call 0x587cfad0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 98 45 A2 58: cmp ecx, dword ptr [0x58a24598]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 0C: jne 0x587d5d79
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 A7 B8 F5 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B8 00 1F 00 00: mov eax, 0x1f00
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 02 00 00: mov ecx, 0x200
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 85 64 06 00 00: jne 0x587d63f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 08 05 00 00: mov edx, dword ptr [esi + 0x508]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x587d5e9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 8C 07 00 00: mov ecx, dword ptr [esi + 0x78c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 84 D3: test bl, dl
        __asm _emit 0x84
        __asm _emit 0xd3
        ; Exact mapped bytes 74 4A: je 0x587d5dfd
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8D BE 80 05 00 00: lea edi, [esi + 0x580]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 02 00 00 00: mov ebp, 2
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8F 0C 02 00 00: mov ecx, dword ptr [edi + 0x20c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 10 CF 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xcf
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 0C 02 00 00: mov eax, dword ptr [edi + 0x20c]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F5 CE 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xce
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
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
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 2B EB: sub ebp, ebx
        __asm _emit 0x2b
        __asm _emit 0xeb
        ; Exact mapped bytes 75 C3: jne 0x587d5dc0
        __asm _emit 0x75
        __asm _emit 0xc3
        ; Exact mapped bytes 83 BE 7C 05 00 00 00: cmp dword ptr [esi + 0x57c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 88 05 00 00: mov eax, dword ptr [esi + 0x588]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 68 28: mov ebp, dword ptr [eax + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x28
        ; Exact mapped bytes 74 29: je 0x587d5e38
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 81 FD DC 00 00 00: cmp ebp, 0xdc
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 05: jle 0x587d5e1c
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes 83 C5 02: add ebp, 2
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x02
        ; Exact mapped bytes EB 03: jmp 0x587d5e1f
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 C5 0A: add ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x0a
        ; Exact mapped bytes 81 FD 00 01 00 00: cmp ebp, 0x100
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 2D: jle 0x587d5e54
        __asm _emit 0x7e
        __asm _emit 0x2d
        ; Exact mapped bytes BD 00 01 00 00: mov ebp, 0x100
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 7C 05 00 00 00 00 00 00: mov dword ptr [esi + 0x57c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x587d5e54
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes 81 FD DC 00 00 00: cmp ebp, 0xdc
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 05: jle 0x587d5e45
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes 83 ED 02: sub ebp, 2
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x02
        ; Exact mapped bytes EB 03: jmp 0x587d5e48
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 ED 0A: sub ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x0a
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 7D 08: jge 0x587d5e54
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 89 9E 7C 05 00 00: mov dword ptr [esi + 0x57c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 98 05 00 00: lea edi, [esi + 0x598]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 10 02 00 00 00: mov dword ptr [esp + 0x10], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 02 00 00 00: mov ebx, 2
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F F0: mov ecx, dword ptr [edi - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xf0
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 70 CE 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xce
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 68 CE 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xce
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 5F CE 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xce
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 20: mov ecx, dword ptr [edi + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 56 CE 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xce
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 D5: jne 0x587d5e67
        __asm _emit 0x75
        __asm _emit 0xd5
        ; Exact mapped bytes 83 6C 24 10 01: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        ; Exact mapped bytes 75 C9: jne 0x587d5e62
        __asm _emit 0x75
        __asm _emit 0xc9
        ; Exact mapped bytes E9 48 03 00 00: jmp 0x587d61e6
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 00 0A 00 00: mov ecx, dword ptr [esi + 0xa00]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 84 D3: test bl, dl
        __asm _emit 0x84
        __asm _emit 0xd3
        ; Exact mapped bytes 74 67: je 0x587d5f13
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 8B 86 8C 07 00 00: mov eax, dword ptr [esi + 0x78c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 84 CB: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 84 28 03 00 00: je 0x587d61e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 80 05 00 00: lea edi, [esi + 0x580]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 02 00 00 00: mov ebp, 2
        __asm _emit 0xbd
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 8F 0C 02 00 00: mov ecx, dword ptr [edi + 0x20c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 00 CE 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xce
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 0C 02 00 00: mov eax, dword ptr [edi + 0x20c]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x0c
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
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E5 CD 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xcd
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
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
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 C2: jne 0x587d5ed0
        __asm _emit 0x75
        __asm _emit 0xc2
        ; Exact mapped bytes E9 D3 02 00 00: jmp 0x587d61e6
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 06 0A 00 00: movzx eax, word ptr [esi + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x587d5fe3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 15: cmp ax, 0x15
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x15
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x587d5fe3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 16: cmp ax, 0x16
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x16
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x587d5fe3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 8C 07 00 00: mov edx, dword ptr [esi + 0x78c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 74 53: je 0x587d5f99
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8D BE 80 05 00 00: lea edi, [esi + 0x580]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 02 00 00 00: mov ebp, 2
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x587d5f60
        __asm _emit 0xeb
        __asm _emit 0x0d
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D5F60 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_587d5b20_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 8F 0C 02 00 00: mov ecx, dword ptr [edi + 0x20c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 70 CD 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcd
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8F 0C 02 00 00: mov ecx, dword ptr [edi + 0x20c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 73 B6 F5 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xb6
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 57 CD 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcd
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 5E B6 F5 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb6
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 2B EB: sub ebp, ebx
        __asm _emit 0x2b
        __asm _emit 0xeb
        ; Exact mapped bytes 75 C7: jne 0x587d5f60
        __asm _emit 0x75
        __asm _emit 0xc7
        ; Exact mapped bytes 8B 96 98 07 00 00: mov edx, dword ptr [esi + 0x798]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 8D 8E 98 07 00 00: lea ecx, [esi + 0x798]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 35 02 00 00: je 0x587d61e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x587d5fc0
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D5FC0 .. +0x2B8 bytes.
extern "C" __declspec(naked) void FUN_587d5b20_segment_03() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 2B D3: sub edx, ebx
        __asm _emit 0x2b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 EE: jne 0x587d5fc0
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes 8B 86 A0 07 00 00: mov eax, dword ptr [esi + 0x7a0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 03 02 00 00: jmp 0x587d61e6
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 8C 07 00 00: mov edx, dword ptr [esi + 0x78c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 75 26: jne 0x587d6017
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8D 86 80 05 00 00: lea eax, [esi + 0x580]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 0C 02 00 00: mov ecx, dword ptr [eax + 0x20c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 2B D3: sub edx, ebx
        __asm _emit 0x2b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 E9: jne 0x587d6000
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 96 98 07 00 00: mov edx, dword ptr [esi + 0x798]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 8D 8E 98 07 00 00: lea ecx, [esi + 0x798]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 F4 00 00 00: jne 0x587d6123
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 52 14: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x587d6100
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 40 5E: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 0F B6 C0: movzx eax, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 7E 02: jle 0x587d605b
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 52 08: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 E0: jne 0x587d6042
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 83 C5 FA: add ebp, -6
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0xfa
        ; Exact mapped bytes 83 FD 05: cmp ebp, 5
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x05
        ; Exact mapped bytes 0F 87 92 00 00 00: ja 0x587d6100
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 78 F8 FF FF: mov ebx, 0xfffff878
        __asm _emit 0xbb
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 6A 04: lea ebp, [edx + 4]
        __asm _emit 0x8d
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 2B DE: sub ebx, esi
        __asm _emit 0x2b
        __asm _emit 0xde
        ; Exact mapped bytes C7 44 24 10 02 00 00 00: mov dword ptr [esp + 0x10], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 45 A2 58: mov ecx, dword ptr [0x58a24524]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 95 FF FF: call 0x587cf610
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 39 A8 64 01 00 00: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587d60ab
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 7C 12: jl 0x587d60ab
        __asm _emit 0x7c
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
        ; Exact mapped bytes 74 08: je 0x587d60ab
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8D 0C 3B: lea ecx, [ebx + edi]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 04 01: mov eax, dword ptr [ecx + eax]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x01
        ; Exact mapped bytes EB 02: jmp 0x587d60ad
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587d60de
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
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
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 03 E9: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xe9
        ; Exact mapped bytes 29 4C 24 10: sub dword ptr [esp + 0x10], ecx
        __asm _emit 0x29
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 75 8E: jne 0x587d6082
        __asm _emit 0x75
        __asm _emit 0x8e
        ; Exact mapped bytes 8B 86 A0 07 00 00: mov eax, dword ptr [esi + 0x7a0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 23: jmp 0x587d6123
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 2B D3: sub edx, ebx
        __asm _emit 0x2b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 EE: jne 0x587d6105
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes 8B 86 A0 07 00 00: mov eax, dword ptr [esi + 0x7a0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 83 BE 94 07 00 00 00: cmp dword ptr [esi + 0x794], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 8C 07 00 00: mov edx, dword ptr [esi + 0x78c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6A 28: mov ebp, dword ptr [edx + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes 74 29: je 0x587d615e
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 81 FD DC 00 00 00: cmp ebp, 0xdc
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 05: jle 0x587d6142
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes 83 C5 02: add ebp, 2
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x02
        ; Exact mapped bytes EB 03: jmp 0x587d6145
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 C5 0A: add ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x0a
        ; Exact mapped bytes 81 FD 00 01 00 00: cmp ebp, 0x100
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 31: jle 0x587d617e
        __asm _emit 0x7e
        __asm _emit 0x31
        ; Exact mapped bytes BD 00 01 00 00: mov ebp, 0x100
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 94 07 00 00 00 00 00 00: mov dword ptr [esi + 0x794], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x587d617e
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 81 FD DC 00 00 00: cmp ebp, 0xdc
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 05: jle 0x587d616b
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes 83 ED 02: sub ebp, 2
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x02
        ; Exact mapped bytes EB 03: jmp 0x587d616e
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 ED 0A: sub ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x0a
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 7D 0C: jge 0x587d617e
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes C7 86 94 07 00 00 01 00 00 00: mov dword ptr [esi + 0x794], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 80 05 00 00: lea edi, [esi + 0x580]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 02 00 00 00: mov ebx, 2
        __asm _emit 0xbb
        __asm _emit 0x02
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
        ; Exact mapped bytes 0F B7 86 06 0A 00 00: movzx eax, word ptr [esi + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 85 60 48 A2 58: mov eax, dword ptr [eax*4 + 0x58a24860]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587d61ca
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 0F B7 40 02: movzx eax, word ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 1E: je 0x587d61ca
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 19: je 0x587d61ca
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 87 0C 02 00 00: mov eax, dword ptr [edi + 0x20c]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 14: jmp 0x587d61de
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B 8F 0C 02 00 00: mov ecx, dword ptr [edi + 0x20c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 0A CB 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xcb
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 02 CB 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xcb
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 AA: jne 0x587d6190
        __asm _emit 0x75
        __asm _emit 0xaa
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes BD D4 AA 9B 58: mov ebp, 0x589baad4
        __asm _emit 0xbd
        __asm _emit 0xd4
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x58
        ; Exact mapped bytes 89 6C 24 10: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 58 01: lea ebx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 7D C0: cmp dword ptr [ebp - 0x40], edi
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x587d6368
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 4D 00: movzx cx, byte ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 8E 06 0A 00 00: cmp cx, word ptr [esi + 0xa06]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x587d62c2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE FC 00 00 00 64: cmp dword ptr [esi + 0xfc], 0x64
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x587d6368
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 F4 07 00 00: mov edx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 02: mov ecx, dword ptr [edx + eax]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 84 D3: test bl, dl
        __asm _emit 0x84
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 85 35 01 00 00: jne 0x587d6368
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F4 07 00 00: mov ecx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 08: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 49 24 0F: or word ptr [ecx + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 96 F8 07 00 00: mov edx, dword ptr [esi + 0x7f8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 10: mov ecx, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E FC 07 00 00: mov ecx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 08: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x08
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        ; Exact mapped bytes 8B 96 FC 07 00 00: mov edx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 02: mov ecx, dword ptr [edx + eax]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 89 79 50: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        ; Exact mapped bytes 8B 96 00 08 00 00: mov edx, dword ptr [esi + 0x800]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 10: mov ecx, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes EB 08: jmp 0x587d6280
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6280 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_587d5b20_segment_04() {
    __asm {
        ; Exact mapped bytes 8B 96 04 08 00 00: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 02: mov edx, dword ptr [edx + eax]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x02
        ; Exact mapped bytes 8B 14 3A: mov edx, dword ptr [edx + edi]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 14 11: mov edx, dword ptr [ecx + edx]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x11
        ; Exact mapped bytes 66 09 5A 24: or word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5a
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 F9 08: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x08
        ; Exact mapped bytes 7C E5: jl 0x587d6280
        __asm _emit 0x7c
        __asm _emit 0xe5
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 FF 10: cmp edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 7C D1: jl 0x587d6274
        __asm _emit 0x7c
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 8E 08 08 00 00: mov ecx, dword ptr [esi + 0x808]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 08: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x08
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        ; Exact mapped bytes 8B 96 0C 08 00 00: mov edx, dword ptr [esi + 0x80c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 10: mov ecx, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x587d6368
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F4 07 00 00: mov ecx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 01: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 8B 4A 24: mov cx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes 84 CB: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x587d6368
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 F4 07 00 00: mov edx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 10: mov ecx, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes BA F0 FF 00 00: mov edx, 0xfff0
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E F8 07 00 00: mov ecx, dword ptr [esi + 0x7f8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 08: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x08
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E FC 07 00 00: mov ecx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 08: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x08
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E 00 08 00 00: mov ecx, dword ptr [esi + 0x800]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 08: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x08
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes EB 07: jmp 0x587d6320
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6320 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_587d5b20_segment_05() {
    __asm {
        ; Exact mapped bytes 8B 96 04 08 00 00: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 02: mov edx, dword ptr [edx + eax]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x02
        ; Exact mapped bytes 8B 14 3A: mov edx, dword ptr [edx + edi]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 14 11: mov edx, dword ptr [ecx + edx]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x11
        ; Exact mapped bytes BD FE FF 00 00: mov ebp, 0xfffe
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 6A 24: and word ptr [edx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6a
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 F9 08: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x08
        ; Exact mapped bytes 7C E0: jl 0x587d6320
        __asm _emit 0x7c
        __asm _emit 0xe0
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 FF 10: cmp edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 7C CD: jl 0x587d6315
        __asm _emit 0x7c
        __asm _emit 0xcd
        ; Exact mapped bytes 8B 8E 08 08 00 00: mov ecx, dword ptr [esi + 0x808]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 08: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x08
        ; Exact mapped bytes 8B D5: mov edx, ebp
        __asm _emit 0x8b
        __asm _emit 0xd5
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E 0C 08 00 00: mov ecx, dword ptr [esi + 0x80c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 08: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x08
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 81 C5 84 0E 00 00: add ebp, 0xe84
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 81 FD 78 2D 9C 58: cmp ebp, 0x589c2d78
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0x78
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 89 6C 24 10: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F 8C 73 FE FF FF: jl 0x587d61f4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 BE 80 07 00 00 00: cmp dword ptr [esi + 0x780], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 45: je 0x587d63cf
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 86 88 07 00 00: mov eax, dword ptr [esi + 0x788]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 48 01: lea ecx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x01
        ; Exact mapped bytes 89 8E 88 07 00 00: mov dword ptr [esi + 0x788], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 84 07 00 00: cmp eax, dword ptr [esi + 0x784]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 2E: jb 0x587d63cf
        __asm _emit 0x72
        __asm _emit 0x2e
        ; Exact mapped bytes 0F B7 86 06 0A 00 00: movzx eax, word ptr [esi + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 83 BE FC 00 00 00 64: cmp dword ptr [esi + 0xfc], 0x64
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        ; Exact mapped bytes C7 86 88 07 00 00 00 00 00 00: mov dword ptr [esi + 0x788], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 94 C2: sete dl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc2
        ; Exact mapped bytes 03 D3: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xd3
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 91 2C FE FF: call 0x587b9060
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 81 BE F8 00 00 00 00 00 00 40: cmp dword ptr [esi + 0xf8], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 75 13: jne 0x587d63ee
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 8E 04 05 00 00: mov ecx, dword ptr [esi + 0x504]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 79 60 00: cmp dword ptr [ecx + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x60
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x587d63ee
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 52 AA FF FF: call 0x587d0e40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 BB 95 FF FF: call 0x587cf9b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x587d6419
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 0D 00 00: mov ecx, 0xd00
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 11: jne 0x587d6419
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 39 BE C0 0A 00 00: cmp dword ptr [esi + 0xac0], edi
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x587d6419
        __asm _emit 0x75
        __asm _emit 0x09
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
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 15: je 0x587d6435
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8B 79 38: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x38
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 7E 3C: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x3c
        ; Exact mapped bytes 74 0E: je 0x587d643b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 EB: jne 0x587d6420
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
