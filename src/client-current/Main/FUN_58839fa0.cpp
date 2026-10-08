// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 246 bytes in 1 exact ranges.
// Source symbol alias: FUN_58839fa0.

// Ghidra body range 0x58839FA0..0x5883A096; 246 mapped bytes.
extern "C" __declspec(naked) void FUN_58839fa0_segment_00() {
    __asm {
        // 0x58839FA0: cmp word ptr [0x58a0b4a8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x03
        // 0x58839FA8: push esi
        __asm _emit 0x56
        // 0x58839FA9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58839FAB: jne 0x5883a094
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839FB1: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58839FB6: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58839FBC: push edi
        __asm _emit 0x57
        // 0x58839FBD: push eax
        __asm _emit 0x50
        // 0x58839FBE: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xD9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839FC3: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58839FC9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58839FCB: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58839FCE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58839FD0: push edi
        __asm _emit 0x57
        // 0x58839FD1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58839FD3: mov eax, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839FD9: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839FDF: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58839FE1: je 0x58839fe9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58839FE3: cmp dword ptr [ecx + 8], -1
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x58839FE7: jne 0x5883a017
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x58839FE9: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839FEF: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x58839FF2: mov edx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839FF8: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x58839FFB: mov eax, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A001: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5883A004: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A00A: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883A00F: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x7C
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883A014: pop edi
        __asm _emit 0x5F
        // 0x5883A015: pop esi
        __asm _emit 0x5E
        // 0x5883A016: ret
        __asm _emit 0xC3
        // 0x5883A017: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5883A019: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883A01B: je 0x5883a044
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5883A01D: cmp dword ptr [eax + 8], edi
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5883A020: jne 0x5883a044
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x5883A022: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A028: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A02D: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883A030: mov edx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A036: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5883A039: mov eax, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A03F: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5883A042: jmp 0x5883a063
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5883A044: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A04A: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x5883A04D: mov edx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A053: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5883A056: mov eax, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A05C: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A063: mov eax, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A069: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A06F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883A071: je 0x5883a085
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883A073: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5883A076: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A07C: push eax
        __asm _emit 0x50
        // 0x5883A07D: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x7C
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883A082: pop edi
        __asm _emit 0x5F
        // 0x5883A083: pop esi
        __asm _emit 0x5E
        // 0x5883A084: ret
        __asm _emit 0xC3
        // 0x5883A085: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A08B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883A08D: push eax
        __asm _emit 0x50
        // 0x5883A08E: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x7C
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883A093: pop edi
        __asm _emit 0x5F
        // 0x5883A094: pop esi
        __asm _emit 0x5E
        // 0x5883A095: ret
        __asm _emit 0xC3
    }
}
