// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 141 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772dc0.

// Ghidra body range 0x58772DC0..0x58772E4D; 141 mapped bytes.
extern "C" __declspec(naked) void FUN_58772dc0_segment_00() {
    __asm {
        // 0x58772DC0: push ebx
        __asm _emit 0x53
        // 0x58772DC1: push esi
        __asm _emit 0x56
        // 0x58772DC2: push edi
        __asm _emit 0x57
        // 0x58772DC3: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772DC7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58772DC9: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772DCF: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58772DD1: je 0x58772de1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58772DD3: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772DD7: cmp dword ptr [esi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58772DDA: ja 0x58772de1
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x58772DDC: cmp eax, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58772DDF: jbe 0x58772dea
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58772DE1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772DE6: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772DEA: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58772DEE: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58772DF0: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x58772DF2: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58772DF5: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58772DF8: ja 0x58772dff
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x58772DFA: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58772DFD: jbe 0x58772e08
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58772DFF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772E04: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58772E08: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58772E0A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58772E0C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58772E0E: je 0x58772e14
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58772E10: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58772E12: je 0x58772e19
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58772E14: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772E19: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58772E1C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58772E1E: je 0x58772e45
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58772E20: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58772E23: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58772E28: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772E2C: push edx
        __asm _emit 0x52
        // 0x58772E2D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772E31: push edx
        __asm _emit 0x52
        // 0x58772E32: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772E36: push edx
        __asm _emit 0x52
        // 0x58772E37: push ecx
        __asm _emit 0x51
        // 0x58772E38: push eax
        __asm _emit 0x50
        // 0x58772E39: push ebx
        __asm _emit 0x53
        // 0x58772E3A: call 0x58772580
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772E3F: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58772E42: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58772E45: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58772E47: pop edi
        __asm _emit 0x5F
        // 0x58772E48: pop esi
        __asm _emit 0x5E
        // 0x58772E49: pop ebx
        __asm _emit 0x5B
        // 0x58772E4A: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
