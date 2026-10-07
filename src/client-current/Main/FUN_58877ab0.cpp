// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 28 bytes in 1 exact ranges.
// Source symbol alias: FUN_58877ab0.

// Ghidra body range 0x58877AB0..0x58877ACC; 28 mapped bytes.
extern "C" __declspec(naked) void FUN_58877ab0_segment_00() {
    __asm {
        // 0x58877AB0: push esi
        __asm _emit 0x56
        // 0x58877AB1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58877AB5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58877AB7: je 0x58877ac8
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58877AB9: push edi
        __asm _emit 0x57
        // 0x58877ABA: lea edi, [ecx + 0xbc]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877AC0: mov ecx, 0x35
        __asm _emit 0xB9
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877AC5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58877AC7: pop edi
        __asm _emit 0x5F
        // 0x58877AC8: pop esi
        __asm _emit 0x5E
        // 0x58877AC9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
