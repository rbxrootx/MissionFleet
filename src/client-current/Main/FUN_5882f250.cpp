// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_5882f250.

// Ghidra body range 0x5882F250..0x5882F265; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_5882f250_segment_00() {
    __asm {
        // 0x5882F250: push esi
        __asm _emit 0x56
        // 0x5882F251: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882F253: call 0x5882ec80
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F258: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5882F25D: je 0x5882f268
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5882F25F: push esi
        __asm _emit 0x56
        // 0x5882F260: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xD9
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5882F268..0x5882F26E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5882f250_segment_01() {
    __asm {
        // 0x5882F268: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5882F26A: pop esi
        __asm _emit 0x5E
        // 0x5882F26B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
