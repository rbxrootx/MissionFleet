// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 270 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_58835b30.

// Ghidra body range 0x58835B30..0x58835B58; 40 mapped bytes.
extern "C" __declspec(naked) void FUN_58835b30_segment_00() {
    __asm {
        // 0x58835B30: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58835B33: push ebx
        __asm _emit 0x53
        // 0x58835B34: push ebp
        __asm _emit 0x55
        // 0x58835B35: push esi
        __asm _emit 0x56
        // 0x58835B36: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58835B38: push edi
        __asm _emit 0x57
        // 0x58835B39: mov edi, dword ptr [ebp + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835B3F: cmp edi, dword ptr [ebp + 0x1a0]
        __asm _emit 0x3B
        __asm _emit 0xBD
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835B45: jbe 0x58835b4c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58835B47: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835B4C: mov esi, dword ptr [ebp + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835B52: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835B56: jmp 0x58835b60
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x58835B60..0x58835C46; 230 mapped bytes.
extern "C" __declspec(naked) void FUN_58835b30_segment_01() {
    __asm {
        // 0x58835B60: mov ebx, dword ptr [ebp + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835B66: cmp dword ptr [ebp + 0x19c], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835B6C: jbe 0x58835b73
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58835B6E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835B73: mov eax, dword ptr [ebp + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835B79: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58835B7B: je 0x58835b81
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58835B7D: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58835B7F: je 0x58835b86
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58835B81: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835B86: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58835B88: je 0x58835c36
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835B8E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58835B90: jne 0x58835bd0
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x58835B92: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835B97: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58835B99: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58835B9C: jb 0x58835ba3
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58835B9E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835BA3: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58835BA7: lea eax, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x2D
        // 0x58835BAA: push eax
        __asm _emit 0x50
        // 0x58835BAB: push ecx
        __asm _emit 0x51
        // 0x58835BAC: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58835BB2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58835BB4: je 0x58835bd8
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58835BB6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58835BB8: jne 0x58835bd4
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58835BBA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835BBF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58835BC1: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58835BC4: jb 0x58835bcb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58835BC6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835BCB: add edi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x54
        // 0x58835BCE: jmp 0x58835b60
        __asm _emit 0xEB
        __asm _emit 0x90
        // 0x58835BD0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58835BD2: jmp 0x58835b99
        __asm _emit 0xEB
        __asm _emit 0xC5
        // 0x58835BD4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58835BD6: jmp 0x58835bc1
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58835BD8: mov ebx, dword ptr [ebp + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835BDE: lea eax, [edi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x58835BE1: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835BE5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58835BE7: je 0x58835c09
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58835BE9: lea edx, [eax - 0x54]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xAC
        // 0x58835BEC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58835BF0: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58835BF2: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58835BF4: add eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x58835BF7: mov ecx, 0x15
        __asm _emit 0xB9
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835BFC: add edx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x54
        // 0x58835BFF: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58835C01: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58835C03: jne 0x58835bf0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58835C05: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835C09: add dword ptr [ebp + 0x1a0], -0x54
        __asm _emit 0x83
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAC
        // 0x58835C10: mov eax, dword ptr [ebp + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835C16: cmp dword ptr [ebp + 0x19c], edi
        __asm _emit 0x39
        __asm _emit 0xBD
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835C1C: ja 0x58835c22
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x58835C1E: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58835C20: jbe 0x58835c27
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58835C22: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835C27: pop edi
        __asm _emit 0x5F
        // 0x58835C28: pop esi
        __asm _emit 0x5E
        // 0x58835C29: pop ebp
        __asm _emit 0x5D
        // 0x58835C2A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835C2F: pop ebx
        __asm _emit 0x5B
        // 0x58835C30: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58835C33: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58835C36: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835C3A: pop edi
        __asm _emit 0x5F
        // 0x58835C3B: pop esi
        __asm _emit 0x5E
        // 0x58835C3C: pop ebp
        __asm _emit 0x5D
        // 0x58835C3D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58835C3F: pop ebx
        __asm _emit 0x5B
        // 0x58835C40: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58835C43: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
