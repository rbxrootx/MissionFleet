// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58850FAB .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58850fab() {
    __asm {
        // 0x58850FAB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58850FAD: push eax
        __asm _emit 0x50
        // 0x58850FAE: push eax
        __asm _emit 0x50
        // 0x58850FAF: push eax
        __asm _emit 0x50
        // 0x58850FB0: push eax
        __asm _emit 0x50
        // 0x58850FB1: push eax
        __asm _emit 0x50
        // 0x58850FB2: call 0x58850ef7
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850FB7: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58850FBA: ret
        __asm _emit 0xC3
    }
}
