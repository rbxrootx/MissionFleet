// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_58773640.

// Ghidra body range 0x58773640..0x58773655; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58773640_segment_00() {
    __asm {
        // 0x58773640: push esi
        __asm _emit 0x56
        // 0x58773641: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58773643: call 0x58772eb0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773648: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5877364D: je 0x58773658
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5877364F: push esi
        __asm _emit 0x56
        // 0x58773650: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58773658..0x5877365E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_58773640_segment_01() {
    __asm {
        // 0x58773658: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877365A: pop esi
        __asm _emit 0x5E
        // 0x5877365B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
