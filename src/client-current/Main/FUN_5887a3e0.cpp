// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 13 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887a3e0.

// Ghidra body range 0x5887A3E0..0x5887A3ED; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_5887a3e0_segment_00() {
    __asm {
        // 0x5887A3E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887A3E4: mov dword ptr [ecx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A3EA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
