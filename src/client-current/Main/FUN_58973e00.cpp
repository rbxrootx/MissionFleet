// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 346 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973e00.

// Ghidra body range 0x58973E00..0x58973F5A; 346 mapped bytes.
extern "C" __declspec(naked) void FUN_58973e00_segment_00() {
    __asm {
        // 0x58973E00: push ecx
        __asm _emit 0x51
        // 0x58973E01: push ebx
        __asm _emit 0x53
        // 0x58973E02: push ebp
        __asm _emit 0x55
        // 0x58973E03: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58973E05: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58973E09: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973E0B: push esi
        __asm _emit 0x56
        // 0x58973E0C: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58973E0F: push edi
        __asm _emit 0x57
        // 0x58973E10: mov edi, 0x589a31d0
        __asm _emit 0xBF
        __asm _emit 0xD0
        __asm _emit 0x31
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58973E15: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x58973E17: mov dword ptr [ecx + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x58973E1A: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58973E1D: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973E22: mov byte ptr [edx + 0xc4], al
        __asm _emit 0x88
        __asm _emit 0x82
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973E28: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973E2A: mov dword ptr [ebp + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973E30: repe cmpsw word ptr [esi], word ptr es:[edi]
        __asm _emit 0x66
        __asm _emit 0xF3
        __asm _emit 0xA7
        // 0x58973E33: je 0x58973e42
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58973E35: lea edx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58973E38: mov edi, 0x589ce818
        __asm _emit 0xBF
        __asm _emit 0x18
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973E3D: jmp 0x58973f33
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973E42: mov dx, word ptr [ebx + 6]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x06
        // 0x58973E46: lea edi, [ebx + 6]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x06
        // 0x58973E49: mov ecx, 0x589ce814
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973E4E: cmp dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x11
        // 0x58973E51: jne 0x58973e5b
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58973E53: mov dword ptr [ebp + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973E59: jmp 0x58973e76
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58973E5B: mov cx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58973E5E: mov eax, 0x589ce810
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973E63: cmp cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x08
        // 0x58973E66: jne 0x58973f2b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973E6C: mov dword ptr [ebp + 0x108], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973E76: lea edx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x58973E79: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973E7B: push edx
        __asm _emit 0x52
        // 0x58973E7C: call 0x58973f70
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973E81: cmp eax, 0x2a
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x2A
        // 0x58973E84: je 0x58973e93
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58973E86: lea edx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58973E89: mov edi, 0x589ce7f8
        __asm _emit 0xBF
        __asm _emit 0xF8
        __asm _emit 0xE7
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973E8E: jmp 0x58973f33
        __asm _emit 0xE9
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973E93: lea ecx, [ebx + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x0A
        // 0x58973E96: push ecx
        __asm _emit 0x51
        // 0x58973E97: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973E99: call 0x58974000
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973E9E: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58973EA2: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58973EA5: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58973EA9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58973EAD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58973EAF: lea esi, [edx - 6]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0xFA
        // 0x58973EB2: push eax
        __asm _emit 0x50
        // 0x58973EB3: push ecx
        __asm _emit 0x51
        // 0x58973EB4: push esi
        __asm _emit 0x56
        // 0x58973EB5: lea edx, [ebx + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x0E
        // 0x58973EB8: push edi
        __asm _emit 0x57
        // 0x58973EB9: push edx
        __asm _emit 0x52
        // 0x58973EBA: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973EBC: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58973EC0: call 0x58974010
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973EC5: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58973EC7: je 0x58973f50
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973ECD: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58973ED1: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58973ED4: jle 0x58973ef3
        __asm _emit 0x7E
        __asm _emit 0x1D
        // 0x58973ED6: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58973ED9: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58973EDD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58973EDF: push ecx
        __asm _emit 0x51
        // 0x58973EE0: push edx
        __asm _emit 0x52
        // 0x58973EE1: push esi
        __asm _emit 0x56
        // 0x58973EE2: lea eax, [eax + ebx + 6]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x18
        __asm _emit 0x06
        // 0x58973EE6: push edi
        __asm _emit 0x57
        // 0x58973EE7: push eax
        __asm _emit 0x50
        // 0x58973EE8: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973EEA: call 0x58974010
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973EEF: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58973EF1: je 0x58973f50
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x58973EF3: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58973EF6: fld dword ptr [ecx + 0xa8]
        __asm _emit 0xD9
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973EFC: fcomp dword ptr [0x589a3054]
        __asm _emit 0xD8
        __asm _emit 0x1D
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58973F02: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x58973F04: test ah, 0x40
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x58973F07: jne 0x58973f21
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58973F09: fild dword ptr [ebp + 0x104]
        __asm _emit 0xDB
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973F0F: fmul dword ptr [ecx + 0xb0]
        __asm _emit 0xD8
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973F15: fdiv dword ptr [ecx + 0xa8]
        __asm _emit 0xD8
        __asm _emit 0xB1
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973F1B: fstp dword ptr [ecx + 0x8c]
        __asm _emit 0xD9
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973F21: pop edi
        __asm _emit 0x5F
        // 0x58973F22: pop esi
        __asm _emit 0x5E
        // 0x58973F23: pop ebp
        __asm _emit 0x5D
        // 0x58973F24: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58973F26: pop ebx
        __asm _emit 0x5B
        // 0x58973F27: pop ecx
        __asm _emit 0x59
        // 0x58973F28: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58973F2B: lea edx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58973F2E: mov edi, 0x589ce7d8
        __asm _emit 0xBF
        __asm _emit 0xD8
        __asm _emit 0xE7
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973F33: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58973F36: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973F38: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58973F3A: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58973F3C: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58973F3E: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973F40: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58973F42: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58973F44: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58973F47: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58973F49: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58973F4B: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58973F4E: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58973F50: pop edi
        __asm _emit 0x5F
        // 0x58973F51: pop esi
        __asm _emit 0x5E
        // 0x58973F52: pop ebp
        __asm _emit 0x5D
        // 0x58973F53: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973F55: pop ebx
        __asm _emit 0x5B
        // 0x58973F56: pop ecx
        __asm _emit 0x59
        // 0x58973F57: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
