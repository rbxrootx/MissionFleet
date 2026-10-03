// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907180 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_58907180() {
    __asm {
        // 0x58907180: push esi
        __asm _emit 0x56
        // 0x58907181: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58907183: call 0x58906ea0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58907188: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5890718D: je 0x58907198
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5890718F: push esi
        __asm _emit 0x56
        // 0x58907190: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58907195: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58907198: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890719A: pop esi
        __asm _emit 0x5E
        // 0x5890719B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
