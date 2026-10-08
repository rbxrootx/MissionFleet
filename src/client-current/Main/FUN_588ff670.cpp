// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 50 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff670.

// Ghidra body range 0x588FF670..0x588FF6A2; 50 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff670_segment_00() {
    __asm {
        // 0x588FF670: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FF674: push esi
        __asm _emit 0x56
        // 0x588FF675: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF677: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FF67B: push eax
        __asm _emit 0x50
        // 0x588FF67C: push ecx
        __asm _emit 0x51
        // 0x588FF67D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF67F: call 0x588ff0f0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF684: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF686: je 0x588ff69e
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588FF688: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FF68C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FF690: push edx
        __asm _emit 0x52
        // 0x588FF691: push ecx
        __asm _emit 0x51
        // 0x588FF692: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF698: push eax
        __asm _emit 0x50
        // 0x588FF699: call 0x588fa7f0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xB1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF69E: pop esi
        __asm _emit 0x5E
        // 0x588FF69F: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
