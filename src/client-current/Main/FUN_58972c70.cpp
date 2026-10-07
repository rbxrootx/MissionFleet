// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 100 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972c70.

// Ghidra body range 0x58972C70..0x58972CD4; 100 mapped bytes.
extern "C" __declspec(naked) void FUN_58972c70_segment_00() {
    __asm {
        // 0x58972C70: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58972C74: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58972C76: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58972C78: je 0x58972cd1
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x58972C7A: push esi
        __asm _emit 0x56
        // 0x58972C7B: push edi
        __asm _emit 0x57
        // 0x58972C7C: lea esi, [edx + 8]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x58972C7F: lea edi, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58972C82: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972C87: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58972C89: lea esi, [edx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0x30
        // 0x58972C8C: lea edi, [eax + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x30
        // 0x58972C8F: mov ecx, 0x5f
        __asm _emit 0xB9
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972C94: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58972C96: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58972C99: pop edi
        __asm _emit 0x5F
        // 0x58972C9A: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58972C9D: mov ecx, dword ptr [edx + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972CA3: mov dword ptr [eax + 0x1ac], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972CA9: mov ecx, dword ptr [edx + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972CAF: mov dword ptr [eax + 0x1b0], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972CB5: mov ecx, dword ptr [edx + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972CBB: mov dword ptr [eax + 0x1b4], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972CC1: mov ecx, dword ptr [edx + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972CC7: mov dword ptr [eax + 0x1b8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972CCD: mov dword ptr [eax + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x38
        // 0x58972CD0: pop esi
        __asm _emit 0x5E
        // 0x58972CD1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
