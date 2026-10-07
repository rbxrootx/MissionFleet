// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 7 bytes in 1 exact ranges.
// Source symbol alias: FUN_587c8850.

// Ghidra body range 0x587C8850..0x587C8857; 7 mapped bytes.
extern "C" __declspec(naked) void FUN_587c8850_segment_00() {
    __asm {
        // 0x587C8850: mov eax, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x587C8853: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x587C8856: ret
        __asm _emit 0xC3
    }
}
