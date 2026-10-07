// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 165 bytes in 1 exact ranges.
// Source symbol alias: FUN_587352b0.

// Ghidra body range 0x587352B0..0x58735355; 165 mapped bytes.
extern "C" __declspec(naked) void FUN_587352b0_segment_00() {
    __asm {
        // 0x587352B0: push ebx
        __asm _emit 0x53
        // 0x587352B1: push ebp
        __asm _emit 0x55
        // 0x587352B2: push esi
        __asm _emit 0x56
        // 0x587352B3: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587352B5: push edi
        __asm _emit 0x57
        // 0x587352B6: mov edi, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x18
        // 0x587352B9: cmp edi, dword ptr [ebp + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x587352BC: jbe 0x587352c3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587352BE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587352C3: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587352C6: mov ebx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x1C
        // 0x587352C9: cmp dword ptr [ebp + 0x18], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x587352CC: jbe 0x587352d3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587352CE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587352D3: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587352D6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587352D8: je 0x587352de
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587352DA: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587352DC: je 0x587352e3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587352DE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587352E3: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587352E5: je 0x5873534c
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x587352E7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587352E9: jne 0x58735324
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x587352EB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587352F0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587352F2: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587352F5: jb 0x587352fc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587352F7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587352FC: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587352FE: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58735301: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58735305: cmp dword ptr [ecx + 0x68], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x68
        // 0x58735308: je 0x5873532c
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5873530A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5873530C: jne 0x58735328
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5873530E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58735313: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735315: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58735318: jb 0x5873531f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5873531A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873531F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58735322: jmp 0x587352c6
        __asm _emit 0xEB
        __asm _emit 0xA2
        // 0x58735324: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58735326: jmp 0x587352f2
        __asm _emit 0xEB
        __asm _emit 0xCA
        // 0x58735328: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5873532A: jmp 0x58735315
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5873532C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5873532E: jne 0x58735348
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58735330: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58735335: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58735338: jb 0x5873533f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5873533A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873533F: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58735341: pop edi
        __asm _emit 0x5F
        // 0x58735342: pop esi
        __asm _emit 0x5E
        // 0x58735343: pop ebp
        __asm _emit 0x5D
        // 0x58735344: pop ebx
        __asm _emit 0x5B
        // 0x58735345: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58735348: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5873534A: jmp 0x58735335
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5873534C: pop edi
        __asm _emit 0x5F
        // 0x5873534D: pop esi
        __asm _emit 0x5E
        // 0x5873534E: pop ebp
        __asm _emit 0x5D
        // 0x5873534F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735351: pop ebx
        __asm _emit 0x5B
        // 0x58735352: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
