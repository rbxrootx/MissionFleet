// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859D16 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58859d16() {
    __asm {
        // 0x58859D16: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58859D18: push ebp
        __asm _emit 0x55
        // 0x58859D19: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58859D1B: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58859D1E: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58859D21: push eax
        __asm _emit 0x50
        // 0x58859D22: call dword ptr [0x5889421c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x1C
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58859D28: pop ebp
        __asm _emit 0x5D
        // 0x58859D29: ret
        __asm _emit 0xC3
    }
}
