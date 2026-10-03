// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897D10B .. +0x18 bytes.
// Source symbol alias: FUN_5897d10b.
extern "C" __declspec(naked) void FUN_5897d10b() {
    __asm {
        // 0x5897D10B: cmp dword ptr [ebp - 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xE0
        __asm _emit 0x00
        // 0x5897D10F: jne 0x5897d122
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5897D111: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5897D114: push dword ptr [ebp - 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5897D117: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5897D11A: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5897D11D: call 0x5897cffd
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897D122: ret
        __asm _emit 0xC3
    }
}
