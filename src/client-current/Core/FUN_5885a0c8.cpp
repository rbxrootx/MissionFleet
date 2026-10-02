// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A0C8 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5885a0c8() {
    __asm {
        // 0x5885A0C8: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A0CA: push ebp
        __asm _emit 0x55
        // 0x5885A0CB: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A0CD: pop ebp
        __asm _emit 0x5D
        // 0x5885A0CE: jmp 0x5885a08c
        __asm _emit 0xE9
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
