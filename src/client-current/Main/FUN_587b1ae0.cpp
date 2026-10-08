// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 143 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b1ae0.

// Ghidra body range 0x587B1AE0..0x587B1B6F; 143 mapped bytes.
extern "C" __declspec(naked) void FUN_587b1ae0_segment_00() {
    __asm {
        // 0x587B1AE0: push esi
        __asm _emit 0x56
        // 0x587B1AE1: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B1AE5: mov ecx, dword ptr [esi*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB5
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B1AEC: push edi
        __asm _emit 0x57
        // 0x587B1AED: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B1AF1: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587B1AF4: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B1AF9: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B1AFB: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B1AFF: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587B1B02: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1B04: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1B07: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1B09: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587B1B0C: mov edx, dword ptr [esi*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB5
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B1B13: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587B1B16: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B1B1A: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B1B1F: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1B21: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B1B24: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1B26: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1B29: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1B2B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587B1B2E: mov edx, dword ptr [esi*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB5
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B1B35: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587B1B38: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B1B3D: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1B3F: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587B1B42: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1B44: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1B47: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1B49: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x587B1B4B: mov edx, dword ptr [esi*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB5
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B1B52: imul edx, dword ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587B1B56: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B1B5B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1B5D: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587B1B60: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1B62: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1B65: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1B67: pop edi
        __asm _emit 0x5F
        // 0x587B1B68: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587B1B6B: pop esi
        __asm _emit 0x5E
        // 0x587B1B6C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
