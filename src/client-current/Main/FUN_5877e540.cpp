// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877E540 .. +0x8 bytes.
// Source symbol alias: FUN_5877e540.
extern "C" __declspec(naked) void FUN_5877e540() {
    __asm {
        // 0x5877E540: mov dword ptr [ecx + 0x6c], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E547: ret
        __asm _emit 0xC3
    }
}
