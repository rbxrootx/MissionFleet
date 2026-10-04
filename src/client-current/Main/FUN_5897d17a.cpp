// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897D17A .. +0x6 bytes.
// Source symbol alias: FUN_5897d17a.
extern "C" __declspec(naked) void FUN_5897d17a() {
    __asm {
        // 0x5897D17A: jmp dword ptr [0x5898c300]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
