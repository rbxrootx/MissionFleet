// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 78 bytes in 1 exact ranges.
// Source symbol alias: FUN_58779890.

// Ghidra body range 0x58779890..0x587798DE; 78 mapped bytes.
extern "C" __declspec(naked) void FUN_58779890_segment_00() {
    __asm {
        // 0x58779890: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779896: push ebx
        __asm _emit 0x53
        // 0x58779897: push esi
        __asm _emit 0x56
        // 0x58779898: mov esi, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877989E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587798A0: push edi
        __asm _emit 0x57
        // 0x587798A1: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587798A3: jle 0x587798c8
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x587798A5: mov di, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587798AA: mov bx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587798AF: lea ecx, [esi + 6]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x06
        // 0x587798B2: cmp bx, word ptr [ecx - 2]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x59
        __asm _emit 0xFE
        // 0x587798B6: jne 0x587798bd
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587798B8: cmp di, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x39
        // 0x587798BB: je 0x587798d0
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587798BD: inc eax
        __asm _emit 0x40
        // 0x587798BE: add ecx, 0x574
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587798C4: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587798C6: jl 0x587798b2
        __asm _emit 0x7C
        __asm _emit 0xEA
        // 0x587798C8: pop edi
        __asm _emit 0x5F
        // 0x587798C9: pop esi
        __asm _emit 0x5E
        // 0x587798CA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587798CC: pop ebx
        __asm _emit 0x5B
        // 0x587798CD: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587798D0: imul eax, eax, 0x574
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587798D6: pop edi
        __asm _emit 0x5F
        // 0x587798D7: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587798D9: pop esi
        __asm _emit 0x5E
        // 0x587798DA: pop ebx
        __asm _emit 0x5B
        // 0x587798DB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
