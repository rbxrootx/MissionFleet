// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588550A1 .. +0x511 bytes.
extern "C" __declspec(naked) void FUN_588550a1_588550A1() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 50 2D 89 58: push 0x58892d50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x2d
        __asm _emit 0x89
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
        ; Exact mapped bytes 83 EC 24: sub esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x24
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F B7 46 2E: movzx eax, word ptr [esi + 0x2e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x2e
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 6A 41: push 0x41
        __asm _emit 0x6a
        __asm _emit 0x41
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 89 7D D8: mov dword ptr [ebp - 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0xd8
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 F8 64: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x64
        ; Exact mapped bytes 77 6A: ja 0x58855151
        __asm _emit 0x77
        __asm _emit 0x6a
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x58855179
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 53: cmp eax, 0x53
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x53
        ; Exact mapped bytes 77 2C: ja 0x5885511e
        __asm _emit 0x77
        __asm _emit 0x2c
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x588551a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 16: je 0x58855112
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 33: je 0x58855133
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 0E: je 0x58855112
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 09: je 0x58855112
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x588551ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 90 07 00 00: call 0x588558a9
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x588551b6
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 24: je 0x58855146
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 17: je 0x5885513d
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 83 E8 07: sub eax, 7
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x07
        ; Exact mapped bytes 74 E7: je 0x58855112
        __asm _emit 0x74
        __asm _emit 0xe7
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x588551ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C7 09 00 00: call 0x58855b02
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 79: jmp 0x588551b6
        __asm _emit 0xeb
        __asm _emit 0x79
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 3A 05 00 00: call 0x5885567e
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 70: jmp 0x588551b6
        __asm _emit 0xeb
        __asm _emit 0x70
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 42 DC FF FF: call 0x58852d91
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 65: jmp 0x588551b6
        __asm _emit 0xeb
        __asm _emit 0x65
        ; Exact mapped bytes 83 F8 6F: cmp eax, 0x6f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x6f
        ; Exact mapped bytes 77 3A: ja 0x58855190
        __asm _emit 0x77
        __asm _emit 0x3a
        ; Exact mapped bytes 74 2F: je 0x58855187
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 83 E8 65: sub eax, 0x65
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x65
        ; Exact mapped bytes 74 B5: je 0x58855112
        __asm _emit 0x74
        __asm _emit 0xb5
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 B0: je 0x58855112
        __asm _emit 0x74
        __asm _emit 0xb0
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 AB: je 0x58855112
        __asm _emit 0x74
        __asm _emit 0xab
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 0E: je 0x58855179
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 83 E8 05: sub eax, 5
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 75 4A: jne 0x588551ba
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 30 0A 00 00: call 0x58855ba7
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3D: jmp 0x588551b6
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes 83 4E 1C 10: or dword ptr [esi + 0x1c], 0x10
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 ED D8 FF FF: call 0x58852a72
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2F: jmp 0x588551b6
        __asm _emit 0xeb
        __asm _emit 0x2f
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 BB 0A 00 00: call 0x58855c49
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x588551b6
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 83 E8 70: sub eax, 0x70
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x70
        ; Exact mapped bytes 74 1A: je 0x588551af
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 83 E8 03: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 74 0C: je 0x588551a6
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 DF: je 0x5885517d
        __asm _emit 0x74
        __asm _emit 0xdf
        ; Exact mapped bytes 83 E8 03: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 75 17: jne 0x588551ba
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes EB A2: jmp 0x58855148
        __asm _emit 0xeb
        __asm _emit 0xa2
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 58 0B 00 00: call 0x58855d05
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x588551b6
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C6 0A 00 00: call 0x58855c7c
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 07: jne 0x588551c1
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes E9 D7 03 00 00: jmp 0x58855598
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 5E 2C: cmp byte ptr [esi + 0x2c], bl
        __asm _emit 0x38
        __asm _emit 0x5e
        __asm _emit 0x2c
        ; Exact mapped bytes 0F 85 CC 03 00 00: jne 0x58855596
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 1C: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x1c
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes C1 E8 04: shr eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 89 5D E8: mov dword ptr [ebp - 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xe8
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 66 89 5D EC: mov word ptr [ebp - 0x14], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact mapped bytes 89 4D E4: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 84 C2: test dl, al
        __asm _emit 0x84
        __asm _emit 0xc2
        ; Exact mapped bytes 74 33: je 0x58855219
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8B 46 1C: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x1c
        ; Exact mapped bytes C1 E8 06: shr eax, 6
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 84 C2: test dl, al
        __asm _emit 0x84
        __asm _emit 0xc2
        ; Exact mapped bytes 74 04: je 0x588551f4
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 6A 2D: push 0x2d
        __asm _emit 0x6a
        __asm _emit 0x2d
        ; Exact mapped bytes EB 07: jmp 0x588551fb
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 84 56 1C: test byte ptr [esi + 0x1c], dl
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x1c
        ; Exact mapped bytes 74 0E: je 0x58855207
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 6A 2B: push 0x2b
        __asm _emit 0x6a
        __asm _emit 0x2b
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 89 4D E4: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes EB 12: jmp 0x58855219
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 8B 46 1C: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x1c
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 84 C2: test dl, al
        __asm _emit 0x84
        __asm _emit 0xc2
        ; Exact mapped bytes 74 09: je 0x58855219
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 89 7D E8: mov word ptr [ebp - 0x18], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0xe8
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 89 55 E4: mov dword ptr [ebp - 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 0F B7 56 2E: movzx edx, word ptr [esi + 0x2e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x2e
        ; Exact mapped bytes 6A 78: push 0x78
        __asm _emit 0x6a
        __asm _emit 0x78
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 74 08: je 0x5885522d
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 0C: jne 0x58855239
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 46 1C: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x1c
        ; Exact mapped bytes C1 E8 05: shr eax, 5
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes B4 01: mov ah, 1
        __asm _emit 0xb4
        __asm _emit 0x01
        ; Exact mapped bytes 24 01: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 75 02: jne 0x5885523b
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 8A E3: mov ah, bl
        __asm _emit 0x8a
        __asm _emit 0xe3
        ; Exact mapped bytes 83 FA 61: cmp edx, 0x61
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x61
        ; Exact mapped bytes 74 08: je 0x58855248
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8A C3: mov al, bl
        __asm _emit 0x8a
        __asm _emit 0xc3
        ; Exact mapped bytes 66 3B 55 D8: cmp dx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 75 02: jne 0x5885524a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C7 45 E0 30 00 00 00: mov dword ptr [ebp - 0x20], 0x30
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 E4: test ah, ah
        __asm _emit 0x84
        __asm _emit 0xe4
        ; Exact mapped bytes 75 04: jne 0x58855259
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 23: je 0x5885527c
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 44 4D E8: mov word ptr [ebp + ecx*2 - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 74 06: je 0x5885526f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3B 55 D8: cmp dx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 75 02: jne 0x58855271
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 66 89 7C 4D EA: mov word ptr [ebp + ecx*2 - 0x16], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x4d
        __asm _emit 0xea
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 89 4D E4: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 46 20: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x20
        ; Exact mapped bytes 2B 46 34: sub eax, dword ptr [esi + 0x34]
        __asm _emit 0x2b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes F6 46 1C 0C: test byte ptr [esi + 0x1c], 0xc
        __asm _emit 0xf6
        __asm _emit 0x46
        __asm _emit 0x1c
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 75 5A: jne 0x588552e7
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 56: jle 0x588552e7
        __asm _emit 0x7e
        __asm _emit 0x56
        ; Exact mapped bytes 8B 7E 14: mov edi, dword ptr [esi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 96 48 04 00 00: mov edx, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 3B 42 04: cmp eax, dword ptr [edx + 4]
        __asm _emit 0x3b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 75 11: jne 0x588552b5
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 80 7A 0C 00: cmp byte ptr [edx + 0xc], 0
        __asm _emit 0x80
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 03: je 0x588552ad
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes EB 03: jmp 0x588552b0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 CF FF: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes 89 7E 14: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes EB 20: jmp 0x588552d5
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 8D 47 01: lea eax, [edi + 1]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x01
        ; Exact mapped bytes 89 46 14: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        ; Exact mapped bytes FF 42 08: inc dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 8B 86 48 04 00 00: mov eax, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 8B 86 48 04 00 00: mov eax, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 00 02: add dword ptr [eax], 2
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 8B 7E 14: mov edi, dword ptr [esi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 83 FF FF: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 05: je 0x588552e2
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 3B D9: cmp ebx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd9
        ; Exact mapped bytes 7C B4: jl 0x58855296
        __asm _emit 0x7c
        __asm _emit 0xb4
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes FF 76 08: push dword ptr [esi + 8]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes 8D 7E 14: lea edi, [esi + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 8E 48 04 00 00: lea ecx, [esi + 0x448]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF 0D 00 00: call 0x588560fd
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 1C: mov ecx, dword ptr [esi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x1c
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C1 E8 03: shr eax, 3
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 74 5F: je 0x58855369
        __asm _emit 0x74
        __asm _emit 0x5f
        ; Exact mapped bytes C1 E9 02: shr ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 75 57: jne 0x58855369
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes 83 7D D8 00: cmp dword ptr [ebp - 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0x00
        ; Exact mapped bytes 89 5D DC: mov dword ptr [ebp - 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xdc
        ; Exact mapped bytes 7E 4E: jle 0x58855369
        __asm _emit 0x7e
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 17: mov edx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x17
        ; Exact mapped bytes 8B 8E 48 04 00 00: mov ecx, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 3B 41 04: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 75 10: jne 0x5885533b
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 80 79 0C 00: cmp byte ptr [ecx + 0xc], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 03: je 0x58855334
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes EB 03: jmp 0x58855337
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 CA FF: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xff
        ; Exact mapped bytes 89 17: mov dword ptr [edi], edx
        __asm _emit 0x89
        __asm _emit 0x17
        ; Exact mapped bytes EB 1F: jmp 0x5885535a
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 8D 42 01: lea eax, [edx + 1]
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0x01
        ; Exact mapped bytes 89 07: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes FF 41 08: inc dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 8B 86 48 04 00 00: mov eax, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 86 48 04 00 00: mov eax, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 00 02: add dword ptr [eax], 2
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 8B 17: mov edx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x17
        ; Exact mapped bytes 83 FA FF: cmp edx, -1
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 74 06: je 0x58855367
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 3B 5D D8: cmp ebx, dword ptr [ebp - 0x28]
        __asm _emit 0x3b
        __asm _emit 0x5d
        __asm _emit 0xd8
        ; Exact mapped bytes 7C B6: jl 0x5885531d
        __asm _emit 0x7c
        __asm _emit 0xb6
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 80 7E 38 00: cmp byte ptr [esi + 0x38], 0
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 89 5D FC: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F 85 A5 01 00 00: jne 0x5885551b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 5E 34: cmp dword ptr [esi + 0x34], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x34
        ; Exact mapped bytes 0F 8E 9C 01 00 00: jle 0x5885551b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 80 78 14 00: cmp byte ptr [eax + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x58855395
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0E 0B 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 DC: mov eax, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 81 78 08 E9 FD 00 00: cmp dword ptr [eax + 8], 0xfde9
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x5885547e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 46 30: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x30
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 66 0F 13 45 E8: movlpd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 89 5D E0: mov dword ptr [ebp - 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xe0
        ; Exact mapped bytes 39 5E 34: cmp dword ptr [esi + 0x34], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x34
        ; Exact mapped bytes 0F 84 71 01 00 00: je 0x58855530
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 76 08: push dword ptr [esi + 8]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes 8D 45 E8: lea eax, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 89 5D E4: mov dword ptr [ebp - 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 8D 45 DC: lea eax, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 E4: lea eax, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 14 8D 01 00: call 0x5886e0ec
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 83 FA FF: cmp edx, -1
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x58855516
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 48 04 00 00: mov ecx, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 45 E4: movzx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 89 45 D4: mov dword ptr [ebp - 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 3B 41 04: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 75 0F: jne 0x5885540a
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 80 79 0C 00: cmp byte ptr [ecx + 0xc], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 04: je 0x58855405
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes FF 07: inc dword ptr [edi]
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes EB 21: jmp 0x58855426
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 83 0F FF: or dword ptr [edi], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0xff
        ; Exact mapped bytes EB 1C: jmp 0x58855426
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes FF 07: inc dword ptr [edi]
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes FF 41 08: inc dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 8B 86 48 04 00 00: mov eax, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 86 48 04 00 00: mov eax, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 00 02: add dword ptr [eax], 2
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 83 FA 02: cmp edx, 2
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 3E: jne 0x58855469
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 8E 48 04 00 00: mov ecx, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 55 E6: movzx edx, word ptr [ebp - 0x1a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x55
        __asm _emit 0xe6
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 3B 41 04: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 75 0F: jne 0x5885544c
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 80 79 0C 00: cmp byte ptr [ecx + 0xc], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 04: je 0x58855447
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes FF 07: inc dword ptr [edi]
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes EB 1C: jmp 0x58855463
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes 83 0F FF: or dword ptr [edi], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x58855463
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes FF 07: inc dword ptr [edi]
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes FF 41 08: inc dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 8D 8E 48 04 00 00: lea ecx, [esi + 0x448]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 83 00 02: add dword ptr [eax], 2
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes EB 03: jmp 0x5885546c
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 45 E0: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 3B 46 34: cmp eax, dword ptr [esi + 0x34]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 0F 85 46 FF FF FF: jne 0x588553bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x58855530
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 80 78 14 00: cmp byte ptr [eax + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x58855494
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0F 0A 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 DC: mov eax, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 39 5E 34: cmp dword ptr [esi + 0x34], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x34
        ; Exact mapped bytes 89 5D D4: mov dword ptr [ebp - 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xd4
        ; Exact mapped bytes EB 70: jmp 0x5885550f
        __asm _emit 0xeb
        __asm _emit 0x70
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes FF 76 08: push dword ptr [esi + 8]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 55 E0: mov word ptr [ebp - 0x20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes FF 70 04: push dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x70
        __asm _emit 0x04
        ; Exact mapped bytes 8D 45 E0: lea eax, [ebp - 0x20]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B8 87 01 00: call 0x5886dc70
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 54: jle 0x58855516
        __asm _emit 0x7e
        __asm _emit 0x54
        ; Exact mapped bytes 0F B7 45 E0: movzx eax, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 8D 96 48 04 00 00: lea edx, [esi + 0x448]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0A: mov ecx, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x0a
        ; Exact mapped bytes 89 45 D0: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 3B 41 04: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 75 0F: jne 0x588554e8
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 80 79 0C 00: cmp byte ptr [ecx + 0xc], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 04: je 0x588554e3
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes FF 07: inc dword ptr [edi]
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes EB 19: jmp 0x588554fc
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 83 0F FF: or dword ptr [edi], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0xff
        ; Exact mapped bytes EB 14: jmp 0x588554fc
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes FF 07: inc dword ptr [edi]
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes FF 41 08: inc dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 83 00 02: add dword ptr [eax], 2
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 45 D4: mov eax, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 03 4D EC: add ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x03
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 3B 46 34: cmp eax, dword ptr [esi + 0x34]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 89 45 D4: mov dword ptr [ebp - 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 45 DC: mov eax, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 89 4D E4: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 75 8B: jne 0x5885549f
        __asm _emit 0x75
        __asm _emit 0x8b
        ; Exact mapped bytes EB 1A: jmp 0x58855530
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 83 0F FF: or dword ptr [edi], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x58855530
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes FF 76 08: push dword ptr [esi + 8]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes 8D 8E 48 04 00 00: lea ecx, [esi + 0x448]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 76 34: push dword ptr [esi + 0x34]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x34
        ; Exact mapped bytes FF 76 30: push dword ptr [esi + 0x30]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x30
        ; Exact mapped bytes E8 CD 0B 00 00: call 0x588560fd
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 14: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x14
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 78 5F: js 0x58855596
        __asm _emit 0x78
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 46 1C: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x1c
        ; Exact mapped bytes C1 E8 02: shr eax, 2
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 74 55: je 0x58855596
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 83 7D D8 00: cmp dword ptr [ebp - 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7E 14: lea edi, [esi + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 7E 4C: jle 0x58855596
        __asm _emit 0x7e
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 96 48 04 00 00: mov edx, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 3B 42 04: cmp eax, dword ptr [edx + 4]
        __asm _emit 0x3b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 75 12: jne 0x5885556a
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 80 7A 0C 00: cmp byte ptr [edx + 0xc], 0
        __asm _emit 0x80
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 03: je 0x58855563
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes EB 03: jmp 0x58855566
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 C9 FF: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0xff
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes EB 1F: jmp 0x58855589
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 8D 41 01: lea eax, [ecx + 1]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x01
        ; Exact mapped bytes 89 07: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes FF 42 08: inc dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 8B 86 48 04 00 00: mov eax, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 86 48 04 00 00: mov eax, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 00 02: add dword ptr [eax], 2
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 83 F9 FF: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 74 06: je 0x58855596
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 3B 5D D8: cmp ebx, dword ptr [ebp - 0x28]
        __asm _emit 0x3b
        __asm _emit 0x5d
        __asm _emit 0xd8
        ; Exact mapped bytes 7C B4: jl 0x5885554a
        __asm _emit 0x7c
        __asm _emit 0xb4
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 A0 BA FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
