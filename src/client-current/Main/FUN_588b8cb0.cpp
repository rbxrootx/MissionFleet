// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2140 bytes in 3 exact ranges.
// Source symbol alias: FUN_588b8cb0.

// Ghidra body range 0x588B8CB0..0x588B8D2A; 122 mapped bytes.
extern "C" __declspec(naked) void FUN_588b8cb0_segment_00() {
    __asm {
        // 0x588B8CB0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588B8CB3: push ebx
        __asm _emit 0x53
        // 0x588B8CB4: push ebp
        __asm _emit 0x55
        // 0x588B8CB5: push esi
        __asm _emit 0x56
        // 0x588B8CB6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B8CB8: movzx eax, word ptr [esi + 0x19e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8CBF: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B8CC1: push edi
        __asm _emit 0x57
        // 0x588B8CC2: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B8CC5: jne 0x588b94c6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFB
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8CCB: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B8CCF: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588B8CD2: jne 0x588b944c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8CD8: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B8CDC: cmp eax, dword ptr [esi + 0xb4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8CE2: jne 0x588b9106
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1E
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8CE8: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8CEE: mov eax, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8CF4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B8CF6: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B8CFA: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B8CFE: jle 0x588b8e22
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8D04: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588B8D06: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B8D08: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B8D0C: jle 0x588b8e22
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8D12: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8D18: push ebp
        __asm _emit 0x55
        // 0x588B8D19: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B8D1E: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588B8D21: jne 0x588b8d9c
        __asm _emit 0x75
        __asm _emit 0x79
        // 0x588B8D23: mov ebx, 0x1a4
        __asm _emit 0xBB
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8D28: jmp 0x588b8d30
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588B8D30..0x588B906B; 827 mapped bytes.
extern "C" __declspec(naked) void FUN_588b8cb0_segment_01() {
    __asm {
        // 0x588B8D30: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B8D34: push ecx
        __asm _emit 0x51
        // 0x588B8D35: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8D3B: call 0x588bb220
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8D40: mov ebp, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x03
        // 0x588B8D43: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B8D49: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x588B8D4B: push ebp
        __asm _emit 0x55
        // 0x588B8D4C: shr edi, 0x10
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x10
        // 0x588B8D4F: push edi
        __asm _emit 0x57
        // 0x588B8D50: call 0x58779890
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x0B
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588B8D55: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B8D57: je 0x588b8d83
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588B8D59: cmp dword ptr [eax + 0x554], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588B8D60: je 0x588b8d83
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588B8D62: cmp byte ptr [0x58a24909], 0
        __asm _emit 0x80
        __asm _emit 0x3D
        __asm _emit 0x09
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588B8D69: je 0x588b8e86
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8D6F: cmp di, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x588B8D73: jne 0x588b8e86
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8D79: cmp bp, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0A
        // 0x588B8D7D: je 0x588b8e86
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8D83: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588B8D86: cmp ebx, 0x1c4
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8D8C: jl 0x588b8d30
        __asm _emit 0x7C
        __asm _emit 0xA2
        // 0x588B8D8E: inc dword ptr [esp + 0x24]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B8D92: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B8D96: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B8D9A: jmp 0x588b8e0b
        __asm _emit 0xEB
        __asm _emit 0x6F
        // 0x588B8D9C: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8DA2: push ebp
        __asm _emit 0x55
        // 0x588B8DA3: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xF3
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B8DA8: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588B8DAB: jne 0x588b8e0b
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x588B8DAD: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8DB3: push ebx
        __asm _emit 0x53
        // 0x588B8DB4: call 0x588bcaa0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8DB9: movzx eax, word ptr [eax + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8DC0: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B8DC6: push eax
        __asm _emit 0x50
        // 0x588B8DC7: shr eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x10
        // 0x588B8DCA: push eax
        __asm _emit 0x50
        // 0x588B8DCB: call 0x58779890
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588B8DD0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B8DD2: je 0x588b8de1
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588B8DD4: cmp dword ptr [eax + 0x554], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588B8DDB: jne 0x588b8e86
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8DE1: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B8DE3: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8DE9: push ebx
        __asm _emit 0x53
        // 0x588B8DEA: call 0x588bcaa0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8DEF: cmp word ptr [edi + eax + 0xa2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x07
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8DF8: jne 0x588b8ea9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8DFE: add edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x0C
        // 0x588B8E01: cmp edi, 0x48
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x48
        // 0x588B8E04: jl 0x588b8de3
        __asm _emit 0x7C
        __asm _emit 0xDD
        // 0x588B8E06: inc ebx
        __asm _emit 0x43
        // 0x588B8E07: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B8E0B: mov edx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8E11: inc ebp
        __asm _emit 0x45
        // 0x588B8E12: cmp ebp, dword ptr [edx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xAA
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8E18: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B8E1C: jl 0x588b8d12
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B8E22: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588B8E25: mov eax, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x64
        // 0x588B8E28: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588B8E2B: mov edx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8E31: mov edi, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8E37: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x64
        // 0x588B8E3A: mov edx, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x64
        // 0x588B8E3D: mov edi, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x64
        // 0x588B8E40: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B8E44: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B8E48: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B8E4C: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B8E50: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B8E52: jne 0x588b8ecc
        __asm _emit 0x75
        __asm _emit 0x78
        // 0x588B8E54: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588B8E56: jne 0x588b8ecc
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x588B8E58: mov ebx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8E5E: cmp dword ptr [ebx + 0x88], ecx
        __asm _emit 0x39
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8E64: jne 0x588b8ecc
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x588B8E66: push ecx
        __asm _emit 0x51
        // 0x588B8E67: push ecx
        __asm _emit 0x51
        // 0x588B8E68: push ecx
        __asm _emit 0x51
        // 0x588B8E69: push 0x194
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8E6E: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x2C
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588B8E73: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B8E75: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xBE
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B8E7A: pop edi
        __asm _emit 0x5F
        // 0x588B8E7B: pop esi
        __asm _emit 0x5E
        // 0x588B8E7C: pop ebp
        __asm _emit 0x5D
        // 0x588B8E7D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B8E7F: pop ebx
        __asm _emit 0x5B
        // 0x588B8E80: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B8E83: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B8E86: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B8E88: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B8E8A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B8E8C: push 0x1b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8E91: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x2C
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588B8E96: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B8E98: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xBE
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B8E9D: pop edi
        __asm _emit 0x5F
        // 0x588B8E9E: pop esi
        __asm _emit 0x5E
        // 0x588B8E9F: pop ebp
        __asm _emit 0x5D
        // 0x588B8EA0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B8EA2: pop ebx
        __asm _emit 0x5B
        // 0x588B8EA3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B8EA6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B8EA9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B8EAB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B8EAD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B8EAF: push 0x1268
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8EB4: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x2C
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588B8EB9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B8EBB: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xBE
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B8EC0: pop edi
        __asm _emit 0x5F
        // 0x588B8EC1: pop esi
        __asm _emit 0x5E
        // 0x588B8EC2: pop ebp
        __asm _emit 0x5D
        // 0x588B8EC3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B8EC5: pop ebx
        __asm _emit 0x5B
        // 0x588B8EC6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B8EC9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B8ECC: mov ebx, dword ptr [0x58a0b468]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588B8ED2: xor ebx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF3
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588B8ED8: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588B8EDA: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B8EDE: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x588B8EE0: jb 0x588b90e3
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xFD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8EE6: mov edx, dword ptr [0x58a0b46c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x6C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588B8EEC: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588B8EF2: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x588B8EF4: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x588B8EF6: jb 0x588b90e3
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xE7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8EFC: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B8F01: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x588B8F04: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588B8F06: mov ecx, 0x249f0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588B8F0B: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588B8F0D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B8F0F: je 0x588b8f3b
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588B8F11: mov ebx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x588B8F14: mov bx, word ptr [ebx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x5E
        // 0x588B8F18: shr bx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588B8F1C: xor bl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF3
        __asm _emit 0xAA
        // 0x588B8F1F: cmp bl, 0x1e
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x1E
        // 0x588B8F22: jb 0x588b8f30
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x588B8F24: mov ecx, 0xc350
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F29: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588B8F2B: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F30: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588B8F33: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B8F35: jne 0x588b8f11
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x588B8F37: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B8F3B: sub ebx, dword ptr [esp + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B8F3F: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x588B8F41: jbe 0x588b909f
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F47: sub edx, dword ptr [esp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B8F4B: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x588B8F4D: jbe 0x588b909f
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F53: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F59: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F60: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F66: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F6B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B8F6F: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F75: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588B8F77: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B8F7B: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F81: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B8F85: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F8B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B8F8F: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F95: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B8F99: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8F9F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B8FA3: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8FA9: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B8FAD: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8FB3: mov eax, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8FB9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B8FBB: jle 0x588b907a
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8FC1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B8FC3: lea eax, [eax + eax*2 + 1]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x40
        __asm _emit 0x01
        // 0x588B8FC7: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8FCC: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588B8FCE: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588B8FD1: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588B8FD3: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588B8FD5: push ecx
        __asm _emit 0x51
        // 0x588B8FD6: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x85
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588B8FDB: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588B8FDD: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8FE3: mov cx, word ptr [eax + 0x88]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8FEA: mov word ptr [ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588B8FEE: mov edx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8FF4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B8FF6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B8FF9: cmp dword ptr [edx + 0x88], edi
        __asm _emit 0x39
        __asm _emit 0xBA
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8FFF: jle 0x588b903b
        __asm _emit 0x7E
        __asm _emit 0x3A
        // 0x588B9001: lea ebx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x04
        // 0x588B9004: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B900A: push edi
        __asm _emit 0x57
        // 0x588B900B: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xF1
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9010: mov word ptr [ebx - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0xFE
        // 0x588B9014: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B901A: push edi
        __asm _emit 0x57
        // 0x588B901B: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xF1
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9020: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x588B9023: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9025: mov word ptr [ebx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x02
        // 0x588B9029: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B902F: inc edi
        __asm _emit 0x47
        // 0x588B9030: add ebx, 6
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x06
        // 0x588B9033: cmp edi, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9039: jl 0x588b9004
        __asm _emit 0x7C
        __asm _emit 0xC9
        // 0x588B903B: mov edx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9041: mov eax, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9047: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B904B: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588B904E: lea ecx, [eax + eax + 2]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588B9052: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B9056: push ecx
        __asm _emit 0x51
        // 0x588B9057: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B905D: push ebp
        __asm _emit 0x55
        // 0x588B905E: push edx
        __asm _emit 0x52
        // 0x588B905F: push eax
        __asm _emit 0x50
        // 0x588B9060: call 0x587ba8f0
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588B9065: push ebp
        __asm _emit 0x55
        // 0x588B9066: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x3B
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588B907A..0x588B9521; 1191 mapped bytes.
extern "C" __declspec(naked) void FUN_588b8cb0_segment_02() {
    __asm {
        // 0x588B907A: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B907E: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B9082: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B9084: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B9086: push ecx
        __asm _emit 0x51
        // 0x588B9087: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B908D: push edx
        __asm _emit 0x52
        // 0x588B908E: call 0x587ba8f0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x18
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588B9093: pop edi
        __asm _emit 0x5F
        // 0x588B9094: pop esi
        __asm _emit 0x5E
        // 0x588B9095: pop ebp
        __asm _emit 0x5D
        // 0x588B9096: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9098: pop ebx
        __asm _emit 0x5B
        // 0x588B9099: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B909C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B909F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B90A1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B90A3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B90A5: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588B90A7: je 0x588b90c6
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588B90A9: push 0x193
        __asm _emit 0x68
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B90AE: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x2A
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588B90B3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B90B5: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xBC
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B90BA: pop edi
        __asm _emit 0x5F
        // 0x588B90BB: pop esi
        __asm _emit 0x5E
        // 0x588B90BC: pop ebp
        __asm _emit 0x5D
        // 0x588B90BD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B90BF: pop ebx
        __asm _emit 0x5B
        // 0x588B90C0: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B90C3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B90C6: push 0x1b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B90CB: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x2A
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588B90D0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B90D2: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xBC
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B90D7: pop edi
        __asm _emit 0x5F
        // 0x588B90D8: pop esi
        __asm _emit 0x5E
        // 0x588B90D9: pop ebp
        __asm _emit 0x5D
        // 0x588B90DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B90DC: pop ebx
        __asm _emit 0x5B
        // 0x588B90DD: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B90E0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B90E3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B90E5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B90E7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B90E9: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B90EE: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x29
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588B90F3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B90F5: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xBC
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B90FA: pop edi
        __asm _emit 0x5F
        // 0x588B90FB: pop esi
        __asm _emit 0x5E
        // 0x588B90FC: pop ebp
        __asm _emit 0x5D
        // 0x588B90FD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B90FF: pop ebx
        __asm _emit 0x5B
        // 0x588B9100: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9103: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B9106: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B910C: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588B910E: jne 0x588b9182
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x588B9110: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9115: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588B9119: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B911F: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588B9122: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9128: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B912D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B9131: movzx eax, word ptr [esi + 0x19c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9138: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588B913C: jne 0x588b9155
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588B913E: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9144: call 0x587ba930
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x17
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588B9149: pop edi
        __asm _emit 0x5F
        // 0x588B914A: pop esi
        __asm _emit 0x5E
        // 0x588B914B: pop ebp
        __asm _emit 0x5D
        // 0x588B914C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B914E: pop ebx
        __asm _emit 0x5B
        // 0x588B914F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9152: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B9155: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x588B9159: jne 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B915F: mov eax, 9
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9164: mov word ptr [esi + 0x19c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B916B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9171: call 0x587b9150
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588B9176: pop edi
        __asm _emit 0x5F
        // 0x588B9177: pop esi
        __asm _emit 0x5E
        // 0x588B9178: pop ebp
        __asm _emit 0x5D
        // 0x588B9179: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B917B: pop ebx
        __asm _emit 0x5B
        // 0x588B917C: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B917F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B9182: cmp eax, dword ptr [esi + 0xbc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9188: jne 0x588b91dd
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x588B918A: cmp dword ptr [esi + 0x1d0], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9190: jne 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9196: mov eax, dword ptr [0x58a245ec]
        __asm _emit 0xA1
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B919B: cmp word ptr [eax + 0x128], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B91A3: je 0x588b91ca
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588B91A5: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B91AA: mov word ptr [eax + 0x12a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B91B1: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B91B7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B91B9: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588B91BC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B91BE: pop edi
        __asm _emit 0x5F
        // 0x588B91BF: pop esi
        __asm _emit 0x5E
        // 0x588B91C0: pop ebp
        __asm _emit 0x5D
        // 0x588B91C1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B91C3: pop ebx
        __asm _emit 0x5B
        // 0x588B91C4: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B91C7: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B91CA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B91CC: call 0x588b61b0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xCF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B91D1: pop edi
        __asm _emit 0x5F
        // 0x588B91D2: pop esi
        __asm _emit 0x5E
        // 0x588B91D3: pop ebp
        __asm _emit 0x5D
        // 0x588B91D4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B91D6: pop ebx
        __asm _emit 0x5B
        // 0x588B91D7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B91DA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B91DD: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B91E3: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588B91E5: jne 0x588b9210
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x588B91E7: push ebx
        __asm _emit 0x53
        // 0x588B91E8: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x84
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B91ED: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B91F2: mov word ptr [esi + 0x19c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B91F9: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B91FF: call 0x587b9150
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588B9204: pop edi
        __asm _emit 0x5F
        // 0x588B9205: pop esi
        __asm _emit 0x5E
        // 0x588B9206: pop ebp
        __asm _emit 0x5D
        // 0x588B9207: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9209: pop ebx
        __asm _emit 0x5B
        // 0x588B920A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B920D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B9210: cmp eax, dword ptr [esi + 0xc4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9216: jne 0x588b9262
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x588B9218: movzx eax, word ptr [esi + 0x19c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B921F: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B9222: je 0x588b924d
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588B9224: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588B9228: je 0x588b924d
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588B922A: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B922F: mov word ptr [esi + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9236: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B923C: call 0x587b9110
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xFE
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588B9241: pop edi
        __asm _emit 0x5F
        // 0x588B9242: pop esi
        __asm _emit 0x5E
        // 0x588B9243: pop ebp
        __asm _emit 0x5D
        // 0x588B9244: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9246: pop ebx
        __asm _emit 0x5B
        // 0x588B9247: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B924A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B924D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588B924F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B9252: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9254: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B9256: pop edi
        __asm _emit 0x5F
        // 0x588B9257: pop esi
        __asm _emit 0x5E
        // 0x588B9258: pop ebp
        __asm _emit 0x5D
        // 0x588B9259: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B925B: pop ebx
        __asm _emit 0x5B
        // 0x588B925C: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B925F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B9262: cmp eax, dword ptr [esi + 0xc8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9268: jne 0x588b928d
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588B926A: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B9272: jne 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9278: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B927A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B927C: call 0x588b5dc0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9281: pop edi
        __asm _emit 0x5F
        // 0x588B9282: pop esi
        __asm _emit 0x5E
        // 0x588B9283: pop ebp
        __asm _emit 0x5D
        // 0x588B9284: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9286: pop ebx
        __asm _emit 0x5B
        // 0x588B9287: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B928A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B928D: cmp eax, dword ptr [esi + 0xcc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9293: jne 0x588b92b9
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x588B9295: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B929D: jne 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B92A3: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B92A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B92A8: call 0x58907300
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B92AD: pop edi
        __asm _emit 0x5F
        // 0x588B92AE: pop esi
        __asm _emit 0x5E
        // 0x588B92AF: pop ebp
        __asm _emit 0x5D
        // 0x588B92B0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B92B2: pop ebx
        __asm _emit 0x5B
        // 0x588B92B3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B92B6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B92B9: cmp eax, dword ptr [esi + 0xd0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B92BF: jne 0x588b92e4
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588B92C1: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B92C9: jne 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B92CF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B92D1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B92D3: call 0x588b5e30
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B92D8: pop edi
        __asm _emit 0x5F
        // 0x588B92D9: pop esi
        __asm _emit 0x5E
        // 0x588B92DA: pop ebp
        __asm _emit 0x5D
        // 0x588B92DB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B92DD: pop ebx
        __asm _emit 0x5B
        // 0x588B92DE: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B92E1: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B92E4: cmp eax, dword ptr [esi + 0xd4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B92EA: jne 0x588b9310
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x588B92EC: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B92F4: jne 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B92FA: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588B92FD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B92FF: call 0x58907300
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xDF
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9304: pop edi
        __asm _emit 0x5F
        // 0x588B9305: pop esi
        __asm _emit 0x5E
        // 0x588B9306: pop ebp
        __asm _emit 0x5D
        // 0x588B9307: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9309: pop ebx
        __asm _emit 0x5B
        // 0x588B930A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B930D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B9310: cmp eax, dword ptr [esi + 0x198]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9316: jne 0x588b93cb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B931C: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B9324: jne 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B932A: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9330: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9335: mov word ptr [esi + 0x19e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B933C: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B9340: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588B9344: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588B9347: cmp dl, al
        __asm _emit 0x3A
        __asm _emit 0xD0
        // 0x588B9349: je 0x588b9361
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588B934B: mov eax, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9351: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B9355: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x588B9359: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588B935C: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588B935F: jne 0x588b936e
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588B9361: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9367: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B9369: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588B936C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B936E: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9374: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B9378: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588B937C: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588B937F: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588B9382: je 0x588b939a
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588B9384: mov eax, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B938A: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B938E: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x588B9392: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588B9395: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588B9398: jne 0x588b93a7
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588B939A: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B93A0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B93A2: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588B93A5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B93A7: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B93AD: call 0x5874ddd0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x4A
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588B93B2: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B93B8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B93BA: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588B93BD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B93BF: pop edi
        __asm _emit 0x5F
        // 0x588B93C0: pop esi
        __asm _emit 0x5E
        // 0x588B93C1: pop ebp
        __asm _emit 0x5D
        // 0x588B93C2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B93C4: pop ebx
        __asm _emit 0x5B
        // 0x588B93C5: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B93C8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B93CB: cmp eax, dword ptr [esi + 0x190]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B93D1: jne 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B93D7: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B93DF: jne 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B93E5: mov edx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B93EB: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B93F0: mov word ptr [esi + 0x19e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B93F7: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B93FB: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x588B93FF: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x588B9401: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588B9403: je 0x588b941b
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588B9405: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B940B: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B940F: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588B9413: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588B9416: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588B9419: jne 0x588b9428
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588B941B: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9421: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B9423: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B9426: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B9428: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B942E: call 0x5874ddd0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x49
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588B9433: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9439: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B943B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B943E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B9440: pop edi
        __asm _emit 0x5F
        // 0x588B9441: pop esi
        __asm _emit 0x5E
        // 0x588B9442: pop ebp
        __asm _emit 0x5D
        // 0x588B9443: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9445: pop ebx
        __asm _emit 0x5B
        // 0x588B9446: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9449: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B944C: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588B944F: je 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9455: cmp eax, 0xf235
        __asm _emit 0x3D
        __asm _emit 0x35
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B945A: jne 0x588b9515
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9460: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9466: call 0x587c8850
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xF3
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588B946B: mov edi, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B9471: push eax
        __asm _emit 0x50
        // 0x588B9472: push 0x589a0998
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B9477: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x588B9479: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B947B: jne 0x588b9496
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x588B947D: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B9481: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B9484: push eax
        __asm _emit 0x50
        // 0x588B9485: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xDE
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B948A: pop edi
        __asm _emit 0x5F
        // 0x588B948B: pop esi
        __asm _emit 0x5E
        // 0x588B948C: pop ebp
        __asm _emit 0x5D
        // 0x588B948D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B948F: pop ebx
        __asm _emit 0x5B
        // 0x588B9490: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9493: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B9496: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B949C: call 0x587c8850
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xF3
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588B94A1: push eax
        __asm _emit 0x50
        // 0x588B94A2: push 0x589a0990
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B94A7: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x588B94A9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B94AB: jne 0x588b9515
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x588B94AD: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B94B1: push ecx
        __asm _emit 0x51
        // 0x588B94B2: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588B94B5: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xDE
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B94BA: pop edi
        __asm _emit 0x5F
        // 0x588B94BB: pop esi
        __asm _emit 0x5E
        // 0x588B94BC: pop ebp
        __asm _emit 0x5D
        // 0x588B94BD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B94BF: pop ebx
        __asm _emit 0x5B
        // 0x588B94C0: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B94C3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B94C6: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588B94CA: je 0x588b94d8
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588B94CC: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588B94D0: je 0x588b94d8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588B94D2: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588B94D6: jne 0x588b9515
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x588B94D8: cmp dword ptr [esp + 0x20], 0xee48
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B94E0: jne 0x588b9515
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588B94E2: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B94E6: cmp eax, dword ptr [esi + 0x168]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B94EC: jne 0x588b94f9
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588B94EE: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B94F0: mov word ptr [esi + 0x19e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B94F7: jmp 0x588b950a
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x588B94F9: cmp eax, dword ptr [esi + 0x164]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B94FF: jne 0x588b9515
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588B9501: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9503: mov word ptr [esi + 0x19e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B950A: cmp dword ptr [esp + 0x24], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B950E: je 0x588b9515
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588B9510: call 0x588b7f70
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9515: pop edi
        __asm _emit 0x5F
        // 0x588B9516: pop esi
        __asm _emit 0x5E
        // 0x588B9517: pop ebp
        __asm _emit 0x5D
        // 0x588B9518: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B951A: pop ebx
        __asm _emit 0x5B
        // 0x588B951B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B951E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
