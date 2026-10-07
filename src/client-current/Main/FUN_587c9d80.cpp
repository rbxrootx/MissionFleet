// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 205 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_587c9d80.

// Ghidra body range 0x587C9D80..0x587C9DAD; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_587c9d80_segment_00() {
    __asm {
        // 0x587C9D80: push ebp
        __asm _emit 0x55
        // 0x587C9D81: push esi
        __asm _emit 0x56
        // 0x587C9D82: mov esi, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x60
        // 0x587C9D85: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587C9D87: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587C9D89: push edi
        __asm _emit 0x57
        // 0x587C9D8A: jge 0x587c9d8e
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587C9D8C: neg esi
        __asm _emit 0xF7
        __asm _emit 0xDE
        // 0x587C9D8E: mov eax, dword ptr [ecx + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x587C9D91: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587C9D93: jle 0x587c9d9d
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587C9D95: mov dword ptr [ecx + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9D9B: jmp 0x587c9dcc
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x587C9D9D: mov dword ptr [ecx + 0xe8], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9DA3: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587C9DA5: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587C9DA7: je 0x587c9dcc
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x587C9DA9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587C9DAB: jmp 0x587c9db0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587C9DB0..0x587C9E50; 160 mapped bytes.
extern "C" __declspec(naked) void FUN_587c9d80_segment_01() {
    __asm {
        // 0x587C9DB0: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587C9DB5: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587C9DB7: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587C9DBA: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587C9DBC: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587C9DBF: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587C9DC1: inc edi
        __asm _emit 0x47
        // 0x587C9DC2: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x587C9DC4: jne 0x587c9db0
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x587C9DC6: mov dword ptr [ecx + 0xe8], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9DCC: mov edi, dword ptr [ecx + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9DD2: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587C9DD5: js 0x587c9e4c
        __asm _emit 0x78
        __asm _emit 0x75
        // 0x587C9DD7: push ebx
        __asm _emit 0x53
        // 0x587C9DD8: lea ebx, [ecx + edi*4 + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0xB9
        __asm _emit 0x68
        // 0x587C9DDC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C9DE0: mov edx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9DE6: dec edx
        __asm _emit 0x4A
        // 0x587C9DE7: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x587C9DE9: je 0x587c9e14
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587C9DEB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587C9DED: jne 0x587c9e14
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x587C9DEF: cmp dword ptr [ecx + 0xfc], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587C9DF6: jne 0x587c9e0c
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587C9DF8: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587C9DFA: jne 0x587c9e0c
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587C9DFC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C9DFE: cmp dword ptr [ecx + 0x60], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x587C9E01: lea ebp, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x01
        // 0x587C9E04: setge al
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC0
        // 0x587C9E07: add eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0B
        // 0x587C9E0A: jmp 0x587c9e2e
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x587C9E0C: mov dword ptr [ebx], 0xa
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9E12: jmp 0x587c9e30
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x587C9E14: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587C9E19: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587C9E1B: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587C9E1E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587C9E20: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587C9E23: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587C9E25: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x587C9E28: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587C9E2A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587C9E2C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587C9E2E: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x587C9E30: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587C9E35: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587C9E37: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587C9E3A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587C9E3C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587C9E3F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587C9E41: dec edi
        __asm _emit 0x4F
        // 0x587C9E42: sub ebx, 4
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587C9E45: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587C9E47: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587C9E49: jge 0x587c9de0
        __asm _emit 0x7D
        __asm _emit 0x95
        // 0x587C9E4B: pop ebx
        __asm _emit 0x5B
        // 0x587C9E4C: pop edi
        __asm _emit 0x5F
        // 0x587C9E4D: pop esi
        __asm _emit 0x5E
        // 0x587C9E4E: pop ebp
        __asm _emit 0x5D
        // 0x587C9E4F: ret
        __asm _emit 0xC3
    }
}
