// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588321FB .. +0x31A bytes.
extern "C" __declspec(naked) void FUN_588321fb_588321FB() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 0D B8 60 90 58 01: or dword ptr [0x589060b8], 1
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 83 EC 28: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x28
        ; Exact mapped bytes C7 05 1C 67 96 58 00 00 00 00: mov dword ptr [0x5896671c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes FF 15 B8 43 89 58: call dword ptr [0x588943b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 EF 02 00 00: je 0x58832511
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 7D D8: lea edi, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
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
        ; Exact mapped bytes 8B 45 D8: mov eax, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 81 F1 69 6E 65 49: xor ecx, 0x49656e69
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0x69
        __asm _emit 0x6e
        __asm _emit 0x65
        __asm _emit 0x49
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 35 6E 74 65 6C: xor eax, 0x6c65746e
        __asm _emit 0x35
        __asm _emit 0x6e
        __asm _emit 0x74
        __asm _emit 0x65
        __asm _emit 0x6c
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 45 DC: mov eax, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 35 47 65 6E 75: xor eax, 0x756e6547
        __asm _emit 0x35
        __asm _emit 0x47
        __asm _emit 0x65
        __asm _emit 0x6e
        __asm _emit 0x75
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
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
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
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
        ; Exact mapped bytes 75 39: jne 0x588322b4
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 8B 45 D8: mov eax, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 25 F0 3F FF 0F: and eax, 0xfff3ff0
        __asm _emit 0x25
        __asm _emit 0xf0
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0x0f
        ; Exact mapped bytes 3D C0 06 01 00: cmp eax, 0x106c0
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x588322ad
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 3D 60 06 02 00: cmp eax, 0x20660
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x588322ad
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 3D 70 06 02 00: cmp eax, 0x20670
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 15: je 0x588322ad
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 3D 50 06 03 00: cmp eax, 0x30650
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588322ad
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 3D 60 06 03 00: cmp eax, 0x30660
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x588322ad
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 3D 70 06 03 00: cmp eax, 0x30670
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x588322b4
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 83 0D 20 67 96 58 01: or dword ptr [0x58966720], 1
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 E0: mov edx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 55 F4: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 83 7D FC 07: cmp dword ptr [ebp - 4], 7
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0x07
        ; Exact mapped bytes 89 5D EC: mov dword ptr [ebp - 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact mapped bytes 89 5D E8: mov dword ptr [ebp - 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xe8
        ; Exact mapped bytes 0F 8C 87 00 00 00: jl 0x58832355
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8D 5D D8: lea ebx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 8B 5D DC: mov ebx, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 89 5D F8: mov dword ptr [ebp - 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes F7 C3 00 02 00 00: test ebx, 0x200
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x58832303
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 83 0D 20 67 96 58 02: or dword ptr [0x58966720], 2
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 83 7D D8 01: cmp dword ptr [ebp - 0x28], 1
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0x01
        ; Exact mapped bytes 7C 24: jl 0x5883232d
        __asm _emit 0x7c
        __asm _emit 0x24
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
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
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8D 5D D8: lea ebx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 5D F8: mov ebx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 6A 24: push 0x24
        __asm _emit 0x6a
        __asm _emit 0x24
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 39 45 FC: cmp dword ptr [ebp - 4], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 7C 1D: jl 0x58832352
        __asm _emit 0x7c
        __asm _emit 0x1d
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8D 7D D8: lea edi, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 5D F8: mov ebx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xf8
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
        ; Exact mapped bytes 8B 7D DC: mov edi, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 55 F4: mov edx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes A1 B8 60 90 58: mov eax, dword ptr [0x589060b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B0 60 90 58: mov ecx, dword ptr [0x589060b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 C8 02: or eax, 2
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x02
        ; Exact mapped bytes 8B 35 B4 60 90 58: mov esi, dword ptr [0x589060b4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 E1 FE: and ecx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0xfe
        ; Exact mapped bytes C7 05 1C 67 96 58 01 00 00 00: mov dword ptr [0x5896671c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 B8 60 90 58: mov dword ptr [0x589060b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D B0 60 90 58: mov dword ptr [0x589060b0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 89 35 B4 60 90 58: mov dword ptr [0x589060b4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes F7 C2 00 00 10 00: test edx, 0x100000
        __asm _emit 0xf7
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x5883250e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C8 04: or eax, 4
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x04
        ; Exact mapped bytes C7 05 1C 67 96 58 02 00 00 00: mov dword ptr [0x5896671c], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 B8 60 90 58: mov dword ptr [0x589060b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 E1 EF: and ecx, 0xffffffef
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0xef
        ; Exact mapped bytes B8 00 00 00 18: mov eax, 0x18000000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        ; Exact mapped bytes 89 0D B0 60 90 58: mov dword ptr [0x589060b0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 23 D0: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 B4 60 90 58: mov dword ptr [0x589060b4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x5883250e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 01 D0: xgetbv
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0xd0
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 89 55 F4: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 83 E0 06: and eax, 6
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x06
        ; Exact mapped bytes 23 CE: and ecx, esi
        __asm _emit 0x23
        __asm _emit 0xce
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 2A 01 00 00: jne 0x5883250e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CE: cmp ecx, esi
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x5883250e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 60 90 58: mov eax, dword ptr [0x589060b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 C8 08: or eax, 8
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x08
        ; Exact mapped bytes C7 05 1C 67 96 58 03 00 00 00: mov dword ptr [0x5896671c], 3
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 B8 60 90 58: mov dword ptr [0x589060b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes F6 C3 20: test bl, 0x20
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x20
        ; Exact mapped bytes 74 79: je 0x58832481
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes 8B 0D B4 60 90 58: mov ecx, dword ptr [0x589060b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 C8 20: or eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x20
        ; Exact mapped bytes A3 B8 60 90 58: mov dword ptr [0x589060b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes BA 00 00 03 D0: mov edx, 0xd0030000
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes A1 B0 60 90 58: mov eax, dword ptr [0x589060b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 23 DA: and ebx, edx
        __asm _emit 0x23
        __asm _emit 0xda
        ; Exact mapped bytes 83 E0 FD: and eax, 0xfffffffd
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0xfd
        ; Exact mapped bytes C7 05 1C 67 96 58 05 00 00 00: mov dword ptr [0x5896671c], 5
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 B0 60 90 58: mov dword ptr [0x589060b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D B4 60 90 58: mov dword ptr [0x589060b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 3B DA: cmp ebx, edx
        __asm _emit 0x3b
        __asm _emit 0xda
        ; Exact mapped bytes 75 4E: jne 0x5883248c
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes BA E0 00 00 00: mov edx, 0xe0
        __asm _emit 0xba
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 23 C2: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes 23 CE: and ecx, esi
        __asm _emit 0x23
        __asm _emit 0xce
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 30: jne 0x58832481
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 3B CE: cmp ecx, esi
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 75 2C: jne 0x58832481
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes A1 B0 60 90 58: mov eax, dword ptr [0x589060b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 0D B8 60 90 58 40: or dword ptr [0x589060b8], 0x40
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x40
        ; Exact mapped bytes 83 E0 DB: and eax, 0xffffffdb
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 0D B4 60 90 58: mov ecx, dword ptr [0x589060b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 1C 67 96 58 06 00 00 00: mov dword ptr [0x5896671c], 6
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 B0 60 90 58: mov dword ptr [0x589060b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D B4 60 90 58: mov dword ptr [0x589060b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes EB 0B: jmp 0x5883248c
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D B4 60 90 58: mov ecx, dword ptr [0x589060b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A1 B0 60 90 58: mov eax, dword ptr [0x589060b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes F7 45 EC 00 00 80 00: test dword ptr [ebp - 0x14], 0x800000
        __asm _emit 0xf7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x588324a5
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 25 FF FF FF FE: and eax, 0xfeffffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xfe
        ; Exact mapped bytes 89 0D B4 60 90 58: mov dword ptr [0x589060b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A3 B0 60 90 58: mov dword ptr [0x589060b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes F7 45 E8 00 00 08 00: test dword ptr [ebp - 0x18], 0x80000
        __asm _emit 0xf7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 60: je 0x5883250e
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes BA E0 00 00 00: mov edx, 0xe0
        __asm _emit 0xba
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 23 C2: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes 23 CE: and ecx, esi
        __asm _emit 0x23
        __asm _emit 0xce
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 4D: jne 0x5883250e
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes 3B CE: cmp ecx, esi
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 75 49: jne 0x5883250e
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes C1 EF 10: shr edi, 0x10
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x10
        ; Exact mapped bytes 25 FF 00 04 00: and eax, 0x400ff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 83 E7 06: and edi, 6
        __asm _emit 0x83
        __asm _emit 0xe7
        __asm _emit 0x06
        ; Exact mapped bytes A3 18 67 96 58: mov dword ptr [0x58966718], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 81 CF 29 00 00 01: or edi, 0x1000029
        __asm _emit 0x81
        __asm _emit 0xcf
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes F7 D1: not ecx
        __asm _emit 0xf7
        __asm _emit 0xd1
        ; Exact mapped bytes 23 0D B4 60 90 58: and ecx, dword ptr [0x589060b4]
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes F7 D7: not edi
        __asm _emit 0xf7
        __asm _emit 0xd7
        ; Exact mapped bytes 23 3D B0 60 90 58: and edi, dword ptr [0x589060b0]
        __asm _emit 0x23
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 89 3D B0 60 90 58: mov dword ptr [0x589060b0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D B4 60 90 58: mov dword ptr [0x589060b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 76 0F: jbe 0x5883250e
        __asm _emit 0x76
        __asm _emit 0x0f
        ; Exact mapped bytes 83 E7 BF: and edi, 0xffffffbf
        __asm _emit 0x83
        __asm _emit 0xe7
        __asm _emit 0xbf
        ; Exact mapped bytes 89 0D B4 60 90 58: mov dword ptr [0x589060b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 89 3D B0 60 90 58: mov dword ptr [0x589060b0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
