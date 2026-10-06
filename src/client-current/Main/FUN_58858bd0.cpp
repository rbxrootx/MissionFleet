// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58858BD0 .. +0x215 bytes.
// Source symbol alias: FUN_58858bd0.
extern "C" __declspec(naked) void FUN_58858bd0() {
    __asm {
        // 0x58858BD0: push esi
        __asm _emit 0x56
        // 0x58858BD1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58858BD3: mov eax, dword ptr [esi + 0xa90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858BD9: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858BDE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58858BE2: mov eax, dword ptr [esi + 0xa94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858BE8: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58858BEA: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58858BEE: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858BF4: mov eax, dword ptr [esi + eax*4 + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858BFB: push edi
        __asm _emit 0x57
        // 0x58858BFC: mov edi, 0x258
        __asm _emit 0xBF
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C01: cmp eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x40
        // 0x58858C04: ja 0x58858d87
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C0A: movzx ecx, byte ptr [eax + 0x58858e04]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x8E
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58858C11: jmp dword ptr [ecx*4 + 0x58858de8]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58858C18: mov ecx, dword ptr [esi + 0xab0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C1E: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x58858C20: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58858C22: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x5B
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58858C27: mov ecx, dword ptr [esi + 0xaa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C2D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58858C2F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xE7
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58858C34: mov ecx, dword ptr [esi + 0xaac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C3A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58858C3C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xE7
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58858C41: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58858C46: cmp dword ptr [eax + 0x160], 0x17
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        // 0x58858C4D: jle 0x58858c65
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58858C4F: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C56: je 0x58858c65
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58858C58: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C5E: add eax, 0x5c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C63: jmp 0x58858c67
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58858C65: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58858C67: mov ecx, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C6D: push eax
        __asm _emit 0x50
        // 0x58858C6E: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xBC
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58858C73: mov eax, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C79: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58858C7E: jmp 0x58858d87
        __asm _emit 0xE9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C83: mov ecx, dword ptr [esi + 0xab0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C89: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x58858C8B: mov edi, 0x259
        __asm _emit 0xBF
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C90: call 0x5877e770
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x5A
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58858C95: jmp 0x58858d87
        __asm _emit 0xE9
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858C9A: mov ecx, dword ptr [esi + 0xab0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858CA0: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x58858CA2: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x58858CA4: mov edi, 0x25a
        __asm _emit 0xBF
        __asm _emit 0x5A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858CA9: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x5A
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58858CAE: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58858CB3: cmp dword ptr [eax + 0x160], 0x18
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        // 0x58858CBA: jle 0x58858ce1
        __asm _emit 0x7E
        __asm _emit 0x25
        // 0x58858CBC: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858CC3: je 0x58858ce1
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58858CC5: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858CCB: mov ecx, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858CD1: add eax, 0x600
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858CD6: push eax
        __asm _emit 0x50
        // 0x58858CD7: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xBC
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58858CDC: jmp 0x58858d87
        __asm _emit 0xE9
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858CE1: mov ecx, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858CE7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58858CE9: push eax
        __asm _emit 0x50
        // 0x58858CEA: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xBC
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58858CEF: jmp 0x58858d87
        __asm _emit 0xE9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858CF4: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58858CF8: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x58858CFB: ja 0x58858d87
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D01: movzx edx, byte ptr [eax + 0x58858e64]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x8E
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58858D08: jmp dword ptr [edx*4 + 0x58858e48]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0x8E
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58858D0F: mov edi, 0x25c
        __asm _emit 0xBF
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D14: jmp 0x58858d87
        __asm _emit 0xEB
        __asm _emit 0x71
        // 0x58858D16: mov edi, 0x25d
        __asm _emit 0xBF
        __asm _emit 0x5D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D1B: jmp 0x58858d87
        __asm _emit 0xEB
        __asm _emit 0x6A
        // 0x58858D1D: mov edi, 0x25f
        __asm _emit 0xBF
        __asm _emit 0x5F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D22: jmp 0x58858d87
        __asm _emit 0xEB
        __asm _emit 0x63
        // 0x58858D24: mov edi, 0x25e
        __asm _emit 0xBF
        __asm _emit 0x5E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D29: jmp 0x58858d87
        __asm _emit 0xEB
        __asm _emit 0x5C
        // 0x58858D2B: mov edi, 0x25b
        __asm _emit 0xBF
        __asm _emit 0x5B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D30: jmp 0x58858d87
        __asm _emit 0xEB
        __asm _emit 0x55
        // 0x58858D32: mov edi, 0x260
        __asm _emit 0xBF
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D37: jmp 0x58858d87
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x58858D39: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58858D3E: cmp dword ptr [eax + 0x160], 0x16
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x58858D45: jle 0x58858d5d
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58858D47: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D4E: je 0x58858d5d
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58858D50: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D56: add eax, 0x580
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D5B: jmp 0x58858d5f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58858D5D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58858D5F: mov ecx, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D65: push eax
        __asm _emit 0x50
        // 0x58858D66: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xBB
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58858D6B: mov eax, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D71: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D78: mov eax, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D7E: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D83: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58858D87: mov eax, dword ptr [esi + 0xa88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D8D: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D93: jle 0x58858da8
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58858D95: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58858D97: jl 0x58858da8
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x58858D99: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858D9F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58858DA1: je 0x58858da8
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58858DA3: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x58858DA6: jmp 0x58858daa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58858DA8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58858DAA: mov esi, dword ptr [esi + 0xa8c]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858DB0: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58858DB3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58858DB5: je 0x58858de0
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58858DB7: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58858DBA: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58858DBD: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58858DC0: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58858DC3: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58858DC6: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58858DC9: lea ecx, [esi + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58858DCC: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58858DCE: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58858DD1: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58858DD4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58858DD7: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58858DDA: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58858DDD: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58858DE0: pop edi
        __asm _emit 0x5F
        // 0x58858DE1: pop esi
        __asm _emit 0x5E
        // 0x58858DE2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
