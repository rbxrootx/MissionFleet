// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 205 bytes in 1 exact ranges.
// Source symbol alias: FUN_58773660.

// Ghidra body range 0x58773660..0x5877372D; 205 mapped bytes.
extern "C" __declspec(naked) void FUN_58773660_segment_00() {
    __asm {
        // 0x58773660: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58773663: push ebx
        __asm _emit 0x53
        // 0x58773664: push ebp
        __asm _emit 0x55
        // 0x58773665: push esi
        __asm _emit 0x56
        // 0x58773666: push edi
        __asm _emit 0x57
        // 0x58773667: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58773669: mov ebx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x5877366C: mov esi, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x5877366F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773671: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58773673: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58773678: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5877367A: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5877367D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5877367F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58773682: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58773684: jne 0x5877368a
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58773686: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58773688: jmp 0x587736bd
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5877368A: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5877368C: jbe 0x58773693
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877368E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773693: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58773697: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58773699: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877369B: je 0x587736a1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5877369D: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5877369F: je 0x587736a6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587736A1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587736A6: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587736AA: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587736AC: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x587736B1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587736B3: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587736B6: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587736B8: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x587736BB: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587736BD: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587736C1: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587736C5: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587736C9: push ecx
        __asm _emit 0x51
        // 0x587736CA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587736CC: push edx
        __asm _emit 0x52
        // 0x587736CD: push eax
        __asm _emit 0x50
        // 0x587736CE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587736D0: call 0x58773090
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587736D5: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587736D8: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x587736DB: jbe 0x587736e2
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587736DD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587736E2: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587736E4: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x587736E6: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587736EA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587736EC: jne 0x5877370a
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587736EE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587736F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587736F5: imul esi, esi, 0x108
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587736FB: add esi, ebx
        __asm _emit 0x03
        __asm _emit 0xF3
        // 0x587736FD: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58773700: ja 0x58773715
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x58773702: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58773704: je 0x5877370e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58773706: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x58773708: jmp 0x58773710
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5877370A: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5877370C: jmp 0x587736f5
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x5877370E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58773710: cmp esi, dword ptr [edi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x58773713: jae 0x5877371a
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58773715: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877371A: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877371E: pop edi
        __asm _emit 0x5F
        // 0x5877371F: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x58773722: pop esi
        __asm _emit 0x5E
        // 0x58773723: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x58773725: pop ebp
        __asm _emit 0x5D
        // 0x58773726: pop ebx
        __asm _emit 0x5B
        // 0x58773727: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5877372A: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
