// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 268 bytes in 1 exact ranges.
// Source symbol alias: FUN_58974cf0.

// Ghidra body range 0x58974CF0..0x58974DFC; 268 mapped bytes.
extern "C" __declspec(naked) void FUN_58974cf0_segment_00() {
    __asm {
        // 0x58974CF0: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58974CF3: push ebx
        __asm _emit 0x53
        // 0x58974CF4: push ebp
        __asm _emit 0x55
        // 0x58974CF5: push esi
        __asm _emit 0x56
        // 0x58974CF6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58974CF8: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58974CFA: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58974CFC: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974D02: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58974D04: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58974D06: push edi
        __asm _emit 0x57
        // 0x58974D07: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58974D09: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58974D0D: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58974D11: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58974D15: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58974D19: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974D1D: jle 0x58974d96
        __asm _emit 0x7E
        __asm _emit 0x77
        // 0x58974D1F: lea edi, [esi + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974D25: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58974D28: cmp eax, 0xe1
        __asm _emit 0x3D
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974D2D: jne 0x58974d47
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58974D2F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58974D31: jne 0x58974d47
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58974D33: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58974D35: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58974D37: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58974D3B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58974D3E: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58974D42: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58974D45: jmp 0x58974d78
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x58974D47: cmp eax, 0xfe
        __asm _emit 0x3D
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974D4C: jne 0x58974d66
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58974D4E: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58974D50: jne 0x58974d66
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58974D52: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58974D54: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58974D56: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58974D5A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58974D5D: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58974D61: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58974D64: jmp 0x58974d78
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58974D66: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58974D68: push eax
        __asm _emit 0x50
        // 0x58974D69: call dword ptr [0x5898c2ac]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xAC
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58974D6F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58974D72: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974D78: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974D7C: mov ecx, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974D82: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58974D86: inc eax
        __asm _emit 0x40
        // 0x58974D87: add edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x0C
        // 0x58974D8A: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58974D8C: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58974D90: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974D94: jl 0x58974d25
        __asm _emit 0x7C
        __asm _emit 0x8F
        // 0x58974D96: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58974D98: mov dword ptr [esi + 0x1fc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974DA2: je 0x58974dc7
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58974DA4: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58974DA8: lea eax, [esi + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974DAE: mov dword ptr [esi + 0x10c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974DB4: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58974DB7: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58974DBA: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974DC0: inc eax
        __asm _emit 0x40
        // 0x58974DC1: mov dword ptr [esi + 0x1fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974DC7: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58974DC9: je 0x58974df4
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58974DCB: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974DD1: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x58974DD4: lea eax, [esi + ecx*4 + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974DDB: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58974DDF: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58974DE1: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58974DE4: mov dword ptr [eax + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58974DE7: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974DED: inc eax
        __asm _emit 0x40
        // 0x58974DEE: mov dword ptr [esi + 0x1fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974DF4: pop edi
        __asm _emit 0x5F
        // 0x58974DF5: pop esi
        __asm _emit 0x5E
        // 0x58974DF6: pop ebp
        __asm _emit 0x5D
        // 0x58974DF7: pop ebx
        __asm _emit 0x5B
        // 0x58974DF8: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58974DFB: ret
        __asm _emit 0xC3
    }
}
