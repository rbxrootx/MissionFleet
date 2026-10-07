// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 13 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882b9f0.

// Ghidra body range 0x5882B9F0..0x5882B9FD; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_5882b9f0_segment_00() {
    __asm {
        // 0x5882B9F0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5882B9F4: mov dword ptr [ecx + 0x170], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B9FA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
