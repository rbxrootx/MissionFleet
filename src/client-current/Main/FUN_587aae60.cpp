// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 102 bytes in 1 exact ranges.
// Source symbol alias: FUN_587aae60.

// Ghidra body range 0x587AAE60..0x587AAEC6; 102 mapped bytes.
extern "C" __declspec(naked) void FUN_587aae60_segment_00() {
    __asm {
        // 0x587AAE60: push ebp
        __asm _emit 0x55
        // 0x587AAE61: push esi
        __asm _emit 0x56
        // 0x587AAE62: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587AAE64: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587AAE67: push edi
        __asm _emit 0x57
        // 0x587AAE68: push eax
        __asm _emit 0x50
        // 0x587AAE69: mov dword ptr [esi + 0x40], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAE70: call 0x587aaa50
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAE75: mov ebp, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x34
        // 0x587AAE78: cmp ebp, dword ptr [esi + 0x38]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x38
        // 0x587AAE7B: jbe 0x587aae82
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AAE7D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAE82: mov edi, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x587AAE85: push ebx
        __asm _emit 0x53
        // 0x587AAE86: mov ebx, dword ptr [esi + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x38
        // 0x587AAE89: cmp dword ptr [esi + 0x34], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x34
        // 0x587AAE8C: jbe 0x587aae93
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AAE8E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAE93: mov esi, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x28
        // 0x587AAE96: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AAE98: je 0x587aae9e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AAE9A: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587AAE9C: je 0x587aaea3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AAE9E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAEA3: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587AAEA5: pop ebx
        __asm _emit 0x5B
        // 0x587AAEA6: je 0x587aaec2
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587AAEA8: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AAEAA: jne 0x587aaebe
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587AAEAC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAEB1: cmp ebp, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6F
        __asm _emit 0x10
        // 0x587AAEB4: jb 0x587aaec2
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x587AAEB6: pop edi
        __asm _emit 0x5F
        // 0x587AAEB7: pop esi
        __asm _emit 0x5E
        // 0x587AAEB8: pop ebp
        __asm _emit 0x5D
        // 0x587AAEB9: jmp 0x5897cc72
        __asm _emit 0xE9
        __asm _emit 0xB4
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAEBE: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587AAEC0: jmp 0x587aaeb1
        __asm _emit 0xEB
        __asm _emit 0xEF
        // 0x587AAEC2: pop edi
        __asm _emit 0x5F
        // 0x587AAEC3: pop esi
        __asm _emit 0x5E
        // 0x587AAEC4: pop ebp
        __asm _emit 0x5D
        // 0x587AAEC5: ret
        __asm _emit 0xC3
    }
}
