// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 35 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973870.

// Ghidra body range 0x58973870..0x58973893; 35 mapped bytes.
extern "C" __declspec(naked) void FUN_58973870_segment_00() {
    __asm {
        // 0x58973870: push esi
        __asm _emit 0x56
        // 0x58973871: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58973873: mov eax, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973879: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897387B: je 0x58973891
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5897387D: push eax
        __asm _emit 0x50
        // 0x5897387E: call dword ptr [0x5898c2ac]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xAC
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58973884: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58973887: mov dword ptr [esi + 0x1b0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973891: pop esi
        __asm _emit 0x5E
        // 0x58973892: ret
        __asm _emit 0xC3
    }
}
