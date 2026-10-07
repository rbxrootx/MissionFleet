// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 91 bytes in 1 exact ranges.
// Source symbol alias: FUN_587780d0.

// Ghidra body range 0x587780D0..0x5877812B; 91 mapped bytes.
extern "C" __declspec(naked) void FUN_587780d0_segment_00() {
    __asm {
        // 0x587780D0: push esi
        __asm _emit 0x56
        // 0x587780D1: push edi
        __asm _emit 0x57
        // 0x587780D2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587780D6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587780D8: mov dword ptr [esi + 0x98], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587780DE: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587780E4: push edi
        __asm _emit 0x57
        // 0x587780E5: call 0x587af8f0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587780EA: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587780EF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587780F1: call 0x58777f30
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587780F6: mov eax, dword ptr [edi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587780FC: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778102: mov ecx, dword ptr [edi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778108: mov dword ptr [esi + 0xa8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877810E: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778114: mov dword ptr [esi + 0x9c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877811A: mov eax, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778120: pop edi
        __asm _emit 0x5F
        // 0x58778121: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778127: pop esi
        __asm _emit 0x5E
        // 0x58778128: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
