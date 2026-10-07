// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 53 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d6d50.

// Ghidra body range 0x588D6D50..0x588D6D85; 53 mapped bytes.
extern "C" __declspec(naked) void FUN_588d6d50_segment_00() {
    __asm {
        // 0x588D6D50: push esi
        __asm _emit 0x56
        // 0x588D6D51: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D6D53: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6D59: push eax
        __asm _emit 0x50
        // 0x588D6D5A: call 0x5876c8b0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x5B
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588D6D5F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D6D62: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D6D64: je 0x588d6d81
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588D6D66: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588D6D6A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D6D6C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D6D6E: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D6D73: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D6D75: push ecx
        __asm _emit 0x51
        // 0x588D6D76: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6D7C: call 0x58751a60
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xAC
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588D6D81: pop esi
        __asm _emit 0x5E
        // 0x588D6D82: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
