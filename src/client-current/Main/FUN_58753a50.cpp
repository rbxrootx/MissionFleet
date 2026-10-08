// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 198 bytes in 1 exact ranges.
// Source symbol alias: FUN_58753a50.

// Ghidra body range 0x58753A50..0x58753B16; 198 mapped bytes.
extern "C" __declspec(naked) void FUN_58753a50_segment_00() {
    __asm {
        // 0x58753A50: push ebx
        __asm _emit 0x53
        // 0x58753A51: push ebp
        __asm _emit 0x55
        // 0x58753A52: push esi
        __asm _emit 0x56
        // 0x58753A53: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58753A55: push edi
        __asm _emit 0x57
        // 0x58753A56: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x58753A59: cmp edi, dword ptr [ebp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x58753A5C: jbe 0x58753a63
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58753A5E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753A63: mov esi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58753A66: mov ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x58753A69: cmp dword ptr [ebp + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x58753A6C: jbe 0x58753a73
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58753A6E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753A73: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58753A76: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753A78: je 0x58753a7e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58753A7A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58753A7C: je 0x58753a83
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58753A7E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753A83: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58753A85: je 0x58753b0d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58753A8B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753A8D: jne 0x58753ae0
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x58753A8F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753A94: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753A96: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753A99: jb 0x58753aa0
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753A9B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753AA0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58753AA4: cmp dword ptr [edi], eax
        __asm _emit 0x39
        __asm _emit 0x07
        // 0x58753AA6: jne 0x58753ac6
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58753AA8: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753AAA: jne 0x58753ae4
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x58753AAC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753AB1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753AB3: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753AB6: jb 0x58753abd
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753AB8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753ABD: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58753AC1: cmp dword ptr [edi + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58753AC4: je 0x58753aec
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58753AC6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753AC8: jne 0x58753ae8
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58753ACA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753ACF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753AD1: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753AD4: jb 0x58753adb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753AD6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753ADB: add edi, 0x48
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x48
        // 0x58753ADE: jmp 0x58753a66
        __asm _emit 0xEB
        __asm _emit 0x86
        // 0x58753AE0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753AE2: jmp 0x58753a96
        __asm _emit 0xEB
        __asm _emit 0xB2
        // 0x58753AE4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753AE6: jmp 0x58753ab3
        __asm _emit 0xEB
        __asm _emit 0xCB
        // 0x58753AE8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753AEA: jmp 0x58753ad1
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x58753AEC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753AEE: jne 0x58753b09
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58753AF0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753AF5: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58753AF8: jb 0x58753aff
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753AFA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753AFF: lea eax, [edi + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58753B02: pop edi
        __asm _emit 0x5F
        // 0x58753B03: pop esi
        __asm _emit 0x5E
        // 0x58753B04: pop ebp
        __asm _emit 0x5D
        // 0x58753B05: pop ebx
        __asm _emit 0x5B
        // 0x58753B06: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58753B09: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58753B0B: jmp 0x58753af5
        __asm _emit 0xEB
        __asm _emit 0xE8
        // 0x58753B0D: pop edi
        __asm _emit 0x5F
        // 0x58753B0E: pop esi
        __asm _emit 0x5E
        // 0x58753B0F: pop ebp
        __asm _emit 0x5D
        // 0x58753B10: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753B12: pop ebx
        __asm _emit 0x5B
        // 0x58753B13: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
