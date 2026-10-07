// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5878A1E0 .. +0x5 bytes.
// Source symbol alias: thunk_FUN_5878a120.
extern "C" __declspec(naked) void thunk_FUN_5878a120() {
    __asm {
        // 0x5878A1E0: jmp 0x5878a120
        __asm _emit 0xE9
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
