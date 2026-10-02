// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5887B1C5 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_5887b1c5() {
    __asm {
        // 0x5887B1C5: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5887B1C7: push ebp
        __asm _emit 0x55
        // 0x5887B1C8: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5887B1CA: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5887B1CD: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5887B1D0: and dword ptr [eax + 4], 0
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5887B1D4: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5887B1D7: pop ebp
        __asm _emit 0x5D
        // 0x5887B1D8: ret
        __asm _emit 0xC3
    }
}
