// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901680 .. +0x11 bytes.
// Source symbol alias: FUN_58901680.
extern "C" __declspec(naked) void FUN_58901680() {
    __asm {
        // 0x58901680: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58901682: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58901684: mov dword ptr [eax], 0x589a24c4
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xC4
        __asm _emit 0x24
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890168A: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5890168D: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58901690: ret
        __asm _emit 0xC3
    }
}
