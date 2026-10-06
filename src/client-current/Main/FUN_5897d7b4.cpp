// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897D7B4 .. +0x6 bytes.
// Source symbol alias: FUN_5897d7b4.
extern "C" __declspec(naked) void FUN_5897d7b4() {
    __asm {
        // 0x5897D7B4: jmp dword ptr [0x5898c394]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x94
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
