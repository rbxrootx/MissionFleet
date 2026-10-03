// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888A9A0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_5888a9a0() {
    __asm {
        // 0x5888A9A0: push esi
        __asm _emit 0x56
        // 0x5888A9A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888A9A3: call 0x5888a840
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888A9A8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5888A9AD: je 0x5888a9b8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5888A9AF: push esi
        __asm _emit 0x56
        // 0x5888A9B0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x22
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888A9B5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888A9B8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5888A9BA: pop esi
        __asm _emit 0x5E
        // 0x5888A9BB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
