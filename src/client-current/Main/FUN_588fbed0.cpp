// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FBED0 .. +0x1B bytes.
// Source symbol alias: FUN_588fbed0.
extern "C" __declspec(naked) void FUN_588fbed0() {
    __asm {
        // 0x588FBED0: push esi
        __asm _emit 0x56
        // 0x588FBED1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FBED3: call 0x588fb6e0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FBED8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588FBEDD: je 0x588fbee8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588FBEDF: push esi
        __asm _emit 0x56
        // 0x588FBEE0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FBEE5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FBEE8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FBEEA: pop esi
        __asm _emit 0x5E
        // 0x588FBEEB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
