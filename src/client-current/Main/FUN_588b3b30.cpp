// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588B3B30 .. +0x22 bytes.
// Source symbol alias: FUN_588b3b30.
extern "C" __declspec(naked) void FUN_588b3b30() {
    __asm {
        // 0x588B3B30: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588B3B34: mov dword ptr [ecx + 0x128], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3B3A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B3B3C: je 0x588b3b46
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588B3B3E: or word ptr [ecx + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588B3B43: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B3B46: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3B4B: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B3B4F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
