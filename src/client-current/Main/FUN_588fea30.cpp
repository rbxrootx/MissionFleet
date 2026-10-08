// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 119 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fea30.

// Ghidra body range 0x588FEA30..0x588FEAA7; 119 mapped bytes.
extern "C" __declspec(naked) void FUN_588fea30_segment_00() {
    __asm {
        // 0x588FEA30: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FEA34: lea eax, [edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xFF
        // 0x588FEA37: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x588FEA3A: cmp eax, 0x63
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x63
        // 0x588FEA3D: jbe 0x588fea47
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x588FEA3F: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588FEA41: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FEA44: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588FEA47: lea eax, [edx + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x52
        // 0x588FEA4A: cmp byte ptr [ecx + eax*8 - 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0xC1
        __asm _emit 0xEC
        __asm _emit 0x00
        // 0x588FEA4F: lea eax, [ecx + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xC1
        // 0x588FEA52: je 0x588fea3f
        __asm _emit 0x74
        __asm _emit 0xEB
        // 0x588FEA54: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588FEA57: je 0x588fea3f
        __asm _emit 0x74
        __asm _emit 0xE6
        // 0x588FEA59: mov ecx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x588FEA5C: mov edx, dword ptr [eax - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xF4
        // 0x588FEA5F: push esi
        __asm _emit 0x56
        // 0x588FEA60: mov esi, dword ptr [eax - 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0xF8
        // 0x588FEA63: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588FEA65: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FEA69: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FEA6D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FEA71: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588FEA74: jb 0x588fea95
        __asm _emit 0x72
        __asm _emit 0x1F
        // 0x588FEA76: jne 0x588fea9e
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x588FEA78: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588FEA7A: shr eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x10
        // 0x588FEA7D: shr ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x10
        // 0x588FEA80: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588FEA83: jb 0x588fea95
        __asm _emit 0x72
        __asm _emit 0x10
        // 0x588FEA85: jne 0x588fea9e
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588FEA87: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FEA8B: shr ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x10
        // 0x588FEA8E: shr esi, 0x10
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x10
        // 0x588FEA91: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x588FEA93: jae 0x588fea9e
        __asm _emit 0x73
        __asm _emit 0x09
        // 0x588FEA95: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588FEA97: pop esi
        __asm _emit 0x5E
        // 0x588FEA98: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FEA9B: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588FEA9E: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588FEAA0: pop esi
        __asm _emit 0x5E
        // 0x588FEAA1: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FEAA4: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
