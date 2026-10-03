// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897D801 .. +0x14 bytes.
// Source symbol alias: __SEH_epilog4.
extern "C" __declspec(naked) void __SEH_epilog4() {
    __asm {
        // 0x5897D801: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x5897D804: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D80B: pop ecx
        __asm _emit 0x59
        // 0x5897D80C: pop edi
        __asm _emit 0x5F
        // 0x5897D80D: pop edi
        __asm _emit 0x5F
        // 0x5897D80E: pop esi
        __asm _emit 0x5E
        // 0x5897D80F: pop ebx
        __asm _emit 0x5B
        // 0x5897D810: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5897D812: pop ebp
        __asm _emit 0x5D
        // 0x5897D813: push ecx
        __asm _emit 0x51
        // 0x5897D814: ret
        __asm _emit 0xC3
    }
}
