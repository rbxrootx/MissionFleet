// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 209 bytes in 1 exact ranges.
// Source symbol alias: FUN_58773730.

// Ghidra body range 0x58773730..0x58773801; 209 mapped bytes.
extern "C" __declspec(naked) void FUN_58773730_segment_00() {
    __asm {
        // 0x58773730: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58773733: push ebx
        __asm _emit 0x53
        // 0x58773734: push ebp
        __asm _emit 0x55
        // 0x58773735: push esi
        __asm _emit 0x56
        // 0x58773736: push edi
        __asm _emit 0x57
        // 0x58773737: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58773739: mov ebx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x5877373C: mov esi, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x5877373F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773741: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58773743: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58773748: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5877374A: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5877374C: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x5877374F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58773751: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58773754: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58773756: jne 0x5877375c
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58773758: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5877375A: jmp 0x58773791
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x5877375C: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5877375E: jbe 0x58773765
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58773760: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773765: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58773769: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5877376B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877376D: je 0x58773773
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5877376F: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58773771: je 0x58773778
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58773773: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773778: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877377C: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x5877377E: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58773783: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58773785: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58773787: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x5877378A: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5877378C: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x5877378F: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58773791: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58773795: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58773799: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877379D: push ecx
        __asm _emit 0x51
        // 0x5877379E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587737A0: push edx
        __asm _emit 0x52
        // 0x587737A1: push eax
        __asm _emit 0x50
        // 0x587737A2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587737A4: call 0x58773360
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587737A9: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587737AC: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x587737AF: jbe 0x587737b6
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587737B1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587737B6: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587737B8: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x587737BA: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587737BE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587737C0: jne 0x587737de
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587737C2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587737C7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587737C9: imul esi, esi, 0x118
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587737CF: add esi, ebx
        __asm _emit 0x03
        __asm _emit 0xF3
        // 0x587737D1: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587737D4: ja 0x587737e9
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x587737D6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587737D8: je 0x587737e2
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587737DA: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587737DC: jmp 0x587737e4
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587737DE: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587737E0: jmp 0x587737c9
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x587737E2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587737E4: cmp esi, dword ptr [edi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x587737E7: jae 0x587737ee
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x587737E9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587737EE: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587737F2: pop edi
        __asm _emit 0x5F
        // 0x587737F3: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587737F6: pop esi
        __asm _emit 0x5E
        // 0x587737F7: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x587737F9: pop ebp
        __asm _emit 0x5D
        // 0x587737FA: pop ebx
        __asm _emit 0x5B
        // 0x587737FB: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587737FE: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
