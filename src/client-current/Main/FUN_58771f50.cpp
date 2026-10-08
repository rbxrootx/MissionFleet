// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 12 bytes in 1 exact ranges.
// Source symbol alias: FUN_58771f50.

// Ghidra body range 0x58771F50..0x58771F5C; 12 mapped bytes.
extern "C" __declspec(naked) void FUN_58771f50_segment_00() {
    __asm {
        // 0x58771F50: mov eax, dword ptr [0x589cfc9c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58771F55: inc eax
        __asm _emit 0x40
        // 0x58771F56: mov dword ptr [0x589cfc9c], eax
        __asm _emit 0xA3
        __asm _emit 0x9C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58771F5B: ret
        __asm _emit 0xC3
    }
}
