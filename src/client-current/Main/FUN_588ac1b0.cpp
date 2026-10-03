// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AC1B0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588ac1b0() {
    __asm {
        // 0x588AC1B0: push esi
        __asm _emit 0x56
        // 0x588AC1B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588AC1B3: call 0x588ac110
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AC1B8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588AC1BD: je 0x588ac1c8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588AC1BF: push esi
        __asm _emit 0x56
        // 0x588AC1C0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x0A
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AC1C5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AC1C8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588AC1CA: pop esi
        __asm _emit 0x5E
        // 0x588AC1CB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
