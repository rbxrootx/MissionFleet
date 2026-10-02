// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5887B1D9 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5887b1d9() {
    __asm {
        // 0x5887B1D9: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5887B1DB: push ebp
        __asm _emit 0x55
        // 0x5887B1DC: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5887B1DE: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5887B1E1: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5887B1E4: and dword ptr [eax + 4], 0
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5887B1E8: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5887B1EB: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5887B1EF: mov dword ptr [eax + 0x18], 0x2a
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887B1F6: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5887B1F9: pop ebp
        __asm _emit 0x5D
        // 0x5887B1FA: ret
        __asm _emit 0xC3
    }
}
