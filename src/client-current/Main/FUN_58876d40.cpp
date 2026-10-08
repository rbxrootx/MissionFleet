// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 269 bytes in 1 exact ranges.
// Source symbol alias: FUN_58876d40.

// Ghidra body range 0x58876D40..0x58876E4D; 269 mapped bytes.
extern "C" __declspec(naked) void FUN_58876d40_segment_00() {
    __asm {
        // 0x58876D40: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58876D42: push 0x58987ae8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58876D47: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D4D: push eax
        __asm _emit 0x50
        // 0x58876D4E: push ecx
        __asm _emit 0x51
        // 0x58876D4F: push ebx
        __asm _emit 0x53
        // 0x58876D50: push ebp
        __asm _emit 0x55
        // 0x58876D51: push esi
        __asm _emit 0x56
        // 0x58876D52: push edi
        __asm _emit 0x57
        // 0x58876D53: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58876D58: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58876D5A: push eax
        __asm _emit 0x50
        // 0x58876D5B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58876D5F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D65: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58876D67: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58876D6B: mov dword ptr [edi], 0x5899efa0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0xA0
        __asm _emit 0xEF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58876D71: mov ecx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D77: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58876D79: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58876D7D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58876D7F: je 0x58876d8f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58876D81: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58876D83: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58876D85: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58876D87: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58876D89: mov dword ptr [edi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D8F: lea esi, [edi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D95: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D9A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876DA0: mov ecx, dword ptr [esi - 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xF8
        // 0x58876DA3: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58876DA5: je 0x58876db2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58876DA7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58876DA9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58876DAB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58876DAD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58876DAF: mov dword ptr [esi - 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0xF8
        // 0x58876DB2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58876DB4: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58876DB6: je 0x58876dc2
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58876DB8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58876DBA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58876DBC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58876DBE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58876DC0: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x58876DC2: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58876DC5: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58876DC8: jne 0x58876da0
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x58876DCA: mov ecx, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876DD0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58876DD2: je 0x58876de2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58876DD4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58876DD6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58876DD8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58876DDA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58876DDC: mov dword ptr [edi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876DE2: mov ecx, dword ptr [edi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876DE8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58876DEA: je 0x58876dfa
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58876DEC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58876DEE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58876DF0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58876DF2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58876DF4: mov dword ptr [edi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876DFA: mov ecx, dword ptr [edi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876E00: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58876E02: je 0x58876e12
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58876E04: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58876E06: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58876E08: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58876E0A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58876E0C: mov dword ptr [edi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876E12: mov ecx, dword ptr [edi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876E18: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58876E1A: je 0x58876e2a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58876E1C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58876E1E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58876E20: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58876E22: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58876E24: mov dword ptr [edi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876E2A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58876E2C: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876E34: call 0x587b5f50
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xF1
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58876E39: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58876E3D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876E44: pop ecx
        __asm _emit 0x59
        // 0x58876E45: pop edi
        __asm _emit 0x5F
        // 0x58876E46: pop esi
        __asm _emit 0x5E
        // 0x58876E47: pop ebp
        __asm _emit 0x5D
        // 0x58876E48: pop ebx
        __asm _emit 0x5B
        // 0x58876E49: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58876E4C: ret
        __asm _emit 0xC3
    }
}
