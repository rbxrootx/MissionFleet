// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_58810520.

// Ghidra body range 0x58810520..0x58810535; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58810520_segment_00() {
    __asm {
        // 0x58810520: push esi
        __asm _emit 0x56
        // 0x58810521: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58810523: call 0x58810090
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58810528: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5881052D: je 0x58810538
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5881052F: push esi
        __asm _emit 0x56
        // 0x58810530: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xC7
        __asm _emit 0x16
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58810538..0x5881053E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_58810520_segment_01() {
    __asm {
        // 0x58810538: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5881053A: pop esi
        __asm _emit 0x5E
        // 0x5881053B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
