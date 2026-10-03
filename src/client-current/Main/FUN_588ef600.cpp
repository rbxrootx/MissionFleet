// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EF600 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588ef600() {
    __asm {
        // 0x588EF600: push esi
        __asm _emit 0x56
        // 0x588EF601: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EF603: call 0x588ef260
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EF608: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588EF60D: je 0x588ef618
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588EF60F: push esi
        __asm _emit 0x56
        // 0x588EF610: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xD6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588EF615: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF618: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588EF61A: pop esi
        __asm _emit 0x5E
        // 0x588EF61B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
