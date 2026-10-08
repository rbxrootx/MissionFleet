// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_58731840.

// Ghidra body range 0x58731840..0x58731855; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58731840_segment_00() {
    __asm {
        // 0x58731840: push esi
        __asm _emit 0x56
        // 0x58731841: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58731843: call 0x58731000
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58731848: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5873184D: je 0x58731858
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5873184F: push esi
        __asm _emit 0x56
        // 0x58731850: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xB3
        __asm _emit 0x24
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58731858..0x5873185E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_58731840_segment_01() {
    __asm {
        // 0x58731858: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5873185A: pop esi
        __asm _emit 0x5E
        // 0x5873185B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
