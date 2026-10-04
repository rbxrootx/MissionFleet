// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876BFA0 .. +0x65 bytes.
// Source symbol alias: FUN_5876bfa0.
extern "C" __declspec(naked) void FUN_5876bfa0() {
    __asm {
        // 0x5876BFA0: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876BFA4: push ebx
        __asm _emit 0x53
        // 0x5876BFA5: mov ebx, dword ptr [eax*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5876BFAC: push ebp
        __asm _emit 0x55
        // 0x5876BFAD: push esi
        __asm _emit 0x56
        // 0x5876BFAE: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876BFB2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5876BFB4: push edi
        __asm _emit 0x57
        // 0x5876BFB5: mov edi, dword ptr [eax*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5876BFBC: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5876BFBF: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x5876BFC2: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x5876BFC5: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876BFC9: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5876BFCB: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876BFD0: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876BFD2: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876BFD5: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5876BFD7: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5876BFDA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5876BFDC: mov dword ptr [ebp], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5876BFDF: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5876BFE2: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5876BFE4: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x5876BFE7: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x5876BFEA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5876BFEC: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876BFF1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876BFF3: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876BFF6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876BFF8: pop edi
        __asm _emit 0x5F
        // 0x5876BFF9: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876BFFC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876BFFE: pop esi
        __asm _emit 0x5E
        // 0x5876BFFF: mov dword ptr [ebp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x5876C002: pop ebp
        __asm _emit 0x5D
        // 0x5876C003: pop ebx
        __asm _emit 0x5B
        // 0x5876C004: ret
        __asm _emit 0xC3
    }
}
