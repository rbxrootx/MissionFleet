// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DBF0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_5887dbf0_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 0C 01 00 00: sub esp, 0x10c
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x0c
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
        ; Exact mapped bytes 89 84 24 08 01 00 00: mov dword ptr [esp + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B1 A4 00 00 00: mov esi, dword ptr [ecx + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4C 24 10: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 3B B1 A8 00 00 00: cmp esi, dword ptr [ecx + 0xa8]
        __asm _emit 0x3b
        __asm _emit 0xb1
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x5887dc1f
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 53 F0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B B8 98 00 00 00: mov edi, dword ptr [eax + 0x98]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B EE: mov ebp, esi
        __asm _emit 0x8b
        __asm _emit 0xee
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
        ; Exact mapped bytes EB 08: jmp 0x5887dc40
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DC40 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_5887dbf0_segment_01() {
    __asm {
        ; Exact mapped bytes 8B B0 A8 00 00 00: mov esi, dword ptr [eax + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B0 A4 00 00 00: cmp dword ptr [eax + 0xa4], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x5887dc53
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 1F F0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 80 98 00 00 00: mov eax, dword ptr [eax + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 04: je 0x5887dc65
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 74 05: je 0x5887dc6a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 08 F0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 3B EE: cmp ebp, esi
        __asm _emit 0x3b
        __asm _emit 0xee
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x5887dd1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 3A: jne 0x5887dcb0
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes E8 F7 EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 68 10: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x68
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887dc87
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 EB EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4B E0: mov cx, word ptr [ebx - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 94 24 20 01 00 00: mov edx, dword ptr [esp + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 4A 02: cmp cx, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4a
        __asm _emit 0x02
        ; Exact mapped bytes 74 3B: je 0x5887dcd3
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 18: jne 0x5887dcb4
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 D1 EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 77 17: ja 0x5887dcbf
        __asm _emit 0x77
        __asm _emit 0x17
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 0C: je 0x5887dcb8
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes EB 0A: jmp 0x5887dcba
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes EB C9: jmp 0x5887dc7d
        __asm _emit 0xeb
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes EB EB: jmp 0x5887dca3
        __asm _emit 0xeb
        __asm _emit 0xeb
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 0C: cmp ebx, dword ptr [eax + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x0c
        ; Exact mapped bytes 73 05: jae 0x5887dcc4
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 AE EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 C5 22: add ebp, 0x22
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x22
        ; Exact mapped bytes 83 C3 22: add ebx, 0x22
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x22
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x5887dc40
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 29: je 0x5887dd08
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 8A 50 05 00 00: mov ecx, dword ptr [edx + 0x550]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5887dcf0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DCF0 .. +0x5BB bytes.
extern "C" __declspec(naked) void FUN_5887dbf0_segment_02() {
    __asm {
        ; Exact mapped bytes 8B B0 C0 0C 00 00: mov esi, dword ptr [eax + 0xcc0]
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 76 02: movzx esi, word ptr [esi + 2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x76
        __asm _emit 0x02
        ; Exact mapped bytes 3B CE: cmp ecx, esi
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 74 11: je 0x5887dd0f
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 80 E4 0C 00 00: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xe4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 E8: jne 0x5887dcf0
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x5887dd25
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x5887dd25
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 94 24 20 01 00 00: mov edx, dword ptr [esp + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 98: cwde
        __asm _emit 0x98
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 53 03 00 00: je 0x5887e082
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 B5 01 00 00: je 0x5887deed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 4F 05 00 00: jne 0x5887e290
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x5887ddd4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 24 EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 3B 6F 10: cmp ebp, dword ptr [edi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x6f
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887dd58
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 1A EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 94 24 20 01 00 00: mov edx, dword ptr [esp + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 75 08: movzx esi, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 0F B7 42 08: movzx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 2B B1 F8 00 00 00: sub esi, dword ptr [ecx + 0xf8]
        __asm _emit 0x2b
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 5E: jne 0x5887dddb
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes 68 B0 F3 99 58: push 0x5899f3b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 20: lea eax, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
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
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 8E 64 02 00 00: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BD 95 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 64 02 00 00: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8D 8E F4 01 00 00: lea ecx, [esi + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0x8e
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
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 2B D3: sub edx, ebx
        __asm _emit 0x2b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 F3: jne 0x5887ddc0
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8B DE: mov ebx, esi
        __asm _emit 0x8b
        __asm _emit 0xde
        ; Exact mapped bytes E9 7F 00 00 00: jmp 0x5887de53
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3F: mov edi, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x3f
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x5887dd4e
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 1C: jne 0x5887ddfd
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 68 74 F2 99 58: push 0x5899f274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 20: lea ecx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 5C 24 1C: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB 56: jmp 0x5887de53
        __asm _emit 0xeb
        __asm _emit 0x56
        ; Exact mapped bytes 68 50 F5 99 58: push 0x5899f550
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 20: lea edx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 5C 24 1C: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 8B 64 02 00 00: mov ecx, dword ptr [ebx + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 3C 95 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 64 02 00 00: mov eax, dword ptr [ebx + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x64
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
        ; Exact mapped bytes 8D 8B F4 01 00 00: lea ecx, [ebx + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0x8b
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
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BE FE FF 00 00: mov esi, 0xfffe
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x5887de40
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8B 83 C8 01 00 00: mov eax, dword ptr [ebx + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x83
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
        ; Exact mapped bytes 74 33: je 0x5887de93
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8D 54 24 18: lea edx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
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
        ; Exact mapped bytes 74 11: je 0x5887de8b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887de8b
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
        ; Exact mapped bytes 75 E7: jne 0x5887de70
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887de8f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887de90
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 28 F5 99 58: push 0x5899f528
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 83 D0 01 00 00: mov eax, dword ptr [ebx + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x83
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
        ; Exact mapped bytes 74 36: je 0x5887dee2
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 32: je 0x5887dee2
        __asm _emit 0x74
        __asm _emit 0x32
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
        ; Exact mapped bytes 74 1B: je 0x5887deda
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 15: je 0x5887deda
        __asm _emit 0x74
        __asm _emit 0x15
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
        ; Exact mapped bytes 75 E7: jne 0x5887deb5
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E9 AF 03 00 00: jmp 0x5887e289
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887dedf
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
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
        ; Exact mapped bytes E9 9C 03 00 00: jmp 0x5887e289
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 42 08: movzx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x42
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
        ; Exact mapped bytes 75 6F: jne 0x5887df6c
        __asm _emit 0x75
        __asm _emit 0x6f
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
        ; Exact mapped bytes 8D 54 24 20: lea edx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
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
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 51: jne 0x5887df68
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes E8 56 ED 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xed
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 3B 6F 10: cmp ebp, dword ptr [edi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x6f
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887df26
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 4C ED 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 45 08: movzx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8E 64 02 00 00: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 26 94 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 64 02 00 00: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 8D 8E F4 01 00 00: lea ecx, [esi + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0x8e
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
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 F3: jne 0x5887df54
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8B FE: mov edi, esi
        __asm _emit 0x8b
        __asm _emit 0xfe
        ; Exact mapped bytes E9 7B 00 00 00: jmp 0x5887dfe3
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3F: mov edi, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x3f
        ; Exact mapped bytes EB B0: jmp 0x5887df1c
        __asm _emit 0xeb
        __asm _emit 0xb0
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 1C: jne 0x5887df8e
        __asm _emit 0x75
        __asm _emit 0x1c
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
        ; Exact mapped bytes 8D 4C 24 20: lea ecx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7C 24 1C: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB 55: jmp 0x5887dfe3
        __asm _emit 0xeb
        __asm _emit 0x55
        ; Exact mapped bytes 68 14 F5 99 58: push 0x5899f514
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 20: lea edx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7C 24 1C: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 8F 64 02 00 00: mov ecx, dword ptr [edi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 AB 93 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 64 02 00 00: mov eax, dword ptr [edi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x64
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
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BE FE FF 00 00: mov esi, 0xfffe
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x5887dfd0
        __asm _emit 0x75
        __asm _emit 0xed
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
        ; Exact mapped bytes 74 33: je 0x5887e023
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8D 54 24 18: lea edx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
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
        ; Exact mapped bytes 74 11: je 0x5887e01b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e01b
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
        ; Exact mapped bytes 75 E7: jne 0x5887e000
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e01f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e020
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 F0 F4 99 58: push 0x5899f4f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xf4
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
        ; Exact mapped bytes 74 39: je 0x5887e075
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 35: je 0x5887e075
        __asm _emit 0x74
        __asm _emit 0x35
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
        ; Exact mapped bytes 74 1E: je 0x5887e06d
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 18: je 0x5887e06d
        __asm _emit 0x74
        __asm _emit 0x18
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
        ; Exact mapped bytes 75 E7: jne 0x5887e045
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x5887e28b
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e072
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E9 09 02 00 00: jmp 0x5887e28b
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 E4 AA 99 58: mov ecx, 0x5899aae4
        __asm _emit 0xb9
        __asm _emit 0xe4
        __asm _emit 0xaa
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 82 44 04 00 00: lea eax, [edx + 0x444]
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 3A 11: cmp dl, byte ptr [ecx]
        __asm _emit 0x3a
        __asm _emit 0x11
        ; Exact mapped bytes 75 1A: jne 0x5887e0b0
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 74 12: je 0x5887e0ac
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8A 50 01: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 3A 51 01: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3a
        __asm _emit 0x51
        __asm _emit 0x01
        ; Exact mapped bytes 75 0E: jne 0x5887e0b0
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 E4: jne 0x5887e090
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 05: jmp 0x5887e0b5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 83 D8 FF: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x5887e1a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 CC F4 99 58: push 0x5899f4cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0xf4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 83 C8 01 00 00: mov eax, dword ptr [ebx + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xc8
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
        ; Exact mapped bytes 74 33: je 0x5887e113
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 2F: je 0x5887e113
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
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
        ; Exact mapped bytes 74 11: je 0x5887e10b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e10b
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
        ; Exact mapped bytes 75 E7: jne 0x5887e0f0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e10f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e110
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A8 F4 99 58: push 0x5899f4a8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0xf4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 83 D0 01 00 00: mov eax, dword ptr [ebx + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x83
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
        ; Exact mapped bytes 74 2C: je 0x5887e158
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 28: je 0x5887e158
        __asm _emit 0x74
        __asm _emit 0x28
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
        ; Exact mapped bytes 74 11: je 0x5887e150
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e150
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
        ; Exact mapped bytes 75 E7: jne 0x5887e135
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e154
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e155
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 D4 01 00 00: mov eax, dword ptr [ebx + 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xd4
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
        ; Exact mapped bytes 74 38: je 0x5887e19d
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes BA 1C D6 98 58: mov edx, 0x5898d61c
        __asm _emit 0xba
        __asm _emit 0x1c
        __asm _emit 0xd6
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
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
        ; Exact mapped bytes 74 1B: je 0x5887e195
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 15: je 0x5887e195
        __asm _emit 0x74
        __asm _emit 0x15
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
        ; Exact mapped bytes 75 E7: jne 0x5887e170
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x5887e289
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e19a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
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
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x5887e289
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 84 F4 99 58: push 0x5899f484
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 83 C8 01 00 00: mov eax, dword ptr [ebx + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xc8
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
        ; Exact mapped bytes 74 2E: je 0x5887e1f3
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 2A: je 0x5887e1f3
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
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
        ; Exact mapped bytes 74 11: je 0x5887e1eb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e1eb
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
        ; Exact mapped bytes 75 E7: jne 0x5887e1d0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e1ef
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e1f0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 5C F4 99 58: push 0x5899f45c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 83 D0 01 00 00: mov eax, dword ptr [ebx + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x83
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
        ; Exact mapped bytes 74 2C: je 0x5887e238
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 28: je 0x5887e238
        __asm _emit 0x74
        __asm _emit 0x28
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
        ; Exact mapped bytes 74 11: je 0x5887e230
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e230
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
        ; Exact mapped bytes 75 E7: jne 0x5887e215
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e234
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e235
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 34 F4 99 58: push 0x5899f434
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xf4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 83 D4 01 00 00: mov eax, dword ptr [ebx + 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xd4
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
        ; Exact mapped bytes 74 32: je 0x5887e283
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 2E: je 0x5887e283
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
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
        ; Exact mapped bytes 74 11: je 0x5887e27b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e27b
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
        ; Exact mapped bytes 75 E7: jne 0x5887e260
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e27f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e280
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 20 C6 FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc6
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
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 38 E9 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 0C 01 00 00: add esp, 0x10c
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
