// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 459 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880F70 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58880f70_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D B1 98 00 00 00: lea esi, [ecx + 0x98]
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7E 0C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4C 24 10: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 3B 7E 10: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 76 05: jbe 0x58880f8e
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 E4 BC 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 36: mov esi, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x36
        ; Exact mapped bytes 8B DF: mov ebx, edi
        __asm _emit 0x8b
        __asm _emit 0xdf
        ; Exact mapped bytes 8D 6F 22: lea ebp, [edi + 0x22]
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x22
        ; Exact mapped bytes EB 09: jmp 0x58880fa0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880FA0 .. +0x1A4 bytes.
extern "C" __declspec(naked) void FUN_58880f70_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B B8 A8 00 00 00: mov edi, dword ptr [eax + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 98 00 00 00: add eax, 0x98
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 78 0C: cmp dword ptr [eax + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x0c
        ; Exact mapped bytes 76 05: jbe 0x58880fb9
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 B9 BC 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 05 98 00 00 00: add eax, 0x98
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 04: je 0x58880fcc
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 74 05: je 0x58880fd1
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 A1 BC 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 3B DF: cmp ebx, edi
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x5888111a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 3A: jne 0x58881017
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes E8 90 BC 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x58880fee
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 84 BC 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 74: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        ; Exact mapped bytes 66 8B 55 E0: mov dx, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 66 3B 51 02: cmp dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 74 37: je 0x58881036
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 18: jne 0x5888101b
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 6A BC 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 68 10: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x68
        __asm _emit 0x10
        ; Exact mapped bytes 77 17: ja 0x58881026
        __asm _emit 0x77
        __asm _emit 0x17
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 0C: je 0x5888101f
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes EB 0A: jmp 0x58881021
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes EB C9: jmp 0x58880fe4
        __asm _emit 0xeb
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes EB EB: jmp 0x5888100a
        __asm _emit 0xeb
        __asm _emit 0xeb
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 68 0C: cmp ebp, dword ptr [eax + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x68
        __asm _emit 0x0c
        ; Exact mapped bytes 73 05: jae 0x5888102b
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 47 BC 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 83 C3 22: add ebx, 0x22
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x22
        ; Exact mapped bytes 83 C5 22: add ebp, 0x22
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x22
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x58880fa0
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 80 64 02 00 00: mov eax, dword ptr [eax + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 78 64 00: cmp dword ptr [eax + 0x64], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E D4 00 00 00: jle 0x5888111a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x58881124
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1F BC 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5888105f
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 13 BC 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 4B 08: movzx ecx, word ptr [ebx + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7C 24 1C: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7E 1D: jle 0x58881088
        __asm _emit 0x7e
        __asm _emit 0x1d
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x5888112b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FA BB 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x58881084
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 EE BB 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 7B 08: movzx edi, word ptr [ebx + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x7b
        __asm _emit 0x08
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x58881132
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DD BB 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x588810a1
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 D1 BB 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7B 08 00: cmp word ptr [ebx + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 76 1D: jbe 0x588810c5
        __asm _emit 0x76
        __asm _emit 0x1d
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x58881139
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BD BB 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x588810c1
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 B1 BB 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 29 7B 08: sub word ptr [ebx + 8], di
        __asm _emit 0x66
        __asm _emit 0x29
        __asm _emit 0x7b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8F 64 02 00 00: mov ecx, dword ptr [edi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 87 62 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 63: jne 0x58881140
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes E8 90 BB 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x588810ee
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 84 BB 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7B 08 00: cmp word ptr [ebx + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 77 1E: ja 0x58881113
        __asm _emit 0x77
        __asm _emit 0x1e
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8F 98 00 00 00: lea ecx, [edi + 0x98]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 89 FB FF FF: call 0x58880c90
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 4F 6C: movzx ecx, word ptr [edi + 0x6c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4f
        __asm _emit 0x6c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 9D BE FF FF: call 0x5887cfb0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 D6 FC FF FF: call 0x58880df0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes E9 2A FF FF FF: jmp 0x58881055
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x5888107a
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes E9 5E FF FF FF: jmp 0x58881097
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x588810b7
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes EB A0: jmp 0x588810e4
        __asm _emit 0xeb
        __asm _emit 0xa0
    }
}
