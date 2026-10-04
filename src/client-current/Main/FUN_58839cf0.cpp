// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58839CF0 .. +0x23D bytes.
// Source symbol alias: FUN_58839cf0.
extern "C" __declspec(naked) void FUN_58839cf0() {
    __asm {
        // 0x58839CF0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58839CF3: push ebx
        __asm _emit 0x53
        // 0x58839CF4: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58839CF6: cmp byte ptr [ebx + 0x2e5], 5
        __asm _emit 0x80
        __asm _emit 0xBB
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58839CFD: jne 0x58839f26
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839D03: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58839D07: push ebp
        __asm _emit 0x55
        // 0x58839D08: push esi
        __asm _emit 0x56
        // 0x58839D09: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58839D0B: push edi
        __asm _emit 0x57
        // 0x58839D0C: mov byte ptr [ebx + 0x2e5], 4
        __asm _emit 0xC6
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58839D13: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58839D17: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58839D19: jbe 0x58839dc0
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839D1F: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58839D23: lea eax, [ebx + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839D29: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58839D2D: add ebp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0C
        // 0x58839D30: lea eax, [ebx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839D36: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58839D39: ja 0x58839dc3
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839D3F: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58839D41: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839D46: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58839D48: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58839D4D: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58839D50: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x58839D53: jne 0x58839d46
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58839D55: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58839D59: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58839D5B: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58839D5E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839D60: je 0x58839d9b
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x58839D62: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58839D64: je 0x58839d9b
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58839D66: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58839D68: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839D6D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58839D70: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58839D76: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58839D78: je 0x58839d8b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58839D7A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58839D7C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58839D7E: je 0x58839d8b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58839D80: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58839D82: inc eax
        __asm _emit 0x40
        // 0x58839D83: inc edx
        __asm _emit 0x42
        // 0x58839D84: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58839D87: jne 0x58839d70
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58839D89: jmp 0x58839d8f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58839D8B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58839D8D: jne 0x58839d90
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58839D8F: dec eax
        __asm _emit 0x48
        // 0x58839D90: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58839D94: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58839D98: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839D9B: mov eax, dword ptr [0x58a0b4a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58839DA0: cmp eax, dword ptr [ebp - 8]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x58839DA3: jne 0x58839da9
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58839DA5: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58839DA9: add dword ptr [esp + 0x10], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        // 0x58839DAE: inc esi
        __asm _emit 0x46
        // 0x58839DAF: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x54
        // 0x58839DB2: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58839DB6: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58839DB8: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58839DBA: jb 0x58839d36
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58839DC0: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58839DC3: jge 0x58839e4d
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839DC9: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839DCE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58839DD0: lea ebp, [ebx + edx*4 + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0x93
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839DD7: lea edi, [ebx + edx*8 + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0xD3
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839DDE: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58839DE2: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839DE7: jmp 0x58839df0
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58839DE9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839DF0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58839DF2: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839DF7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58839DFB: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58839DFE: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x58839E01: jne 0x58839df0
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x58839E03: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58839E06: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58839E09: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839E0B: je 0x58839e43
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58839E0D: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58839E12: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839E17: jmp 0x58839e20
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58839E19: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839E20: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58839E26: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58839E28: je 0x58839e3b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58839E2A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58839E2C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58839E2E: je 0x58839e3b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58839E30: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58839E32: inc eax
        __asm _emit 0x40
        // 0x58839E33: inc edx
        __asm _emit 0x42
        // 0x58839E34: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58839E37: jne 0x58839e20
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58839E39: jmp 0x58839e3f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58839E3B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58839E3D: jne 0x58839e40
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58839E3F: dec eax
        __asm _emit 0x48
        // 0x58839E40: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839E43: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58839E46: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x58839E4B: jne 0x58839de2
        __asm _emit 0x75
        __asm _emit 0x95
        // 0x58839E4D: cmp word ptr [0x58a0b4a8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x03
        // 0x58839E55: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58839E59: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x58839E5C: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58839E5F: lea esi, [eax + edx*4 + 0x101]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839E66: mov eax, dword ptr [ebx + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839E6C: jne 0x58839ee5
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x58839E6E: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839E73: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58839E77: mov edx, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839E7D: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x58839E80: mov eax, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839E86: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58839E8A: mov eax, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839E90: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58839E94: mov edx, 0xe1ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839E99: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58839E9C: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839EA1: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xCA
        // 0x58839EA4: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58839EA8: mov eax, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839EAE: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58839EB3: mov ecx, dword ptr [ebx + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839EB9: push esi
        __asm _emit 0x56
        // 0x58839EBA: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x94
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839EBF: mov ecx, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839EC5: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58839EC8: push esi
        __asm _emit 0x56
        // 0x58839EC9: push eax
        __asm _emit 0x50
        // 0x58839ECA: call 0x5875d890
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x39
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58839ECF: mov ecx, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839ED5: push esi
        __asm _emit 0x56
        // 0x58839ED6: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839EDB: pop edi
        __asm _emit 0x5F
        // 0x58839EDC: pop esi
        __asm _emit 0x5E
        // 0x58839EDD: pop ebp
        __asm _emit 0x5D
        // 0x58839EDE: pop ebx
        __asm _emit 0x5B
        // 0x58839EDF: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58839EE2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58839EE5: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839EEA: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58839EEE: mov edx, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839EF4: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839EFB: mov eax, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F01: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58839F05: mov eax, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F0B: mov edx, 0xe0ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F10: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58839F14: mov eax, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F1A: pop edi
        __asm _emit 0x5F
        // 0x58839F1B: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F20: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58839F24: pop esi
        __asm _emit 0x5E
        // 0x58839F25: pop ebp
        __asm _emit 0x5D
        // 0x58839F26: pop ebx
        __asm _emit 0x5B
        // 0x58839F27: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58839F2A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
