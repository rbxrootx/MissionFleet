// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CC54 .. +0x6 bytes.
// Source symbol alias: FUN_5897cc54.
extern "C" __declspec(naked) void FUN_5897cc54() {
    __asm {
        // 0x5897CC54: jmp dword ptr [0x5898c204]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
