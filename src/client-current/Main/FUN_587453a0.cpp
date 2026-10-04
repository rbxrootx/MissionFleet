// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587453A0 .. +0x4 bytes.
// Source symbol alias: FUN_587453a0.
// Caller evidence: 0x5896CF50, 0x5896E150, and 0x5896F3E0; each checks the result for null.
// Mechanically this returns the DWORD at receiver +0x04; field semantics are unknown.
// See docs/current-main-field-getter-0004.md.
extern "C" __declspec(naked) void FUN_587453a0() {
    __asm {
        // 0x587453A0: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587453A3: ret
        __asm _emit 0xC3
    }
}
