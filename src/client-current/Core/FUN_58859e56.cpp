// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859E56 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_58859e56() {
    __asm {
        // 0x58859E56: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58859E59: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58859E5B: call 0x58863c64
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E60: pop ecx
        __asm _emit 0x59
        // 0x58859E61: ret
        __asm _emit 0xC3
    }
}
