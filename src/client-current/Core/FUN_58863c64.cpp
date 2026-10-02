// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58863C64 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58863c64() {
    __asm {
        // 0x58863C64: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58863C66: push ebp
        __asm _emit 0x55
        // 0x58863C67: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58863C69: imul eax, dword ptr [ebp + 8], 0x18
        __asm _emit 0x6B
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x18
        // 0x58863C6D: add eax, 0x58969620
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58863C72: push eax
        __asm _emit 0x50
        // 0x58863C73: call dword ptr [0x5889421c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x1C
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58863C79: pop ebp
        __asm _emit 0x5D
        // 0x58863C7A: ret
        __asm _emit 0xC3
    }
}
