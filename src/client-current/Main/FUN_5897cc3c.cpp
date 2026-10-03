// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CC3C .. +0x6 bytes.
// Source symbol alias: FUN_5897cc3c.
extern "C" __declspec(naked) void FUN_5897cc3c() {
    __asm {
        // 0x5897CC3C: jmp dword ptr [0x5898c1f4]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0xF4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
