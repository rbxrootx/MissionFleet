// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588497E0 .. +0x1E bytes.
// Source symbol alias: FUN_588497e0.
extern "C" __declspec(naked) void FUN_588497e0() {
    __asm {
        // 0x588497E0: push esi
        __asm _emit 0x56
        // 0x588497E1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588497E3: call 0x58849540
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588497E8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588497ED: je 0x588497f8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588497EF: push esi
        __asm _emit 0x56
        // 0x588497F0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x588497F5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588497F8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588497FA: pop esi
        __asm _emit 0x5E
        // 0x588497FB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
