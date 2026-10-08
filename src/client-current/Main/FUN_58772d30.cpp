// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 141 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772d30.

// Ghidra body range 0x58772D30..0x58772DBD; 141 mapped bytes.
extern "C" __declspec(naked) void FUN_58772d30_segment_00() {
    __asm {
        // 0x58772D30: push ebx
        __asm _emit 0x53
        // 0x58772D31: push esi
        __asm _emit 0x56
        // 0x58772D32: push edi
        __asm _emit 0x57
        // 0x58772D33: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772D37: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58772D39: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772D3F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58772D41: je 0x58772d51
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58772D43: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772D47: cmp dword ptr [esi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58772D4A: ja 0x58772d51
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x58772D4C: cmp eax, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58772D4F: jbe 0x58772d5a
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58772D51: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x9F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772D56: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772D5A: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58772D5E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58772D60: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x58772D62: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58772D65: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58772D68: ja 0x58772d6f
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x58772D6A: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58772D6D: jbe 0x58772d78
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58772D6F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772D74: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58772D78: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58772D7A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58772D7C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58772D7E: je 0x58772d84
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58772D80: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58772D82: je 0x58772d89
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58772D84: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772D89: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58772D8C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58772D8E: je 0x58772db5
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58772D90: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58772D93: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58772D98: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772D9C: push edx
        __asm _emit 0x52
        // 0x58772D9D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772DA1: push edx
        __asm _emit 0x52
        // 0x58772DA2: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772DA6: push edx
        __asm _emit 0x52
        // 0x58772DA7: push ecx
        __asm _emit 0x51
        // 0x58772DA8: push eax
        __asm _emit 0x50
        // 0x58772DA9: push ebx
        __asm _emit 0x53
        // 0x58772DAA: call 0x58772530
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772DAF: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58772DB2: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58772DB5: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58772DB7: pop edi
        __asm _emit 0x5F
        // 0x58772DB8: pop esi
        __asm _emit 0x5E
        // 0x58772DB9: pop ebx
        __asm _emit 0x5B
        // 0x58772DBA: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
