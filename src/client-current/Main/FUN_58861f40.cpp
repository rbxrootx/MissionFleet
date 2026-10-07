// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 1298 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861F40 .. +0x512 bytes.
extern "C" __declspec(naked) void FUN_58861f40_segment_00() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 39 AE 18 01 00 00: cmp dword ptr [esi + 0x118], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 7E 36: jle 0x58861f89
        __asm _emit 0x7e
        __asm _emit 0x36
        ; Exact mapped bytes BA 90 13 00 00: mov edx, 0x1390
        __asm _emit 0xba
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 48 01 00 00: lea ecx, [esi + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 83 39 10: cmp dword ptr [ecx], 0x10
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 75 15: jne 0x58861f7a
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 3D F8 47 A2 58: mov edi, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7F 04: mov edi, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x04
        ; Exact mapped bytes 8B 3C 17: mov edi, dword ptr [edi + edx]
        __asm _emit 0x8b
        __asm _emit 0x3c
        __asm _emit 0x17
        ; Exact mapped bytes 8B 7F 0C: mov edi, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x0c
        ; Exact mapped bytes 89 AF 78 04 00 00: mov dword ptr [edi + 0x478], ebp
        __asm _emit 0x89
        __asm _emit 0xaf
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 C2 10: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x10
        ; Exact mapped bytes 3B 86 18 01 00 00: cmp eax, dword ptr [esi + 0x118]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C D7: jl 0x58861f60
        __asm _emit 0x7c
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 7C 24 18: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8E 00 07 00 00: mov ecx, dword ptr [esi + 0x700]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 47 01: lea eax, [edi + 1]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 BE 1C 01 00 00: mov dword ptr [esi + 0x11c], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BE 53 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 94 8E 28 06 00 00: mov edx, dword ptr [esi + ecx*4 + 0x628]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 08 07 00 00: mov ecx, dword ptr [esi + 0x708]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 A5 53 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 69 C0 D4 00 00 00: imul eax, eax, 0xd4
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 8C 30 46 02 00 00: movzx ecx, word ptr [eax + esi + 0x246]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8c
        __asm _emit 0x30
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 1C 30: lea ebx, [eax + esi]
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0x30
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 1C 07 00 00: mov ecx, dword ptr [esi + 0x71c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 82 53 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 93 50 02 00 00: movzx edx, word ptr [ebx + 0x250]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x93
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 20 07 00 00: mov ecx, dword ptr [esi + 0x720]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 6F 53 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 FE 60 01 00 00: mov eax, dword ptr [esi + edi*8 + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 04 07 00 00: mov ecx, dword ptr [esi + 0x704]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5C 53 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8D BE 44 02 00 00: lea edi, [esi + 0x244]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E E8 06 00 00: lea ecx, [esi + 0x6e8]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 EC: mov eax, dword ptr [ecx - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0xec
        ; Exact mapped bytes BA 0F 00 00 00: mov edx, 0xf
        __asm _emit 0xba
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 9E 1C 01 00 00: cmp ebx, dword ptr [esi + 0x11c]
        __asm _emit 0x3b
        __asm _emit 0x9e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x588620bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BA F0 FF 00 00: mov edx, 0xfff0
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 13: cmp dword ptr [eax + 0x160], 0x13
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        ; Exact mapped bytes 7E 16: jle 0x58862059
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x58862059
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 C0 04 00 00: add eax, 0x4c0
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886205b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 51 D8: mov edx, dword ptr [ecx - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0xd8
        ; Exact mapped bytes 89 42 54: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886208d
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 68 18: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x18
        ; Exact mapped bytes 89 6A 0C: mov dword ptr [edx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 68 1C: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 6A 10: mov dword ptr [edx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 28: mov ebp, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x28
        ; Exact mapped bytes 83 C2 14: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x14
        ; Exact mapped bytes 89 2A: mov dword ptr [edx], ebp
        __asm _emit 0x89
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 68 04: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x04
        ; Exact mapped bytes 89 6A 04: mov dword ptr [edx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 68 08: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x08
        ; Exact mapped bytes 89 6A 08: mov dword ptr [edx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 42 0C: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 11: cmp dword ptr [eax + 0x160], 0x11
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        ; Exact mapped bytes 0F 8E B8 00 00 00: jle 0x58862157
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x58862157
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 40 04 00 00: add eax, 0x440
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x58862159
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD F0 FF 00 00: mov ebp, 0xfff0
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 0F B7 07: movzx eax, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x07
        ; Exact mapped bytes 8B 15 A0 46 A2 58: mov edx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 37: add eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x37
        ; Exact mapped bytes 39 82 60 01 00 00: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 18: jle 0x588620f7
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 14: jl 0x588620f7
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 83 BA 90 01 00 00 00: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x588620f7
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes C1 E0 06: shl eax, 6
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x06
        ; Exact mapped bytes 03 82 90 01 00 00: add eax, dword ptr [edx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588620f9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 51 D8: mov edx, dword ptr [ecx - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0xd8
        ; Exact mapped bytes 89 42 54: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886212b
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 68 18: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x18
        ; Exact mapped bytes 89 6A 0C: mov dword ptr [edx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 68 1C: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 6A 10: mov dword ptr [edx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 28: mov ebp, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x28
        ; Exact mapped bytes 83 C2 14: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x14
        ; Exact mapped bytes 89 2A: mov dword ptr [edx], ebp
        __asm _emit 0x89
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 68 04: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x04
        ; Exact mapped bytes 89 6A 04: mov dword ptr [edx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 68 08: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x08
        ; Exact mapped bytes 89 6A 08: mov dword ptr [edx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 42 0C: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 07: movzx eax, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x07
        ; Exact mapped bytes 8B 15 A0 46 A2 58: mov edx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 3B: add eax, 0x3b
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x3b
        ; Exact mapped bytes 39 82 60 01 00 00: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 18: jle 0x58862157
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 14: jl 0x58862157
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 83 BA 90 01 00 00 00: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x58862157
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes C1 E0 06: shl eax, 6
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x06
        ; Exact mapped bytes 03 82 90 01 00 00: add eax, dword ptr [edx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58862159
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 51 C4: mov edx, dword ptr [ecx - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0xc4
        ; Exact mapped bytes 89 42 54: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 29: je 0x5886218c
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 68 18: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x18
        ; Exact mapped bytes 89 6A 0C: mov dword ptr [edx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 68 1C: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x1c
        ; Exact mapped bytes 89 6A 10: mov dword ptr [edx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 68 20: mov ebp, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x20
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 83 C2 14: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x14
        ; Exact mapped bytes 89 2A: mov dword ptr [edx], ebp
        __asm _emit 0x89
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 68 04: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x04
        ; Exact mapped bytes 89 6A 04: mov dword ptr [edx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 68 08: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x08
        ; Exact mapped bytes 89 6A 08: mov dword ptr [edx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 42 0C: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 81 C7 D4 00 00 00: add edi, 0xd4
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FB 05: cmp ebx, 5
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x05
        ; Exact mapped bytes 0F 8C 73 FE FF FF: jl 0x58862012
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 28 07 00 00: mov eax, dword ptr [esi + 0x728]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8D 8E 0C 07 00 00: lea ecx, [esi + 0x70c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
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
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x588621c0
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F B7 82 44 02 00 00: movzx eax, word ptr [edx + 0x244]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x82
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 86 08 07 00 00: mov eax, dword ptr [esi + eax*4 + 0x708]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 BC 8E 48 01 00 00 10: cmp dword ptr [esi + ecx*4 + 0x148], 0x10
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 63: jne 0x58862260
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 83 B8 60 01 00 00 1A: cmp dword ptr [eax + 0x160], 0x1a
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1a
        ; Exact mapped bytes 7E 16: jle 0x5886221c
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x5886221c
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 80 06 00 00: add eax, 0x680
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886221e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 2C 07 00 00: mov ecx, dword ptr [esi + 0x72c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x58862253
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 78 18: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x18
        ; Exact mapped bytes 89 79 0C: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 78 1C: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 79 10: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        ; Exact mapped bytes 8B 38: mov edi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x38
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 39: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 89 79 04: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 89 79 08: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 86 28 07 00 00: mov eax, dword ptr [esi + 0x728]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes EB 56: jmp 0x588622b6
        __asm _emit 0xeb
        __asm _emit 0x56
        ; Exact mapped bytes 83 B8 60 01 00 00 17: cmp dword ptr [eax + 0x160], 0x17
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        ; Exact mapped bytes 7E 16: jle 0x5886227f
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x5886227f
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 C0 05 00 00: add eax, 0x5c0
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58862281
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 2C 07 00 00: mov ecx, dword ptr [esi + 0x72c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x588622b6
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 78 18: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x18
        ; Exact mapped bytes 89 79 0C: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 78 1C: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 79 10: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        ; Exact mapped bytes 8B 38: mov edi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x38
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 39: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 89 79 04: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 89 79 08: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 82 44 02 00 00: movzx eax, word ptr [edx + 0x244]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x82
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 3C 07 00 00: mov ecx, dword ptr [esi + 0x73c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 62 02 00 00: add eax, 0x262
        __asm _emit 0x05
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 81 64 01 00 00: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x588622e3
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 0F: jl 0x588622e3
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 05: je 0x588622e3
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 02: jmp 0x588622e5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 58 07 00 00: mov ecx, dword ptr [esi + 0x758]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886231a
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 78 10: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 89 79 0C: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 78 14: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 79 10: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        ; Exact mapped bytes 8B 38: mov edi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x38
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 39: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 89 79 04: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 89 79 08: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 82 AE 01 00 00: movzx eax, word ptr [edx + 0x1ae]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x82
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 3C 07 00 00: mov ecx, dword ptr [esi + 0x73c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 81 64 01 00 00: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x58862342
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 0F: jl 0x58862342
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 05: je 0x58862342
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 02: jmp 0x58862344
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 54 07 00 00: mov ecx, dword ptr [esi + 0x754]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x58862379
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 78 10: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 89 79 0C: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 78 14: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 79 10: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        ; Exact mapped bytes 8B 38: mov edi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x38
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 39: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 89 79 04: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 89 79 08: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 82 AE 01 00 00: movzx eax, word ptr [edx + 0x1ae]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x82
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 3C 07 00 00: mov ecx, dword ptr [esi + 0x73c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 C8 00 00 00: add eax, 0xc8
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 81 64 01 00 00: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x588623a6
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 0F: jl 0x588623a6
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 05: je 0x588623a6
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 02: jmp 0x588623a8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 44 07 00 00: mov ecx, dword ptr [esi + 0x744]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x588623dd
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 78 10: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 89 79 0C: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 78 14: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 79 10: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        ; Exact mapped bytes 8B 38: mov edi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x38
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 39: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 89 79 04: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 89 79 08: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 82 AE 01 00 00: movzx eax, word ptr [edx + 0x1ae]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x82
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 3C 07 00 00: mov ecx, dword ptr [esi + 0x73c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 90 01 00 00: add eax, 0x190
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 81 64 01 00 00: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x5886240a
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 0F: jl 0x5886240a
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 05: je 0x5886240a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 02: jmp 0x5886240c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 48 07 00 00: mov ecx, dword ptr [esi + 0x748]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x58862441
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
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 26 DC FF FF: call 0x58860070
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xdc
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
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
