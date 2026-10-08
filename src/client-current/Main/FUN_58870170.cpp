// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_58870170.

// Ghidra body range 0x58870170..0x58870185; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58870170_segment_00() {
    __asm {
        // 0x58870170: push esi
        __asm _emit 0x56
        // 0x58870171: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58870173: call 0x5886ffc0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58870178: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5887017D: je 0x58870188
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5887017F: push esi
        __asm _emit 0x56
        // 0x58870180: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xCA
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58870188..0x5887018E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_58870170_segment_01() {
    __asm {
        // 0x58870188: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5887018A: pop esi
        __asm _emit 0x5E
        // 0x5887018B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
