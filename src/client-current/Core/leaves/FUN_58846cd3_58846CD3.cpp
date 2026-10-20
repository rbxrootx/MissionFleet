// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846CD3 .. +0x1CDE bytes.
extern "C" __declspec(naked) void FUN_58846cd3_58846CD3() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 81 EC BC 0A 00 00: sub esp, 0xabc
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7D 08: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 8D 85 BC F5 FF FF: lea eax, [ebp - 0xa44]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 BD 74 F5 FF FF: mov dword ptr [ebp - 0xa8c], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes BF 1C 01 00 00: mov edi, 0x11c
        __asm _emit 0xbf
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 09 61 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 B5 B0 F5 FF FF: mov dword ptr [ebp - 0xa50], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 EF 60 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 85 BC F5 FF FF: lea eax, [ebp - 0xa44]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 88 9D BB F5 FF FF: mov byte ptr [ebp - 0xa45], bl
        __asm _emit 0x88
        __asm _emit 0x9d
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 9D 90 F5 FF FF: mov dword ptr [ebp - 0xa70], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x90
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9D 9C F5 FF FF: mov dword ptr [ebp - 0xa64], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9D 94 F5 FF FF: mov dword ptr [ebp - 0xa6c], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x94
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9D 98 F5 FF FF: mov dword ptr [ebp - 0xa68], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x98
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9D 78 F5 FF FF: mov dword ptr [ebp - 0xa88], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9D 80 F5 FF FF: mov dword ptr [ebp - 0xa80], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9D 88 F5 FF FF: mov dword ptr [ebp - 0xa78], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x88
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9D 7C F5 FF FF: mov dword ptr [ebp - 0xa84], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x7c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9D 84 F5 FF FF: mov dword ptr [ebp - 0xa7c], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9D 8C F5 FF FF: mov dword ptr [ebp - 0xa74], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 9F 60 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D E0 42 89 58: mov ebx, dword ptr [0x588942e0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 24: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x24
        ; Exact mapped bytes 89 BD BC F5 FF FF: mov dword ptr [ebp - 0xa44], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 60 31 8F 58: push 0x588f3160
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 70 31 8F 58: push 0x588f3170
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7F 1E 00 00: call 0x58848c11
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x58846d9f
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8D 8D BC F5 FF FF: lea ecx, [ebp - 0xa44]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 68 38 01 8F 58: push 0x588f0138
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes BF 48 01 8F 58: mov edi, 0x588f0148
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5F 1E 00 00: call 0x58848c11
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 24: push 0x24
        __asm _emit 0x6a
        __asm _emit 0x24
        ; Exact mapped bytes 0F 44 05 34 41 89 58: cmove eax, dword ptr [0x58894134]
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 A0 F5 FF FF: mov dword ptr [ebp - 0xa60], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 44 F5 FF FF: lea eax, [ebp - 0xabc]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 3F 60 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 7C 31 8F 58: push 0x588f317c
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 3D DC 42 89 58: mov edi, dword ptr [0x588942dc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x58846df4
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8D 8D 44 F5 FF FF: lea ecx, [ebp - 0xabc]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 0D: jmp 0x58846e01
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8D 85 44 F5 FF FF: lea eax, [ebp - 0xabc]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 48 43 89 58: call dword ptr [0x58894348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 68 90 31 8F 58: push 0x588f3190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 48 01 8F 58: push 0x588f0148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 85 AC F5 FF FF: mov dword ptr [ebp - 0xa54], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0C: jne 0x58846e28
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 88 9D BB F5 FF FF: mov byte ptr [ebp - 0xa45], bl
        __asm _emit 0x88
        __asm _emit 0x9d
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x58846f5c
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 21 B5 B4 F5 FF FF: and dword ptr [ebp - 0xa4c], esi
        __asm _emit 0x21
        __asm _emit 0xb5
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 8D 8D B4 F5 FF FF: lea ecx, [ebp - 0xa4c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2A: jne 0x58846e6b
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 7A: cmp eax, 0x7a
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x7a
        ; Exact mapped bytes 75 2B: jne 0x58846e77
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 07: je 0x58846e57
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 AA 27 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes FF B5 B4 F5 FF FF: push dword ptr [ebp - 0xa4c]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 AE 27 01 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 0E: je 0x58846e77
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes EB 02: jmp 0x58846e6d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 8B 85 AC F5 FF FF: mov eax, dword ptr [ebp - 0xa54]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 BC: je 0x58846e33
        __asm _emit 0x74
        __asm _emit 0xbc
        ; Exact mapped bytes 8B B5 B0 F5 FF FF: mov esi, dword ptr [ebp - 0xa50]
        __asm _emit 0x8b
        __asm _emit 0xb5
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 BD A8 F5 FF FF: mov dword ptr [ebp - 0xa58], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x58846f5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BD B4 F5 FF FF 18: cmp dword ptr [ebp - 0xa4c], 0x18
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x18
        ; Exact mapped bytes 0F 82 BD 00 00 00: jb 0x58846f55
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes 8D 77 08: lea esi, [edi + 8]
        __asm _emit 0x8d
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 89 85 AC F5 FF FF: mov dword ptr [ebp - 0xa54], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 46 FC: mov eax, dword ptr [esi - 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 74 72: je 0x58846f22
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 65: je 0x58846f1a
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 0D: je 0x58846ec7
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 78: jne 0x58846f37
        __asm _emit 0x75
        __asm _emit 0x78
        ; Exact mapped bytes FF 85 98 F5 FF FF: inc dword ptr [ebp - 0xa68]
        __asm _emit 0xff
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 70: jmp 0x58846f37
        __asm _emit 0xeb
        __asm _emit 0x70
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 75 17: jne 0x58846ee4
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 85 7C F5 FF FF: mov eax, dword ptr [ebp - 0xa84]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 85 78 F5 FF FF: inc dword ptr [ebp - 0xa88]
        __asm _emit 0xff
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 46 04: add eax, dword ptr [esi + 4]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 7C F5 FF FF: mov dword ptr [ebp - 0xa84], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 53: jmp 0x58846f37
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 75 17: jne 0x58846eff
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 85 84 F5 FF FF: mov eax, dword ptr [ebp - 0xa7c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 85 80 F5 FF FF: inc dword ptr [ebp - 0xa80]
        __asm _emit 0xff
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 46 04: add eax, dword ptr [esi + 4]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 84 F5 FF FF: mov dword ptr [ebp - 0xa7c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 38: jmp 0x58846f37
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 3C 03: cmp al, 3
        __asm _emit 0x3c
        __asm _emit 0x03
        ; Exact mapped bytes 75 34: jne 0x58846f37
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 85 8C F5 FF FF: mov eax, dword ptr [ebp - 0xa74]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 85 88 F5 FF FF: inc dword ptr [ebp - 0xa78]
        __asm _emit 0xff
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 46 04: add eax, dword ptr [esi + 4]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 8C F5 FF FF: mov dword ptr [ebp - 0xa74], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x58846f37
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes FF 85 9C F5 FF FF: inc dword ptr [ebp - 0xa64]
        __asm _emit 0xff
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x58846f37
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes FF 76 F8: push dword ptr [esi - 8]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0xf8
        ; Exact mapped bytes FF 85 94 F5 FF FF: inc dword ptr [ebp - 0xa6c]
        __asm _emit 0xff
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 16 FD FF FF: call 0x58846c46
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 01 85 90 F5 FF FF: add dword ptr [ebp - 0xa70], eax
        __asm _emit 0x01
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 C6 18: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x18
        ; Exact mapped bytes 8D 04 37: lea eax, [edi + esi]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x37
        ; Exact mapped bytes 3B 85 B4 F5 FF FF: cmp eax, dword ptr [ebp - 0xa4c]
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 86 5F FF FF FF: jbe 0x58846ea8
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B B5 B0 F5 FF FF: mov esi, dword ptr [ebp - 0xa50]
        __asm _emit 0x8b
        __asm _emit 0xb5
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B BD A8 F5 FF FF: mov edi, dword ptr [ebp - 0xa58]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A5 26 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B 85 CC F5 FF FF: mov eax, dword ptr [ebp - 0xa34]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E3 09 00 00: je 0x5884794e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 AC 08 00 00: je 0x58847820
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 E6 09 00 00: jne 0x58847963
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 C0 F5 FF FF: mov eax, dword ptr [ebp - 0xa40]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BF 88 72 90 58: mov edi, 0x58907288
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 88 1D E8 93 96 58: mov byte ptr [0x589693e8], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 77 31: ja 0x58846fc4
        __asm _emit 0x77
        __asm _emit 0x31
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 B0 31 8F 58: push 0x588f31b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BC 5B CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5b
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 68 C8 31 8F 58: push 0x588f31c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 C0 F5 FF FF: mov eax, dword ptr [ebp - 0xa40]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 EC 93 96 58 21 4E 00 00: mov dword ptr [0x589693ec], 0x4e21
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 26 01 00 00: jne 0x588470f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C4 F5 FF FF: mov ecx, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 42: jne 0x58847019
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 CC 31 8F 58: push 0x588f31cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 76 5B CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5b
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 68 E4 31 8F 58: push 0x588f31e4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 C0 F5 FF FF: mov eax, dword ptr [ebp - 0xa40]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 EC 93 96 58 22 4E 00 00: mov dword ptr [0x589693ec], 0x4e22
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x22
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 E0 00 00 00: jne 0x588470f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C4 F5 FF FF: mov ecx, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 75 42: jne 0x5884705f
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 E8 31 8F 58: push 0x588f31e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 30 5B CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5b
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 68 00 32 8F 58: push 0x588f3200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 C0 F5 FF FF: mov eax, dword ptr [ebp - 0xa40]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 EC 93 96 58 2A 4E 00 00: mov dword ptr [0x589693ec], 0x4e2a
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x2a
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x588470f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C4 F5 FF FF: mov ecx, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 28 02 00 00: jne 0x58847290
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 59: push 0x59
        __asm _emit 0x6a
        __asm _emit 0x59
        ; Exact mapped bytes FF 15 F0 44 89 58: call dword ptr [0x588944f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 07: je 0x5884707b
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 68 04 32 8F 58: push 0x588f3204
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x32
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 4A: jmp 0x588470c5
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes B8 00 20 00 00: mov eax, 0x2000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 85 D4 F6 FF FF: cmp word ptr [ebp - 0x92c], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 07: jne 0x58847090
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 28 32 8F 58: push 0x588f3228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x32
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 35: jmp 0x588470c5
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes B8 00 80 00 00: mov eax, 0x8000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 85 D4 F6 FF FF: cmp word ptr [ebp - 0x92c], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 07: jne 0x588470a5
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 50 32 8F 58: push 0x588f3250
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x32
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 20: jmp 0x588470c5
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 38 9D D6 F6 FF FF: cmp byte ptr [ebp - 0x92a], bl
        __asm _emit 0x38
        __asm _emit 0x9d
        __asm _emit 0xd6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 13: jne 0x588470c0
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 66 39 85 44 F5 FF FF: cmp word ptr [ebp - 0xabc], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 07: jne 0x588470c0
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 70 32 8F 58: push 0x588f3270
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x32
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 05: jmp 0x588470c5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 68 A0 32 8F 58: push 0x588f32a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x32
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8D 5A CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x5a
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 68 C0 32 8F 58: push 0x588f32c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x32
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 C0 F5 FF FF: mov eax, dword ptr [ebp - 0xa40]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 EC 93 96 58 3E 4E 00 00: mov dword ptr [0x589693ec], 0x4e3e
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x3e
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 3E 01 00 00: jne 0x5884723a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C4 F5 FF FF: mov ecx, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 51: jne 0x58847157
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 38 9D D6 F6 FF FF: cmp byte ptr [ebp - 0x92a], bl
        __asm _emit 0x38
        __asm _emit 0x9d
        __asm _emit 0xd6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 07: jne 0x5884711d
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 C4 32 8F 58: push 0x588f32c4
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0x32
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 05: jmp 0x58847122
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 68 E0 32 8F 58: push 0x588f32e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x32
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 38 5A CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5a
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 68 00 33 8F 58: push 0x588f3300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 C0 F5 FF FF: mov eax, dword ptr [ebp - 0xa40]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 EC 93 96 58 48 4E 00 00: mov dword ptr [0x589693ec], 0x4e48
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x48
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x5884723a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C4 F5 FF FF: mov ecx, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 75 51: jne 0x588471ac
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 38 9D D6 F6 FF FF: cmp byte ptr [ebp - 0x92a], bl
        __asm _emit 0x38
        __asm _emit 0x9d
        __asm _emit 0xd6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 07: jne 0x58847172
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 04 33 8F 58: push 0x588f3304
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 05: jmp 0x58847177
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 68 1C 33 8F 58: push 0x588f331c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E3 59 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x59
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 68 40 33 8F 58: push 0x588f3340
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 C0 F5 FF FF: mov eax, dword ptr [ebp - 0xa40]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 EC 93 96 58 70 4E 00 00: mov dword ptr [0x589693ec], 0x4e70
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x70
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x5884723a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C4 F5 FF FF: mov ecx, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 4D: jne 0x588471fe
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 38 9D D6 F6 FF FF: cmp byte ptr [ebp - 0x92a], bl
        __asm _emit 0x38
        __asm _emit 0x9d
        __asm _emit 0xd6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 07: jne 0x588471c8
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 44 33 8F 58: push 0x588f3344
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 05: jmp 0x588471cd
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 68 5C 33 8F 58: push 0x588f335c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8D 59 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x59
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 68 7C 33 8F 58: push 0x588f337c
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 C0 F5 FF FF: mov eax, dword ptr [ebp - 0xa40]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 EC 93 96 58 8E 4E 00 00: mov dword ptr [0x589693ec], 0x4e8e
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x8e
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 42: jne 0x5884723a
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 8B 8D C4 F5 FF FF: mov ecx, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F9 03: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x58847290
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 80 33 8F 58: push 0x588f3380
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 46 59 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x59
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 68 98 33 8F 58: push 0x588f3398
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 C0 F5 FF FF: mov eax, dword ptr [ebp - 0xa40]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 EC 93 96 58 A2 4E 00 00: mov dword ptr [0x589693ec], 0x4ea2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xa2
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 0A: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 75 4B: jne 0x5884728a
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 66 81 BD C8 F5 FF FF F0 55: cmp word ptr [ebp - 0xa38], 0x55f0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xbd
        __asm _emit 0xc8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xf0
        __asm _emit 0x55
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BA A0 33 8F 58: mov edx, 0x588f33a0
        __asm _emit 0xba
        __asm _emit 0xa0
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes B9 9C 33 8F 58: mov ecx, 0x588f339c
        __asm _emit 0xb9
        __asm _emit 0x9c
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 0F 42 CA: cmovb ecx, edx
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0xca
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 A4 33 8F 58: push 0x588f33a4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F7 58 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x58
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes 68 A0 33 8F 58: push 0x588f33a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 C0 F5 FF FF: mov eax, dword ptr [ebp - 0xa40]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 EC 93 96 58 AC 4E 00 00: mov dword ptr [0x589693ec], 0x4eac
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xac
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C4 F5 FF FF: mov ecx, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 82 8D 04 00 00: jb 0x58847726
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 A5 A8 F5 FF FF 00: and dword ptr [ebp - 0xa58], 0
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 68 BC 33 8F 58: push 0x588f33bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 48 01 8F 58: push 0x588f0148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 DC 42 89 58: call dword ptr [0x588942dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 A4 06 00 00: je 0x58847963
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D A8 F5 FF FF: lea ecx, [ebp - 0xa58]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF B5 C4 F5 FF FF: push dword ptr [ebp - 0xa3c]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF B5 C0 F5 FF FF: push dword ptr [ebp - 0xa40]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 83 06 00 00: je 0x58847963
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 A8 F5 FF FF: mov eax, dword ptr [ebp - 0xa58]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 1A: jne 0x58847304
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 68 CC 33 8F 58: push 0x588f33cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 63 58 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x58
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes E9 5D 06 00 00: jmp 0x58847961
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 07: jne 0x58847310
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 E0 33 8F 58: push 0x588f33e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB DF: jmp 0x588472ef
        __asm _emit 0xeb
        __asm _emit 0xdf
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 07: jne 0x5884731c
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 F8 33 8F 58: push 0x588f33f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB D3: jmp 0x588472ef
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 75 07: jne 0x58847328
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 0C 34 8F 58: push 0x588f340c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB C7: jmp 0x588472ef
        __asm _emit 0xeb
        __asm _emit 0xc7
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 07: jne 0x58847334
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 20 34 8F 58: push 0x588f3420
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB BB: jmp 0x588472ef
        __asm _emit 0xeb
        __asm _emit 0xbb
        ; Exact mapped bytes 83 F8 0B: cmp eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 75 07: jne 0x58847340
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 34 34 8F 58: push 0x588f3434
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB AF: jmp 0x588472ef
        __asm _emit 0xeb
        __asm _emit 0xaf
        ; Exact mapped bytes 3D B2 00 00 00: cmp eax, 0xb2
        __asm _emit 0x3d
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x5884734e
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 48 34 8F 58: push 0x588f3448
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB A1: jmp 0x588472ef
        __asm _emit 0xeb
        __asm _emit 0xa1
        ; Exact mapped bytes 3D B3 00 00 00: cmp eax, 0xb3
        __asm _emit 0x3d
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x5884735c
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 58 34 8F 58: push 0x588f3458
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 93: jmp 0x588472ef
        __asm _emit 0xeb
        __asm _emit 0x93
        ; Exact mapped bytes 83 F8 12: cmp eax, 0x12
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x12
        ; Exact mapped bytes 75 07: jne 0x58847368
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 68 6C 34 8F 58: push 0x588f346c
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 87: jmp 0x588472ef
        __asm _emit 0xeb
        __asm _emit 0x87
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 75 0A: jne 0x58847377
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 84 34 8F 58: push 0x588f3484
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 0C: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 75 0A: jne 0x58847386
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 98 34 8F 58: push 0x588f3498
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 69 FF FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 79: cmp eax, 0x79
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x79
        ; Exact mapped bytes 75 0A: jne 0x58847395
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 C0 34 8F 58: push 0x588f34c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 5A FF FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 7A: cmp eax, 0x7a
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x7a
        ; Exact mapped bytes 75 0A: jne 0x588473a4
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 D4 34 8F 58: push 0x588f34d4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 0A: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 84 74 FF FF FF: je 0x58847321
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 0E: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 75 0A: jne 0x588473bc
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 EC 34 8F 58: push 0x588f34ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 33 FF FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 0F: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 75 0A: jne 0x588473cb
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 14 35 8F 58: push 0x588f3514
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 24 FF FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 09: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 75 0A: jne 0x588473da
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 44 35 8F 58: push 0x588f3544
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 15 FF FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 19: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x19
        ; Exact mapped bytes 75 0A: jne 0x588473e9
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 5C 35 8F 58: push 0x588f355c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 06 FF FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 07: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 75 0A: jne 0x588473f8
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 84 35 8F 58: push 0x588f3584
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 F7 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 0D: cmp eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 75 0A: jne 0x58847407
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 98 35 8F 58: push 0x588f3598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 E8 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 11: cmp eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x11
        ; Exact mapped bytes 75 0A: jne 0x58847416
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 C0 35 8F 58: push 0x588f35c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 D9 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 40: cmp eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x40
        ; Exact mapped bytes 75 0A: jne 0x58847425
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 D4 35 8F 58: push 0x588f35d4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 CA FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 65: cmp eax, 0x65
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x65
        ; Exact mapped bytes 75 0A: jne 0x58847434
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 EC 35 8F 58: push 0x588f35ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 BB FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 62: cmp eax, 0x62
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x62
        ; Exact mapped bytes 75 0A: jne 0x58847443
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 F4 35 8F 58: push 0x588f35f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 AC FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 63: cmp eax, 0x63
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x63
        ; Exact mapped bytes 75 0A: jne 0x58847452
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 FC 35 8F 58: push 0x588f35fc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 9D FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 64: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x64
        ; Exact mapped bytes 75 0A: jne 0x58847461
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 08 36 8F 58: push 0x588f3608
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x36
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 8E FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 50: cmp eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x50
        ; Exact mapped bytes 75 0A: jne 0x58847470
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 20 36 8F 58: push 0x588f3620
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x36
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 7F FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 27: cmp eax, 0x27
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x27
        ; Exact mapped bytes 75 0A: jne 0x5884747f
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 50 36 8F 58: push 0x588f3650
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x36
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 70 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 25: cmp eax, 0x25
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x25
        ; Exact mapped bytes 75 0A: jne 0x5884748e
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 88 36 8F 58: push 0x588f3688
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x36
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 61 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 54: cmp eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x54
        ; Exact mapped bytes 75 0A: jne 0x5884749d
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 C0 36 8F 58: push 0x588f36c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x36
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 52 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 1B: cmp eax, 0x1b
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1b
        ; Exact mapped bytes 75 0A: jne 0x588474ac
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 E8 36 8F 58: push 0x588f36e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 43 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 48: cmp eax, 0x48
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x48
        ; Exact mapped bytes 75 0A: jne 0x588474bb
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 F8 36 8F 58: push 0x588f36f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x36
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 34 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 29: cmp eax, 0x29
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x29
        ; Exact mapped bytes 75 0A: jne 0x588474ca
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 28 37 8F 58: push 0x588f3728
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x37
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 25 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 26: cmp eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x26
        ; Exact mapped bytes 75 0A: jne 0x588474d9
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 60 37 8F 58: push 0x588f3760
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x37
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 16 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 3B: cmp eax, 0x3b
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x3b
        ; Exact mapped bytes 75 0A: jne 0x588474e8
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 98 37 8F 58: push 0x588f3798
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x37
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 07 FE FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 3C: cmp eax, 0x3c
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x3c
        ; Exact mapped bytes 75 0A: jne 0x588474f7
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 C0 37 8F 58: push 0x588f37c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x37
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 F8 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 3D: cmp eax, 0x3d
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x3d
        ; Exact mapped bytes 75 0A: jne 0x58847506
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 E8 37 8F 58: push 0x588f37e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 E9 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 3E: cmp eax, 0x3e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x3e
        ; Exact mapped bytes 75 0A: jne 0x58847515
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 14 38 8F 58: push 0x588f3814
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x38
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 DA FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 1A: cmp eax, 0x1a
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1a
        ; Exact mapped bytes 75 0A: jne 0x58847524
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 40 38 8F 58: push 0x588f3840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x38
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 CB FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 22: cmp eax, 0x22
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x22
        ; Exact mapped bytes 75 0A: jne 0x58847533
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 50 38 8F 58: push 0x588f3850
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x38
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 BC FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 2A: cmp eax, 0x2a
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2a
        ; Exact mapped bytes 75 0A: jne 0x58847542
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 6C 38 8F 58: push 0x588f386c
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0x38
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 AD FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 1E: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1e
        ; Exact mapped bytes 75 0A: jne 0x58847551
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 88 38 8F 58: push 0x588f3888
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x38
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 9E FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 20: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 75 0A: jne 0x58847560
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 B8 38 8F 58: push 0x588f38b8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x38
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 8F FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 1F: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1f
        ; Exact mapped bytes 75 0A: jne 0x5884756f
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 E4 38 8F 58: push 0x588f38e4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0x38
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 80 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 4C: cmp eax, 0x4c
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4c
        ; Exact mapped bytes 75 0A: jne 0x5884757e
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 10 39 8F 58: push 0x588f3910
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 71 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 4D: cmp eax, 0x4d
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4d
        ; Exact mapped bytes 75 0A: jne 0x5884758d
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 40 39 8F 58: push 0x588f3940
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 62 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 30: cmp eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x30
        ; Exact mapped bytes 75 0A: jne 0x5884759c
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 70 39 8F 58: push 0x588f3970
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 53 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 31: cmp eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x31
        ; Exact mapped bytes 75 0A: jne 0x588475ab
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 80 39 8F 58: push 0x588f3980
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 44 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 67: cmp eax, 0x67
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x67
        ; Exact mapped bytes 75 0A: jne 0x588475ba
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 90 39 8F 58: push 0x588f3990
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 35 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 36: cmp eax, 0x36
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x36
        ; Exact mapped bytes 75 0A: jne 0x588475c9
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 B0 39 8F 58: push 0x588f39b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 26 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 33: cmp eax, 0x33
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x33
        ; Exact mapped bytes 75 0A: jne 0x588475d8
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 CC 39 8F 58: push 0x588f39cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 17 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 37: cmp eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x37
        ; Exact mapped bytes 74 E2: je 0x588475bf
        __asm _emit 0x74
        __asm _emit 0xe2
        ; Exact mapped bytes 83 F8 23: cmp eax, 0x23
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x23
        ; Exact mapped bytes 75 0A: jne 0x588475ec
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 E8 39 8F 58: push 0x588f39e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 03 FD FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 21: cmp eax, 0x21
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x21
        ; Exact mapped bytes 75 0A: jne 0x588475fb
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 34 3A 8F 58: push 0x588f3a34
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x3a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 F4 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 32: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x32
        ; Exact mapped bytes 75 0A: jne 0x5884760a
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 48 3A 8F 58: push 0x588f3a48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x3a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 E5 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 3F: cmp eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x3f
        ; Exact mapped bytes 75 0A: jne 0x58847619
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 70 3A 8F 58: push 0x588f3a70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x3a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 D6 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 38: cmp eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x38
        ; Exact mapped bytes 75 0A: jne 0x58847628
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 A4 3A 8F 58: push 0x588f3aa4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x3a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 C7 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 4F: cmp eax, 0x4f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4f
        ; Exact mapped bytes 75 0A: jne 0x58847637
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 B8 3A 8F 58: push 0x588f3ab8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x3a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 B8 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 24: cmp eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x24
        ; Exact mapped bytes 75 0A: jne 0x58847646
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 E4 3A 8F 58: push 0x588f3ae4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0x3a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 A9 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 28: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x28
        ; Exact mapped bytes 75 0A: jne 0x58847655
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 08 3B 8F 58: push 0x588f3b08
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x3b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 9A FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 34: cmp eax, 0x34
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x34
        ; Exact mapped bytes 75 0A: jne 0x58847664
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 40 3B 8F 58: push 0x588f3b40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x3b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 8B FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 35: cmp eax, 0x35
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x35
        ; Exact mapped bytes 75 0A: jne 0x58847673
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 5C 3B 8F 58: push 0x588f3b5c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0x3b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 7C FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 2F: cmp eax, 0x2f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2f
        ; Exact mapped bytes 75 0A: jne 0x58847682
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 8C 3B 8F 58: push 0x588f3b8c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x3b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 6D FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 2E: cmp eax, 0x2e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2e
        ; Exact mapped bytes 75 0A: jne 0x58847691
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 98 3B 8F 58: push 0x588f3b98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x3b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 5E FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 2B: cmp eax, 0x2b
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2b
        ; Exact mapped bytes 75 0A: jne 0x588476a0
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 C8 3B 8F 58: push 0x588f3bc8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x3b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 4F FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 60: cmp eax, 0x60
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x60
        ; Exact mapped bytes 75 0A: jne 0x588476af
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 F4 3B 8F 58: push 0x588f3bf4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x3b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 40 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 2C: cmp eax, 0x2c
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2c
        ; Exact mapped bytes 75 0A: jne 0x588476be
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 28 3C 8F 58: push 0x588f3c28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x3c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 31 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 5F: cmp eax, 0x5f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x5f
        ; Exact mapped bytes 75 0A: jne 0x588476cd
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 58 3C 8F 58: push 0x588f3c58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x3c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 22 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 2D: cmp eax, 0x2d
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2d
        ; Exact mapped bytes 75 0A: jne 0x588476dc
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 8C 3C 8F 58: push 0x588f3c8c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x3c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 13 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0A: jne 0x588476ea
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 BC 3C 8F 58: push 0x588f3cbc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x3c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 05 FC FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 1C: cmp eax, 0x1c
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1c
        ; Exact mapped bytes 75 0A: jne 0x588476f9
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 D0 3C 8F 58: push 0x588f3cd0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x3c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 F6 FB FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 1D: cmp eax, 0x1d
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1d
        ; Exact mapped bytes 75 0A: jne 0x58847708
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 DC 3C 8F 58: push 0x588f3cdc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x3c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 E7 FB FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 FC 3C 8F 58: push 0x588f3cfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x3c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 44 54 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x54
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes E9 3D 02 00 00: jmp 0x58847963
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 95 D6 F6 FF FF: mov dl, byte ptr [ebp - 0x92a]
        __asm _emit 0x8a
        __asm _emit 0x95
        __asm _emit 0xd6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 75 37: jne 0x58847767
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 75 0A: jne 0x5884773f
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 0C 3D 8F 58: push 0x588f3d0c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 B0 FB FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes F7 85 D4 F6 FF FF 00 02 00 00: test dword ptr [ebp - 0x92c], 0x200
        __asm _emit 0xf7
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x5884775d
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 68 20 3D 8F 58: push 0x588f3d20
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 9A FB FF FF: jmp 0x588472f7
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 70 39 8F 58: push 0x588f3970
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 90 FB FF FF: jmp 0x588472f7
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 FA 03: cmp dl, 3
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 F3 01 00 00: jne 0x58847963
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x588477fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 41: jne 0x588477bf
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes F6 85 D4 F6 FF FF 80: test byte ptr [ebp - 0x92c], 0x80
        __asm _emit 0xf6
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x80
        ; Exact mapped bytes 0F 85 E2 FB FF FF: jne 0x5884736d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 84 8D D4 F6 FF FF: test byte ptr [ebp - 0x92c], cl
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 85 8A FB FF FF: jne 0x58847321
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B8 00 04 00 00: mov eax, 0x400
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 85 D4 F6 FF FF: cmp word ptr [ebp - 0x92c], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 0A: jne 0x588477b5
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 68 30 3D 8F 58: push 0x588f3d30
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 40 FB FF FF: jmp 0x588472f5
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 84 35 8F 58: push 0x588f3584
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 36 FB FF FF: jmp 0x588472f5
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 38: jne 0x588477fb
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes F6 85 D4 F6 FF FF 80: test byte ptr [ebp - 0x92c], 0x80
        __asm _emit 0xf6
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x80
        ; Exact mapped bytes 74 0A: je 0x588477d6
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 68 40 3D 8F 58: push 0x588f3d40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 19 FB FF FF: jmp 0x588472ef
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes F6 85 D4 F6 FF FF 02: test byte ptr [ebp - 0x92c], 2
        __asm _emit 0xf6
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 0A: je 0x588477f1
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 68 54 3D 8F 58: push 0x588f3d54
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 06 FB FF FF: jmp 0x588472f7
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 68 3D 8F 58: push 0x588f3d68
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 FC FA FF FF: jmp 0x588472f7
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes F6 85 D4 F6 FF FF 02: test byte ptr [ebp - 0x92c], 2
        __asm _emit 0xf6
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 0A: je 0x58847816
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 68 70 3D 8F 58: push 0x588f3d70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 E1 FA FF FF: jmp 0x588472f7
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 90 3D 8F 58: push 0x588f3d90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 D7 FA FF FF: jmp 0x588472f7
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 BD C0 F5 FF FF 04: cmp dword ptr [ebp - 0xa40], 4
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x04
        ; Exact mapped bytes C6 05 E8 93 96 58 00: mov byte ptr [0x589693e8], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 2F 01 00 00: jne 0x58847963
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 C4 F5 FF FF: mov eax, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BF 88 72 90 58: mov edi, 0x58907288
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 69: jne 0x588478ac
        __asm _emit 0x75
        __asm _emit 0x69
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 9C 3D 8F 58: push 0x588f3d9c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0C 53 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x53
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 BD D2 F5 FF FF 43: cmp word ptr [ebp - 0xa2e], 0x43
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xd2
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x43
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 74 0A: je 0x5884786c
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 BD D2 F5 FF FF 42: cmp word ptr [ebp - 0xa2e], 0x42
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xd2
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x42
        ; Exact mapped bytes 75 17: jne 0x58847883
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 B4 3D 8F 58: push 0x588f3db4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E1 52 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x52
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes 68 BC 3D 8F 58: push 0x588f3dbc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 BD C0 F5 FF FF 04: cmp dword ptr [ebp - 0xa40], 4
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x04
        ; Exact mapped bytes C7 05 EC 93 96 58 EE 4D 00 00: mov dword ptr [0x589693ec], 0x4dee
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xee
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x58847963
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 C4 F5 FF FF: mov eax, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 0A: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 75 69: jne 0x5884791a
        __asm _emit 0x75
        __asm _emit 0x69
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 C0 3D 8F 58: push 0x588f3dc0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9C 52 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x52
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes 66 83 BD D2 F5 FF FF 41: cmp word ptr [ebp - 0xa2e], 0x41
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xd2
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x41
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 75 23: jne 0x588478f5
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 D8 3D 8F 58: push 0x588f3dd8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7B 52 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x52
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes C7 05 EC 93 96 58 16 4E 00 00: mov dword ptr [0x589693ec], 0x4e16
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x16
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x588478ff
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 EC 93 96 58 0C 4E 00 00: mov dword ptr [0x589693ec], 0x4e0c
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 DC 3D 8F 58: push 0x588f3ddc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 BD C0 F5 FF FF 04: cmp dword ptr [ebp - 0xa40], 4
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x04
        ; Exact mapped bytes 75 4F: jne 0x58847963
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 85 C4 F5 FF FF: mov eax, dword ptr [ebp - 0xa3c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 5A: cmp eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x5a
        ; Exact mapped bytes 75 44: jne 0x58847963
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 E0 3D 8F 58: push 0x588f3de0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2E 52 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x52
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 68 F8 3D 8F 58: push 0x588f3df8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 EC 93 96 58 20 4E 00 00: mov dword ptr [0x589693ec], 0x4e20
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x58847963
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FC 3D 8F 58: push 0x588f3dfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x3d
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 01 52 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x52
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 A5 B0 F5 FF FF 00: and dword ptr [ebp - 0xa50], 0
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 A8 F5 FF FF: lea eax, [ebp - 0xa58]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 10 3E 8F 58: push 0x588f3e10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 02 00 00 80: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes C7 85 AC F5 FF FF 04 00 00 00: mov dword ptr [ebp - 0xa54], 4
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 AC F5 FF FF: lea eax, [ebp - 0xa54]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 B0 F5 FF FF: lea eax, [ebp - 0xa50]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 38 3E 8F 58: push 0x588f3e38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes FF B5 A8 F5 FF FF: push dword ptr [ebp - 0xa58]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF B5 A8 F5 FF FF: push dword ptr [ebp - 0xa58]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 39 9D B0 F5 FF FF: cmp dword ptr [ebp - 0xa50], ebx
        __asm _emit 0x39
        __asm _emit 0x9d
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 57: je 0x58847a1c
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 83 A5 B4 F5 FF FF 00: and dword ptr [ebp - 0xa4c], 0
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 68 BC 33 8F 58: push 0x588f33bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 48 01 8F 58: push 0x588f0148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 DC 42 89 58: call dword ptr [0x588942dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 52: je 0x58847a39
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8D B4 F5 FF FF: lea ecx, [ebp - 0xa4c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF B5 C4 F5 FF FF: push dword ptr [ebp - 0xa3c]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF B5 C0 F5 FF FF: push dword ptr [ebp - 0xa40]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 35: je 0x58847a39
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 81 BD B4 F5 FF FF B2 00 00 00: cmp dword ptr [ebp - 0xa4c], 0xb2
        __asm _emit 0x81
        __asm _emit 0xbd
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x58847a1c
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 81 BD B4 F5 FF FF B3 00 00 00: cmp dword ptr [ebp - 0xa4c], 0xb3
        __asm _emit 0x81
        __asm _emit 0xbd
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x58847a39
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 88 1D EA 93 96 58: mov byte ptr [0x589693ea], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 4C 3E 8F 58: push 0x588f3e4c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2B 51 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x51
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B 3D 34 41 89 58: mov edi, dword ptr [0x58894134]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 39 BD A0 F5 FF FF: cmp dword ptr [ebp - 0xa60], edi
        __asm _emit 0x39
        __asm _emit 0xbd
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 33: je 0x58847a7a
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 68 58 3E 8F 58: push 0x588f3e58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 76 24: jbe 0x58847a7a
        __asm _emit 0x76
        __asm _emit 0x24
        ; Exact mapped bytes 05 00 00 09 00: add eax, 0x90000
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 77 1B: ja 0x58847a7a
        __asm _emit 0x77
        __asm _emit 0x1b
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 88 1D E9 93 96 58: mov byte ptr [0x589693e9], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 68 3E 8F 58: push 0x588f3e68
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E8 50 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B BD 74 F5 FF FF: mov edi, dword ptr [ebp - 0xa8c]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 15: je 0x58847a99
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 7C 3E 8F 58: push 0x588f3e7c
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F4 25 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 8C 3E 8F 58: push 0x588f3e8c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 48 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 48 01 8F 58: push 0x588f0148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5B 11 00 00: call 0x58848c11
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 A5 70 F5 FF FF 00: and dword ptr [ebp - 0xa90], 0
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0x70
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 26: je 0x58847ae9
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8D 85 70 F5 FF FF: lea eax, [ebp - 0xa90]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 54 42 89 58: call dword ptr [0x58894254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 39 9D 70 F5 FF FF: cmp dword ptr [ebp - 0xa90], ebx
        __asm _emit 0x39
        __asm _emit 0x9d
        __asm _emit 0x70
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 0E: jne 0x58847ae9
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 A0 3E 8F 58: push 0x588f3ea0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 0C: jmp 0x58847af5
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 AC 3E 8F 58: push 0x588f3eac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 48 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 F0 93 96 58: push 0x589693f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 50 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x50
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 85 C8 F5 FF FF: movzx eax, word ptr [ebp - 0xa38]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 F5 FF FF: lea eax, [ebp - 0xa30]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 C4 F5 FF FF: push dword ptr [ebp - 0xa3c]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF B5 C0 F5 FF FF: push dword ptr [ebp - 0xa40]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 B8 3E 8F 58: push 0x588f3eb8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2B 50 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x50
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 15: je 0x58847b51
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 D0 3E 8F 58: push 0x588f3ed0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 3C 25 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 70 94 96 58: push 0x58969470
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 68 E4 3E 8F 58: push 0x588f3ee4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 47 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes BE 98 72 90 58: mov esi, 0x58907298
        __asm _emit 0xbe
        __asm _emit 0x98
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 2F E7 01 00: call 0x588662a8
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 46: je 0x58847bc6
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 F0 3E 8F 58: push 0x588f3ef0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CE 4F CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4f
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 68 B8 72 90 58: push 0x589072b8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8D 74 F7 FF FF: lea ecx, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 68 08 3F 8F 58: push 0x588f3f08
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B6 4F CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x4f
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 15: je 0x58847bc6
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 18 3F 8F 58: push 0x588f3f18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C7 24 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 35 28 43 89 58: mov esi, dword ptr [0x58894328]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8D 45 A8: lea eax, [ebp - 0x58]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 6A 06: push 6
        __asm _emit 0x6a
        __asm _emit 0x06
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes BB 00 08 00 00: mov ebx, 0x800
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 85 34 F7 FF FF: lea eax, [ebp - 0x8cc]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 02 10 00 00: push 0x1002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 85 F4 F6 FF FF: lea eax, [ebp - 0x90c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 01 10 00 00: push 0x1001
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 F4 F6 FF FF: lea eax, [ebp - 0x90c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 A8: lea eax, [ebp - 0x58]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 34 F7 FF FF: lea eax, [ebp - 0x8cc]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 1C 3F 8F 58: push 0x588f3f1c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2D 4F CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4f
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 15: je 0x58847c4f
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 18 3F 8F 58: push 0x588f3f18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 3E 24 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 1D 08 43 89 58: mov ebx, dword ptr [0x58894308]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 34 F7 FF FF: lea eax, [ebp - 0x8cc]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 24 95 96 58: push 0x58969524
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 44 95 96 58: push 0x58969544
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8D BD E4 F6 FF FF: lea edi, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 88 4D F0: mov byte ptr [ebp - 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 88 4D E0: mov byte ptr [ebp - 0x20], cl
        __asm _emit 0x88
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 89 85 6C F5 FF FF: mov dword ptr [ebp - 0xa94], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 8D B4 F5 FF FF: mov dword ptr [ebp - 0xa4c], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 B0 F5 FF FF: mov dword ptr [ebp - 0xa50], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 68 F5 FF FF: mov dword ptr [ebp - 0xa98], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 8D A0 F5 FF FF: mov dword ptr [ebp - 0xa60], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 8D AC F5 FF FF: mov dword ptr [ebp - 0xa54], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F A2: cpuid
        __asm _emit 0x0f
        __asm _emit 0xa2
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 0F 11 85 E4 F6 FF FF: movups xmmword ptr [ebp - 0x91c], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 89 07: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes 89 77 04: mov dword ptr [edi + 4], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x04
        ; Exact mapped bytes 89 4F 08: mov dword ptr [edi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 85 E4 F6 FF FF: mov eax, dword ptr [ebp - 0x91c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 A8 F5 FF FF: mov dword ptr [ebp - 0xa58], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 E8 F6 FF FF: lea eax, [ebp - 0x918]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 E4: lea eax, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B5 4B 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8D 85 F0 F6 FF FF: lea eax, [ebp - 0x910]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 E8: lea eax, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A3 4B 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8D 85 EC F6 FF FF: lea eax, [ebp - 0x914]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 EC: lea eax, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 91 4B 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 24: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x24
        ; Exact mapped bytes B8 00 00 00 80: mov eax, 0x80000000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F A2: cpuid
        __asm _emit 0x0f
        __asm _emit 0xa2
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 89 07: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 77 04: mov dword ptr [edi + 4], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x04
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 4F 08: mov dword ptr [edi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B BD E4 F6 FF FF: mov edi, dword ptr [ebp - 0x91c]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 39 85 A8 F5 FF FF: cmp dword ptr [ebp - 0xa58], eax
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7C 4F: jl 0x58847d7a
        __asm _emit 0x7c
        __asm _emit 0x4f
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F A2: cpuid
        __asm _emit 0x0f
        __asm _emit 0xa2
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8D 9D E4 F6 FF FF: lea ebx, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 89 73 04: mov dword ptr [ebx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 4B 08: mov dword ptr [ebx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 68 60 95 96 58: push 0x58969560
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 53 0C: mov dword ptr [ebx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x0c
        ; Exact mapped bytes E8 3D 4B 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 F0 F6 FF FF: mov eax, dword ptr [ebp - 0x910]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 85 6C F5 FF FF: mov dword ptr [ebp - 0xa94], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 EC F6 FF FF: mov eax, dword ptr [ebp - 0x914]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 B4 F5 FF FF: mov dword ptr [ebp - 0xa4c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 E8 F6 FF FF: mov eax, dword ptr [ebp - 0x918]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 B0 F5 FF FF: mov dword ptr [ebp - 0xa50], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B8 01 00 00 80: mov eax, 0x80000001
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 72 76: jb 0x58847df9
        __asm _emit 0x72
        __asm _emit 0x76
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F A2: cpuid
        __asm _emit 0x0f
        __asm _emit 0xa2
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8D 9D E4 F6 FF FF: lea ebx, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 89 73 04: mov dword ptr [ebx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x04
        ; Exact mapped bytes 89 4B 08: mov dword ptr [ebx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 89 53 0C: mov dword ptr [ebx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 85 F0 F6 FF FF: mov eax, dword ptr [ebp - 0x910]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 68 F5 FF FF: mov dword ptr [ebp - 0xa98], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 EC F6 FF FF: mov eax, dword ptr [ebp - 0x914]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 89 85 A0 F5 FF FF: mov dword ptr [ebp - 0xa60], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 50 50 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 00 00 00 40: mov eax, 0x40000000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F A2: cpuid
        __asm _emit 0x0f
        __asm _emit 0xa2
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8D 9D E4 F6 FF FF: lea ebx, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 89 73 04: mov dword ptr [ebx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x04
        ; Exact mapped bytes 89 4B 08: mov dword ptr [ebx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 89 53 0C: mov dword ptr [ebx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D E4 F6 FF FF: mov ecx, dword ptr [ebp - 0x91c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 0D 54 95 96 58: mov dword ptr [0x58969554], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D E8 F6 FF FF: mov ecx, dword ptr [ebp - 0x918]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 0D 58 95 96 58: mov dword ptr [0x58969558], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 BD A8 F5 FF FF 07: cmp dword ptr [ebp - 0xa58], 7
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes 7C 28: jl 0x58847e2a
        __asm _emit 0x7c
        __asm _emit 0x28
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F A2: cpuid
        __asm _emit 0x0f
        __asm _emit 0xa2
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8D 9D E4 F6 FF FF: lea ebx, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 89 73 04: mov dword ptr [ebx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x04
        ; Exact mapped bytes 89 4B 08: mov dword ptr [ebx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 89 53 0C: mov dword ptr [ebx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 85 EC F6 FF FF: mov eax, dword ptr [ebp - 0x914]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 AC F5 FF FF: mov dword ptr [ebp - 0xa54], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 FF 04 00 00 80: cmp edi, 0x80000004
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 0F 82 38 01 00 00: jb 0x58847f6e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 02 00 00 80: mov eax, 0x80000002
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F A2: cpuid
        __asm _emit 0x0f
        __asm _emit 0xa2
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8D 9D E4 F6 FF FF: lea ebx, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 8D 85 E4 F6 FF FF: lea eax, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 73 04: mov dword ptr [ebx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x04
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 89 4B 08: mov dword ptr [ebx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 89 53 0C: mov dword ptr [ebx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x0c
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 B0: lea eax, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 28 4A 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 85 E8 F6 FF FF: lea eax, [ebp - 0x918]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 B4: lea eax, [ebp - 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 17 4A 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 85 EC F6 FF FF: lea eax, [ebp - 0x914]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 B8: lea eax, [ebp - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 06 4A 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 85 F0 F6 FF FF: lea eax, [ebp - 0x910]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 BC: lea eax, [ebp - 0x44]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F5 49 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 30: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x30
        ; Exact mapped bytes B8 03 00 00 80: mov eax, 0x80000003
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F A2: cpuid
        __asm _emit 0x0f
        __asm _emit 0xa2
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8D 9D E4 F6 FF FF: lea ebx, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 8D 85 E4 F6 FF FF: lea eax, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 73 04: mov dword ptr [ebx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x04
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 89 4B 08: mov dword ptr [ebx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 89 53 0C: mov dword ptr [ebx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x0c
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 C0: lea eax, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C0 49 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 85 E8 F6 FF FF: lea eax, [ebp - 0x918]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 C4: lea eax, [ebp - 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AF 49 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 85 EC F6 FF FF: lea eax, [ebp - 0x914]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 C8: lea eax, [ebp - 0x38]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9E 49 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 85 F0 F6 FF FF: lea eax, [ebp - 0x910]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 CC: lea eax, [ebp - 0x34]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8D 49 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 30: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x30
        ; Exact mapped bytes B8 04 00 00 80: mov eax, 0x80000004
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F A2: cpuid
        __asm _emit 0x0f
        __asm _emit 0xa2
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8D 9D E4 F6 FF FF: lea ebx, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 8D 85 E4 F6 FF FF: lea eax, [ebp - 0x91c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 73 04: mov dword ptr [ebx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x04
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 89 4B 08: mov dword ptr [ebx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 89 53 0C: mov dword ptr [ebx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x0c
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 D0: lea eax, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 58 49 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 85 E8 F6 FF FF: lea eax, [ebp - 0x918]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 D4: lea eax, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 47 49 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 85 EC F6 FF FF: lea eax, [ebp - 0x914]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 D8: lea eax, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 36 49 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 85 F0 F6 FF FF: lea eax, [ebp - 0x910]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 DC: lea eax, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 25 49 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 30: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x30
        ; Exact mapped bytes 68 44 3F 8F 58: push 0x588f3f44
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 43 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 E4: lea eax, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 26 E3 01 00: call 0x588662a8
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0B: jne 0x58847f97
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes A2 DC 72 90 58: mov byte ptr [0x589072dc], al
        __asm _emit 0xa2
        __asm _emit 0xdc
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 88 1D 21 95 96 58: mov byte ptr [0x58969521], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x21
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 B0 F5 FF FF: mov eax, dword ptr [ebp - 0xa50]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B B5 74 F5 FF FF: mov esi, dword ptr [ebp - 0xa8c]
        __asm _emit 0x8b
        __asm _emit 0xb5
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 58 F5 FF FF: mov ecx, dword ptr [ebp - 0xaa8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C1 E8 10: shr eax, 0x10
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x10
        ; Exact mapped bytes 0F B6 C0: movzx eax, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 89 0D D8 72 90 58: mov dword ptr [0x589072d8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A3 50 95 96 58: mov dword ptr [0x58969550], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x588480a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 58 3F 8F 58: push 0x588f3f58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 BB 20 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 80 BD BB F5 FF FF 00: cmp byte ptr [ebp - 0xa45], 0
        __asm _emit 0x80
        __asm _emit 0xbd
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x58848061
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF B5 9C F5 FF FF: push dword ptr [ebp - 0xa64]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 80 3F 8F 58: push 0x588f3f80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 9A 20 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF B5 98 F5 FF FF: push dword ptr [ebp - 0xa68]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x98
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 9C 3F 8F 58: push 0x588f3f9c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 89 20 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF B5 94 F5 FF FF: push dword ptr [ebp - 0xa6c]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x94
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 CC 3F 8F 58: push 0x588f3fcc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 78 20 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF B5 90 F5 FF FF: push dword ptr [ebp - 0xa70]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x90
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 F0 3F 8F 58: push 0x588f3ff0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 67 20 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 8C F5 FF FF: mov eax, dword ptr [ebp - 0xa74]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C1 E8 0A: shr eax, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 88 F5 FF FF: push dword ptr [ebp - 0xa78]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x88
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 84 F5 FF FF: mov eax, dword ptr [ebp - 0xa7c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C1 E8 0A: shr eax, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 80 F5 FF FF: push dword ptr [ebp - 0xa80]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 7C F5 FF FF: mov eax, dword ptr [ebp - 0xa84]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C1 E8 0A: shr eax, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 78 F5 FF FF: push dword ptr [ebp - 0xa88]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 18 40 8F 58: push 0x588f4018
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 2C 20 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 50: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x50
        ; Exact mapped bytes A1 60 95 96 58: mov eax, dword ptr [0x58969560]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E9 14: shr ecx, 0x14
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x14
        ; Exact mapped bytes 0F B6 C9: movzx ecx, cl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F B7 0D 62 95 96 58: movzx ecx, word ptr [0x58969562]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 6A 0F: push 0xf
        __asm _emit 0x6a
        __asm _emit 0x0f
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes 23 CA: and ecx, edx
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E9 08: shr ecx, 8
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 23 CA: and ecx, edx
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 23 C2: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E9 04: shr ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 23 CA: and ecx, edx
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 E4: lea eax, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 60 40 8F 58: push 0x588f4060
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 EC 1F FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 20: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x20
        ; Exact mapped bytes 81 FF 04 00 00 80: cmp edi, 0x80000004
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 0F 82 46 01 00 00: jb 0x588481f3
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 12: je 0x588480c3
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8D 45 B0: lea eax, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 B4 40 8F 58: push 0x588f40b4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 CA 1F FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 CC 40 8F 58: push 0x588f40cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 42 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 B0: lea eax, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 34 F5 01 00: call 0x5886760d
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0B: jne 0x588480eb
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes A2 DC 72 90 58: mov byte ptr [0x589072dc], al
        __asm _emit 0xa2
        __asm _emit 0xdc
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 88 1D 21 95 96 58: mov byte ptr [0x58969521], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x21
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 45 B0: lea eax, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 F0 94 96 58: push 0x589694f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x94
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8D 45 B0: lea eax, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 74 FF FF FF: lea eax, [ebp - 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 96 19 01 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 74 FF FF FF: lea eax, [ebp - 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 3A F3 01 00: call 0x58867450
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 74 FF FF FF: lea eax, [ebp - 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 D8 40 8F 58: push 0x588f40d8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 09 69 00 00: call 0x5884ea30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x58848136
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 88 1D EB 93 96 58: mov byte ptr [0x589693eb], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 25: jmp 0x5884815b
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8D 85 74 FF FF FF: lea eax, [ebp - 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 E0 40 8F 58: push 0x588f40e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E9 68 00 00: call 0x5884ea30
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 0F B6 0D EB 93 96 58: movzx ecx, byte ptr [0x589693eb]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0xeb
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 45 CB: cmovne ecx, ebx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xcb
        ; Exact mapped bytes 88 0D EB 93 96 58: mov byte ptr [0x589693eb], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xeb
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 80 3D DC 72 90 58 00: cmp byte ptr [0x589072dc], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x588481f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 74 FF FF FF: lea eax, [ebp - 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 85 BB F5 FF FF 00: mov byte ptr [ebp - 0xa45], 0
        __asm _emit 0xc6
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 68 F0 40 8F 58: push 0x588f40f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B0 68 00 00: call 0x5884ea30
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 19: jne 0x5884819f
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8D 85 74 FF FF FF: lea eax, [ebp - 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 F4 40 8F 58: push 0x588f40f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 99 68 00 00: call 0x5884ea30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 56: je 0x588481f3
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes EB 06: jmp 0x588481a5
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8A 9D BB F5 FF FF: mov bl, byte ptr [ebp - 0xa45]
        __asm _emit 0x8a
        __asm _emit 0x9d
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8D 95 74 FF FF FF: lea edx, [ebp - 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 72 3E: jb 0x588481f3
        __asm _emit 0x72
        __asm _emit 0x3e
        ; Exact mapped bytes 80 38 20: cmp byte ptr [eax], 0x20
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x20
        ; Exact mapped bytes 75 EE: jne 0x588481a8
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 7A B9 01 00: call 0x58863b3a
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DD 9D A4 F5 FF FF: fstp qword ptr [ebp - 0xa5c]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0xa4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 85 A4 F5 FF FF: movsd xmm0, qword ptr [ebp - 0xa5c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 2E 05 B0 51 89 58: ucomisd xmm0, qword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 9F: lahf
        __asm _emit 0x9f
        ; Exact mapped bytes F6 C4 44: test ah, 0x44
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x44
        ; Exact mapped bytes 7B 16: jnp 0x588481f3
        __asm _emit 0x7b
        __asm _emit 0x16
        ; Exact mapped bytes 84 DB: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xdb
        ; Exact mapped bytes 74 08: je 0x588481e9
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 59 05 A0 51 89 58: mulsd xmm0, qword ptr [0x588951a0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 92 FE FF: call 0x58831440
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A3 64 95 96 58: mov dword ptr [0x58969564], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 F8 40 8F 58: push 0x588f40f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5C 49 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x49
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 9D 6C F5 FF FF: mov ebx, dword ptr [ebp - 0xa94]
        __asm _emit 0x8b
        __asm _emit 0x9d
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes F6 C3 01: test bl, 1
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x01
        ; Exact mapped bytes 74 17: je 0x5884822a
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 8D 74 F7 FF FF: lea ecx, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 CF: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xcf
        ; Exact mapped bytes 68 10 41 8F 58: push 0x588f4110
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 3A 49 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x49
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F6 C3 02: test bl, 2
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x02
        ; Exact mapped bytes 74 17: je 0x58848246
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 18 41 8F 58: push 0x588f4118
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1E 49 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x49
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F6 C3 04: test bl, 4
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 74 17: je 0x58848262
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 20 41 8F 58: push 0x588f4120
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 02 49 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x49
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F6 C3 08: test bl, 8
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x08
        ; Exact mapped bytes 74 17: je 0x5884827e
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 28 41 8F 58: push 0x588f4128
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E6 48 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F6 C3 10: test bl, 0x10
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x10
        ; Exact mapped bytes 74 1E: je 0x588482a1
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 30 41 8F 58: push 0x588f4130
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CA 48 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes C6 05 DD 72 90 58 01: mov byte ptr [0x589072dd], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0xdd
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes F6 C3 20: test bl, 0x20
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x20
        ; Exact mapped bytes 74 17: je 0x588482bd
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 38 41 8F 58: push 0x588f4138
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A7 48 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F6 C3 40: test bl, 0x40
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x40
        ; Exact mapped bytes 74 17: je 0x588482d9
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 40 41 8F 58: push 0x588f4140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8B 48 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 84 DB: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xdb
        ; Exact mapped bytes 79 17: jns 0x588482f4
        __asm _emit 0x79
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 48 41 8F 58: push 0x588f4148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 70 48 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 01 00 00: test ebx, 0x100
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x58848313
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 50 41 8F 58: push 0x588f4150
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 51 48 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 02 00 00: test ebx, 0x200
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x58848332
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 58 41 8F 58: push 0x588f4158
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 32 48 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 08 00 00: test ebx, 0x800
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x58848351
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 60 41 8F 58: push 0x588f4160
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 13 48 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 10 00 00: test ebx, 0x1000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x58848370
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 68 41 8F 58: push 0x588f4168
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F4 47 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes B8 00 20 00 00: mov eax, 0x2000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D8: test eax, ebx
        __asm _emit 0x85
        __asm _emit 0xd8
        ; Exact mapped bytes 74 17: je 0x58848390
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 70 41 8F 58: push 0x588f4170
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D4 47 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 40 00 00: test ebx, 0x4000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x588483af
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 78 41 8F 58: push 0x588f4178
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B5 47 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes B8 00 80 00 00: mov eax, 0x8000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D8: test eax, ebx
        __asm _emit 0x85
        __asm _emit 0xd8
        ; Exact mapped bytes 74 17: je 0x588483cf
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 80 41 8F 58: push 0x588f4180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 95 47 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 01 00: test ebx, 0x10000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x588483ee
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 88 41 8F 58: push 0x588f4188
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 76 47 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 02 00: test ebx, 0x20000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x5884840d
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 90 41 8F 58: push 0x588f4190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 57 47 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 98 41 8F 58: push 0x588f4198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 40 47 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes F7 C3 00 00 04 00: test ebx, 0x40000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x58848443
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 B8 41 8F 58: push 0x588f41b8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 21 47 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes BE 00 00 08 00: mov esi, 0x80000
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 85 DE: test esi, ebx
        __asm _emit 0x85
        __asm _emit 0xde
        ; Exact mapped bytes 74 17: je 0x58848463
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 C0 41 8F 58: push 0x588f41c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 01 47 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 20 00: test ebx, 0x200000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x58848482
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 CC 41 8F 58: push 0x588f41cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E2 46 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x46
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 40 00: test ebx, 0x400000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x588484a8
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 D4 41 8F 58: push 0x588f41d4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C3 46 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x46
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes C6 05 4F 95 96 58 01: mov byte ptr [0x5896954f], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x4f
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes F7 C3 00 00 80 00: test ebx, 0x800000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x588484c7
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 DC 41 8F 58: push 0x588f41dc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9D 46 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x46
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 01: test ebx, 0x1000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 17: je 0x588484e6
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 E4 41 8F 58: push 0x588f41e4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7E 46 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x46
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 02: test ebx, 0x2000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 74 17: je 0x58848505
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 EC 41 8F 58: push 0x588f41ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5F 46 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x46
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 04: test ebx, 0x4000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 17: je 0x58848524
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 F4 41 8F 58: push 0x588f41f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 40 46 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 08: test ebx, 0x8000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 74 17: je 0x58848543
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 FC 41 8F 58: push 0x588f41fc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 21 46 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 10: test ebx, 0x10000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 74 17: je 0x58848562
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 04 42 8F 58: push 0x588f4204
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 02 46 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x46
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 20: test ebx, 0x20000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 74 1E: je 0x58848588
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 0C 42 8F 58: push 0x588f420c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E3 45 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes C6 05 4E 95 96 58 01: mov byte ptr [0x5896954e], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x4e
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes F7 C3 00 00 00 40: test ebx, 0x40000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 74 17: je 0x588485a7
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 14 42 8F 58: push 0x588f4214
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BD 45 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 81 FB 00 00 00 80: cmp ebx, 0x80000000
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 72 17: jb 0x588485c6
        __asm _emit 0x72
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 1C 42 8F 58: push 0x588f421c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9E 45 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 9D 68 F5 FF FF: mov ebx, dword ptr [ebp - 0xa98]
        __asm _emit 0x8b
        __asm _emit 0x9d
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 DE: test esi, ebx
        __asm _emit 0x85
        __asm _emit 0xde
        ; Exact mapped bytes 74 17: je 0x588485e7
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 24 42 8F 58: push 0x588f4224
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7D 45 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 10 00: test ebx, 0x100000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x58848606
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 2C 42 8F 58: push 0x588f422c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5E 45 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 02: test ebx, 0x2000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 74 17: je 0x58848625
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 34 42 8F 58: push 0x588f4234
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 3F 45 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 04: test ebx, 0x4000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 17: je 0x58848644
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 40 42 8F 58: push 0x588f4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 20 45 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 08: test ebx, 0x8000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 74 17: je 0x58848663
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 4C 42 8F 58: push 0x588f424c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 01 45 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 20: test ebx, 0x20000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 74 17: je 0x58848682
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 58 42 8F 58: push 0x588f4258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E2 44 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x44
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 81 FB 00 00 00 80: cmp ebx, 0x80000000
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 72 17: jb 0x588486a1
        __asm _emit 0x72
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 60 42 8F 58: push 0x588f4260
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C3 44 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x44
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 00 00 00 40: test ebx, 0x40000000
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 74 17: je 0x588486c0
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 68 42 8F 58: push 0x588f4268
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A4 44 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x44
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 80 BC 3D 72 F7 FF FF 2C: cmp byte ptr [ebp + edi - 0x88e], 0x2c
        __asm _emit 0x80
        __asm _emit 0xbc
        __asm _emit 0x3d
        __asm _emit 0x72
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x2c
        ; Exact mapped bytes 8D 77 FE: lea esi, [edi - 2]
        __asm _emit 0x8d
        __asm _emit 0x77
        __asm _emit 0xfe
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 45 F7: cmovne esi, edi
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xf7
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 74 42 8F 58: push 0x588f4274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7F 44 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x44
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8D 3C 06: lea edi, [esi + eax]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x06
        ; Exact mapped bytes 8B 85 B4 F5 FF FF: mov eax, dword ptr [ebp - 0xa4c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1D: je 0x58848710
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 8D 74 F7 FF FF: lea ecx, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 CF: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xcf
        ; Exact mapped bytes 68 94 42 8F 58: push 0x588f4294
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 5A 44 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x44
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 85 B4 F5 FF FF: mov eax, dword ptr [ebp - 0xa4c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes A9 00 00 08 00: test eax, 0x80000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x58848734
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 9C 42 8F 58: push 0x588f429c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 36 44 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x44
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 85 B4 F5 FF FF: mov eax, dword ptr [ebp - 0xa4c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes A9 00 00 10 00: test eax, 0x100000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x58848758
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 A8 42 8F 58: push 0x588f42a8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 12 44 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x44
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 85 B4 F5 FF FF: mov eax, dword ptr [ebp - 0xa4c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 79 1D: jns 0x58848779
        __asm _emit 0x79
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 B4 42 8F 58: push 0x588f42b4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F1 43 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 85 B4 F5 FF FF: mov eax, dword ptr [ebp - 0xa4c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes A9 00 01 00 00: test eax, 0x100
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x588487a3
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 BC 42 8F 58: push 0x588f42bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CD 43 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 88 1D 4E 95 96 58: mov byte ptr [0x5896954e], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x4e
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 B4 F5 FF FF: mov eax, dword ptr [ebp - 0xa4c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes A8 20: test al, 0x20
        __asm _emit 0xa8
        __asm _emit 0x20
        ; Exact mapped bytes 74 1D: je 0x588487c4
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 C4 42 8F 58: push 0x588f42c4
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A6 43 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 88 1D 23 95 96 58: mov byte ptr [0x58969523], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x23
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes F6 85 A0 F5 FF FF 02: test byte ptr [ebp - 0xa60], 2
        __asm _emit 0xf6
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 1D: je 0x588487ea
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 CC 42 8F 58: push 0x588f42cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 80 43 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 88 1D 23 95 96 58: mov byte ptr [0x58969523], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x23
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 81 BD B4 F5 FF FF 00 00 00 80: cmp dword ptr [ebp - 0xa4c], 0x80000000
        __asm _emit 0x81
        __asm _emit 0xbd
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 72 1D: jb 0x58848813
        __asm _emit 0x72
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 D4 42 8F 58: push 0x588f42d4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 57 43 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 88 1D 22 95 96 58: mov byte ptr [0x58969522], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x22
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes F6 85 AC F5 FF FF 80: test byte ptr [ebp - 0xa54], 0x80
        __asm _emit 0xf6
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x80
        ; Exact mapped bytes 74 1D: je 0x58848839
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 68 E4 42 8F 58: push 0x588f42e4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 31 43 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 88 1D 5C 95 96 58: mov byte ptr [0x5896955c], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 80 78 FE 2C: cmp byte ptr [eax - 2], 0x2c
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x2c
        ; Exact mapped bytes 75 1A: jne 0x58848861
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 83 EF 02: sub edi, 2
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x02
        ; Exact mapped bytes 81 FF 00 08 00 00: cmp edi, 0x800
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 56 01 00 00: jae 0x588489ac
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 58 95 96 58: push dword ptr [0x58969558]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 35 54 95 96 58: push dword ptr [0x58969554]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 F0 42 8F 58: push 0x588f42f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E8 42 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 8B BD 74 F5 FF FF: mov edi, dword ptr [ebp - 0xa8c]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 15: je 0x5884889a
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 18 3F 8F 58: push 0x588f3f18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F3 17 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 85 D8 F6 FF FF: lea eax, [ebp - 0x928]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 2C 43 89 58: call dword ptr [0x5889432c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FC 42 8F 58: push 0x588f42fc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A8 42 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x42
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F B6 85 D8 F6 FF FF: movzx eax, byte ptr [ebp - 0x928]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x588488e1
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 07: je 0x588488da
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 68 24 43 8F 58: push 0x588f4324
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x43
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 12: jmp 0x588488ec
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 68 1C 43 8F 58: push 0x588f431c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x43
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 0B: jmp 0x588488ec
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 68 14 43 8F 58: push 0x588f4314
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x43
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6C 42 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x42
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 2C 43 8F 58: push 0x588f432c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x43
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 55 42 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x42
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes 0F B6 85 D9 F6 FF FF: movzx eax, byte ptr [ebp - 0x927]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 2D 80 00 00 00: sub eax, 0x80
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2C: je 0x58848949
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 83 E8 7F: sub eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x7f
        ; Exact mapped bytes 74 20: je 0x58848942
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 0F B6 85 DA F6 FF FF: movzx eax, byte ptr [ebp - 0x926]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 68 54 43 8F 58: push 0x588f4354
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x43
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 23 42 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x42
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB 1C: jmp 0x5884895e
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes 68 24 43 8F 58: push 0x588f4324
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x43
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 05: jmp 0x5884894e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 68 40 43 8F 58: push 0x588f4340
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x43
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 04 42 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x42
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 15: je 0x58848977
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8D 85 74 F7 FF FF: lea eax, [ebp - 0x88c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 18 3F 8F 58: push 0x588f3f18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 16 17 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B6 05 EB 93 96 58: movzx eax, byte ptr [0x589693eb]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0xeb
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 80 BD D9 F6 FF FF 80: cmp byte ptr [ebp - 0x927], 0x80
        __asm _emit 0x80
        __asm _emit 0xbd
        __asm _emit 0xd9
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x80
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 0F 42 C3: cmovb eax, ebx
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0xc3
        ; Exact mapped bytes A2 EB 93 96 58: mov byte ptr [0x589693eb], al
        __asm _emit 0xa2
        __asm _emit 0xeb
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 01 00 00: call 0x58848b6c
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 19 00 00 00: call 0x588489b2
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes E8 A8 86 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E8 F8 87 FE FF: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
