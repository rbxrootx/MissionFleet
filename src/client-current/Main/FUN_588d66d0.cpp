// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D66D0 .. +0x7 bytes.
// Source symbol alias: FUN_588d66d0.
// Caller evidence: 0x587EFD60, 0x587FAEC0 (two sites), and 0x587FD890.
// Mechanically this returns the DWORD at receiver +0x6088; field semantics are unknown.
// See docs/current-main-field-getter-6088.md.
extern "C" __declspec(naked) void FUN_588d66d0() {
    __asm {
        // 0x588D66D0: mov eax, dword ptr [ecx + 0x6088]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D66D6: ret
        __asm _emit 0xC3
    }
}
