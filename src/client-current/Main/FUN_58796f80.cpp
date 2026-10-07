// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 79 bytes in 1 exact ranges.
// Source symbol alias: FUN_58796f80.

// Ghidra body range 0x58796F80..0x58796FCF; 79 mapped bytes.
extern "C" __declspec(naked) void FUN_58796f80_segment_00() {
    __asm {
        // 0x58796F80: push esi
        __asm _emit 0x56
        // 0x58796F81: mov esi, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x58796F84: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58796F86: push edi
        __asm _emit 0x57
        // 0x58796F87: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58796F8B: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58796F8D: mov dword ptr [ecx + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x58
        // 0x58796F90: mov edx, dword ptr [esi + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58796F96: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x58796F99: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58796F9E: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58796FA0: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58796FA3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58796FA5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58796FA8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58796FAA: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x58796FAD: mov esi, dword ptr [esi + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58796FB3: imul esi, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF7
        // 0x58796FB6: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58796FBB: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x58796FBD: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58796FC0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58796FC2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58796FC5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58796FC7: pop edi
        __asm _emit 0x5F
        // 0x58796FC8: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x58796FCB: pop esi
        __asm _emit 0x5E
        // 0x58796FCC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
