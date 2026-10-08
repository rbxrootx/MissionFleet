// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 611 bytes in 1 exact ranges.
// Source symbol alias: FUN_58732bf0.

// Ghidra body range 0x58732BF0..0x58732E53; 611 mapped bytes.
extern "C" __declspec(naked) void FUN_58732bf0_segment_00() {
    __asm {
        // 0x58732BF0: push esi
        __asm _emit 0x56
        // 0x58732BF1: push edi
        __asm _emit 0x57
        // 0x58732BF2: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58732BF4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58732BF6: call 0x58731d30
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732BFB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58732BFD: call 0x587312d0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732C02: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732C07: cmp dword ptr [eax + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58732C0E: jle 0x58732c24
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732C10: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732C17: je 0x58732c24
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732C19: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732C1F: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58732C22: jmp 0x58732c26
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732C24: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732C26: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732C2C: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732C2F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732C31: je 0x58732c5b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732C33: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732C36: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732C39: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732C3C: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732C3F: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732C42: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732C44: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732C47: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732C49: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732C4C: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732C4F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732C52: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732C55: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732C58: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732C5B: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732C61: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732C66: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732C6B: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732C70: cmp dword ptr [eax + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58732C77: jle 0x58732c8d
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732C79: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732C80: je 0x58732c8d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732C82: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732C88: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732C8B: jmp 0x58732c8f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732C8D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732C8F: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732C95: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732C98: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732C9A: je 0x58732cc4
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732C9C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732C9F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732CA2: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732CA5: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732CA8: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732CAB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732CAD: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732CB0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732CB2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732CB5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732CB8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732CBB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732CBE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732CC1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732CC4: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732CCA: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732CCF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58732CD3: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732CD9: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732CDE: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58732CE3: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732CE8: cmp dword ptr [eax + 0x164], 4
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58732CEF: jle 0x58732d05
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732CF1: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732CF8: je 0x58732d05
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732CFA: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732D00: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58732D03: jmp 0x58732d07
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732D05: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732D07: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732D0D: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732D10: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732D12: je 0x58732d3c
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732D14: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732D17: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732D1A: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732D1D: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732D20: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732D23: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732D25: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732D28: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732D2A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732D2D: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732D30: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732D33: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732D36: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732D39: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732D3C: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732D42: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732D47: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58732D4C: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732D51: cmp dword ptr [eax + 0x164], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58732D58: jle 0x58732d6e
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732D5A: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732D61: je 0x58732d6e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732D63: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732D69: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x58732D6C: jmp 0x58732d70
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732D6E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732D70: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732D76: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732D79: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732D7B: je 0x58732da5
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732D7D: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732D80: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732D83: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732D86: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732D89: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732D8C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732D8E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732D91: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732D93: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732D96: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732D99: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732D9C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732D9F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732DA2: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732DA5: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732DAB: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732DB0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58732DB5: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732DBB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58732DBD: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58732DC2: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732DC8: push 0x5898c894
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0xC8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732DCD: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58732DCF: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58732DD2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58732DD5: push eax
        __asm _emit 0x50
        // 0x58732DD6: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732DDB: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58732DDE: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x58732DE1: push ecx
        __asm _emit 0x51
        // 0x58732DE2: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58732DE5: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x04
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732DEA: push 0x5898c870
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xC8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732DEF: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58732DF1: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58732DF4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58732DF7: push eax
        __asm _emit 0x50
        // 0x58732DF8: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732DFD: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58732E00: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58732E03: add edx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x46
        // 0x58732E06: push edx
        __asm _emit 0x52
        // 0x58732E07: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732E0C: push 0x5898c84c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0xC8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732E11: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58732E13: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58732E16: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58732E19: push eax
        __asm _emit 0x50
        // 0x58732E1A: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732E1F: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58732E22: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58732E25: add eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x46
        // 0x58732E28: push eax
        __asm _emit 0x50
        // 0x58732E29: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x04
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732E2E: push 0x5898c828
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xC8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732E33: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58732E35: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58732E38: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58732E3B: push eax
        __asm _emit 0x50
        // 0x58732E3C: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732E41: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58732E44: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x58732E47: push ecx
        __asm _emit 0x51
        // 0x58732E48: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58732E4B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732E50: pop edi
        __asm _emit 0x5F
        // 0x58732E51: pop esi
        __asm _emit 0x5E
        // 0x58732E52: ret
        __asm _emit 0xC3
    }
}
