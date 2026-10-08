// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 10 bytes in 1 exact ranges.
// Source symbol alias: FUN_588c08a0.

// Ghidra body range 0x588C08A0..0x588C08AA; 10 mapped bytes.
extern "C" __declspec(naked) void FUN_588c08a0_segment_00() {
    __asm {
        // 0x588C08A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588C08A4: mov dword ptr [ecx + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x588C08A7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
