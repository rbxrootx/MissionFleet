// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 141 bytes in 1 exact ranges.
// Source symbol alias: FUN_58745eb0.

// Ghidra body range 0x58745EB0..0x58745F3D; 141 mapped bytes.
extern "C" __declspec(naked) void FUN_58745eb0_segment_00() {
    __asm {
        // 0x58745EB0: push ebx
        __asm _emit 0x53
        // 0x58745EB1: push esi
        __asm _emit 0x56
        // 0x58745EB2: push edi
        __asm _emit 0x57
        // 0x58745EB3: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58745EB7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58745EB9: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745EBF: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58745EC1: je 0x58745ed1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58745EC3: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58745EC7: cmp dword ptr [esi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58745ECA: ja 0x58745ed1
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x58745ECC: cmp eax, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58745ECF: jbe 0x58745eda
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58745ED1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x6D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745ED6: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58745EDA: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745EDE: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58745EE0: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x58745EE2: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58745EE5: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58745EE8: ja 0x58745eef
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x58745EEA: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58745EED: jbe 0x58745ef8
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58745EEF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x6D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745EF4: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745EF8: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58745EFA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58745EFC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58745EFE: je 0x58745f04
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58745F00: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58745F02: je 0x58745f09
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58745F04: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x6D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745F09: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58745F0C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58745F0E: je 0x58745f35
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58745F10: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58745F13: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58745F18: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58745F1C: push edx
        __asm _emit 0x52
        // 0x58745F1D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58745F21: push edx
        __asm _emit 0x52
        // 0x58745F22: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58745F26: push edx
        __asm _emit 0x52
        // 0x58745F27: push ecx
        __asm _emit 0x51
        // 0x58745F28: push eax
        __asm _emit 0x50
        // 0x58745F29: push ebx
        __asm _emit 0x53
        // 0x58745F2A: call 0x587457f0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745F2F: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58745F32: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58745F35: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58745F37: pop edi
        __asm _emit 0x5F
        // 0x58745F38: pop esi
        __asm _emit 0x5E
        // 0x58745F39: pop ebx
        __asm _emit 0x5B
        // 0x58745F3A: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
