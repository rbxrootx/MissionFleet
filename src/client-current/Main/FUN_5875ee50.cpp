// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 84 bytes in 1 exact ranges.
// Source symbol alias: FUN_5875ee50.

// Ghidra body range 0x5875EE50..0x5875EEA4; 84 mapped bytes.
extern "C" __declspec(naked) void FUN_5875ee50_segment_00() {
    __asm {
        // 0x5875EE50: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5875EE55: push esi
        __asm _emit 0x56
        // 0x5875EE56: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875EE58: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5875EE5B: mov dword ptr [esi + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EE62: je 0x5875ee6d
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5875EE64: mov dword ptr [esi + 0x78], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EE6B: jmp 0x5875ee74
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5875EE6D: mov dword ptr [esi + 0x78], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875EE74: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875EE76: je 0x5875eea0
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5875EE78: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5875EE7A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5875EE7D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5875EE7F: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875EE85: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5875EE88: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EE8D: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5875EE90: push edx
        __asm _emit 0x52
        // 0x5875EE91: push ecx
        __asm _emit 0x51
        // 0x5875EE92: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5875EE95: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EE9A: push eax
        __asm _emit 0x50
        // 0x5875EE9B: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5875EEA0: pop esi
        __asm _emit 0x5E
        // 0x5875EEA1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
