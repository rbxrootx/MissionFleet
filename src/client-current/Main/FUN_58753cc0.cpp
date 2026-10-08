// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 176 bytes in 1 exact ranges.
// Source symbol alias: FUN_58753cc0.

// Ghidra body range 0x58753CC0..0x58753D70; 176 mapped bytes.
extern "C" __declspec(naked) void FUN_58753cc0_segment_00() {
    __asm {
        // 0x58753CC0: push ebx
        __asm _emit 0x53
        // 0x58753CC1: push ebp
        __asm _emit 0x55
        // 0x58753CC2: push esi
        __asm _emit 0x56
        // 0x58753CC3: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58753CC5: push edi
        __asm _emit 0x57
        // 0x58753CC6: mov edi, dword ptr [ebp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x28
        // 0x58753CC9: cmp edi, dword ptr [ebp + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x2C
        // 0x58753CCC: jbe 0x58753cd3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58753CCE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753CD3: mov esi, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58753CD6: mov ebx, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x2C
        // 0x58753CD9: cmp dword ptr [ebp + 0x28], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x28
        // 0x58753CDC: jbe 0x58753ce3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58753CDE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753CE3: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x58753CE6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753CE8: je 0x58753cee
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58753CEA: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58753CEC: je 0x58753cf3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58753CEE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753CF3: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58753CF5: je 0x58753d67
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x58753CF7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753CF9: jne 0x58753d4f
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x58753CFB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753D00: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753D02: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753D05: jb 0x58753d0c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753D07: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753D0C: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58753D10: cmp dword ptr [edi], eax
        __asm _emit 0x39
        __asm _emit 0x07
        // 0x58753D12: jne 0x58753d32
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58753D14: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753D16: jne 0x58753d53
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x58753D18: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753D1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753D1F: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753D22: jb 0x58753d29
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753D24: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753D29: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58753D2D: cmp dword ptr [edi + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58753D30: je 0x58753d5b
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58753D32: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753D34: jne 0x58753d57
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58753D36: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753D3B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753D3D: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753D40: jb 0x58753d47
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753D42: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753D47: add edi, 0x808
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58753D4D: jmp 0x58753cd6
        __asm _emit 0xEB
        __asm _emit 0x87
        // 0x58753D4F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753D51: jmp 0x58753d02
        __asm _emit 0xEB
        __asm _emit 0xAF
        // 0x58753D53: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753D55: jmp 0x58753d1f
        __asm _emit 0xEB
        __asm _emit 0xC8
        // 0x58753D57: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753D59: jmp 0x58753d3d
        __asm _emit 0xEB
        __asm _emit 0xE2
        // 0x58753D5B: pop edi
        __asm _emit 0x5F
        // 0x58753D5C: pop esi
        __asm _emit 0x5E
        // 0x58753D5D: pop ebp
        __asm _emit 0x5D
        // 0x58753D5E: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58753D63: pop ebx
        __asm _emit 0x5B
        // 0x58753D64: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58753D67: pop edi
        __asm _emit 0x5F
        // 0x58753D68: pop esi
        __asm _emit 0x5E
        // 0x58753D69: pop ebp
        __asm _emit 0x5D
        // 0x58753D6A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753D6C: pop ebx
        __asm _emit 0x5B
        // 0x58753D6D: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
