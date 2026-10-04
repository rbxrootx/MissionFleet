// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EA100 .. +0x24 bytes.
// Source symbol alias: FUN_588ea100.
extern "C" __declspec(naked) void FUN_588ea100() {
    __asm {
        // 0x588EA100: push esi
        __asm _emit 0x56
        // 0x588EA101: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EA103: mov dword ptr [esi], 0x589a1424
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EA109: call 0x58908050
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xDF
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EA10E: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588EA113: je 0x588ea11e
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588EA115: push esi
        __asm _emit 0x56
        // 0x588EA116: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x2B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA11B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EA11E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588EA120: pop esi
        __asm _emit 0x5E
        // 0x588EA121: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
