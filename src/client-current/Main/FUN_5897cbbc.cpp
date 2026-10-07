// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CBBC .. +0x6 bytes.
// Source symbol alias: FUN_5897cbbc.
extern "C" __declspec(naked) void FUN_5897cbbc() {
    __asm {
        // 0x5897CBBC: jmp dword ptr [0x5898c0a4]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0xA4
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
