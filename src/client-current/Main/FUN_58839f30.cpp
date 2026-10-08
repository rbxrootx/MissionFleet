// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 101 bytes in 1 exact ranges.
// Source symbol alias: FUN_58839f30.

// Ghidra body range 0x58839F30..0x58839F95; 101 mapped bytes.
extern "C" __declspec(naked) void FUN_58839f30_segment_00() {
    __asm {
        // 0x58839F30: push esi
        __asm _emit 0x56
        // 0x58839F31: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58839F33: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F39: push edi
        __asm _emit 0x57
        // 0x58839F3A: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xE2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839F3F: cmp dword ptr [esp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839F44: je 0x58839f55
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58839F46: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839F48: jle 0x58839f90
        __asm _emit 0x7E
        __asm _emit 0x46
        // 0x58839F4A: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F50: lea edi, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0xFF
        // 0x58839F53: jmp 0x58839f6b
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58839F55: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F5B: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F61: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x58839F64: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58839F66: jge 0x58839f90
        __asm _emit 0x7D
        __asm _emit 0x28
        // 0x58839F68: lea edi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x58839F6B: push edi
        __asm _emit 0x57
        // 0x58839F6C: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xE2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839F71: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F77: push edi
        __asm _emit 0x57
        // 0x58839F78: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xE2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839F7D: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839F83: push edi
        __asm _emit 0x57
        // 0x58839F84: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xE2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839F89: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58839F8B: call 0x58839730
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58839F90: pop edi
        __asm _emit 0x5F
        // 0x58839F91: pop esi
        __asm _emit 0x5E
        // 0x58839F92: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
