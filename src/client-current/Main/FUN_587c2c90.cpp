// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 25 bytes in 1 exact ranges.
// Source symbol alias: FUN_587c2c90.

// Ghidra body range 0x587C2C90..0x587C2CA9; 25 mapped bytes.
extern "C" __declspec(naked) void FUN_587c2c90_segment_00() {
    __asm {
        // 0x587C2C90: push esi
        __asm _emit 0x56
        // 0x587C2C91: push 0x5899ac30
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xAC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C2C96: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C2C98: call 0x58971e36
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xF1
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587C2C9D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C2CA0: mov dword ptr [esi + 0x6c], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C2CA7: pop esi
        __asm _emit 0x5E
        // 0x587C2CA8: ret
        __asm _emit 0xC3
    }
}
