// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589088B0 .. +0x1E bytes.
// Source symbol alias: FUN_589088b0.
extern "C" __declspec(naked) void FUN_589088b0() {
    __asm {
        // 0x589088B0: push esi
        __asm _emit 0x56
        // 0x589088B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589088B3: call 0x58908050
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589088B8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x589088BD: je 0x589088c8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x589088BF: push esi
        __asm _emit 0x56
        // 0x589088C0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589088C5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589088C8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x589088CA: pop esi
        __asm _emit 0x5E
        // 0x589088CB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
