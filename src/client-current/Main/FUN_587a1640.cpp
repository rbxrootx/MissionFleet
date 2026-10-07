// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A1640 .. +0x26 bytes.
// Source symbol alias: FUN_587a1640.
extern "C" __declspec(naked) void FUN_587a1640() {
    __asm {
        // 0x587A1640: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A1644: push eax
        __asm _emit 0x50
        // 0x587A1645: call 0x587a1550
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A164A: cmp dword ptr [esp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A164E: je 0x587a1663
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587A1650: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1656: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587A165B: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A165D: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A1663: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
