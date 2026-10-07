// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 200 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a6dc0.

// Ghidra body range 0x587A6DC0..0x587A6E88; 200 mapped bytes.
extern "C" __declspec(naked) void FUN_587a6dc0_segment_00() {
    __asm {
        // 0x587A6DC0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587A6DC3: cmp byte ptr [esp + 0xc], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587A6DC8: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A6DCD: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0x24
        // 0x587A6DD0: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A6DD3: mov ecx, dword ptr [ecx + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6DD9: push ebp
        __asm _emit 0x55
        // 0x587A6DDA: mov ebp, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x587A6DDD: push edi
        __asm _emit 0x57
        // 0x587A6DDE: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x587A6DE1: je 0x587a6e80
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6DE7: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587A6DEA: cmp dword ptr [edx + 0x141c], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6DF1: mov dword ptr [esp + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6DF9: jle 0x587a6e80
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6DFF: push ebx
        __asm _emit 0x53
        // 0x587A6E00: push esi
        __asm _emit 0x56
        // 0x587A6E01: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A6E03: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A6E07: mov ecx, dword ptr [ecx + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB1
        __asm _emit 0x08
        // 0x587A6E0B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A6E0D: je 0x587a6e67
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x587A6E0F: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A6E12: mov ebx, dword ptr [eax + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6E18: lea edx, [esi + esi*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xF6
        // 0x587A6E1B: lea edx, [ebx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x93
        // 0x587A6E1E: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x587A6E20: sub ebx, dword ptr [eax + esi*4 + 0x1c9c]
        __asm _emit 0x2B
        __asm _emit 0x9C
        __asm _emit 0xB0
        __asm _emit 0x9C
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6E27: sub ebx, dword ptr [eax + edx*8 + 0x1d20]
        __asm _emit 0x2B
        __asm _emit 0x9C
        __asm _emit 0xD0
        __asm _emit 0x20
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6E2E: mov eax, dword ptr [eax + edx*8 + 0x1d1c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xD0
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6E35: push ebx
        __asm _emit 0x53
        // 0x587A6E36: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587A6E38: push eax
        __asm _emit 0x50
        // 0x587A6E39: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xC4
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A6E3E: test byte ptr [esp + 0x1c], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x587A6E43: je 0x587a6e62
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587A6E45: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A6E4B: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A6E4E: mov eax, dword ptr [edx + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6E54: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A6E58: mov ecx, dword ptr [ecx + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB1
        __asm _emit 0x08
        // 0x587A6E5C: push eax
        __asm _emit 0x50
        // 0x587A6E5D: call 0x587b1a40
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6E62: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A6E67: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A6E6B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587A6E6E: inc ecx
        __asm _emit 0x41
        // 0x587A6E6F: movzx esi, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF1
        // 0x587A6E72: cmp esi, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6E78: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A6E7C: jl 0x587a6e03
        __asm _emit 0x7C
        __asm _emit 0x85
        // 0x587A6E7E: pop esi
        __asm _emit 0x5E
        // 0x587A6E7F: pop ebx
        __asm _emit 0x5B
        // 0x587A6E80: pop edi
        __asm _emit 0x5F
        // 0x587A6E81: pop ebp
        __asm _emit 0x5D
        // 0x587A6E82: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A6E85: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
