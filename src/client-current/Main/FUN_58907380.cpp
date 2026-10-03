// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907380 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58907380() {
    __asm {
        // 0x58907380: mov eax, dword ptr [ecx + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907386: push eax
        __asm _emit 0x50
        // 0x58907387: call 0x589072a0
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890738C: ret
        __asm _emit 0xC3
    }
}
