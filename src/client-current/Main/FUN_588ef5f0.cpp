// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EF5F0 .. +0xB bytes.
// Source symbol alias: FUN_588ef5f0.
extern "C" __declspec(naked) void FUN_588ef5f0() {
    __asm {
        // 0x588EF5F0: mov ecx, dword ptr [ecx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF5F6: jmp 0x589082b0
        __asm _emit 0xE9
        __asm _emit 0xB5
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
