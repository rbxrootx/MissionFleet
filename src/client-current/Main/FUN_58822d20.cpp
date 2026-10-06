// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58822D20 .. +0x1E bytes.
// Source symbol alias: FUN_58822d20.
extern "C" __declspec(naked) void FUN_58822d20() {
    __asm {
        // 0x58822D20: push esi
        __asm _emit 0x56
        // 0x58822D21: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58822D23: call 0x58822b00
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58822D28: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x58822D2D: je 0x58822d38
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58822D2F: push esi
        __asm _emit 0x56
        // 0x58822D30: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x9F
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58822D35: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58822D38: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58822D3A: pop esi
        __asm _emit 0x5E
        // 0x58822D3B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
