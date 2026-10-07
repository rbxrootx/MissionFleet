// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 141 bytes in 1 exact ranges.
// Source symbol alias: FUN_58880d00.

// Ghidra body range 0x58880D00..0x58880D8D; 141 mapped bytes.
extern "C" __declspec(naked) void FUN_58880d00_segment_00() {
    __asm {
        // 0x58880D00: push ebx
        __asm _emit 0x53
        // 0x58880D01: push esi
        __asm _emit 0x56
        // 0x58880D02: push edi
        __asm _emit 0x57
        // 0x58880D03: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58880D07: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58880D09: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880D0F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58880D11: je 0x58880d21
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58880D13: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58880D17: cmp dword ptr [esi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58880D1A: ja 0x58880d21
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x58880D1C: cmp eax, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58880D1F: jbe 0x58880d2a
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58880D21: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58880D26: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58880D2A: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58880D2E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58880D30: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x58880D32: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58880D35: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58880D38: ja 0x58880d3f
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x58880D3A: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58880D3D: jbe 0x58880d48
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58880D3F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58880D44: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58880D48: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58880D4A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58880D4C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58880D4E: je 0x58880d54
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58880D50: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58880D52: je 0x58880d59
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58880D54: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58880D59: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58880D5C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58880D5E: je 0x58880d85
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58880D60: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58880D63: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58880D68: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58880D6C: push edx
        __asm _emit 0x52
        // 0x58880D6D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58880D71: push edx
        __asm _emit 0x52
        // 0x58880D72: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58880D76: push edx
        __asm _emit 0x52
        // 0x58880D77: push ecx
        __asm _emit 0x51
        // 0x58880D78: push eax
        __asm _emit 0x50
        // 0x58880D79: push ebx
        __asm _emit 0x53
        // 0x58880D7A: call 0x5887b3f0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xA6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58880D7F: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58880D82: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58880D85: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58880D87: pop edi
        __asm _emit 0x5F
        // 0x58880D88: pop esi
        __asm _emit 0x5E
        // 0x58880D89: pop ebx
        __asm _emit 0x5B
        // 0x58880D8A: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
