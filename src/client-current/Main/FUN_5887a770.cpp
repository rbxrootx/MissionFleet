// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 151 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887a770.

// Ghidra body range 0x5887A770..0x5887A807; 151 mapped bytes.
extern "C" __declspec(naked) void FUN_5887a770_segment_00() {
    __asm {
        // 0x5887A770: push esi
        __asm _emit 0x56
        // 0x5887A771: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5887A773: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5887A776: push edi
        __asm _emit 0x57
        // 0x5887A777: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5887A779: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5887A77B: jle 0x5887a804
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A781: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A787: dec eax
        __asm _emit 0x48
        // 0x5887A788: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5887A78B: call 0x58908650
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xDE
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887A790: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x5887A793: cmp dword ptr [esi + 0x7c], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x5887A796: jne 0x5887a7a3
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5887A798: mov ecx, dword ptr [esi + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A79E: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x5887A7A1: jmp 0x5887a7ac
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5887A7A3: mov edx, dword ptr [esi + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A7A9: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5887A7AC: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x5887A7AF: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A7B5: add edx, 0x12
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x12
        // 0x5887A7B8: cmp edx, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A7BE: jge 0x5887a7cb
        __asm _emit 0x7D
        __asm _emit 0x0B
        // 0x5887A7C0: mov ecx, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A7C6: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5887A7C9: jmp 0x5887a7d4
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5887A7CB: mov edx, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A7D1: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5887A7D4: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A7DA: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A7E0: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xD9
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887A7E5: imul eax, eax, 0x15e
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A7EB: cdq
        __asm _emit 0x99
        // 0x5887A7EC: add edi, -0x12
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xEE
        // 0x5887A7EF: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5887A7F1: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5887A7F4: lea edx, [eax + ecx + 0x5a]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x5A
        // 0x5887A7F8: mov ecx, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A7FE: push edx
        __asm _emit 0x52
        // 0x5887A7FF: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x8B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887A804: pop edi
        __asm _emit 0x5F
        // 0x5887A805: pop esi
        __asm _emit 0x5E
        // 0x5887A806: ret
        __asm _emit 0xC3
    }
}
