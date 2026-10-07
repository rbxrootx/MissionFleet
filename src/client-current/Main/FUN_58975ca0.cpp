// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 432 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975ca0.

// Ghidra body range 0x58975CA0..0x58975E50; 432 mapped bytes.
extern "C" __declspec(naked) void FUN_58975ca0_segment_00() {
    __asm {
        // 0x58975CA0: push esi
        __asm _emit 0x56
        // 0x58975CA1: push edi
        __asm _emit 0x57
        // 0x58975CA2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58975CA6: mov eax, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x58975CA9: mov esi, dword ptr [edi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x3C
        // 0x58975CAC: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x58975CAF: je 0x58975cca
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58975CB1: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58975CB3: push edi
        __asm _emit 0x57
        // 0x58975CB4: mov dword ptr [eax + 0x14], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975CBB: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58975CBD: mov edx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x58975CC0: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x58975CC3: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58975CC5: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x58975CC7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58975CCA: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x58975CCD: push ebx
        __asm _emit 0x53
        // 0x58975CCE: jne 0x58975cdc
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58975CD0: cmp dword ptr [edi + 0x40], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x40
        // 0x58975CD3: jne 0x58975ce8
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58975CD5: mov ebx, 0xa
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975CDA: jmp 0x58975cef
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58975CDC: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x58975CDF: jle 0x58975ce8
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x58975CE1: lea ebx, [esi + esi*2]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x76
        // 0x58975CE4: shl ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xE3
        // 0x58975CE6: jmp 0x58975cef
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58975CE8: lea ebx, [esi*4 + 2]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0xB5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975CEF: mov eax, dword ptr [edi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975CF5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58975CF7: je 0x58975d01
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58975CF9: cmp dword ptr [edi + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x9F
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975CFF: jge 0x58975d2b
        __asm _emit 0x7D
        __asm _emit 0x2A
        // 0x58975D01: cmp ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0A
        // 0x58975D04: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58975D06: jg 0x58975d0d
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x58975D08: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D0D: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58975D10: lea edx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC0
        // 0x58975D13: shl edx, 2
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x02
        // 0x58975D16: push edx
        __asm _emit 0x52
        // 0x58975D17: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975D19: push edi
        __asm _emit 0x57
        // 0x58975D1A: mov dword ptr [edi + 0x164], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D20: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x58975D22: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58975D25: mov dword ptr [edi + 0x160], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D2B: mov eax, dword ptr [edi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D31: mov dword ptr [edi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D37: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x58975D3A: mov dword ptr [edi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D40: pop ebx
        __asm _emit 0x5B
        // 0x58975D41: jne 0x58975df5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D47: cmp dword ptr [edi + 0x40], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x40
        // 0x58975D4A: jne 0x58975df5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D50: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975D52: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975D54: push esi
        __asm _emit 0x56
        // 0x58975D55: push eax
        __asm _emit 0x50
        // 0x58975D56: call 0x58975ee0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D5B: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58975D5D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975D5F: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58975D61: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975D63: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975D65: push eax
        __asm _emit 0x50
        // 0x58975D66: call 0x58975e50
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D6B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975D6D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975D6F: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x58975D71: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975D73: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58975D75: push eax
        __asm _emit 0x50
        // 0x58975D76: call 0x58975e50
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D7B: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x58975D7E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975D80: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975D82: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x58975D84: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975D86: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975D88: push eax
        __asm _emit 0x50
        // 0x58975D89: call 0x58975e50
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D8E: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58975D90: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975D92: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x58975D94: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58975D96: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975D98: push eax
        __asm _emit 0x50
        // 0x58975D99: call 0x58975e50
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975D9E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DA0: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58975DA2: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x58975DA4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975DA8: push eax
        __asm _emit 0x50
        // 0x58975DA9: call 0x58975e50
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975DAE: add esp, 0x48
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x48
        // 0x58975DB1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975DB3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DB5: push esi
        __asm _emit 0x56
        // 0x58975DB6: push eax
        __asm _emit 0x50
        // 0x58975DB7: call 0x58975ee0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975DBC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975DBE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DC0: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x58975DC2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DC4: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58975DC6: push eax
        __asm _emit 0x50
        // 0x58975DC7: call 0x58975e50
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975DCC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975DCE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DD0: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x58975DD2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DD4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DD6: push eax
        __asm _emit 0x50
        // 0x58975DD7: call 0x58975e50
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975DDC: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x58975DDF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975DE1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DE3: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x58975DE5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DE7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975DE9: push eax
        __asm _emit 0x50
        // 0x58975DEA: call 0x58975e50
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975DEF: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58975DF2: pop edi
        __asm _emit 0x5F
        // 0x58975DF3: pop esi
        __asm _emit 0x5E
        // 0x58975DF4: ret
        __asm _emit 0xC3
        // 0x58975DF5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975DF7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975DF9: push esi
        __asm _emit 0x56
        // 0x58975DFA: push eax
        __asm _emit 0x50
        // 0x58975DFB: call 0x58975ee0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975E00: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58975E02: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975E04: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58975E06: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975E08: push esi
        __asm _emit 0x56
        // 0x58975E09: push eax
        __asm _emit 0x50
        // 0x58975E0A: call 0x58975e90
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975E0F: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58975E11: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975E13: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x58975E15: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58975E17: push esi
        __asm _emit 0x56
        // 0x58975E18: push eax
        __asm _emit 0x50
        // 0x58975E19: call 0x58975e90
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975E1E: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x58975E21: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975E23: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58975E25: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x58975E27: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975E29: push esi
        __asm _emit 0x56
        // 0x58975E2A: push eax
        __asm _emit 0x50
        // 0x58975E2B: call 0x58975e90
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975E30: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975E32: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975E34: push esi
        __asm _emit 0x56
        // 0x58975E35: push eax
        __asm _emit 0x50
        // 0x58975E36: call 0x58975ee0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975E3B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975E3D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975E3F: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x58975E41: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975E43: push esi
        __asm _emit 0x56
        // 0x58975E44: push eax
        __asm _emit 0x50
        // 0x58975E45: call 0x58975e90
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975E4A: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x58975E4D: pop edi
        __asm _emit 0x5F
        // 0x58975E4E: pop esi
        __asm _emit 0x5E
        // 0x58975E4F: ret
        __asm _emit 0xC3
    }
}
