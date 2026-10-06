// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F9C90 .. +0x18 bytes.
// Source symbol alias: FUN_588f9c90.
extern "C" __declspec(naked) void FUN_588f9c90() {
    __asm {
        // 0x588F9C90: mov eax, dword ptr [0x58a24820]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F9C95: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F9C99: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588F9C9C: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9CA1: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588F9CA4: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588F9CA7: ret
        __asm _emit 0xC3
    }
}
