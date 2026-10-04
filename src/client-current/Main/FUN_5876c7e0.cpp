// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x5876C7E0 .. +0xCA bytes.
// Source symbol alias: FUN_5876c7e0.
extern "C" __declspec(naked) void FUN_5876c7e0() {
    __asm {
        // 0x5876C7E0: push ecx
        __asm _emit 0x51
        // 0x5876C7E1: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876C7E5: push ebx
        __asm _emit 0x53
        // 0x5876C7E6: push ebp
        __asm _emit 0x55
        // 0x5876C7E7: cdq
        __asm _emit 0x99
        // 0x5876C7E8: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5876C7EA: push esi
        __asm _emit 0x56
        // 0x5876C7EB: push edi
        __asm _emit 0x57
        // 0x5876C7EC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5876C7EE: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876C7F2: cdq
        __asm _emit 0x99
        // 0x5876C7F3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5876C7F5: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5876C7F7: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x5876C7F9: sar ebp, 1
        __asm _emit 0xD1
        __asm _emit 0xFD
        // 0x5876C7FB: mov ebx, 0x58a0b4d8
        __asm _emit 0xBB
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5876C800: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876C804: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876C808: jmp 0x5876c810
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5876C80A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C810: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5876C812: mov esi, dword ptr [ebx + 0x3840]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x40
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C818: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x5876C81B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5876C81D: imul esi, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF5
        // 0x5876C820: mov eax, 0xef9db22d
        __asm _emit 0xB8
        __asm _emit 0x2D
        __asm _emit 0xB2
        __asm _emit 0x9D
        __asm _emit 0xEF
        // 0x5876C825: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876C827: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C82A: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5876C82C: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5876C82F: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5876C831: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C836: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x5876C838: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C83B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C83D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C840: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C842: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C844: lea esi, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x39
        // 0x5876C847: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5876C849: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x5876C84B: jge 0x5876c891
        __asm _emit 0x7D
        __asm _emit 0x44
        // 0x5876C84D: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C852: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876C854: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C858: jmp 0x5876c864
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x5876C85A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C860: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C864: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5876C866: jl 0x5876c88c
        __asm _emit 0x7C
        __asm _emit 0x24
        // 0x5876C868: lea ecx, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x5876C86B: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5876C86D: jg 0x5876c88c
        __asm _emit 0x7F
        __asm _emit 0x1D
        // 0x5876C86F: mov bl, byte ptr [esp + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C873: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C877: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5876C879: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5876C87B: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x5876C87E: lea ecx, [esi + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x4E
        // 0x5876C881: mov byte ptr [ecx + ebp], bl
        __asm _emit 0x88
        __asm _emit 0x1C
        __asm _emit 0x29
        // 0x5876C884: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876C888: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876C88C: inc esi
        __asm _emit 0x46
        // 0x5876C88D: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x5876C88F: jl 0x5876c860
        __asm _emit 0x7C
        __asm _emit 0xCF
        // 0x5876C891: add ebx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x28
        // 0x5876C894: cmp ebx, 0x58a0d0f8
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xF8
        __asm _emit 0xD0
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5876C89A: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876C89E: jl 0x5876c810
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876C8A4: pop edi
        __asm _emit 0x5F
        // 0x5876C8A5: pop esi
        __asm _emit 0x5E
        // 0x5876C8A6: pop ebp
        __asm _emit 0x5D
        // 0x5876C8A7: pop ebx
        __asm _emit 0x5B
        // 0x5876C8A8: pop ecx
        __asm _emit 0x59
        // 0x5876C8A9: ret
        __asm _emit 0xC3
    }
}
