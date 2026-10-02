// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860B36 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_58860b36() {
    __asm {
        // 0x58860B36: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860B38: push esi
        __asm _emit 0x56
        // 0x58860B39: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58860B3B: push edi
        __asm _emit 0x57
        // 0x58860B3C: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58860B3F: call 0x58860697
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860B44: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58860B46: cmp edx, -1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58860B49: jne 0x58860b4f
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58860B4B: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860B4D: jmp 0x58860b69
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58860B4F: movzx eax, byte ptr [esi + 0x2c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x58860B53: push edx
        __asm _emit 0x52
        // 0x58860B54: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58860B56: je 0x58860b62
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58860B58: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58860B5B: call 0x588613d7
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860B60: jmp 0x58860b4b
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58860B62: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860B64: call 0x58860bc3
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860B69: pop edi
        __asm _emit 0x5F
        // 0x58860B6A: pop esi
        __asm _emit 0x5E
        // 0x58860B6B: ret
        __asm _emit 0xC3
    }
}
