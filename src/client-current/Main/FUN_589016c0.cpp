// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589016C0 .. +0x7 bytes.
// Source symbol alias: FUN_589016c0.
extern "C" __declspec(naked) void FUN_589016c0() {
    __asm {
        // 0x589016C0: mov dword ptr [ecx], 0x589a24d4
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0xD4
        __asm _emit 0x24
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589016C6: ret
        __asm _emit 0xC3
    }
}
