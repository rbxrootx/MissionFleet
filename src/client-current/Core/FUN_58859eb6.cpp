// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859EB6 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_58859eb6() {
    __asm {
        // 0x58859EB6: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58859EB9: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58859EBB: call 0x58859d16
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859EC0: pop ecx
        __asm _emit 0x59
        // 0x58859EC1: ret
        __asm _emit 0xC3
    }
}
