// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CEE0 .. +0x6 bytes.
// Source symbol alias: FUN_5897cee0.
extern "C" __declspec(naked) void FUN_5897cee0() {
    __asm {
        // 0x5897CEE0: jmp dword ptr [0x5898c29c]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x9C
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
