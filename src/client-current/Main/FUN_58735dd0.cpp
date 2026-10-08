// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 135 bytes in 1 exact ranges.
// Source symbol alias: FUN_58735dd0.

// Ghidra body range 0x58735DD0..0x58735E57; 135 mapped bytes.
extern "C" __declspec(naked) void FUN_58735dd0_segment_00() {
    __asm {
        // 0x58735DD0: push ebx
        __asm _emit 0x53
        // 0x58735DD1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58735DD5: lea edx, [ebx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735DDC: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x58735DDE: push esi
        __asm _emit 0x56
        // 0x58735DDF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735DE1: cmp dword ptr [ecx + edx*8 + 0x64], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0xD1
        __asm _emit 0x64
        // 0x58735DE5: lea esi, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xD1
        // 0x58735DE8: push edi
        __asm _emit 0x57
        // 0x58735DE9: jle 0x58735e03
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58735DEB: mov edi, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x58735DEE: push ebp
        __asm _emit 0x55
        // 0x58735DEF: mov ebp, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x64
        // 0x58735DF2: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58735DF4: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58735DF6: jbe 0x58735dfa
        __asm _emit 0x76
        __asm _emit 0x02
        // 0x58735DF8: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58735DFA: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58735DFD: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58735E00: jne 0x58735df2
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58735E02: pop ebp
        __asm _emit 0x5D
        // 0x58735E03: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58735E05: imul edi, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF8
        // 0x58735E08: lea edx, [ebx + 2]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x02
        // 0x58735E0B: lea ebx, [edx*8]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735E12: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x58735E14: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58735E17: mov dword ptr [ecx + ebx*8], edi
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0xD9
        // 0x58735E1A: lea ecx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC0
        // 0x58735E1D: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x58735E22: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x58735E24: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x58735E27: cmp dword ptr [esi + 0x6c], edx
        __asm _emit 0x39
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x58735E2A: jbe 0x58735e51
        __asm _emit 0x76
        __asm _emit 0x25
        // 0x58735E2C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735E2E: cmp dword ptr [esi + 0x64], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58735E31: jle 0x58735e51
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58735E33: mov edi, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x58735E36: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58735E38: cmp dword ptr [ecx], edx
        __asm _emit 0x39
        __asm _emit 0x11
        // 0x58735E3A: jae 0x58735e4b
        __asm _emit 0x73
        __asm _emit 0x0F
        // 0x58735E3C: inc eax
        __asm _emit 0x40
        // 0x58735E3D: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58735E40: cmp eax, dword ptr [esi + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58735E43: jl 0x58735e38
        __asm _emit 0x7C
        __asm _emit 0xF3
        // 0x58735E45: pop edi
        __asm _emit 0x5F
        // 0x58735E46: pop esi
        __asm _emit 0x5E
        // 0x58735E47: pop ebx
        __asm _emit 0x5B
        // 0x58735E48: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58735E4B: mov edx, dword ptr [edi + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x87
        // 0x58735E4E: mov dword ptr [esi + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x58735E51: pop edi
        __asm _emit 0x5F
        // 0x58735E52: pop esi
        __asm _emit 0x5E
        // 0x58735E53: pop ebx
        __asm _emit 0x5B
        // 0x58735E54: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
