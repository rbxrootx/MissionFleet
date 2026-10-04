// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58759EB0 .. +0x11 bytes.
// Source symbol alias: FUN_58759eb0.
// Caller evidence: 6 sites in 0x58840890, 2 in 0x588450B0, 12 in 0x58890110.
// Mechanically this is a null-safe nested-pointer getter: receiver +0x84, then +4.
// Receiver/object semantics are unknown; see docs/current-main-null-safe-pointer-getter.md.
extern "C" __declspec(naked) void FUN_58759eb0() {
    __asm {
        // 0x58759EB0: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759EB6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58759EB8: je 0x58759ebe
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58759EBA: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58759EBD: ret
        __asm _emit 0xC3
        // 0x58759EBE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58759EC0: ret
        __asm _emit 0xC3
    }
}
