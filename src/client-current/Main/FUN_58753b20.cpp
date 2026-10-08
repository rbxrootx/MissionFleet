// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 201 bytes in 1 exact ranges.
// Source symbol alias: FUN_58753b20.

// Ghidra body range 0x58753B20..0x58753BE9; 201 mapped bytes.
extern "C" __declspec(naked) void FUN_58753b20_segment_00() {
    __asm {
        // 0x58753B20: push ebx
        __asm _emit 0x53
        // 0x58753B21: push ebp
        __asm _emit 0x55
        // 0x58753B22: push esi
        __asm _emit 0x56
        // 0x58753B23: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58753B25: push edi
        __asm _emit 0x57
        // 0x58753B26: mov edi, dword ptr [ebp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x28
        // 0x58753B29: cmp edi, dword ptr [ebp + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x2C
        // 0x58753B2C: jbe 0x58753b33
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58753B2E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753B33: mov esi, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58753B36: mov ebx, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x2C
        // 0x58753B39: cmp dword ptr [ebp + 0x28], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x28
        // 0x58753B3C: jbe 0x58753b43
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58753B3E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753B43: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x58753B46: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753B48: je 0x58753b4e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58753B4A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58753B4C: je 0x58753b53
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58753B4E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753B53: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58753B55: je 0x58753be0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58753B5B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753B5D: jne 0x58753bb3
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x58753B5F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753B64: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753B66: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753B69: jb 0x58753b70
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753B6B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753B70: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58753B74: cmp dword ptr [edi], eax
        __asm _emit 0x39
        __asm _emit 0x07
        // 0x58753B76: jne 0x58753b96
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58753B78: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753B7A: jne 0x58753bb7
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x58753B7C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753B81: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753B83: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753B86: jb 0x58753b8d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753B88: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753B8D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58753B91: cmp dword ptr [edi + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58753B94: je 0x58753bbf
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58753B96: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753B98: jne 0x58753bbb
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58753B9A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753B9F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753BA1: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753BA4: jb 0x58753bab
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753BA6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753BAB: add edi, 0x808
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58753BB1: jmp 0x58753b36
        __asm _emit 0xEB
        __asm _emit 0x83
        // 0x58753BB3: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753BB5: jmp 0x58753b66
        __asm _emit 0xEB
        __asm _emit 0xAF
        // 0x58753BB7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753BB9: jmp 0x58753b83
        __asm _emit 0xEB
        __asm _emit 0xC8
        // 0x58753BBB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753BBD: jmp 0x58753ba1
        __asm _emit 0xEB
        __asm _emit 0xE2
        // 0x58753BBF: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753BC1: jne 0x58753bdc
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58753BC3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753BC8: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58753BCB: jb 0x58753bd2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753BCD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753BD2: lea eax, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58753BD5: pop edi
        __asm _emit 0x5F
        // 0x58753BD6: pop esi
        __asm _emit 0x5E
        // 0x58753BD7: pop ebp
        __asm _emit 0x5D
        // 0x58753BD8: pop ebx
        __asm _emit 0x5B
        // 0x58753BD9: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58753BDC: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58753BDE: jmp 0x58753bc8
        __asm _emit 0xEB
        __asm _emit 0xE8
        // 0x58753BE0: pop edi
        __asm _emit 0x5F
        // 0x58753BE1: pop esi
        __asm _emit 0x5E
        // 0x58753BE2: pop ebp
        __asm _emit 0x5D
        // 0x58753BE3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753BE5: pop ebx
        __asm _emit 0x5B
        // 0x58753BE6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
