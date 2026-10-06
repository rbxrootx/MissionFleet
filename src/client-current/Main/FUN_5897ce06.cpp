// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CE06 .. +0x9 bytes.
// Source symbol alias: FUN_5897ce06.
extern "C" __declspec(naked) void FUN_5897ce06() {
    __asm {
        // 0x5897CE06: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5897CE08: call 0x5897d7a8
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897CE0D: pop ecx
        __asm _emit 0x59
        // 0x5897CE0E: ret
        __asm _emit 0xC3
    }
}
