// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 229 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_587a8d10.

// Ghidra body range 0x587A8D10..0x587A8D96; 134 mapped bytes.
extern "C" __declspec(naked) void FUN_587a8d10_segment_00() {
    __asm {
        // 0x587A8D10: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587A8D13: push ebx
        __asm _emit 0x53
        // 0x587A8D14: mov ebx, dword ptr [ecx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x34
        // 0x587A8D17: push ebp
        __asm _emit 0x55
        // 0x587A8D18: push esi
        __asm _emit 0x56
        // 0x587A8D19: push edi
        __asm _emit 0x57
        // 0x587A8D1A: lea edi, [ecx + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x28
        // 0x587A8D1D: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A8D21: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x587A8D24: jbe 0x587a8d2b
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8D26: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8D2B: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x587A8D2D: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x587A8D2F: nop
        __asm _emit 0x90
        // 0x587A8D30: mov ebx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x587A8D33: cmp dword ptr [edi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587A8D36: jbe 0x587a8d3d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8D38: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8D3D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A8D3F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A8D41: je 0x587a8d47
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A8D43: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587A8D45: je 0x587a8d4c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A8D47: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8D4C: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587A8D4E: je 0x587a8dc2
        __asm _emit 0x74
        __asm _emit 0x72
        // 0x587A8D50: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A8D52: jne 0x587a8db6
        __asm _emit 0x75
        __asm _emit 0x62
        // 0x587A8D54: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8D59: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8D5B: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587A8D5E: jb 0x587a8d65
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8D60: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8D65: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A8D68: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A8D6C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A8D6E: push eax
        __asm _emit 0x50
        // 0x587A8D6F: call 0x587a8690
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8D74: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A8D76: je 0x587a8d99
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587A8D78: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A8D7A: jne 0x587a8dba
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x587A8D7C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x3E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8D81: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8D83: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587A8D86: jb 0x587a8d8d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8D88: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x3E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8D8D: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587A8D90: push ecx
        __asm _emit 0x51
        // 0x587A8D91: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x3E
        __asm _emit 0x1D
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587A8D99..0x587A8DF8; 95 mapped bytes.
extern "C" __declspec(naked) void FUN_587a8d10_segment_01() {
    __asm {
        // 0x587A8D99: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A8D9B: jne 0x587a8dbe
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587A8D9D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x3E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8DA2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8DA4: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587A8DA7: jb 0x587a8dae
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8DA9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x3E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8DAE: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587A8DB1: jmp 0x587a8d30
        __asm _emit 0xE9
        __asm _emit 0x7A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8DB6: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A8DB8: jmp 0x587a8d5b
        __asm _emit 0xEB
        __asm _emit 0xA1
        // 0x587A8DBA: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A8DBC: jmp 0x587a8d83
        __asm _emit 0xEB
        __asm _emit 0xC5
        // 0x587A8DBE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A8DC0: jmp 0x587a8da4
        __asm _emit 0xEB
        __asm _emit 0xE2
        // 0x587A8DC2: mov ebp, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x10
        // 0x587A8DC5: cmp dword ptr [edi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6F
        __asm _emit 0x0C
        // 0x587A8DC8: jbe 0x587a8dcf
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8DCA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x3E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8DCF: mov esi, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x587A8DD2: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x587A8DD4: cmp esi, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x10
        // 0x587A8DD7: jbe 0x587a8dde
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8DD9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x3E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8DDE: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A8DE0: push ebp
        __asm _emit 0x55
        // 0x587A8DE1: push ebx
        __asm _emit 0x53
        // 0x587A8DE2: push esi
        __asm _emit 0x56
        // 0x587A8DE3: push eax
        __asm _emit 0x50
        // 0x587A8DE4: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A8DE8: push edx
        __asm _emit 0x52
        // 0x587A8DE9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A8DEB: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8DF0: pop edi
        __asm _emit 0x5F
        // 0x587A8DF1: pop esi
        __asm _emit 0x5E
        // 0x587A8DF2: pop ebp
        __asm _emit 0x5D
        // 0x587A8DF3: pop ebx
        __asm _emit 0x5B
        // 0x587A8DF4: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A8DF7: ret
        __asm _emit 0xC3
    }
}
