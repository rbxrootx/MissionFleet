// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CBC8 .. +0x6 bytes.
// Source symbol alias: FUN_5897cbc8.
extern "C" __declspec(naked) void FUN_5897cbc8() {
    __asm {
        // 0x5897CBC8: jmp dword ptr [0x5898c0ac]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0xAC
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
