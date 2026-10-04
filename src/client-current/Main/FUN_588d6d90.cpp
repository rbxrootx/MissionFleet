// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D6D90 .. +0xB bytes.
// Source symbol alias: FUN_588d6d90.
extern "C" __declspec(naked) void FUN_588d6d90() {
    __asm {
        // 0x588D6D90: mov ecx, dword ptr [ecx + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6D96: jmp 0x58749a30
        __asm _emit 0xE9
        __asm _emit 0x95
        __asm _emit 0x2C
        __asm _emit 0xE7
        __asm _emit 0xFF
    }
}
