// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B05C .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5885b05c() {
    __asm {
        // 0x5885B05C: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B05E: push ebp
        __asm _emit 0x55
        // 0x5885B05F: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B061: pop ebp
        __asm _emit 0x5D
        // 0x5885B062: jmp 0x5885adcb
        __asm _emit 0xE9
        __asm _emit 0x64
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
