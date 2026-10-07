// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1126 bytes in 1 exact ranges.
// Source symbol alias: FUN_587392d0.

// Ghidra body range 0x587392D0..0x58739736; 1126 mapped bytes.
extern "C" __declspec(naked) void FUN_587392d0_segment_00() {
    __asm {
        // 0x587392D0: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587392D3: push ebx
        __asm _emit 0x53
        // 0x587392D4: push ebp
        __asm _emit 0x55
        // 0x587392D5: push esi
        __asm _emit 0x56
        // 0x587392D6: push edi
        __asm _emit 0x57
        // 0x587392D7: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587392D9: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587392DD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587392DF: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587392E3: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587392E7: call 0x587b07b0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587392EC: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587392F0: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587392F7: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587392F9: movzx eax, word ptr [ebx + ecx*8 + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0xCB
        __asm _emit 0x5C
        // 0x587392FE: lea ebp, [ebx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0xCB
        // 0x58739301: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58739303: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58739307: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873930B: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5873930F: jne 0x587393c6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739315: mov ecx, dword ptr [ebp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873931B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5873931D: je 0x58739643
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739323: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58739328: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5873932D: jne 0x58739643
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739333: mov ebx, dword ptr [ebp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739339: cmp dword ptr [ebx + 0x23c], esi
        __asm _emit 0x39
        __asm _emit 0xB3
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873933F: je 0x5873972c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739345: mov edx, dword ptr [ebx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873934B: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5873934E: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58739353: mov edi, dword ptr [ebx + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739359: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873935B: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5873935E: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58739360: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58739365: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58739367: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873936A: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873936C: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xFF
        // 0x5873936E: mov eax, dword ptr [edi + edi + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x3F
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58739375: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xFF
        // 0x58739377: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873937A: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873937C: cdq
        __asm _emit 0x99
        // 0x5873937D: mov esi, 0xe10
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739382: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x58739384: mov esi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x58739387: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873938C: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5873938F: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58739391: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58739394: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58739396: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58739399: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873939B: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5873939D: mov eax, dword ptr [edi + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587393A3: cdq
        __asm _emit 0x99
        // 0x587393A4: mov edi, 0xe10
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587393A9: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587393AB: mov edi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x587393AE: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587393B3: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587393B6: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587393B8: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587393BB: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587393BD: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587393C0: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587393C2: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x587393C4: jmp 0x58739436
        __asm _emit 0xEB
        __asm _emit 0x70
        // 0x587393C6: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587393CA: jne 0x5873943e
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x587393CC: mov eax, dword ptr [ebp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587393D2: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587393D4: je 0x5873972c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587393DA: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587393E0: mov ecx, dword ptr [edx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587393E6: push eax
        __asm _emit 0x50
        // 0x587393E7: call 0x58738c60
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587393EC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587393EE: je 0x5873972c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587393F4: mov ecx, dword ptr [ebp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587393FA: mov edx, dword ptr [ecx + 0x308]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739400: mov edi, dword ptr [ecx + 0x500]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739406: mov ecx, dword ptr [ecx + 0x30c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873940C: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58739411: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58739413: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58739416: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58739418: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x5873941B: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x5873941D: add esi, dword ptr [edi + 4]
        __asm _emit 0x03
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x58739420: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x58739423: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58739428: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873942A: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873942D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873942F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58739432: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58739434: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x58739436: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873943A: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873943E: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58739442: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x58739445: mov edx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x58739448: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5873944B: push edi
        __asm _emit 0x57
        // 0x5873944C: push esi
        __asm _emit 0x56
        // 0x5873944D: push ecx
        __asm _emit 0x51
        // 0x5873944E: push edx
        __asm _emit 0x52
        // 0x5873944F: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58739453: call 0x5876c010
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x2B
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58739458: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873945B: cmp word ptr [ebp + 0x5c], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x5C
        __asm _emit 0x01
        // 0x58739460: jne 0x5873955e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739466: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873946A: mov ebx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x5873946D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5873946F: sub eax, dword ptr [ebx + 4]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58739472: cdq
        __asm _emit 0x99
        // 0x58739473: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58739475: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x58739477: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58739479: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5873947B: sub eax, dword ptr [ebx + 8]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5873947E: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58739482: cdq
        __asm _emit 0x99
        // 0x58739483: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58739485: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58739487: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58739489: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873948C: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873948E: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58739491: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58739493: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58739497: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5873949A: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587394A1: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587394A3: cmp dword ptr [ebx + ecx*8], edx
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0xCB
        // 0x587394A6: jb 0x58739643
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587394AC: mov ecx, dword ptr [ebp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587394B2: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xD2
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587394B7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587394B9: je 0x58739643
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587394BF: movzx edx, word ptr [ebp + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587394C6: cmp edx, dword ptr [ebp + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0x64
        // 0x587394C9: jl 0x587394d8
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x587394CB: mov ax, word ptr [ebp + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x64
        // 0x587394CF: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        // 0x587394D1: mov word ptr [ebp + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587394D8: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587394DC: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587394E0: push ecx
        __asm _emit 0x51
        // 0x587394E1: push edx
        __asm _emit 0x52
        // 0x587394E2: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587394E4: call 0x58735e60
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587394E9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587394EB: add ecx, 0x384
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587394F1: cmp ecx, 0x2a94
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x94
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587394F7: jne 0x58739505
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587394F9: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739501: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58739505: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x5873950A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873950C: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5873950E: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x58739511: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58739513: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58739516: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58739518: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873951E: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58739520: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58739524: jns 0x58739530
        __asm _emit 0x79
        __asm _emit 0x0A
        // 0x58739526: add ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873952C: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58739530: movzx edx, word ptr [ebp + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739537: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873953B: push edx
        __asm _emit 0x52
        // 0x5873953C: push ecx
        __asm _emit 0x51
        // 0x5873953D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5873953F: call 0x587b1090
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x7B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58739544: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58739546: mov dword ptr [ebx + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873954C: mov dword ptr [ebx + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739552: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58739556: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873955E: cmp word ptr [ebp + 0x5c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x5C
        __asm _emit 0x02
        // 0x58739563: jne 0x58739651
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739569: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873956D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58739571: push eax
        __asm _emit 0x50
        // 0x58739572: push ebx
        __asm _emit 0x53
        // 0x58739573: call 0x58735e60
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739578: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5873957A: add ebx, 0x384
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739580: cmp ebx, 0x2a94
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x94
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739586: jne 0x5873958a
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x58739588: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5873958A: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x5873958F: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x58739591: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x58739593: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x58739596: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58739598: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873959B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873959D: imul ecx, ecx, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587395A3: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x587395A5: jns 0x587395ad
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587395A7: add ebx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587395AD: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587395B1: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587395B4: sub esi, dword ptr [eax + 4]
        __asm _emit 0x2B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587395B7: sub edi, dword ptr [eax + 8]
        __asm _emit 0x2B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587395BA: mov eax, dword ptr [ebp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587395C0: mov ecx, dword ptr [eax + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587395C6: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587395CB: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587395CD: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587395D0: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587395D2: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587395D5: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587395D7: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587395DB: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587395DF: fmul qword ptr [0x5898cb18]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x18
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587395E5: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x36
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587395EA: push eax
        __asm _emit 0x50
        // 0x587395EB: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587395ED: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587395EF: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587395F2: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x587395F5: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587395F7: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587395FB: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587395FF: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x36
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739604: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x36
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739609: push eax
        __asm _emit 0x50
        // 0x5873960A: call 0x587a0740
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5873960F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58739611: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58739614: cmp esi, 0x64
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x64
        // 0x58739617: jge 0x5873961e
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58739619: mov esi, 0x64
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873961E: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58739622: push esi
        __asm _emit 0x56
        // 0x58739623: push ebx
        __asm _emit 0x53
        // 0x58739624: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58739626: call 0x587b1090
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x7A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5873962B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873962D: mov dword ptr [edi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739633: mov dword ptr [edi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739639: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739641: jmp 0x5873965d
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58739643: pop edi
        __asm _emit 0x5F
        // 0x58739644: pop esi
        __asm _emit 0x5E
        // 0x58739645: pop ebp
        __asm _emit 0x5D
        // 0x58739646: mov byte ptr [ebx + 0x30], 0xff
        __asm _emit 0xC6
        __asm _emit 0x43
        __asm _emit 0x30
        __asm _emit 0xFF
        // 0x5873964A: pop ebx
        __asm _emit 0x5B
        // 0x5873964B: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5873964E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58739651: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58739655: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58739659: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873965D: cmp dword ptr [edi + 0x108], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739664: jne 0x5873972c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873966A: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5873966F: je 0x5873972c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739675: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58739679: cmp word ptr [ecx + 0xee], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739681: jne 0x5873972c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739687: mov edx, dword ptr [edi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873968D: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58739693: cmp edx, 0x40000000
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58739699: jne 0x5873972c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873969F: cmp dword ptr [edi + 0xf4], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587396A6: je 0x5873972c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587396AC: cmp dword ptr [0x58a24508], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x08
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587396B3: jne 0x587396bc
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587396B5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587396B7: call 0x587b1850
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587396BC: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587396C0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587396C2: xor ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x33
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587396C6: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587396C9: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xC1
        // 0x587396CB: and eax, 0xf800001f
        __asm _emit 0x25
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF8
        // 0x587396D0: cmp word ptr [ebp + 0x5c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x5C
        __asm _emit 0x02
        // 0x587396D5: jne 0x587396ea
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587396D7: and ebx, 0xfff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587396DD: shl ebx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE3
        __asm _emit 0x0A
        // 0x587396E0: and esi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587396E6: or ebx, esi
        __asm _emit 0x0B
        __asm _emit 0xDE
        // 0x587396E8: jmp 0x58739706
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x587396EA: movzx ebx, word ptr [ebp + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x9D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587396F1: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587396F5: and ecx, 0xfff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587396FB: and ebx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739701: shl ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x0A
        // 0x58739704: or ebx, ecx
        __asm _emit 0x0B
        __asm _emit 0xD9
        // 0x58739706: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58739708: mov edx, dword ptr [edx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x3C
        // 0x5873970B: shl ebx, 5
        __asm _emit 0xC1
        __asm _emit 0xE3
        __asm _emit 0x05
        // 0x5873970E: or ebx, eax
        __asm _emit 0x0B
        __asm _emit 0xD8
        // 0x58739710: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58739714: and ebx, 0x87ffffff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x87
        // 0x5873971A: push eax
        __asm _emit 0x50
        // 0x5873971B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873971D: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58739721: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58739723: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58739725: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58739727: call 0x587b2460
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x8D
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5873972C: pop edi
        __asm _emit 0x5F
        // 0x5873972D: pop esi
        __asm _emit 0x5E
        // 0x5873972E: pop ebp
        __asm _emit 0x5D
        // 0x5873972F: pop ebx
        __asm _emit 0x5B
        // 0x58739730: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58739733: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
