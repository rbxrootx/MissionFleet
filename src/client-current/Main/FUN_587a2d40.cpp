// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A2D40 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_587a2d40() {
    __asm {
        // 0x587A2D40: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A2D44: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A2D46: jne 0x587a2d4d
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587A2D48: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A2D4A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A2D4D: cmp byte ptr [eax], 0x2f
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x2F
        // 0x587A2D50: je 0x587a2d48
        __asm _emit 0x74
        __asm _emit 0xF6
        // 0x587A2D52: push eax
        __asm _emit 0x50
        // 0x587A2D53: call dword ptr [0x5898c03c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x3C
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A2D59: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A2D5C: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
