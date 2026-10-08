// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_588fddd0.

// Ghidra body range 0x588FDDD0..0x588FDDE5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_588fddd0_segment_00() {
    __asm {
        // 0x588FDDD0: push esi
        __asm _emit 0x56
        // 0x588FDDD1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FDDD3: call 0x588fdc00
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FDDD8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588FDDDD: je 0x588fdde8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588FDDDF: push esi
        __asm _emit 0x56
        // 0x588FDDE0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xEE
        __asm _emit 0x07
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588FDDE8..0x588FDDEE; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_588fddd0_segment_01() {
    __asm {
        // 0x588FDDE8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FDDEA: pop esi
        __asm _emit 0x5E
        // 0x588FDDEB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
