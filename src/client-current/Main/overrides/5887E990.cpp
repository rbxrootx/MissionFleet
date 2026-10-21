// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E990 .. +0x32E bytes.
extern "C" __declspec(naked) void FUN_5887e990_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 14 01 00 00: sub esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x14
        __asm _emit 0x01
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
        ; Exact mapped bytes 89 84 24 10 01 00 00: mov dword ptr [esp + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 24 18 01 00 00: mov eax, dword ptr [esp + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B B7 A4 00 00 00: mov esi, dword ptr [edi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0xb7
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 08: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 3B B7 A8 00 00 00: cmp esi, dword ptr [edi + 0xa8]
        __asm _emit 0x3b
        __asm _emit 0xb7
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x5887e9c6
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 AC E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B AF 98 00 00 00: mov ebp, dword ptr [edi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0xaf
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 74 24 1C: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C7 44 24 14 00 00 00 00: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 5E 22: lea ebx, [esi + 0x22]
        __asm _emit 0x8d
        __asm _emit 0x5e
        __asm _emit 0x22
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B B7 A8 00 00 00: mov esi, dword ptr [edi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0xb7
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B7 A4 00 00 00: cmp dword ptr [edi + 0xa4], esi
        __asm _emit 0x39
        __asm _emit 0xb7
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x5887e9f3
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 7F E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 98 00 00 00: mov eax, dword ptr [edi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 04: je 0x5887ea01
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B E8: cmp ebp, eax
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 74 05: je 0x5887ea06
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 6C E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 39 74 24 1C: cmp dword ptr [esp + 0x1c], esi
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 74 6D: je 0x5887ea79
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 3C: jne 0x5887ea4c
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes E8 5D E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B 48 10: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887ea25
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 4D E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 53 E0: mov dx, word ptr [ebx - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 56 02: cmp dx, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x02
        ; Exact mapped bytes 74 3C: je 0x5887ea6f
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 1A: jne 0x5887ea51
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 36 E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 77 1A: ja 0x5887ea5d
        __asm _emit 0x77
        __asm _emit 0x1a
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 0F: je 0x5887ea56
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5887ea58
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB C6: jmp 0x5887ea17
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB E8: jmp 0x5887ea3e
        __asm _emit 0xeb
        __asm _emit 0xe8
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 0C: cmp ebx, dword ptr [eax + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x0c
        ; Exact mapped bytes 73 05: jae 0x5887ea62
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 10 E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 83 44 24 1C 22: add dword ptr [esp + 0x1c], 0x22
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x22
        ; Exact mapped bytes 83 C3 22: add ebx, 0x22
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x22
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x5887e9e0
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 44 24 14 01 00 00 00: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x5887ea7d
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F BF 44 24 14: movsx eax, word ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x5887ebfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 F9 01 00 00: jne 0x5887ec8d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 46 08: movzx eax, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 0F: jne 0x5887eab3
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 68 B0 F3 99 58: push 0x5899f3b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 28: lea eax, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 22: jmp 0x5887ead5
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x5887eac8
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 68 74 F2 99 58: push 0x5899f274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 28: lea ecx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 0D: jmp 0x5887ead5
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 68 50 F5 99 58: push 0x5899f550
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 28: lea edx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 0F 85 7B 00 00 00: jne 0x5887eb61
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 87 E1 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 74 24 1C: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B 70 10: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x70
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887eafb
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 77 E1 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe1
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 46 08: movzx eax, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8F 64 02 00 00: mov ecx, dword ptr [edi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 55 88 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 64 02 00 00: mov eax, dword ptr [edi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8D 8F F4 01 00 00: lea ecx, [edi + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 03 00 00 00: mov edx, 3
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x5887eb21
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 87 C8 01 00 00: mov eax, dword ptr [edi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 35: je 0x5887eb72
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8D 54 24 20: lea edx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 16: je 0x5887eb66
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 10: je 0x5887eb66
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887eb46
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 09: jmp 0x5887eb6a
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 87: jmp 0x5887eaed
        __asm _emit 0xeb
        __asm _emit 0x87
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887eb6b
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 1C: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E4 F6 99 58: push 0x5899f6e4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 87 D0 01 00 00: mov eax, dword ptr [edi + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 30: je 0x5887ebbb
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 2C: je 0x5887ebbb
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887ebaf
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887ebaf
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887eb94
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887ebb3
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887ebb4
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 1C: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 37: jne 0x5887ebf6
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes E8 AE E0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 70 10: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x70
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887ebd0
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 A2 E0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 56 08: movzx edx, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8F 64 02 00 00: mov ecx, dword ptr [edi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 80 87 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 C3 BC FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x5887ec8d
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB CB: jmp 0x5887ebc6
        __asm _emit 0xeb
        __asm _emit 0xcb
        ; Exact mapped bytes 8B 86 5C 05 00 00: mov eax, dword ptr [esi + 0x55c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 14: cmp eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x14
        ; Exact mapped bytes 74 60: je 0x5887ec66
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 83 F8 15: cmp eax, 0x15
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x15
        ; Exact mapped bytes 74 5B: je 0x5887ec66
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 C0 F6 99 58: push 0x5899f6c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0xf6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 8F C8 01 00 00: mov ecx, dword ptr [edi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B9 30 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 68 98 F6 99 58: push 0x5899f698
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xf6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 8F D0 01 00 00: mov ecx, dword ptr [edi + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A3 30 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 68 70 F6 99 58: push 0x5899f670
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xf6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 8F D4 01 00 00: mov ecx, dword ptr [edi + 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8D 30 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 50 BC FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes EB 27: jmp 0x5887ec8d
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes 68 50 F6 99 58: push 0x5899f650
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xf6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8F C8 01 00 00: mov ecx, dword ptr [edi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 60 30 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0xeb
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
        ; Exact mapped bytes E8 23 BC FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 7C 24 14 00: cmp word ptr [esp + 0x14], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 74 04: je 0x5887ec9d
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes EB 02: jmp 0x5887ec9f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 8B E5 FF FF: call 0x5887d230
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8C 24 18 01 00 00: mov ecx, dword ptr [esp + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 25 DF 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 14 01 00 00: add esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
