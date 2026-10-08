// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FFC90 .. +0xF6 bytes.
// Source symbol alias: FUN_588ffc90.
extern "C" __declspec(naked) void FUN_588ffc90() {
    __asm {
        // 0x588FFC90: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588FFC93: push ebx
        __asm _emit 0x53
        // 0x588FFC94: push ebp
        __asm _emit 0x55
        // 0x588FFC95: push esi
        __asm _emit 0x56
        // 0x588FFC96: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FFC98: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFC9E: push edi
        __asm _emit 0x57
        // 0x588FFC9F: call 0x588f9c00
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x9F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FFCA4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FFCA6: mov dword ptr [esi + 0x88], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFCB0: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFCB6: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFCBC: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFCC2: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FFCC5: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FFCC8: add esi, 0x64
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x64
        // 0x588FFCCB: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FFCCE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FFCD0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FFCD2: jbe 0x588ffd50
        __asm _emit 0x76
        __asm _emit 0x7C
        // 0x588FFCD4: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588FFCD7: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588FFCDA: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FFCDD: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FFCDF: jb 0x588ffce6
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFCE1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xCF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFCE6: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588FFCE9: cmp dword ptr [edx + edi*4], ebx
        __asm _emit 0x39
        __asm _emit 0x1C
        __asm _emit 0xBA
        // 0x588FFCEC: je 0x588ffd42
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x588FFCEE: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588FFCF1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FFCF3: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FFCF6: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FFCF8: jb 0x588ffcff
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFCFA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xCF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFCFF: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588FFD02: cmp dword ptr [ecx + edi*4], ebx
        __asm _emit 0x39
        __asm _emit 0x1C
        __asm _emit 0xB9
        // 0x588FFD05: je 0x588ffd42
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x588FFD07: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x588FFD0A: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588FFD0C: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FFD0F: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FFD11: jb 0x588ffd18
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFD13: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xCF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFD18: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588FFD1B: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x588FFD1E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FFD20: je 0x588ffd2a
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588FFD22: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FFD24: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588FFD26: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FFD28: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FFD2A: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588FFD2D: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588FFD30: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FFD33: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FFD35: jb 0x588ffd3c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFD37: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xCF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFD3C: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588FFD3F: mov dword ptr [edx + edi*4], ebx
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0xBA
        // 0x588FFD42: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588FFD45: sub eax, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588FFD48: inc edi
        __asm _emit 0x47
        // 0x588FFD49: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FFD4C: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FFD4E: jb 0x588ffcd4
        __asm _emit 0x72
        __asm _emit 0x84
        // 0x588FFD50: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x588FFD53: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x588FFD56: jbe 0x588ffd5d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588FFD58: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xCF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFD5D: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x588FFD60: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x588FFD62: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588FFD65: jbe 0x588ffd6c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588FFD67: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xCF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFD6C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588FFD6E: push ebp
        __asm _emit 0x55
        // 0x588FFD6F: push ebx
        __asm _emit 0x53
        // 0x588FFD70: push edi
        __asm _emit 0x57
        // 0x588FFD71: push eax
        __asm _emit 0x50
        // 0x588FFD72: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FFD76: push ecx
        __asm _emit 0x51
        // 0x588FFD77: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FFD79: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xF0
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588FFD7E: pop edi
        __asm _emit 0x5F
        // 0x588FFD7F: pop esi
        __asm _emit 0x5E
        // 0x588FFD80: pop ebp
        __asm _emit 0x5D
        // 0x588FFD81: pop ebx
        __asm _emit 0x5B
        // 0x588FFD82: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588FFD85: ret
        __asm _emit 0xC3
    }
}
