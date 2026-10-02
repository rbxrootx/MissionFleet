// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859D02 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58859d02() {
    __asm {
        // 0x58859D02: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58859D04: push ebp
        __asm _emit 0x55
        // 0x58859D05: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58859D07: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58859D0A: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58859D0D: push eax
        __asm _emit 0x50
        // 0x58859D0E: call dword ptr [0x58894220]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58859D14: pop ebp
        __asm _emit 0x5D
        // 0x58859D15: ret
        __asm _emit 0xC3
    }
}
