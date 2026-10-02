// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58876286 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58876286() {
    __asm {
        // 0x58876286: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58876288: call 0x58863c64
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xD9
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5887628D: pop ecx
        __asm _emit 0x59
        // 0x5887628E: ret
        __asm _emit 0xC3
    }
}
