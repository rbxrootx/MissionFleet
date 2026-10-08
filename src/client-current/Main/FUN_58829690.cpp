// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_58829690.

// Ghidra body range 0x58829690..0x588296A5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58829690_segment_00() {
    __asm {
        // 0x58829690: push esi
        __asm _emit 0x56
        // 0x58829691: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58829693: call 0x58829460
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58829698: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5882969D: je 0x588296a8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5882969F: push esi
        __asm _emit 0x56
        // 0x588296A0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x35
        __asm _emit 0x15
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588296A8..0x588296AE; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_58829690_segment_01() {
    __asm {
        // 0x588296A8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588296AA: pop esi
        __asm _emit 0x5E
        // 0x588296AB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
