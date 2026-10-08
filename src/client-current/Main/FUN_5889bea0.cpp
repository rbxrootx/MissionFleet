// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 462 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889bea0.

// Ghidra body range 0x5889BEA0..0x5889C06E; 462 mapped bytes.
extern "C" __declspec(naked) void FUN_5889bea0_segment_00() {
    __asm {
        // 0x5889BEA0: push ebx
        __asm _emit 0x53
        // 0x5889BEA1: push ebp
        __asm _emit 0x55
        // 0x5889BEA2: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5889BEA4: movzx eax, byte ptr [ebp + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BEAB: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x5889BEAE: push esi
        __asm _emit 0x56
        // 0x5889BEAF: push edi
        __asm _emit 0x57
        // 0x5889BEB0: je 0x5889bf4f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BEB6: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x5889BEB9: jne 0x5889c069
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BEBF: mov ebx, 0xfffff594
        __asm _emit 0xBB
        __asm _emit 0x94
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889BEC4: lea esi, [ebp + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BECA: mov edi, 0x200
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BECF: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889BED1: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889BED4: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889BED7: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BEDD: jle 0x5889bef1
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889BEDF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889BEE1: jl 0x5889bef1
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889BEE3: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BEE9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BEEB: je 0x5889bef1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889BEED: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889BEEF: jmp 0x5889bef3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889BEF1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889BEF3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BEF5: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889BEF8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BEFA: je 0x5889bf24
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889BEFC: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889BEFF: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889BF02: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889BF05: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889BF08: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889BF0B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889BF0D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889BF10: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889BF12: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889BF15: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889BF18: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889BF1B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889BF1E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889BF21: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889BF24: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BF26: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889BF28: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BF2D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889BF32: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889BF34: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889BF39: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BF3F: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889BF42: cmp edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BF48: jl 0x5889bed1
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889BF4A: pop edi
        __asm _emit 0x5F
        // 0x5889BF4B: pop esi
        __asm _emit 0x5E
        // 0x5889BF4C: pop ebp
        __asm _emit 0x5D
        // 0x5889BF4D: pop ebx
        __asm _emit 0x5B
        // 0x5889BF4E: ret
        __asm _emit 0xC3
        // 0x5889BF4F: mov ebx, 0xfffff69c
        __asm _emit 0xBB
        __asm _emit 0x9C
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889BF54: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BF5A: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BF5F: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889BF61: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889BF64: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889BF67: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BF6D: jle 0x5889bf81
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889BF6F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889BF71: jl 0x5889bf81
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889BF73: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BF79: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BF7B: je 0x5889bf81
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889BF7D: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889BF7F: jmp 0x5889bf83
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889BF81: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889BF83: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BF85: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889BF88: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BF8A: je 0x5889bfb4
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889BF8C: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889BF8F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889BF92: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889BF95: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889BF98: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889BF9B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889BF9D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889BFA0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889BFA2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889BFA5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889BFA8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889BFAB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889BFAE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889BFB1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889BFB4: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BFB6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889BFB8: push 0x82
        __asm _emit 0x68
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BFBD: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889BFC2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889BFC4: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889BFC9: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BFCF: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889BFD2: cmp edi, 0x600
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BFD8: jl 0x5889bf61
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889BFDA: mov ebx, 0xfffff595
        __asm _emit 0xBB
        __asm _emit 0x95
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889BFDF: lea esi, [ebp + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BFE5: mov edi, 0x240
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BFEA: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889BFEC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889BFF0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889BFF3: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889BFF6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BFFC: jle 0x5889c010
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889BFFE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C000: jl 0x5889c010
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C002: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C008: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C00A: je 0x5889c010
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C00C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C00E: jmp 0x5889c012
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C010: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C012: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C014: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889C017: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C019: je 0x5889c043
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889C01B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889C01E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889C021: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889C024: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889C027: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889C02A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889C02C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889C02F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889C031: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889C034: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889C037: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889C03A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889C03D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889C040: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889C043: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C045: push 0x21
        __asm _emit 0x6A
        __asm _emit 0x21
        // 0x5889C047: push 0xf4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C04C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C051: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C053: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C058: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C05E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C061: cmp edi, 0x440
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C067: jl 0x5889bff0
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889C069: pop edi
        __asm _emit 0x5F
        // 0x5889C06A: pop esi
        __asm _emit 0x5E
        // 0x5889C06B: pop ebp
        __asm _emit 0x5D
        // 0x5889C06C: pop ebx
        __asm _emit 0x5B
        // 0x5889C06D: ret
        __asm _emit 0xC3
    }
}
