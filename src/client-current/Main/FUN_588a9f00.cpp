// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A9F00 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588a9f00() {
    __asm {
        // 0x588A9F00: push esi
        __asm _emit 0x56
        // 0x588A9F01: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A9F03: call 0x588a9da0
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A9F08: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588A9F0D: je 0x588a9f18
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588A9F0F: push esi
        __asm _emit 0x56
        // 0x588A9F10: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x2D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A9F15: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A9F18: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588A9F1A: pop esi
        __asm _emit 0x5E
        // 0x588A9F1B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
