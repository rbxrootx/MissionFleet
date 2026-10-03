// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58797680 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58797680() {
    __asm {
        // 0x58797680: push esi
        __asm _emit 0x56
        // 0x58797681: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58797683: call 0x58797100
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58797688: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5879768D: je 0x58797698
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5879768F: push esi
        __asm _emit 0x56
        // 0x58797690: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x55
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58797695: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58797698: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5879769A: pop esi
        __asm _emit 0x5E
    }
}
