// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F6110 .. +0x11 bytes.
// Source symbol alias: FUN_588f6110.
extern "C" __declspec(naked) void FUN_588f6110() {
    __asm {
        // 0x588F6110: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F6112: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F6114: mov dword ptr [eax], 0x589a19e0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xE0
        __asm _emit 0x19
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F611A: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588F611D: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588F6120: ret
        __asm _emit 0xC3
    }
}
