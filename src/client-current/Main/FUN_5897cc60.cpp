// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CC60 .. +0x6 bytes.
// Source symbol alias: FUN_5897cc60.
extern "C" __declspec(naked) void FUN_5897cc60() {
    __asm {
        // 0x5897CC60: jmp dword ptr [0x5898c20c]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x0C
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
