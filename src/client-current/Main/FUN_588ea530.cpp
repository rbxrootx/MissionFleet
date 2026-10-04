// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EA530 .. +0x1B bytes.
// Source symbol alias: FUN_588ea530.
extern "C" __declspec(naked) void FUN_588ea530() {
    __asm {
        // 0x588EA530: push esi
        __asm _emit 0x56
        // 0x588EA531: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EA533: call 0x588ea420
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EA538: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588EA53D: je 0x588ea548
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588EA53F: push esi
        __asm _emit 0x56
        // 0x588EA540: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA545: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EA548: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588EA54A: pop esi
        __asm _emit 0x5E
    }
}
