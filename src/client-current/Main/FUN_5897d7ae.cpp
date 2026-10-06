// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897D7AE .. +0x6 bytes.
// Source symbol alias: FUN_5897d7ae.
extern "C" __declspec(naked) void FUN_5897d7ae() {
    __asm {
        // 0x5897D7AE: jmp dword ptr [0x5898c38c]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x8C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
