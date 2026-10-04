// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907F80 .. +0x28 bytes.
// Source symbol alias: FUN_58907f80.
extern "C" __declspec(naked) void FUN_58907f80() {
    __asm {
        // 0x58907F80: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58907F84: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58907F86: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58907F8A: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58907F8D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58907F8F: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58907F92: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58907F95: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58907F99: mov dword ptr [eax], 0x589a29c4
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xC4
        __asm _emit 0x29
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58907F9F: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58907FA2: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58907FA5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
