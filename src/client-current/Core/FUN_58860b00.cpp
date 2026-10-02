// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860B00 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_58860b00() {
    __asm {
        // 0x58860B00: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860B02: push esi
        __asm _emit 0x56
        // 0x58860B03: push edi
        __asm _emit 0x57
        // 0x58860B04: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58860B06: push dword ptr [edi + 8]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x58860B09: call 0x5885a0c8
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x95
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860B0E: pop ecx
        __asm _emit 0x59
        // 0x58860B0F: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58860B12: je 0x58860b28
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58860B14: inc dword ptr [edi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58860B17: movzx edx, byte ptr [edi + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x58860B1B: push eax
        __asm _emit 0x50
        // 0x58860B1C: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58860B1E: je 0x58860b2d
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58860B20: lea ecx, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58860B23: call 0x588613b9
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860B28: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860B2A: pop edi
        __asm _emit 0x5F
        // 0x58860B2B: pop esi
        __asm _emit 0x5E
        // 0x58860B2C: ret
        __asm _emit 0xC3
        // 0x58860B2D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58860B2F: call 0x58860b6c
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860B34: jmp 0x58860b2a
        __asm _emit 0xEB
        __asm _emit 0xF4
    }
}
