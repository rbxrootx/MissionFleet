// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CECE .. +0x6 bytes.
// Source symbol alias: FUN_5897cece.
extern "C" __declspec(naked) void FUN_5897cece() {
    __asm {
        // 0x5897CECE: jmp dword ptr [0x5898c290]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x90
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
