// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 495 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752FC0 .. +0x1EF bytes.
extern "C" __declspec(naked) void FUN_58752fc0_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 24: sub esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
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
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x5875309f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 18: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x18
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 E5 F2 FF FF: call 0x587522f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 85 01 00 00: je 0x5875319a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes E8 57 53 0F 00: call 0x58848380
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 13: je 0x58753040
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 42 53 0F 00: call 0x58848380
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 7E 53 0F 00: call 0x588483d0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 14: je 0x5875306a
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 68 53 0F 00: call 0x588483d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 18: je 0x58753086
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B BF A4 00 00 00: mov edi, dword ptr [edi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0xbf
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 0E: je 0x58753086
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes D0 E8: shr al, 1
        __asm _emit 0xd0
        __asm _emit 0xe8
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 14 01 00 00: jne 0x5875319a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8B A8 00 00 00: mov ecx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x5875319a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
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
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x58753195
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 10: lea eax, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 47 F2 FF FF: call 0x587522f0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x5875319a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 10: lea edx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes E8 B5 52 0F 00: call 0x58848380
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x52
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 17: je 0x587530e6
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 10: lea edx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 9C 52 0F 00: call 0x58848380
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x52
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 10: lea edx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 D5 52 0F 00: call 0x588483d0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x52
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 17: je 0x58753116
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 10: lea edx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 BC 52 0F 00: call 0x588483d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x52
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 14: je 0x5875312e
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B B6 A4 00 00 00: mov esi, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 0A: je 0x5875312e
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes D0 E8: shr al, 1
        __asm _emit 0xd0
        __asm _emit 0xe8
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 75 6C: jne 0x5875319a
        __asm _emit 0x75
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 8B A8 00 00 00: mov ecx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 57: jne 0x5875318f
        __asm _emit 0x75
        __asm _emit 0x57
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
        ; Exact mapped bytes 8B 8B B0 00 00 00: mov ecx, dword ptr [ebx + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 A4 EA FF FF: call 0x58751bf0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 E7 F8 FF FF: call 0x58752a40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 3B: je 0x5875319a
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 19: jne 0x58753185
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 80 00 0A 00 00: mov eax, dword ptr [eax + 0xa00]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 75 0A: jne 0x58753185
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 0B F9 0C 00: call 0x58822a90
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf9
        __asm _emit 0x0c
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
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes EB 06: jmp 0x58753195
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 44 24 14: lea eax, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E6 E2 0C 00: call 0x58821480
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe2
        __asm _emit 0x0c
        __asm _emit 0x00
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
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 31 9A 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9a
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 24: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x24
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
