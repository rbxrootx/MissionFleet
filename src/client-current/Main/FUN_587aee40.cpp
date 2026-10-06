// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AEE40 .. +0xA2 bytes.
// Source symbol alias: FUN_587aee40.
extern "C" __declspec(naked) void FUN_587aee40() {
    __asm {
        // 0x587AEE40: push ebx
        __asm _emit 0x53
        // 0x587AEE41: push ebp
        __asm _emit 0x55
        // 0x587AEE42: push esi
        __asm _emit 0x56
        // 0x587AEE43: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587AEE45: push edi
        __asm _emit 0x57
        // 0x587AEE46: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x587AEE49: cmp edi, dword ptr [ebp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x587AEE4C: jbe 0x587aee53
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AEE4E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xDE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEE53: mov esi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587AEE56: mov ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x587AEE59: cmp dword ptr [ebp + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x587AEE5C: jbe 0x587aee63
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AEE5E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xDE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEE63: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587AEE66: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AEE68: je 0x587aee6e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AEE6A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587AEE6C: je 0x587aee73
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AEE6E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEE73: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587AEE75: je 0x587aeed9
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x587AEE77: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AEE79: jne 0x587aeeb1
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x587AEE7B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEE80: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AEE82: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AEE85: jb 0x587aee8c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AEE87: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEE8C: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AEE8E: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AEE92: cmp dword ptr [eax + 0x50], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x587AEE95: je 0x587aeeb9
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587AEE97: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AEE99: jne 0x587aeeb5
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587AEE9B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEEA0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AEEA2: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AEEA5: jb 0x587aeeac
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AEEA7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEEAC: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587AEEAF: jmp 0x587aee56
        __asm _emit 0xEB
        __asm _emit 0xA5
        // 0x587AEEB1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AEEB3: jmp 0x587aee82
        __asm _emit 0xEB
        __asm _emit 0xCD
        // 0x587AEEB5: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AEEB7: jmp 0x587aeea2
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x587AEEB9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AEEBB: jne 0x587aeed5
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587AEEBD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEEC2: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AEEC5: jb 0x587aeecc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AEEC7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEECC: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AEECE: pop edi
        __asm _emit 0x5F
        // 0x587AEECF: pop esi
        __asm _emit 0x5E
        // 0x587AEED0: pop ebp
        __asm _emit 0x5D
        // 0x587AEED1: pop ebx
        __asm _emit 0x5B
        // 0x587AEED2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AEED5: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587AEED7: jmp 0x587aeec2
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x587AEED9: pop edi
        __asm _emit 0x5F
        // 0x587AEEDA: pop esi
        __asm _emit 0x5E
        // 0x587AEEDB: pop ebp
        __asm _emit 0x5D
        // 0x587AEEDC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AEEDE: pop ebx
        __asm _emit 0x5B
        // 0x587AEEDF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
