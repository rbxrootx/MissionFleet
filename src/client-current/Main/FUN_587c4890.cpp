// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C4890 .. +0x1A bytes.
// Source symbol alias: FUN_587c4890.
extern "C" __declspec(naked) void FUN_587c4890() {
    __asm {
        // 0x587C4890: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587C4892: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C4894: mov dword ptr [eax], 0x5899ad7c
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x7C
        __asm _emit 0xAD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C489A: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587C489D: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587C48A0: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587C48A3: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587C48A6: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x587C48A9: ret
        __asm _emit 0xC3
    }
}
