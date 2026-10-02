// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5887628F .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_5887628f() {
    __asm {
        // 0x5887628F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58876291: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x58876294: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887629B: pop ecx
        __asm _emit 0x59
        // 0x5887629C: pop edi
        __asm _emit 0x5F
        // 0x5887629D: pop esi
        __asm _emit 0x5E
        // 0x5887629E: pop ebx
        __asm _emit 0x5B
        // 0x5887629F: leave
        __asm _emit 0xC9
        // 0x588762A0: ret
        __asm _emit 0xC3
    }
}
