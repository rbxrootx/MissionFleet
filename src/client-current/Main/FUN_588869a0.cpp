// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 309 bytes in 1 exact ranges.
// Source symbol alias: FUN_588869a0.

// Ghidra body range 0x588869A0..0x58886AD5; 309 mapped bytes.
extern "C" __declspec(naked) void FUN_588869a0_segment_00() {
    __asm {
        // 0x588869A0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588869A3: push ebx
        __asm _emit 0x53
        // 0x588869A4: push ebp
        __asm _emit 0x55
        // 0x588869A5: push esi
        __asm _emit 0x56
        // 0x588869A6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588869A8: mov ebp, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588869AE: cmp dword ptr [esi + 0xa4], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588869B4: push edi
        __asm _emit 0x57
        // 0x588869B5: lea edi, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588869BB: jbe 0x588869c2
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588869BD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x62
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588869C2: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x588869C5: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588869C7: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588869CB: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x588869CE: jbe 0x588869d5
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588869D0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x62
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588869D5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588869D9: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588869DB: push ebp
        __asm _emit 0x55
        // 0x588869DC: push ecx
        __asm _emit 0x51
        // 0x588869DD: push ebx
        __asm _emit 0x53
        // 0x588869DE: push eax
        __asm _emit 0x50
        // 0x588869DF: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588869E3: push edx
        __asm _emit 0x52
        // 0x588869E4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588869E6: call 0x58880d00
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xA3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588869EB: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588869F1: sub ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588869F7: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x588869FC: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588869FE: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58886A01: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58886A03: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58886A06: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58886A08: je 0x58886a8c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886A0E: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886A14: sub ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886A1A: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58886A1F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58886A21: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58886A24: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58886A26: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58886A29: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58886A2B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58886A2D: je 0x58886a8c
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x58886A2F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58886A31: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886A37: sub ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886A3D: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58886A42: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58886A44: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58886A47: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58886A49: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58886A4C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58886A4E: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58886A50: jb 0x58886a57
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58886A52: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x62
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58886A57: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886A5D: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x58886A5F: push ecx
        __asm _emit 0x51
        // 0x58886A60: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58886A62: call 0x58886870
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886A67: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886A6D: sub ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886A73: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58886A78: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58886A7A: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58886A7D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58886A7F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58886A82: inc ebx
        __asm _emit 0x43
        // 0x58886A83: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58886A85: add ebp, 0x22
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x22
        // 0x58886A88: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58886A8A: jb 0x58886a31
        __asm _emit 0x72
        __asm _emit 0xA5
        // 0x58886A8C: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58886A90: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58886A92: jbe 0x58886aa8
        __asm _emit 0x76
        __asm _emit 0x14
        // 0x58886A94: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58886A98: push ebx
        __asm _emit 0x53
        // 0x58886A99: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58886A9B: call 0x58886870
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886AA0: add ebx, 0x22
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x22
        // 0x58886AA3: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58886AA6: jne 0x58886a98
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58886AA8: movzx ecx, word ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58886AAC: push ecx
        __asm _emit 0x51
        // 0x58886AAD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58886AAF: mov dword ptr [esi + 0x70], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886AB6: call 0x5887cfb0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886ABB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58886ABD: call 0x58880df0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xA3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886AC2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58886AC4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58886AC6: call 0x5887bee0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886ACB: pop edi
        __asm _emit 0x5F
        // 0x58886ACC: pop esi
        __asm _emit 0x5E
        // 0x58886ACD: pop ebp
        __asm _emit 0x5D
        // 0x58886ACE: pop ebx
        __asm _emit 0x5B
        // 0x58886ACF: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58886AD2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
