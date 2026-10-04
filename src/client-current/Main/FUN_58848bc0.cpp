// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58848BC0 .. +0x297 bytes.
// Source symbol alias: FUN_58848bc0.
extern "C" __declspec(naked) void FUN_58848bc0() {
    __asm {
        // 0x58848BC0: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x58848BC5: push esi
        __asm _emit 0x56
        // 0x58848BC6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58848BC8: jne 0x58848e51
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848BCE: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58848BD2: push edi
        __asm _emit 0x57
        // 0x58848BD3: cmp eax, dword ptr [esi + 0xd4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848BD9: jne 0x58848c26
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x58848BDB: mov edi, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x58848BDE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58848BE0: je 0x58848bf8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58848BE2: mov ecx, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848BE8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58848BEA: je 0x58848bf1
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58848BEC: call 0x58820f00
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58848BF1: mov edi, dword ptr [edi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x54
        // 0x58848BF4: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58848BF6: jne 0x58848be2
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58848BF8: mov edi, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x58848BFB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58848BFD: je 0x58848c16
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58848BFF: nop
        __asm _emit 0x90
        // 0x58848C00: mov ecx, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848C06: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58848C08: je 0x58848c0f
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58848C0A: call 0x58820f00
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x82
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58848C0F: mov edi, dword ptr [edi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x54
        // 0x58848C12: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58848C14: jne 0x58848c00
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58848C16: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58848C18: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58848C1B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848C1D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58848C1F: pop edi
        __asm _emit 0x5F
        // 0x58848C20: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848C22: pop esi
        __asm _emit 0x5E
        // 0x58848C23: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58848C26: cmp eax, dword ptr [esi + 0xd8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848C2C: jne 0x58848c42
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58848C2E: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848C34: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58848C36: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58848C39: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58848C3B: pop edi
        __asm _emit 0x5F
        // 0x58848C3C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848C3E: pop esi
        __asm _emit 0x5E
        // 0x58848C3F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58848C42: cmp eax, dword ptr [esi + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848C48: jne 0x58848c63
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58848C4A: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58848C50: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848C52: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58848C57: call 0x587b91e0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58848C5C: pop edi
        __asm _emit 0x5F
        // 0x58848C5D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848C5F: pop esi
        __asm _emit 0x5E
        // 0x58848C60: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58848C63: cmp eax, dword ptr [esi + 0xcc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848C69: jne 0x58848c87
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58848C6B: cmp word ptr [esi + 0xf6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848C73: jne 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848C79: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58848C7B: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848C80: pop edi
        __asm _emit 0x5F
        // 0x58848C81: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848C83: pop esi
        __asm _emit 0x5E
        // 0x58848C84: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58848C87: cmp eax, dword ptr [esi + 0xd0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848C8D: jne 0x58848cab
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58848C8F: cmp word ptr [esi + 0xf6], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58848C97: jne 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848C9D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58848C9F: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848CA4: pop edi
        __asm _emit 0x5F
        // 0x58848CA5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848CA7: pop esi
        __asm _emit 0x5E
        // 0x58848CA8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58848CAB: cmp eax, dword ptr [esi + 0xe8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848CB1: jne 0x58848cc7
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58848CB3: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58848CB8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848CBA: push eax
        __asm _emit 0x50
        // 0x58848CBB: call 0x58848b40
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848CC0: pop edi
        __asm _emit 0x5F
        // 0x58848CC1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848CC3: pop esi
        __asm _emit 0x5E
        // 0x58848CC4: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58848CC7: cmp eax, dword ptr [esi + 0xec]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848CCD: jne 0x58848ceb
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58848CCF: mov ecx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58848CD5: mov edx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58848CDB: push ecx
        __asm _emit 0x51
        // 0x58848CDC: push edx
        __asm _emit 0x52
        // 0x58848CDD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848CDF: call 0x58848b40
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848CE4: pop edi
        __asm _emit 0x5F
        // 0x58848CE5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848CE7: pop esi
        __asm _emit 0x5E
        // 0x58848CE8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58848CEB: cmp eax, dword ptr [esi + 0x118]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848CF1: jne 0x58848d9f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848CF7: movzx eax, word ptr [esi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848CFE: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848D01: jne 0x58848d4c
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x58848D03: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D09: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848D0B: je 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D11: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58848D15: je 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D1B: movzx ecx, word ptr [esi + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D22: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58848D25: jle 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D2B: dec ecx
        __asm _emit 0x49
        // 0x58848D2C: mov word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D33: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x58848D36: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848D38: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848D3A: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D40: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848D45: pop edi
        __asm _emit 0x5F
        // 0x58848D46: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848D48: pop esi
        __asm _emit 0x5E
        // 0x58848D49: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58848D4C: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58848D50: jne 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D56: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D5C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848D5E: je 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D64: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58848D68: je 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D6E: movzx ecx, word ptr [esi + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D75: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58848D78: jle 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D7E: dec ecx
        __asm _emit 0x49
        // 0x58848D7F: mov word ptr [esi + 0xf8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D86: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58848D89: mov dword ptr [esi + 0xfc], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848D8F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848D91: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848D93: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848D98: pop edi
        __asm _emit 0x5F
        // 0x58848D99: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848D9B: pop esi
        __asm _emit 0x5E
        // 0x58848D9C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58848D9F: cmp eax, dword ptr [esi + 0x11c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848DA5: jne 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848DAB: movzx eax, word ptr [esi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848DB2: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848DB5: jne 0x58848e08
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x58848DB7: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848DBD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848DBF: je 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848DC5: cmp dword ptr [eax + 0x54], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0x00
        // 0x58848DC9: je 0x58848e50
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848DCF: movzx ecx, word ptr [esi + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848DD6: movsx edx, word ptr [esi + 0xf2]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x96
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848DDD: movsx edi, cx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xF9
        // 0x58848DE0: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x58848DE3: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x58848DE5: jge 0x58848e50
        __asm _emit 0x7D
        __asm _emit 0x69
        // 0x58848DE7: inc ecx
        __asm _emit 0x41
        // 0x58848DE8: mov word ptr [esi + 0xfa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848DEF: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x58848DF2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848DF4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848DF6: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848DFC: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848E01: pop edi
        __asm _emit 0x5F
        // 0x58848E02: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848E04: pop esi
        __asm _emit 0x5E
        // 0x58848E05: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58848E08: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58848E0C: jne 0x58848e50
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x58848E0E: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848E14: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848E16: je 0x58848e50
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58848E18: cmp dword ptr [eax + 0x54], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0x00
        // 0x58848E1C: je 0x58848e50
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x58848E1E: movzx ecx, word ptr [esi + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848E25: movsx edx, word ptr [esi + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x96
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848E2C: movsx edi, cx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xF9
        // 0x58848E2F: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x58848E32: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x58848E34: jge 0x58848e50
        __asm _emit 0x7D
        __asm _emit 0x1A
        // 0x58848E36: inc ecx
        __asm _emit 0x41
        // 0x58848E37: mov word ptr [esi + 0xf8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848E3E: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x58848E41: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848E43: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848E45: mov dword ptr [esi + 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848E4B: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848E50: pop edi
        __asm _emit 0x5F
        // 0x58848E51: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848E53: pop esi
        __asm _emit 0x5E
        // 0x58848E54: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
