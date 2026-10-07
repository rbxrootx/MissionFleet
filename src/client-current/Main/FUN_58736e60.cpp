// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 209 bytes in 1 exact ranges.
// Source symbol alias: FUN_58736e60.

// Ghidra body range 0x58736E60..0x58736F31; 209 mapped bytes.
extern "C" __declspec(naked) void FUN_58736e60_segment_00() {
    __asm {
        // 0x58736E60: movzx edx, byte ptr [ecx + 0x244]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736E67: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58736E6B: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58736E6D: jge 0x58736e71
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58736E6F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58736E71: push ebx
        __asm _emit 0x53
        // 0x58736E72: push esi
        __asm _emit 0x56
        // 0x58736E73: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58736E75: jle 0x58736f20
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736E7B: movzx esi, byte ptr [ecx + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736E82: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58736E86: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58736E88: jge 0x58736f20
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736E8E: lea esi, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x92
        // 0x58736E91: cmp byte ptr [ecx + esi*4 + 0x109], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0xB1
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736E99: lea ebx, [ecx + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0xB1
        // 0x58736E9C: jne 0x58736f20
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736EA2: push edi
        __asm _emit 0x57
        // 0x58736EA3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58736EA5: cmp edx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x1C
        // 0x58736EA8: je 0x58736eaf
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58736EAA: cmp edx, 0x1d
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x1D
        // 0x58736EAD: jne 0x58736eb4
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58736EAF: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736EB4: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x58736EB7: jg 0x58736eee
        __asm _emit 0x7F
        __asm _emit 0x35
        // 0x58736EB9: movzx edx, byte ptr [ebx + 0x108]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736EC0: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58736EC3: lea edx, [esi + edx*4 + 0xe7a]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x96
        __asm _emit 0x7A
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736ECA: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736ECF: sub esi, edi
        __asm _emit 0x2B
        __asm _emit 0xF7
        // 0x58736ED1: movzx edi, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x3A
        // 0x58736ED4: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736EDA: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58736EDC: jge 0x58736ee6
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58736EDE: movzx eax, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x02
        // 0x58736EE1: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736EE6: sub edx, 2
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x58736EE9: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58736EEC: jne 0x58736ed1
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x58736EEE: pop edi
        __asm _emit 0x5F
        // 0x58736EEF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58736EF1: jle 0x58736f2a
        __asm _emit 0x7E
        __asm _emit 0x37
        // 0x58736EF3: movzx edx, byte ptr [ebx + 0x108]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736EFA: mov byte ptr [ebx + 0x109], al
        __asm _emit 0x88
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736F00: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58736F03: mov edx, dword ptr [esi + edx*4 + 0xef8]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736F0A: movzx edx, word ptr [edx + 0xb0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736F11: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x58736F14: mov dword ptr [ebx + 0x10c], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736F1A: sub byte ptr [ecx + 0x244], al
        __asm _emit 0x28
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736F20: pop esi
        __asm _emit 0x5E
        // 0x58736F21: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736F26: pop ebx
        __asm _emit 0x5B
        // 0x58736F27: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58736F2A: pop esi
        __asm _emit 0x5E
        // 0x58736F2B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58736F2D: pop ebx
        __asm _emit 0x5B
        // 0x58736F2E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
