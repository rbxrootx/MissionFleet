// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 51 bytes in 2 exact ranges.
// Source symbol alias: FUN_587720e0.

// Ghidra body range 0x587720E0..0x587720F5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_587720e0_segment_00() {
    __asm {
        // 0x587720E0: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587720E4: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587720E8: push ebx
        __asm _emit 0x53
        // 0x587720E9: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587720ED: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x587720EF: je 0x5877211c
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x587720F1: push esi
        __asm _emit 0x56
        // 0x587720F2: push edi
        __asm _emit 0x57
        // 0x587720F3: jmp 0x58772100
        __asm _emit 0xEB
        __asm _emit 0x0B
    }
}

// Ghidra body range 0x58772100..0x5877211E; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_587720e0_segment_01() {
    __asm {
        // 0x58772100: sub edx, 0x108
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772106: sub eax, 0x108
        __asm _emit 0x2D
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877210B: mov ecx, 0x42
        __asm _emit 0xB9
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772110: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58772112: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58772114: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58772116: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x58772118: jne 0x58772100
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5877211A: pop edi
        __asm _emit 0x5F
        // 0x5877211B: pop esi
        __asm _emit 0x5E
        // 0x5877211C: pop ebx
        __asm _emit 0x5B
        // 0x5877211D: ret
        __asm _emit 0xC3
    }
}
