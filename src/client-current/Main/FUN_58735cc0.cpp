// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 258 bytes in 2 exact ranges.
// Source symbol alias: FUN_58735cc0.

// Ghidra body range 0x58735CC0..0x58735CFA; 58 mapped bytes.
extern "C" __declspec(naked) void FUN_58735cc0_segment_00() {
    __asm {
        // 0x58735CC0: push ecx
        __asm _emit 0x51
        // 0x58735CC1: push edi
        __asm _emit 0x57
        // 0x58735CC2: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58735CC4: mov eax, dword ptr [edi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735CCA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58735CCC: je 0x58735dc1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735CD2: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x58735CD5: je 0x58735dc1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735CDB: push ebx
        __asm _emit 0x53
        // 0x58735CDC: push ebp
        __asm _emit 0x55
        // 0x58735CDD: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x58735CE0: push esi
        __asm _emit 0x56
        // 0x58735CE1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735CE3: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58735CE5: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x58735CE7: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58735CEB: cmp ax, word ptr [edi + 0xec]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x87
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735CF2: jae 0x58735d7e
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735CF8: jmp 0x58735d00
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58735D00..0x58735DC8; 200 mapped bytes.
extern "C" __declspec(naked) void FUN_58735cc0_segment_01() {
    __asm {
        // 0x58735D00: mov ecx, dword ptr [edi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735D06: cmp dword ptr [ecx + esi*4], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB1
        __asm _emit 0x00
        // 0x58735D0A: lea eax, [ecx + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB1
        // 0x58735D0D: je 0x58735d68
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x58735D0F: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58735D11: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x09
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58735D16: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58735D1B: jne 0x58735d68
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x58735D1D: mov edx, dword ptr [edi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735D23: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58735D27: cmp dword ptr [edx + esi*4], eax
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0xB2
        // 0x58735D2A: jne 0x58735d30
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58735D2C: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58735D30: cmp ebx, -1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58735D33: jne 0x58735d37
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x58735D35: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x58735D37: mov ecx, dword ptr [edi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735D3D: cmp dword ptr [ecx + esi*4], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB1
        __asm _emit 0x00
        // 0x58735D41: je 0x58735d58
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58735D43: cmp ebp, -1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58735D46: je 0x58735d56
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58735D48: mov eax, dword ptr [edi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735D4E: mov edx, dword ptr [eax + ebp*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xA8
        // 0x58735D51: cmp edx, dword ptr [eax + esi*4]
        __asm _emit 0x3B
        __asm _emit 0x14
        __asm _emit 0xB0
        // 0x58735D54: jae 0x58735d58
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x58735D56: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58735D58: mov eax, dword ptr [edi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735D5E: mov ecx, dword ptr [eax + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x98
        // 0x58735D61: cmp ecx, dword ptr [eax + esi*4]
        __asm _emit 0x3B
        __asm _emit 0x0C
        __asm _emit 0xB0
        // 0x58735D64: jae 0x58735d68
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x58735D66: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x58735D68: movzx edx, word ptr [edi + 0xec]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735D6F: inc esi
        __asm _emit 0x46
        // 0x58735D70: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58735D72: jl 0x58735d00
        __asm _emit 0x7C
        __asm _emit 0x8C
        // 0x58735D74: cmp ebx, -1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58735D77: je 0x58735d7e
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58735D79: cmp ebp, -1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58735D7C: jne 0x58735d88
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58735D7E: pop esi
        __asm _emit 0x5E
        // 0x58735D7F: pop ebp
        __asm _emit 0x5D
        // 0x58735D80: pop ebx
        __asm _emit 0x5B
        // 0x58735D81: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735D83: pop edi
        __asm _emit 0x5F
        // 0x58735D84: pop ecx
        __asm _emit 0x59
        // 0x58735D85: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58735D88: cmp ebx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58735D8C: je 0x58735d7e
        __asm _emit 0x74
        __asm _emit 0xF0
        // 0x58735D8E: mov eax, dword ptr [edi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735D94: mov ecx, dword ptr [eax + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x98
        // 0x58735D97: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x58735D9A: cmp dword ptr [eax + ebp*4], ecx
        __asm _emit 0x39
        __asm _emit 0x0C
        __asm _emit 0xA8
        // 0x58735D9D: jae 0x58735db0
        __asm _emit 0x73
        __asm _emit 0x11
        // 0x58735D9F: mov edx, dword ptr [edi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735DA5: mov eax, dword ptr [edx + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x9A
        // 0x58735DA8: pop esi
        __asm _emit 0x5E
        // 0x58735DA9: pop ebp
        __asm _emit 0x5D
        // 0x58735DAA: pop ebx
        __asm _emit 0x5B
        // 0x58735DAB: pop edi
        __asm _emit 0x5F
        // 0x58735DAC: pop ecx
        __asm _emit 0x59
        // 0x58735DAD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58735DB0: mov eax, dword ptr [edi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735DB6: mov eax, dword ptr [eax + ebp*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xA8
        // 0x58735DB9: pop esi
        __asm _emit 0x5E
        // 0x58735DBA: pop ebp
        __asm _emit 0x5D
        // 0x58735DBB: pop ebx
        __asm _emit 0x5B
        // 0x58735DBC: pop edi
        __asm _emit 0x5F
        // 0x58735DBD: pop ecx
        __asm _emit 0x59
        // 0x58735DBE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58735DC1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735DC3: pop edi
        __asm _emit 0x5F
        // 0x58735DC4: pop ecx
        __asm _emit 0x59
        // 0x58735DC5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
