// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A1E4 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_5885a1e4() {
    __asm {
        // 0x5885A1E4: push esi
        __asm _emit 0x56
        // 0x5885A1E5: call 0x58859d16
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A1EA: pop ecx
        __asm _emit 0x59
        // 0x5885A1EB: ret
        __asm _emit 0xC3
    }
}
