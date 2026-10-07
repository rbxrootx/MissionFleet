// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 405 bytes in 1 exact ranges.
// Source symbol alias: FUN_58777f30.

// Ghidra body range 0x58777F30..0x587780C5; 405 mapped bytes.
extern "C" __declspec(naked) void FUN_58777f30_segment_00() {
    __asm {
        // 0x58777F30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58777F32: push 0x5897f27b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0xF2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58777F37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777F3D: push eax
        __asm _emit 0x50
        // 0x58777F3E: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58777F41: push ebx
        __asm _emit 0x53
        // 0x58777F42: push ebp
        __asm _emit 0x55
        // 0x58777F43: push esi
        __asm _emit 0x56
        // 0x58777F44: push edi
        __asm _emit 0x57
        // 0x58777F45: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58777F4A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58777F4C: push eax
        __asm _emit 0x50
        // 0x58777F4D: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58777F51: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777F57: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58777F59: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58777F5D: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777F63: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58777F69: push eax
        __asm _emit 0x50
        // 0x58777F6A: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x6E
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58777F6F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58777F71: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58777F74: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58777F76: je 0x58777f92
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58777F78: lea ecx, [eax + 0x14c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777F7E: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58777F81: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x58777F84: sub eax, dword ptr [ecx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58777F87: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58777F8A: mov byte ptr [esi + 0xb4], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777F90: jmp 0x58777f95
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58777F92: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x58777F95: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58777F97: call 0x587774a0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777F9C: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58777F9F: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58777FA3: cmp dword ptr [eax + 0x68], ebp
        __asm _emit 0x39
        __asm _emit 0x68
        __asm _emit 0x68
        // 0x58777FA6: jbe 0x58778051
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777FAC: lea ebx, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x58777FAF: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x58777FB1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x4C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777FB6: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58777FB8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58777FBB: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777FBF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777FC1: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58777FC5: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58777FC7: je 0x58777fe7
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58777FC9: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58777FCC: push ebp
        __asm _emit 0x55
        // 0x58777FCD: lea ecx, [eax + 0x164]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777FD3: call 0x58777810
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777FD8: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58777FDC: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58777FDE: push ecx
        __asm _emit 0x51
        // 0x58777FDF: push eax
        __asm _emit 0x50
        // 0x58777FE0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58777FE2: call 0x58735650
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xD6
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58777FE7: mov edx, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x0C
        // 0x58777FEA: mov dword ptr [esp + 0x2c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777FF2: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777FF6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58777FF8: jne 0x58777ffe
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58777FFA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58777FFC: jmp 0x58778006
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58777FFE: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x58778001: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58778003: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58778006: mov edi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x58778009: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x5877800B: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x5877800D: sar ebp, 2
        __asm _emit 0xC1
        __asm _emit 0xFD
        __asm _emit 0x02
        // 0x58778010: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x58778012: jae 0x5877801e
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x58778014: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58778016: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58778019: mov dword ptr [ebx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x5877801C: jmp 0x5877803c
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5877801E: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58778020: jbe 0x58778027
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58778022: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x4C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58778027: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58778029: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877802D: push edx
        __asm _emit 0x52
        // 0x5877802E: push edi
        __asm _emit 0x57
        // 0x5877802F: push eax
        __asm _emit 0x50
        // 0x58778030: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58778034: push eax
        __asm _emit 0x50
        // 0x58778035: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58778037: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5877803C: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58778040: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x58778043: inc ebp
        __asm _emit 0x45
        // 0x58778044: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58778048: cmp ebp, dword ptr [ecx + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x69
        __asm _emit 0x68
        // 0x5877804B: jb 0x58777faf
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58778051: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58778054: mov edx, dword ptr [eax + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877805A: mov dword ptr [esi + 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778060: mov ecx, dword ptr [eax + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778066: mov dword ptr [esi + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877806C: mov edx, dword ptr [eax + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778072: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778077: lea ecx, [esi + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5877807A: mov dword ptr [esi + 0x90], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778080: call 0x58777710
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58778085: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58778088: mov dword ptr [esi + 0x94], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778092: cmp dword ptr [eax + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778099: je 0x587780af
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5877809B: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587780A1: push eax
        __asm _emit 0x50
        // 0x587780A2: call 0x587a8e00
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x0D
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587780A7: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x587780AA: call 0x587ab4d0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587780AF: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587780B3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587780BA: pop ecx
        __asm _emit 0x59
        // 0x587780BB: pop edi
        __asm _emit 0x5F
        // 0x587780BC: pop esi
        __asm _emit 0x5E
        // 0x587780BD: pop ebp
        __asm _emit 0x5D
        // 0x587780BE: pop ebx
        __asm _emit 0x5B
        // 0x587780BF: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587780C2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
