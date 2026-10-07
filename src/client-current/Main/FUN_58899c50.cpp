// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 38 bytes in 1 exact ranges.
// Source symbol alias: FUN_58899c50.

// Ghidra body range 0x58899C50..0x58899C76; 38 mapped bytes.
extern "C" __declspec(naked) void FUN_58899c50_segment_00() {
    __asm {
        // 0x58899C50: push esi
        __asm _emit 0x56
        // 0x58899C51: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58899C55: push edi
        __asm _emit 0x57
        // 0x58899C56: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58899C5A: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58899C5C: je 0x58899c73
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58899C5E: push ebx
        __asm _emit 0x53
        // 0x58899C5F: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58899C63: push ebx
        __asm _emit 0x53
        // 0x58899C64: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58899C66: call 0x58899840
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58899C6B: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x58899C6E: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58899C70: jne 0x58899c63
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58899C72: pop ebx
        __asm _emit 0x5B
        // 0x58899C73: pop edi
        __asm _emit 0x5F
        // 0x58899C74: pop esi
        __asm _emit 0x5E
        // 0x58899C75: ret
        __asm _emit 0xC3
    }
}
