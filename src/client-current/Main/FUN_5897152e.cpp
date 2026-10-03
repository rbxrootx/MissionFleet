// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897152E .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5897152e() {
    __asm {
        // 0x5897152E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58971530: push ebp
        __asm _emit 0x55
        // 0x58971531: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58971533: pop ebp
        __asm _emit 0x5D
        // 0x58971534: jmp 0x5897cc4e
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
