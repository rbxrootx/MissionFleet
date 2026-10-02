// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A371 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_5885a371() {
    __asm {
        // 0x5885A371: push edi
        __asm _emit 0x57
        // 0x5885A372: call 0x58859d16
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A377: pop ecx
        __asm _emit 0x59
        // 0x5885A378: ret
        __asm _emit 0xC3
    }
}
