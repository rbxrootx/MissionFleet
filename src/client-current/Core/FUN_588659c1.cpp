// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588659C1 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_588659c1() {
    __asm {
        // 0x588659C1: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x588659C4: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x588659C6: call 0x58863c64
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588659CB: pop ecx
        __asm _emit 0x59
        // 0x588659CC: ret
        __asm _emit 0xC3
    }
}
