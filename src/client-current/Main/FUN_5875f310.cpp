// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875F310 .. +0x6 bytes.
// Source symbol alias: FUN_5875f310.
extern "C" __declspec(naked) void FUN_5875f310() {
    __asm {
        // 0x5875F310: or word ptr [ecx + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5875F315: ret
        __asm _emit 0xC3
    }
}
