// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880F950 .. +0x2C9 bytes.
extern "C" __declspec(naked) void FUN_5880f950() {
    __asm {
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 5F 02 00 00: jne 0x5880fbc0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 0C: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 3B 86 2C 04 00 00: cmp eax, dword ptr [esi + 0x42c]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x5880f97f
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 46 70: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x70
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C6 AF FF FF: call 0x5880a940
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DB 01 00 00: jmp 0x5880fb5a
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 30 04 00 00: cmp eax, dword ptr [esi + 0x430]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x5880f999
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 AC AF FF FF: call 0x5880a940
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x5880fb5a
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 AC 03 00 00: cmp eax, dword ptr [esi + 0x3ac]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 7C: jne 0x5880fa1d
        __asm _emit 0x75
        __asm _emit 0x7c
        ; Exact mapped bytes 83 7E 68 FF: cmp dword ptr [esi + 0x68], -1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 AF 01 00 00: je 0x5880fb5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 74 03 00 00: mov edx, dword ptr [esi + 0x374]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5A 50: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 78 03 00 00: mov eax, dword ptr [esi + 0x378]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E 7C 03 00 00: mov ecx, dword ptr [esi + 0x37c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 8B 96 80 03 00 00: mov edx, dword ptr [esi + 0x380]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5A 50: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 84 03 00 00: mov eax, dword ptr [esi + 0x384]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E 88 03 00 00: mov ecx, dword ptr [esi + 0x388]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 8B 96 8C 03 00 00: mov edx, dword ptr [esi + 0x38c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5A 50: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 90 03 00 00: mov eax, dword ptr [esi + 0x390]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E AC 03 00 00: mov ecx, dword ptr [esi + 0x3ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 68: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes C7 41 50 05 00 00 00: mov dword ptr [ecx + 0x50], 5
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 A8 03 00 00: mov edx, dword ptr [esi + 0x3a8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 42 50: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes E8 A8 AF FF FF: call 0x5880a9c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x5880fb5a
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 A8 03 00 00: cmp eax, dword ptr [esi + 0x3a8]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x5880faa9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 68 FF: cmp dword ptr [esi + 0x68], -1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x5880fb5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 39 5E 74: cmp dword ptr [esi + 0x74], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x74
        ; Exact mapped bytes 7E 18: jle 0x5880fa52
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 8D 8E 74 03 00 00: lea ecx, [esi + 0x374]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes C7 42 50 01 00 00 00: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 3B 46 74: cmp eax, dword ptr [esi + 0x74]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes 7C EE: jl 0x5880fa40
        __asm _emit 0x7c
        __asm _emit 0xee
        ; Exact mapped bytes 8B 46 70: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x70
        ; Exact mapped bytes 8B 8C 86 74 03 00 00: mov ecx, dword ptr [esi + eax*4 + 0x374]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 05 00 00 00: mov eax, 5
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 8B 96 A8 03 00 00: mov edx, dword ptr [esi + 0x3a8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5E 68: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x68
        ; Exact mapped bytes 89 42 50: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 AC 03 00 00: mov eax, dword ptr [esi + 0x3ac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 01 00 00 00: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 38 99 64 0D 02 00: cmp byte ptr [ecx + 0x20d64], bl
        __asm _emit 0x38
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 74 0E: je 0x5880fa9b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 56 70: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x70
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 3A B6 FF FF: call 0x5880b0d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x5880fb5a
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 70: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x70
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 4C A0 FF FF: call 0x58809af0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x5880fb5a
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 B0 03 00 00: cmp eax, dword ptr [esi + 0x3b0]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 62: jne 0x5880fb13
        __asm _emit 0x75
        __asm _emit 0x62
        ; Exact mapped bytes 83 7E 68 FF: cmp dword ptr [esi + 0x68], -1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x5880fb5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 03 00 00: mov ecx, dword ptr [esi + 0x374]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 8B 96 78 03 00 00: mov edx, dword ptr [esi + 0x378]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5A 50: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 7C 03 00 00: mov eax, dword ptr [esi + 0x37c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E 80 03 00 00: mov ecx, dword ptr [esi + 0x380]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 8B 96 84 03 00 00: mov edx, dword ptr [esi + 0x384]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5A 50: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 88 03 00 00: mov eax, dword ptr [esi + 0x388]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E 8C 03 00 00: mov ecx, dword ptr [esi + 0x38c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 8B 96 90 03 00 00: mov edx, dword ptr [esi + 0x390]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5A 50: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 46 68 02 00 00 00: mov dword ptr [esi + 0x68], 2
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8F D1 FF FF: call 0x5880cca0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 47: jmp 0x5880fb5a
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes 3B 86 28 04 00 00: cmp eax, dword ptr [esi + 0x428]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3F: jne 0x5880fb5a
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes 83 7E 68 FF: cmp dword ptr [esi + 0x68], -1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0xff
        ; Exact mapped bytes 74 39: je 0x5880fb5a
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 8E CC 08 00 00: mov ecx, dword ptr [esi + 0x8cc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 B9 98 00 00 00 01: cmp byte ptr [ecx + 0x98], 1
        __asm _emit 0x80
        __asm _emit 0xb9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 23: jne 0x5880fb53
        __asm _emit 0x75
        __asm _emit 0x23
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
        ; Exact mapped bytes 8B 8E D0 08 00 00: mov ecx, dword ptr [esi + 0x8d0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 8E D4 08 00 00: mov ecx, dword ptr [esi + 0x8d4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes EB 07: jmp 0x5880fb5a
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 36 B4 FF FF: call 0x5880af90
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 39 5E 74: cmp dword ptr [esi + 0x74], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x74
        ; Exact mapped bytes 7E 56: jle 0x5880fbb8
        __asm _emit 0x7e
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D BE 74 03 00 00: lea edi, [esi + 0x374]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x74
        __asm _emit 0x03
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
        ; Exact mapped bytes 39 5E 68: cmp dword ptr [esi + 0x68], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x68
        ; Exact mapped bytes 75 30: jne 0x5880fba5
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3B 07: cmp eax, dword ptr [edi]
        __asm _emit 0x3b
        __asm _emit 0x07
        ; Exact mapped bytes 75 28: jne 0x5880fba5
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 87 1C FD FF FF: mov eax, dword ptr [edi - 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 46 70: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 38 99 64 0D 02 00: cmp byte ptr [ecx + 0x20d64], bl
        __asm _emit 0x38
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 74 07: je 0x5880fb9e
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 34 B5 FF FF: call 0x5880b0d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x5880fbae
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes E8 4D 9F FF FF: call 0x58809af0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x5880fbae
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 17: mov edx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x17
        ; Exact mapped bytes C7 42 50 01 00 00 00: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 3B 6E 74: cmp ebp, dword ptr [esi + 0x74]
        __asm _emit 0x3b
        __asm _emit 0x6e
        __asm _emit 0x74
        ; Exact mapped bytes 7C B9: jl 0x5880fb70
        __asm _emit 0x7c
        __asm _emit 0xb9
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 0C: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 75 F4: jne 0x5880fbb9
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 15: jne 0x5880fbe4
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 E3: je 0x5880fbb9
        __asm _emit 0x74
        __asm _emit 0xe3
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
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 D0: jne 0x5880fbb9
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 46 60: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 C9: je 0x5880fbb9
        __asm _emit 0x74
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 15 D4 48 A2 58: mov edx, dword ptr [0x58a248d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A3 80 47 A2 58: mov dword ptr [0x58a24780], eax
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
