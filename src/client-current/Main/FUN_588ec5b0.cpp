// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EC5B0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588ec5b0() {
    __asm {
        // 0x588EC5B0: push esi
        __asm _emit 0x56
        // 0x588EC5B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EC5B3: call 0x588ec200
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EC5B8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588EC5BD: je 0x588ec5c8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588EC5BF: push esi
        __asm _emit 0x56
        // 0x588EC5C0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EC5C5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EC5C8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588EC5CA: pop esi
        __asm _emit 0x5E
        // 0x588EC5CB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
