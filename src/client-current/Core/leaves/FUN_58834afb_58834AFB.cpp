// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834AFB .. +0x6CF bytes.
extern "C" __declspec(naked) void FUN_58834afb_58834AFB() {
    __asm {
        ; Exact mapped bytes 68 0C 01 00 00: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 AE 28 89 58: mov eax, 0x588928ae
        __asm _emit 0xb8
        __asm _emit 0xae
        __asm _emit 0x28
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 DA FF FF: call 0x5883256b
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 5D 0C: mov ebx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 8B 75 10: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 95 EC FE FF FF: mov dword ptr [ebp - 0x114], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 FB 3E 06 00 00: cmp ebx, 0x63e
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2F: je 0x58834b56
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 2B: je 0x58834b56
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 A0 11 8F 58: push 0x588f11a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x11
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 78 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 43 55 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8B 95 EC FE FF FF: mov edx, dword ptr [ebp - 0x114]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 83 F1 F9 FF FF: lea eax, [ebx - 0x60f]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 30: cmp eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x30
        ; Exact mapped bytes 0F 87 07 06 00 00: ja 0x5883516c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 80 1F 52 83 58: movzx eax, byte ptr [eax + 0x5883521f]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x80
        __asm _emit 0x1f
        __asm _emit 0x52
        __asm _emit 0x83
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 85 CB 51 83 58: jmp dword ptr [eax*4 + 0x588351cb]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x51
        __asm _emit 0x83
        __asm _emit 0x58
        ; Exact mapped bytes BF E9 03 00 00: mov edi, 0x3e9
        __asm _emit 0xbf
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 39 00: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 75 60: jne 0x58834bdd
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 89 79 08: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        ; Exact mapped bytes 89 71 0C: mov dword ptr [ecx + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x0c
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes E8 9F D9 FF FF: call 0x58832529
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes BF EA 03 00 00: mov edi, 0x3ea
        __asm _emit 0xbf
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E4: jmp 0x58834b78
        __asm _emit 0xeb
        __asm _emit 0xe4
        ; Exact mapped bytes 69 05 E4 60 90 58 20 03 00 00: imul eax, dword ptr [0x589060e4], 0x320
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 E1: jb 0x58834b83
        __asm _emit 0x72
        __asm _emit 0xe1
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 E7 0F 00 00: call 0x58835b91
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 5D 0E 00 00: call 0x58835a0d
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 39 1D EC 83 96 58: cmp dword ptr [0x589683ec], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1E: je 0x58834bd8
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 C0 11 8F 58: push 0x588f11c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 77 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B5 54 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes BF E9 03 00 00: mov edi, 0x3e9
        __asm _emit 0xbf
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 60 90 58: mov eax, dword ptr [0x589060d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 9C 05 00 00: jne 0x58835188
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 A8 7A 96 58: mov ecx, 0x58967aa8
        __asm _emit 0xb9
        __asm _emit 0xa8
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 57 00 00: call 0x5883a2f7
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 8B: jmp 0x58834b83
        __asm _emit 0xeb
        __asm _emit 0x8b
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1E: je 0x58834c1a
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 D8 11 8F 58: push 0x588f11d8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0x11
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 77 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 73 54 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes BF F8 03 00 00: mov edi, 0x3f8
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BC: jmp 0x58834bdd
        __asm _emit 0xeb
        __asm _emit 0xbc
        ; Exact mapped bytes BF F3 03 00 00: mov edi, 0x3f3
        __asm _emit 0xbf
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 79 04 00: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x58834b7b
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BF F4 03 00 00: mov edi, 0x3f4
        __asm _emit 0xbf
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB F0: jmp 0x58834c26
        __asm _emit 0xeb
        __asm _emit 0xf0
        ; Exact mapped bytes BF F5 03 00 00: mov edi, 0x3f5
        __asm _emit 0xbf
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 79 04 00: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 38 FF FF FF: je 0x58834b7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D B4 7D 96 58 00: cmp dword ptr [0x58967db4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 8F: jne 0x58834bdd
        __asm _emit 0x75
        __asm _emit 0x8f
        ; Exact mapped bytes 80 3D 40 68 96 58 00: cmp byte ptr [0x58966840], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x58834c7c
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 81 C1 C4 22 00 00: add ecx, 0x22c4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C9 85 00 00: call 0x5883d22b
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 10: je 0x58834c7c
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 68 40 68 96 58: push 0x58966840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 4E 00 00: call 0x58839b10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 80 3D 48 69 96 58 00: cmp byte ptr [0x58966948], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x58834caa
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 81 C1 C4 22 00 00: add ecx, 0x22c4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9B 85 00 00: call 0x5883d22b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 10: je 0x58834caa
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 68 48 69 96 58: push 0x58966948
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 4E 00 00: call 0x58839b10
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 80 3D 50 6A 96 58 00: cmp byte ptr [0x58966a50], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1F: je 0x58834cd2
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 81 C1 C4 22 00 00: add ecx, 0x22c4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6D 85 00 00: call 0x5883d22b
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 10: je 0x58834cd2
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 50 6A 96 58: push 0x58966a50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 4E 00 00: call 0x58839b10
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 96 7D 96 58 01: mov byte ptr [0x58967d96], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes E9 FF FE FF FF: jmp 0x58834bdd
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BF FA 03 00 00: mov edi, 0x3fa
        __asm _emit 0xbf
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x58834c3b
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BF F7 03 00 00: mov edi, 0x3f7
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x58834c26
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BE D2 00 00 00: mov esi, 0xd2
        __asm _emit 0xbe
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 79 04 00: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes B8 F6 03 00 00: mov eax, 0x3f6
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 0F 85 D5 FE FF FF: jne 0x58834bdd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 41 08: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes E9 70 FE FF FF: jmp 0x58834b80
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BE DC 00 00 00: mov esi, 0xdc
        __asm _emit 0xbe
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E0: jmp 0x58834cf7
        __asm _emit 0xeb
        __asm _emit 0xe0
        ; Exact mapped bytes 83 79 04 00: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes B8 F6 03 00 00: mov eax, 0x3f6
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA E6 00 00 00: mov edx, 0xe6
        __asm _emit 0xba
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes 0F 85 AE FE FF FF: jne 0x58834bdd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 41 08: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes E9 49 FE FF FF: jmp 0x58834b83
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes E8 D1 84 00 00: call 0x5883d212
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 81 FB 1A 06 00 00: cmp ebx, 0x61a
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 36: jne 0x58834d81
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 5E: je 0x58834db2
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes FF 76 10: push dword ptr [esi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes FF 76 0C: push dword ptr [esi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x0c
        ; Exact mapped bytes FF 76 08: push dword ptr [esi + 8]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes FF 76 04: push dword ptr [esi + 4]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x04
        ; Exact mapped bytes FF 36: push dword ptr [esi]
        __asm _emit 0xff
        __asm _emit 0x36
        ; Exact mapped bytes 68 EC 11 8F 58: push 0x588f11ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x11
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 75 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0E 53 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes EB 31: jmp 0x58834db2
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 28: je 0x58834db2
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes FF 76 0C: push dword ptr [esi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x0c
        ; Exact mapped bytes FF 76 08: push dword ptr [esi + 8]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes FF 76 04: push dword ptr [esi + 4]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x04
        ; Exact mapped bytes FF 36: push dword ptr [esi]
        __asm _emit 0xff
        __asm _emit 0x36
        ; Exact mapped bytes 68 0C 12 8F 58: push 0x588f120c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x12
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 75 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DB 52 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes BF F9 03 00 00: mov edi, 0x3f9
        __asm _emit 0xbf
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 21 FE FF FF: jmp 0x58834bdd
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 7F 74 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 7D 96 58 00: cmp dword ptr [0x58967da0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes BF FB 03 00 00: mov edi, 0x3fb
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 68: je 0x58834e37
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes A1 E8 60 90 58: mov eax, dword ptr [0x589060e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 B8 42 89 58: mov esi, dword ptr [0x588942b8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 B0 7D 96 58: cmp eax, dword ptr [0x58967db0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 77 49: ja 0x58834e2b
        __asm _emit 0x77
        __asm _emit 0x49
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 2B 05 AC 7D 96 58: sub eax, dword ptr [0x58967dac]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 A0 7D 96 58: cmp eax, dword ptr [0x58967da0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 76 34: jbe 0x58834e26
        __asm _emit 0x76
        __asm _emit 0x34
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x58834e1e
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes FF 35 B0 7D 96 58: push dword ptr [0x58967db0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 8C 0E 8F 58: push 0x588f0e8c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x0e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 75 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6F 52 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes FF 05 8C 7D 96 58: inc dword ptr [0x58967d8c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 11: jmp 0x58834e37
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes A1 E8 60 90 58: mov eax, dword ptr [0x589060e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A3 B0 7D 96 58: mov dword ptr [0x58967db0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes A3 AC 7D 96 58: mov dword ptr [0x58967dac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 EC FE FF FF: mov eax, dword ptr [ebp - 0x114]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B B0 48 22 00 00: mov esi, dword ptr [eax + 0x2248]
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0x48
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 4F 01 00 00: je 0x58834f9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 FE 00 10 00 00: cmp esi, 0x1000
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 43 01 00 00: jae 0x58834f9a
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8D 85 F0 FE FF FF: lea eax, [ebp - 0x110]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A5 7F 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 64 A1 2C 00 00 00: mov eax, dword ptr fs:[0x2c]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 10 67 96 58: mov ecx, dword ptr [0x58966710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0C 88: mov ecx, dword ptr [eax + ecx*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x88
        ; Exact mapped bytes A1 2C 84 96 58: mov eax, dword ptr [0x5896842c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B 81 04 00 00 00: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 42: jle 0x58834ecc
        __asm _emit 0x7e
        __asm _emit 0x42
        ; Exact mapped bytes 68 2C 84 96 58: push 0x5896842c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 CB FF FF: call 0x58831a7d
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 2C 84 96 58 FF: cmp dword ptr [0x5896842c], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 75 2E: jne 0x58834ecc
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 6A 0C: push 0xc
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes 68 E7 07 00 00: push 0x7e7
        __asm _emit 0x68
        __asm _emit 0xe7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 78 7C 96 58: push 0x58967c78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 5D FC: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 F7 F6 FF FF: call 0x588345ad
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 4D FC FF: or dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 68 2C 84 96 58: push 0x5896842c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A2 29 84 96 58: mov byte ptr [0x58968429], al
        __asm _emit 0xa2
        __asm _emit 0x29
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 CB FF FF: call 0x58831a2c
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 80 3D 29 84 96 58 00: cmp byte ptr [0x58968429], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x29
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x58834ee1
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 83 3D 88 7D 96 58 00: cmp dword ptr [0x58967d88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 03: je 0x58834ee1
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes EB 02: jmp 0x58834ee3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8D 85 F0 FE FF FF: lea eax, [ebp - 0x110]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B2 B5 00 00: call 0x588404a2
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 85 F0 FE FF FF: lea eax, [ebp - 0x110]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F8 73 00 00: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 88 7D 96 58: mov edx, dword ptr [0x58967d88]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D E4 83 96 58: mov ecx, dword ptr [0x589683e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 03 0D 8C 7D 96 58: add ecx, dword ptr [0x58967d8c]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 03 CE: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xce
        ; Exact mapped bytes 33 C8: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xc8
        ; Exact mapped bytes 80 3D F0 60 90 58 00: cmp byte ptr [0x589060f0], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 C9: movzx ecx, cl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        ; Exact mapped bytes 89 8D E8 FE FF FF: mov dword ptr [ebp - 0x118], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 3C: je 0x58834f66
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 88 1D F0 60 90 58: mov byte ptr [0x589060f0], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 74 2D: je 0x58834f66
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 35 8C 7D 96 58: push dword ptr [0x58967d8c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x8c
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 28 12 8F 58: push 0x588f1228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x12
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 74 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2D 51 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D E8 FE FF FF: mov ecx, dword ptr [ebp - 0x118]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 7E 23: jle 0x58834f8d
        __asm _emit 0x7e
        __asm _emit 0x23
        ; Exact mapped bytes 8B 95 EC FE FF FF: mov edx, dword ptr [ebp - 0x114]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B FE: mov edi, esi
        __asm _emit 0x8b
        __asm _emit 0xfe
        ; Exact mapped bytes 81 C2 4C 22 00 00: add edx, 0x224c
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C9 03: imul ecx, ecx, 3
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x03
        ; Exact mapped bytes 8A C1: mov al, cl
        __asm _emit 0x8a
        __asm _emit 0xc1
        ; Exact mapped bytes 04 65: add al, 0x65
        __asm _emit 0x04
        __asm _emit 0x65
        ; Exact mapped bytes 30 02: xor byte ptr [edx], al
        __asm _emit 0x30
        __asm _emit 0x02
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 F0: jne 0x58834f78
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes BF FB 03 00 00: mov edi, 0x3fb
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 EC FE FF FF: mov eax, dword ptr [ebp - 0x114]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 88 9C 30 4C 22 00 00: mov byte ptr [eax + esi + 0x224c], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x30
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 8D B0 44 22 00 00: lea esi, [eax + 0x2244]
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x58834fce
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes FF B0 48 22 00 00: push dword ptr [eax + 0x2248]
        __asm _emit 0xff
        __asm _emit 0xb0
        __asm _emit 0x48
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 36: push dword ptr [esi]
        __asm _emit 0xff
        __asm _emit 0x36
        ; Exact mapped bytes 68 5C 12 8F 58: push 0x588f125c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0x12
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 73 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BF 50 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes E8 87 72 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 05 FC FF FF: jmp 0x58834bdd
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 3C 68 96 58: mov eax, dword ptr [0x5896683c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 44 C6: cmove eax, esi
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0xc6
        ; Exact mapped bytes A3 3C 68 96 58: mov dword ptr [0x5896683c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 74 32: je 0x5883501d
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 24 FD FF FF: je 0x58834d17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 74 12 8F 58: push 0x588f1274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 73 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7B 50 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E9 FA FC FF FF: jmp 0x58834d17
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 13: push 0x13
        __asm _emit 0x6a
        __asm _emit 0x13
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 68 E5 07 00 00: push 0x7e5
        __asm _emit 0x68
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 78 7C 96 58: push 0x58967c78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B F5 FF FF: call 0x588345ad
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 46 FB FF FF: jne 0x58834b83
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 CC FC FF FF: je 0x58834d17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 9C 12 8F 58: push 0x588f129c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x12
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 72 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 26 50 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB A9: jmp 0x58835012
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes 80 39 00: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 11 FB FF FF: je 0x58834b83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 3C 68 96 58: mov eax, dword ptr [0x5896683c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 05 A4 00 00 00: add eax, 0xa4
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C6: xor eax, esi
        __asm _emit 0x33
        __asm _emit 0xc6
        ; Exact mapped bytes A3 E8 60 90 58: mov dword ptr [0x589060e8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E9 FB FA FF FF: jmp 0x58834b83
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 81 70 14 00 00: mov eax, dword ptr [ecx + 0x1470]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 B8 19 17 73: add eax, 0x731719b8
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x19
        __asm _emit 0x17
        __asm _emit 0x73
        ; Exact mapped bytes 33 C6: xor eax, esi
        __asm _emit 0x33
        __asm _emit 0xc6
        ; Exact mapped bytes 89 81 74 14 00 00: mov dword ptr [ecx + 0x1474], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 FA FF FF: jmp 0x58834b83
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 81 A4 20 00 00: lea eax, [ecx + 0x20a4]
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes BF FD 03 00 00: mov edi, 0x3fd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 58 18: cmp dword ptr [eax + 0x18], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 74 0D: je 0x588350bf
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 81 C0 20 00 00: lea eax, [ecx + 0x20c0]
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0xc0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5D 10 03 00: call 0x58866130
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 88 A4 20 00 00: lea ecx, [eax + 0x20a4]
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 59 18: cmp dword ptr [ecx + 0x18], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x18
        ; Exact mapped bytes 74 0C: je 0x588350f2
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 E3 FA FF FF: je 0x58834bdd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 05 C0 20 00 00: add eax, 0x20c0
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 B0 12 8F 58: push 0x588f12b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 72 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 70 4F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes E9 BB FA FF FF: jmp 0x58834bdd
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 59 FA FF FF: je 0x58834b83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 DC 12 8F 58: push 0x588f12dc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 72 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 47 4F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes E9 38 FA FF FF: jmp 0x58834b83
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 30 FA FF FF: je 0x58834b83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 C4 22 00 00: add ecx, 0x22c4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D4 80 00 00: call 0x5883d232
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 F8 12 8F 58: push 0x588f12f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x12
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 71 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes EB C8: jmp 0x58835134
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes BF F6 03 00 00: mov edi, 0x3f6
        __asm _emit 0xbf
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 F4 01 00 00: mov eax, 0x1f4
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 45 C6: cmovne eax, esi
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc6
        ; Exact mapped bytes 8D 57 F2: lea edx, [edi - 0xe]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0xf2
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 45 FA: cmovne edi, edx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xfa
        ; Exact mapped bytes E9 9E FA FF FF: jmp 0x58834c26
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 F1 F9 FF FF: jne 0x58834b83
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 24: je 0x588351bf
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 68 18 13 8F 58: push 0x588f1318
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x13
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 71 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D3 4E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes C6 40 27 01: mov byte ptr [eax + 0x27], 1
        __asm _emit 0xc6
        __asm _emit 0x40
        __asm _emit 0x27
        __asm _emit 0x01
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes E9 BB F9 FF FF: jmp 0x58834b85
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
