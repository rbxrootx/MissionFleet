// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F0BB0 .. +0x328 bytes.
// Source symbol alias: FUN_588f0bb0.
extern "C" __declspec(naked) void FUN_588f0bb0() {
    __asm {
        // 0x588F0BB0: sub esp, 0x124
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0BB6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F0BBB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F0BBD: mov dword ptr [esp + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0BC4: push ebp
        __asm _emit 0x55
        // 0x588F0BC5: mov ebp, dword ptr [esp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0BCC: push esi
        __asm _emit 0x56
        // 0x588F0BCD: mov esi, dword ptr [esp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0BD4: push edi
        __asm _emit 0x57
        // 0x588F0BD5: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F0BD7: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0BDD: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588F0BDF: je 0x588f0ded
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0BE5: push ebx
        __asm _emit 0x53
        // 0x588F0BE6: push esi
        __asm _emit 0x56
        // 0x588F0BE7: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0BEC: movzx eax, byte ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588F0BF0: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0BF6: push esi
        __asm _emit 0x56
        // 0x588F0BF7: push eax
        __asm _emit 0x50
        // 0x588F0BF8: call 0x58908110
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0BFD: movzx ecx, word ptr [ebp + 0xa4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0C04: push 0x7f
        __asm _emit 0x6A
        __asm _emit 0x7F
        // 0x588F0C06: lea edx, [esp + 0x35]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x35
        // 0x588F0C0A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F0C0C: push edx
        __asm _emit 0x52
        // 0x588F0C0D: mov dword ptr [edi + esi*4 + 0x35c], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0C14: mov byte ptr [esp + 0x3c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x00
        // 0x588F0C19: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F0C1E: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0C24: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F0C26: mov dword ptr [esp + 0x1d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x588F0C2A: mov dword ptr [esp + 0x21], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x21
        // 0x588F0C2E: mov dword ptr [esp + 0x25], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x25
        // 0x588F0C32: mov dword ptr [esp + 0x29], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x29
        // 0x588F0C36: mov dword ptr [esp + 0x2d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2D
        // 0x588F0C3A: mov dword ptr [esp + 0x31], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x31
        // 0x588F0C3E: mov dword ptr [esp + 0x35], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x35
        // 0x588F0C42: mov word ptr [esp + 0x39], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x39
        // 0x588F0C47: mov byte ptr [esp + 0x3b], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3B
        // 0x588F0C4B: lea eax, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x78
        // 0x588F0C4E: push eax
        __asm _emit 0x50
        // 0x588F0C4F: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F0C53: push ecx
        __asm _emit 0x51
        // 0x588F0C54: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588F0C59: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588F0C5B: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F0C5F: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588F0C62: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588F0C65: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588F0C67: inc eax
        __asm _emit 0x40
        // 0x588F0C68: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588F0C6A: jne 0x588f0c65
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588F0C6C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F0C6E: cmp eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x588F0C71: jbe 0x588f0c88
        __asm _emit 0x76
        __asm _emit 0x15
        // 0x588F0C73: push 0x5898d0d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0C78: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x588F0C7A: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F0C7E: push edx
        __asm _emit 0x52
        // 0x588F0C7F: mov byte ptr [esp + 0x30], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F0C83: call 0x58731bd0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x0F
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F0C88: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F0C8C: push eax
        __asm _emit 0x50
        // 0x588F0C8D: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F0C91: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0C96: push ecx
        __asm _emit 0x51
        // 0x588F0C97: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588F0C99: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0C9F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F0CA2: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F0CA7: push esi
        __asm _emit 0x56
        // 0x588F0CA8: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F0CAC: push edx
        __asm _emit 0x52
        // 0x588F0CAD: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0CB2: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0CB7: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0CBD: mov edx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x588F0CC0: mov eax, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0CC6: movzx ebp, word ptr [ebp + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x6D
        __asm _emit 0x1E
        // 0x588F0CCA: movzx eax, word ptr [eax + esi*2 + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0CD2: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x588F0CD4: lea ebp, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x80
        // 0x588F0CD7: add ebp, ebp
        __asm _emit 0x03
        __asm _emit 0xED
        // 0x588F0CD9: cmp dword ptr [ecx + esi*8 + 0xbc0], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xF1
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0CE1: je 0x588f0d0a
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588F0CE3: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0CE9: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0CEF: movzx ecx, word ptr [eax + esi*4 + 0xac0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0xB0
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0CF7: mov eax, dword ptr [eax + esi*8 + 0xbc0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xF0
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0CFE: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0D04: imul ecx, dword ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F0D08: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588F0D0A: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0D0F: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0D15: cmp dword ptr [ecx + esi*8 + 0xbc4], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xF1
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0D1D: je 0x588f0d3c
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588F0D1F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F0D21: movzx ecx, word ptr [eax + esi*4 + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0xB0
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0D29: mov eax, dword ptr [eax + esi*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xF0
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0D30: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0D36: imul ecx, dword ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F0D3A: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588F0D3C: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588F0D41: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588F0D43: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588F0D46: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F0D48: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588F0D4B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588F0D4D: push ecx
        __asm _emit 0x51
        // 0x588F0D4E: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F0D52: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0D57: push edx
        __asm _emit 0x52
        // 0x588F0D58: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588F0D5A: mov ecx, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0D60: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F0D63: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F0D68: push esi
        __asm _emit 0x56
        // 0x588F0D69: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F0D6D: push eax
        __asm _emit 0x50
        // 0x588F0D6E: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0D73: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588F0D78: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x588F0D7A: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588F0D7D: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F0D7F: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588F0D82: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588F0D84: push ecx
        __asm _emit 0x51
        // 0x588F0D85: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F0D89: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0D8E: push edx
        __asm _emit 0x52
        // 0x588F0D8F: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588F0D91: mov ecx, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0D97: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F0D9A: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588F0D9F: push esi
        __asm _emit 0x56
        // 0x588F0DA0: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F0DA4: push eax
        __asm _emit 0x50
        // 0x588F0DA5: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0DAA: push esi
        __asm _emit 0x56
        // 0x588F0DAB: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F0DAD: call 0x588efdb0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F0DB2: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0DB8: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0DBD: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588F0DBF: pop ebx
        __asm _emit 0x5B
        // 0x588F0DC0: jl 0x588f0ebe
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0DC6: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0DCC: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0DD1: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588F0DD4: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588F0DD6: jge 0x588f0ebe
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0DDC: mov esi, dword ptr [edi + esi*4 + 0x234]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xB7
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0DE3: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F0DE8: jmp 0x588f0ebe
        __asm _emit 0xE9
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0DED: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F0DF2: push esi
        __asm _emit 0x56
        // 0x588F0DF3: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0DF8: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0DFD: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0E03: push esi
        __asm _emit 0x56
        // 0x588F0E04: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F0E06: call 0x58908110
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0E0B: mov ecx, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0E11: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F0E16: push esi
        __asm _emit 0x56
        // 0x588F0E17: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0E1C: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0E21: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0E26: lea ecx, [esp + 0x31]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x31
        // 0x588F0E2A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F0E2C: push ecx
        __asm _emit 0x51
        // 0x588F0E2D: mov byte ptr [esp + 0x38], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588F0E32: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F0E37: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0E3D: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0E43: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0E49: movzx eax, word ptr [ecx + esi*2 + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0E51: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F0E54: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F0E57: je 0x588f0e72
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588F0E59: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x588F0E5C: push edx
        __asm _emit 0x52
        // 0x588F0E5D: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F0E61: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0E66: push eax
        __asm _emit 0x50
        // 0x588F0E67: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0E6D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F0E70: jmp 0x588f0e77
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588F0E72: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x588F0E77: push 0x808080
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        // 0x588F0E7C: push esi
        __asm _emit 0x56
        // 0x588F0E7D: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F0E81: push ecx
        __asm _emit 0x51
        // 0x588F0E82: mov ecx, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0E88: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0E8D: mov ecx, dword ptr [edi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0E93: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F0E98: push esi
        __asm _emit 0x56
        // 0x588F0E99: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0E9E: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0EA3: mov dword ptr [edi + esi*4 + 0x35c], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0EAE: mov esi, dword ptr [edi + esi*4 + 0x234]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xB7
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0EB5: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0EBA: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588F0EBE: mov ecx, dword ptr [esp + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0EC5: pop edi
        __asm _emit 0x5F
        // 0x588F0EC6: pop esi
        __asm _emit 0x5E
        // 0x588F0EC7: pop ebp
        __asm _emit 0x5D
        // 0x588F0EC8: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F0ECA: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F0ECF: add esp, 0x124
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0ED5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
