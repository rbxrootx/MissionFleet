// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58895060 .. +0xB bytes.
// Source symbol alias: FUN_58895060.
extern "C" __declspec(naked) void FUN_58895060() {
    __asm {
        // 0x58895060: mov ecx, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895066: jmp 0x58907360
        __asm _emit 0xE9
        __asm _emit 0xF5
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
