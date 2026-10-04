// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890BEA0 .. +0x24 bytes.
// Source symbol alias: FUN_5890bea0.
extern "C" __declspec(naked) void FUN_5890bea0() {
    __asm {
        // 0x5890BEA0: push esi
        __asm _emit 0x56
        // 0x5890BEA1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890BEA3: mov dword ptr [esi], 0x589a2b6c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x6C
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890BEA9: call 0x58908050
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BEAE: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5890BEB3: je 0x5890bebe
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5890BEB5: push esi
        __asm _emit 0x56
        // 0x5890BEB6: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x0D
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890BEBB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890BEBE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890BEC0: pop esi
        __asm _emit 0x5E
        // 0x5890BEC1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
