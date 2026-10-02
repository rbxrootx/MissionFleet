// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860A06 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58860a06() {
    __asm {
        // 0x58860A06: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860A08: push esi
        __asm _emit 0x56
        // 0x58860A09: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58860A0B: call 0x58860d42
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860A10: lea ecx, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58860A13: call 0x5886074d
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860A18: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58860A1B: je 0x58860a2e
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58860A1D: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58860A20: je 0x58860a26
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58860A22: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860A24: pop esi
        __asm _emit 0x5E
        // 0x58860A25: ret
        __asm _emit 0xC3
        // 0x58860A26: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860A28: pop esi
        __asm _emit 0x5E
        // 0x58860A29: jmp 0x5885d2a8
        __asm _emit 0xE9
        __asm _emit 0x7A
        __asm _emit 0xC8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860A2E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860A30: pop esi
        __asm _emit 0x5E
        // 0x58860A31: jmp 0x5885d1d4
        __asm _emit 0xE9
        __asm _emit 0x9E
        __asm _emit 0xC7
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
