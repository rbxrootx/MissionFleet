// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 385 bytes in 2 exact ranges.
// Source symbol alias: FUN_588ff9a0.

// Ghidra body range 0x588FF9A0..0x588FFB10; 368 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff9a0_segment_00() {
    __asm {
        // 0x588FF9A0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FF9A2: push 0x5898a523
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0xA5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FF9A7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF9AD: push eax
        __asm _emit 0x50
        // 0x588FF9AE: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588FF9B1: push ebx
        __asm _emit 0x53
        // 0x588FF9B2: push ebp
        __asm _emit 0x55
        // 0x588FF9B3: push esi
        __asm _emit 0x56
        // 0x588FF9B4: push edi
        __asm _emit 0x57
        // 0x588FF9B5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FF9BA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FF9BC: push eax
        __asm _emit 0x50
        // 0x588FF9BD: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FF9C1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF9C7: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588FF9C9: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FF9CD: mov dword ptr [ebx], 0x589a23c4
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0xC4
        __asm _emit 0x23
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FF9D3: mov eax, dword ptr [ebx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x74
        // 0x588FF9D6: sub eax, dword ptr [ebx + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x70
        // 0x588FF9D9: lea esi, [ebx + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0x64
        // 0x588FF9DC: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF9DF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FF9E1: mov dword ptr [esp + 0x28], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF9E9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF9EB: jbe 0x588ffa77
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF9F1: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588FF9F4: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588FF9F7: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF9FA: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF9FC: jb 0x588ffa03
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF9FE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xD2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFA03: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588FFA06: cmp dword ptr [edx + edi*4], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xBA
        __asm _emit 0x00
        // 0x588FFA0A: je 0x588ffa65
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x588FFA0C: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588FFA0F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FFA11: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FFA14: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FFA16: jb 0x588ffa1d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFA18: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xD2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFA1D: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588FFA20: cmp dword ptr [ecx + edi*4], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB9
        __asm _emit 0x00
        // 0x588FFA24: je 0x588ffa65
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x588FFA26: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x588FFA29: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588FFA2B: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FFA2E: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FFA30: jb 0x588ffa37
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFA32: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xD2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFA37: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588FFA3A: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x588FFA3D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FFA3F: je 0x588ffa49
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588FFA41: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FFA43: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588FFA45: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FFA47: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FFA49: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588FFA4C: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588FFA4F: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FFA52: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FFA54: jb 0x588ffa5b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFA56: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xD2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFA5B: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588FFA5E: mov dword ptr [edx + edi*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFA65: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588FFA68: sub eax, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588FFA6B: inc edi
        __asm _emit 0x47
        // 0x588FFA6C: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FFA6F: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FFA71: jb 0x588ff9f1
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x7A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FFA77: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588FFA7A: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FFA7E: cmp dword ptr [esi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588FFA81: jbe 0x588ffa88
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588FFA83: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xD1
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFA88: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x588FFA8B: mov ebp, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x2E
        // 0x588FFA8D: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588FFA90: jbe 0x588ffa97
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588FFA92: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xD1
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFA97: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FFA9B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588FFA9D: push ecx
        __asm _emit 0x51
        // 0x588FFA9E: push ebp
        __asm _emit 0x55
        // 0x588FFA9F: push edi
        __asm _emit 0x57
        // 0x588FFAA0: push eax
        __asm _emit 0x50
        // 0x588FFAA1: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FFAA5: push edx
        __asm _emit 0x52
        // 0x588FFAA6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FFAA8: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xF3
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588FFAAD: mov ecx, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFAB3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FFAB5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FFAB7: je 0x588ffac7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FFAB9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FFABB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FFABD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FFABF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FFAC1: mov dword ptr [ebx + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFAC7: mov ecx, dword ptr [ebx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFACD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FFACF: je 0x588ffadf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FFAD1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FFAD3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FFAD5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FFAD7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FFAD9: mov dword ptr [ebx + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFADF: mov ecx, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x60
        // 0x588FFAE2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FFAE4: je 0x588ffaf1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FFAE6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FFAE8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FFAEA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FFAEC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FFAEE: mov dword ptr [ebx + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x60
        // 0x588FFAF1: mov ecx, dword ptr [ebx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x7C
        // 0x588FFAF4: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FFAF6: je 0x588ffb03
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FFAF8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FFAFA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FFAFC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FFAFE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FFB00: mov dword ptr [ebx + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x7C
        // 0x588FFB03: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588FFB06: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588FFB08: je 0x588ffb13
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588FFB0A: push eax
        __asm _emit 0x50
        // 0x588FFB0B: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xD1
        __asm _emit 0x07
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588FFB13..0x588FFB24; 17 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff9a0_segment_01() {
    __asm {
        // 0x588FFB13: mov dword ptr [esi + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x588FFB16: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588FFB19: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588FFB1C: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x588FFB1E: push esi
        __asm _emit 0x56
        // 0x588FFB1F: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xD1
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
