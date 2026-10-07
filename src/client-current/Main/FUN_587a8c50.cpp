// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 151 bytes in 3 discontiguous ranges.
// Source symbol alias: FUN_587a8c50.

// Ghidra body range 0x587A8C50..0x587A8CAD; 93 mapped bytes.
extern "C" __declspec(naked) void FUN_587a8c50_segment_00() {
    __asm {
        // 0x587A8C50: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587A8C53: push ebx
        __asm _emit 0x53
        // 0x587A8C54: mov ebx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x1C
        // 0x587A8C57: push ebp
        __asm _emit 0x55
        // 0x587A8C58: push esi
        __asm _emit 0x56
        // 0x587A8C59: lea esi, [ecx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x10
        // 0x587A8C5C: push edi
        __asm _emit 0x57
        // 0x587A8C5D: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587A8C60: jbe 0x587a8c67
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8C62: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x40
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8C67: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x587A8C69: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8C70: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587A8C73: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587A8C76: jbe 0x587a8c7d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8C78: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8C7D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A8C7F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A8C81: je 0x587a8c87
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A8C83: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587A8C85: je 0x587a8c8c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A8C87: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8C8C: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587A8C8E: je 0x587a8cd2
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x587A8C90: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A8C92: jne 0x587a8cca
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x587A8C94: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8C99: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8C9B: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A8C9E: jb 0x587a8ca5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8CA0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8CA5: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587A8CA7: push eax
        __asm _emit 0x50
        // 0x587A8CA8: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587A8CCA..0x587A8CCE; 4 mapped bytes.
extern "C" __declspec(naked) void FUN_587a8c50_segment_01() {
    __asm {
        // 0x587A8CCA: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A8CCC: jmp 0x587a8c9b
        __asm _emit 0xEB
        __asm _emit 0xCD
    }
}

// Ghidra body range 0x587A8CD2..0x587A8D08; 54 mapped bytes.
extern "C" __declspec(naked) void FUN_587a8c50_segment_02() {
    __asm {
        // 0x587A8CD2: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587A8CD5: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587A8CD8: jbe 0x587a8cdf
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8CDA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8CDF: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587A8CE2: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x587A8CE4: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587A8CE7: jbe 0x587a8cee
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8CE9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8CEE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A8CF0: push ebp
        __asm _emit 0x55
        // 0x587A8CF1: push ebx
        __asm _emit 0x53
        // 0x587A8CF2: push edi
        __asm _emit 0x57
        // 0x587A8CF3: push eax
        __asm _emit 0x50
        // 0x587A8CF4: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A8CF8: push ecx
        __asm _emit 0x51
        // 0x587A8CF9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A8CFB: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8D00: pop edi
        __asm _emit 0x5F
        // 0x587A8D01: pop esi
        __asm _emit 0x5E
        // 0x587A8D02: pop ebp
        __asm _emit 0x5D
        // 0x587A8D03: pop ebx
        __asm _emit 0x5B
        // 0x587A8D04: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A8D07: ret
        __asm _emit 0xC3
    }
}
