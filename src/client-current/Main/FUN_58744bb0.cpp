// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 361 bytes in 1 exact ranges.
// Source symbol alias: FUN_58744bb0.

// Ghidra body range 0x58744BB0..0x58744D19; 361 mapped bytes.
extern "C" __declspec(naked) void FUN_58744bb0_segment_00() {
    __asm {
        // 0x58744BB0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58744BB4: push ebx
        __asm _emit 0x53
        // 0x58744BB5: push ebp
        __asm _emit 0x55
        // 0x58744BB6: push esi
        __asm _emit 0x56
        // 0x58744BB7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58744BB9: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58744BBB: push edi
        __asm _emit 0x57
        // 0x58744BBC: add eax, 0x34c
        __asm _emit 0x05
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744BC1: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58744BC3: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58744BC6: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58744BC9: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744BCF: movzx ecx, word ptr [eax + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58744BD3: push 0x700
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744BD8: lea eax, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58744BDB: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744BE1: push edi
        __asm _emit 0x57
        // 0x58744BE2: push eax
        __asm _emit 0x50
        // 0x58744BE3: mov dword ptr [esi + 0x70c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744BE9: mov dword ptr [esi + 0x710], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744BEF: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x80
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744BF4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58744BF7: lea ebx, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x01
        // 0x58744BFA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C00: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58744C03: mov al, byte ptr [edx + edi + 0x11e]
        __asm _emit 0x8A
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C0A: cmp al, 0xb
        __asm _emit 0x3C
        __asm _emit 0x0B
        // 0x58744C0C: jb 0x58744cf6
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C12: cmp al, 0xf
        __asm _emit 0x3C
        __asm _emit 0x0F
        // 0x58744C14: ja 0x58744cf6
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C1A: mov eax, 0xb40
        __asm _emit 0xB8
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C1F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58744C21: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58744C25: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58744C28: mov eax, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x08
        // 0x58744C2B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58744C2D: je 0x58744cde
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C33: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58744C35: cmp al, 0xd
        __asm _emit 0x3C
        __asm _emit 0x0D
        // 0x58744C37: jne 0x58744cde
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C3D: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58744C43: push eax
        __asm _emit 0x50
        // 0x58744C44: call 0x58778f30
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58744C49: movzx eax, word ptr [eax + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C50: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58744C53: je 0x58744c67
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58744C55: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58744C59: je 0x58744c67
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58744C5B: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58744C5F: je 0x58744c67
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58744C61: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58744C65: jne 0x58744cde
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x58744C67: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58744C69: movzx edx, byte ptr [edi + ecx + 0x46a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x0F
        __asm _emit 0x6A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C71: movzx ebx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD8
        // 0x58744C74: sub edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x58744C77: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x58744C79: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C7E: jne 0x58744cde
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x58744C80: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58744C83: je 0x58744c9e
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58744C85: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58744C89: je 0x58744c9e
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58744C8B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58744C8F: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C94: xor ax, word ptr [edx + ecx + 0x2ce]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744C9C: jbe 0x58744cde
        __asm _emit 0x76
        __asm _emit 0x40
        // 0x58744C9E: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58744CA1: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744CA8: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58744CAA: mov byte ptr [esi + ecx*8 + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0xCE
        __asm _emit 0x14
        // 0x58744CAE: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58744CB1: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744CB8: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58744CBA: mov dword ptr [esi + edx*8 + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0xD6
        __asm _emit 0x0C
        // 0x58744CBE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58744CC0: movzx ecx, byte ptr [edi + eax + 0x46a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x07
        __asm _emit 0x6A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744CC8: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58744CCB: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744CD2: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58744CD4: sub ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x58744CD7: mov dword ptr [esi + edx*8 + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0xD6
        __asm _emit 0x10
        // 0x58744CDB: add dword ptr [esi + 8], ebx
        __asm _emit 0x01
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x58744CDE: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58744CE2: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58744CE5: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xEB
        // 0x58744CE7: cmp eax, 0xbc0
        __asm _emit 0x3D
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744CEC: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58744CF0: jl 0x58744c25
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x2F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744CF6: add edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x20
        // 0x58744CF9: cmp edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744CFF: jl 0x58744c00
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744D05: cmp dword ptr [esi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58744D09: jle 0x58744d12
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x58744D0B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58744D0D: call 0x58744740
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744D12: pop edi
        __asm _emit 0x5F
        // 0x58744D13: pop esi
        __asm _emit 0x5E
        // 0x58744D14: pop ebp
        __asm _emit 0x5D
        // 0x58744D15: pop ebx
        __asm _emit 0x5B
        // 0x58744D16: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
