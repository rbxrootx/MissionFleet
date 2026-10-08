// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_58835900.

// Ghidra body range 0x58835900..0x58835915; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58835900_segment_00() {
    __asm {
        // 0x58835900: push esi
        __asm _emit 0x56
        // 0x58835901: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58835903: call 0x58834c00
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58835908: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5883590D: je 0x58835918
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5883590F: push esi
        __asm _emit 0x56
        // 0x58835910: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x73
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58835918..0x5883591E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_58835900_segment_01() {
    __asm {
        // 0x58835918: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5883591A: pop esi
        __asm _emit 0x5E
        // 0x5883591B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
