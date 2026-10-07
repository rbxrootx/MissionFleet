// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 624 bytes in 6 exact ranges.
// Source symbol alias: FUN_58744d20.

// Ghidra body range 0x58744D20..0x58744E50; 304 mapped bytes.
extern "C" __declspec(naked) void FUN_58744d20_segment_00() {
    __asm {
        // 0x58744D20: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58744D22: push 0x5897e180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58744D27: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744D2D: push eax
        __asm _emit 0x50
        // 0x58744D2E: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x58744D31: push ebx
        __asm _emit 0x53
        // 0x58744D32: push ebp
        __asm _emit 0x55
        // 0x58744D33: push esi
        __asm _emit 0x56
        // 0x58744D34: push edi
        __asm _emit 0x57
        // 0x58744D35: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58744D3A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58744D3C: push eax
        __asm _emit 0x50
        // 0x58744D3D: lea eax, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58744D41: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744D47: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58744D49: mov eax, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58744D4D: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744D54: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58744D56: lea edi, [ebp + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0xCD
        __asm _emit 0x00
        // 0x58744D5A: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744D5F: cmp dword ptr [edi + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x58744D62: jne 0x58744e9f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744D68: call 0x58748be0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744D6D: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58744D70: push eax
        __asm _emit 0x50
        // 0x58744D71: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58744D75: call 0x58744340
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744D7A: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744D7E: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58744D82: mov dword ptr [esp + 0x4c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744D8A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58744D8C: jbe 0x58744d97
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58744D8E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x7E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744D93: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58744D97: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58744D9B: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x58744D9D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58744DA0: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58744DA2: cmp dword ptr [esp + 0x20], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744DA6: jbe 0x58744dad
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58744DA8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x7E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744DAD: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58744DAF: je 0x58744db7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58744DB1: cmp ebx, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58744DB5: je 0x58744dbc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58744DB7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x7E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744DBC: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x58744DBE: je 0x58744e76
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744DC4: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58744DC6: jne 0x58744e1b
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x58744DC8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x7E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744DCD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58744DCF: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58744DD2: jb 0x58744dd9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58744DD4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x7E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744DD9: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x58744DDB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58744DDD: call 0x58743080
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744DE2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58744DE4: cmp edx, dword ptr [ebp]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58744DE7: jne 0x58744dfd
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58744DE9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58744DEB: call 0x58743080
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744DF0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58744DF2: call 0x587453a0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744DF7: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58744DF9: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58744DFB: jne 0x58744e23
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x58744DFD: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58744DFF: jne 0x58744e1f
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58744E01: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x7E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744E06: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58744E08: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58744E0B: jb 0x58744e12
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58744E0D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x7E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744E12: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58744E16: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58744E19: jmp 0x58744da0
        __asm _emit 0xEB
        __asm _emit 0x85
        // 0x58744E1B: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58744E1D: jmp 0x58744dcf
        __asm _emit 0xEB
        __asm _emit 0xB0
        // 0x58744E1F: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58744E21: jmp 0x58744e08
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x58744E23: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58744E26: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58744E29: mov eax, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58744E2D: add ecx, 0x19
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x19
        // 0x58744E30: push ecx
        __asm _emit 0x51
        // 0x58744E31: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58744E34: add edx, 0x19
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x19
        // 0x58744E37: push edx
        __asm _emit 0x52
        // 0x58744E38: push eax
        __asm _emit 0x50
        // 0x58744E39: push ecx
        __asm _emit 0x51
        // 0x58744E3A: call 0x587474f0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744E3F: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58744E43: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58744E46: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58744E48: je 0x58744e53
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58744E4A: push eax
        __asm _emit 0x50
        // 0x58744E4B: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x7D
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58744E53..0x58744E69; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_58744d20_segment_01() {
    __asm {
        // 0x58744E53: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58744E57: push edx
        __asm _emit 0x52
        // 0x58744E58: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58744E5C: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58744E60: mov dword ptr [esp + 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58744E64: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x7D
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58744E76..0x58744E84; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58744d20_segment_02() {
    __asm {
        // 0x58744E76: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744E7A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58744E7C: je 0x58744e87
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58744E7E: push eax
        __asm _emit 0x50
        // 0x58744E7F: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x7D
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58744E87..0x58744F75; 238 mapped bytes.
extern "C" __declspec(naked) void FUN_58744d20_segment_03() {
    __asm {
        // 0x58744E87: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58744E89: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744E8D: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58744E91: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58744E95: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58744E99: push eax
        __asm _emit 0x50
        // 0x58744E9A: jmp 0x58744f89
        __asm _emit 0xE9
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744E9F: cmp dword ptr [edi + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x58744EA3: jne 0x58744ec6
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58744EA5: cmp dword ptr [edi + 0x34], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x58744EA9: jne 0x58744f91
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744EAF: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58744EB1: call 0x58744870
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744EB6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58744EB8: je 0x58744f91
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744EBE: mov dword ptr [edi + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x30
        // 0x58744EC1: jmp 0x58744f91
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744EC6: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58744EC9: push ecx
        __asm _emit 0x51
        // 0x58744ECA: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58744ECE: push edx
        __asm _emit 0x52
        // 0x58744ECF: call 0x58747c50
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744ED4: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58744ED7: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58744EDB: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58744EDF: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58744EE1: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58744EE4: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58744EE6: mov dword ptr [esp + 0x4c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58744EEA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58744EEC: jbe 0x58744f12
        __asm _emit 0x76
        __asm _emit 0x24
        // 0x58744EEE: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58744EF0: jb 0x58744efb
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x58744EF2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x7D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744EF7: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58744EFB: mov eax, dword ptr [edx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB2
        // 0x58744EFE: cmp eax, dword ptr [edi + 0x30]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0x30
        // 0x58744F01: je 0x58744f19
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58744F03: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58744F07: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58744F09: add esi, ebx
        __asm _emit 0x03
        __asm _emit 0xF3
        // 0x58744F0B: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58744F0E: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58744F10: jb 0x58744efb
        __asm _emit 0x72
        __asm _emit 0xE9
        // 0x58744F12: mov dword ptr [edi + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744F19: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58744F1C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58744F1E: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x58744F20: je 0x58744f40
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58744F22: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58744F27: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58744F2C: je 0x58744f3c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58744F2E: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58744F32: mov dword ptr [edi + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x30
        // 0x58744F35: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58744F37: je 0x58744f78
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x58744F39: push eax
        __asm _emit 0x50
        // 0x58744F3A: jmp 0x58744f70
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x58744F3C: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58744F40: mov edi, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x10
        // 0x58744F43: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x04
        // 0x58744F46: jne 0x58744f56
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58744F48: mov edx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58744F4C: push edx
        __asm _emit 0x52
        // 0x58744F4D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58744F4F: call 0x587434e0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744F54: jmp 0x58744f67
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x58744F56: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x58744F59: jne 0x58744f6b
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58744F5B: mov eax, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58744F5F: push eax
        __asm _emit 0x50
        // 0x58744F60: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58744F62: call 0x58743400
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744F67: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58744F6B: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58744F6D: je 0x58744f78
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58744F6F: push edx
        __asm _emit 0x52
        // 0x58744F70: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x7C
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58744F78..0x58744F8E; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_58744d20_segment_04() {
    __asm {
        // 0x58744F78: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58744F7C: push ecx
        __asm _emit 0x51
        // 0x58744F7D: mov dword ptr [esp + 0x44], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58744F81: mov dword ptr [esp + 0x40], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58744F85: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58744F89: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x7C
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58744F91..0x58744FA9; 24 mapped bytes.
extern "C" __declspec(naked) void FUN_58744d20_segment_05() {
    __asm {
        // 0x58744F91: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58744F93: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58744F97: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744F9E: pop ecx
        __asm _emit 0x59
        // 0x58744F9F: pop edi
        __asm _emit 0x5F
        // 0x58744FA0: pop esi
        __asm _emit 0x5E
        // 0x58744FA1: pop ebp
        __asm _emit 0x5D
        // 0x58744FA2: pop ebx
        __asm _emit 0x5B
        // 0x58744FA3: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x58744FA6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
