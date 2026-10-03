// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588889D0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588889d0() {
    __asm {
        // 0x588889D0: push esi
        __asm _emit 0x56
        // 0x588889D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588889D3: call 0x58888480
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588889D8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588889DD: je 0x588889e8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588889DF: push esi
        __asm _emit 0x56
        // 0x588889E0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588889E5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588889E8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588889EA: pop esi
        __asm _emit 0x5E
        // 0x588889EB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
