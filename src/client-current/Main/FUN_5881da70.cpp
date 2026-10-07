// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 200 bytes in 1 exact ranges.
// Source symbol alias: FUN_5881da70.

// Ghidra body range 0x5881DA70..0x5881DB38; 200 mapped bytes.
extern "C" __declspec(naked) void FUN_5881da70_segment_00() {
    __asm {
        // 0x5881DA70: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5881DA73: push ebx
        __asm _emit 0x53
        // 0x5881DA74: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5881DA76: lea eax, [ebx + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DA7C: push eax
        __asm _emit 0x50
        // 0x5881DA7D: mov dword ptr [esp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5881DA81: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5881DA85: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881DA8B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881DA8D: je 0x5881db33
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DA93: push ebp
        __asm _emit 0x55
        // 0x5881DA94: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881DA9A: push esi
        __asm _emit 0x56
        // 0x5881DA9B: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5881DA9D: add ebx, 0xfc
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DAA3: push edi
        __asm _emit 0x57
        // 0x5881DAA4: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x5881DAA6: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5881DAAA: push eax
        __asm _emit 0x50
        // 0x5881DAAB: push edi
        __asm _emit 0x57
        // 0x5881DAAC: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5881DAAE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881DAB0: je 0x5881dabe
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5881DAB2: inc esi
        __asm _emit 0x46
        // 0x5881DAB3: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x18
        // 0x5881DAB6: cmp esi, 0x80
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DABC: jl 0x5881daa6
        __asm _emit 0x7C
        __asm _emit 0xE8
        // 0x5881DABE: cmp esi, 0x80
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DAC4: jne 0x5881db12
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x5881DAC6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5881DAC8: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5881DACA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DAD0: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x5881DAD3: je 0x5881dae3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881DAD5: inc esi
        __asm _emit 0x46
        // 0x5881DAD6: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5881DAD9: cmp esi, 0x80
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DADF: jl 0x5881dad0
        __asm _emit 0x7C
        __asm _emit 0xEF
        // 0x5881DAE1: jmp 0x5881dafd
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x5881DAE3: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5881DAE7: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5881DAEB: push ecx
        __asm _emit 0x51
        // 0x5881DAEC: lea edx, [esi + esi*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x76
        // 0x5881DAEF: lea ecx, [eax + edx*8 + 0xfc]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0xD0
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DAF6: push ecx
        __asm _emit 0x51
        // 0x5881DAF7: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881DAFD: cmp esi, 0x80
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DB03: jne 0x5881db29
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5881DB05: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DB07: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DB09: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DB0B: push 0x1cd
        __asm _emit 0x68
        __asm _emit 0xCD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DB10: jmp 0x5881db1d
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5881DB12: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DB14: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DB16: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DB18: push 0x1cc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DB1D: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xDF
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881DB22: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881DB24: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x72
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881DB29: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5881DB2D: pop edi
        __asm _emit 0x5F
        // 0x5881DB2E: pop esi
        __asm _emit 0x5E
        // 0x5881DB2F: mov byte ptr [edx], 0
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5881DB32: pop ebp
        __asm _emit 0x5D
        // 0x5881DB33: pop ebx
        __asm _emit 0x5B
        // 0x5881DB34: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5881DB37: ret
        __asm _emit 0xC3
    }
}
