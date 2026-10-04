// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58755050 .. +0x11 bytes.
// Source symbol alias: FUN_58755050.
extern "C" __declspec(naked) void FUN_58755050() {
    __asm {
        // 0x58755050: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58755052: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58755054: mov dword ptr [eax], 0x5898d6a0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875505A: mov dword ptr [eax + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x5875505D: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58755060: ret
        __asm _emit 0xC3
    }
}
