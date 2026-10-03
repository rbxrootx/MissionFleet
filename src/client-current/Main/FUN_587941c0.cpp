// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587941C0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_587941c0() {
    __asm {
        // 0x587941C0: push esi
        __asm _emit 0x56
        // 0x587941C1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587941C3: call 0x58794050
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587941C8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587941CD: je 0x587941d8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587941CF: push esi
        __asm _emit 0x56
        // 0x587941D0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x8A
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x587941D5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587941D8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587941DA: pop esi
        __asm _emit 0x5E
        // 0x587941DB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
