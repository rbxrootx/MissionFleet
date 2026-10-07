// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1160 bytes in 3 exact ranges.
// Source symbol alias: FUN_588b1b40.

// Ghidra body range 0x588B1B40..0x588B1C04; 196 mapped bytes.
extern "C" __declspec(naked) void FUN_588b1b40_segment_00() {
    __asm {
        // 0x588B1B40: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588B1B44: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x588B1B47: push ebx
        __asm _emit 0x53
        // 0x588B1B48: push esi
        __asm _emit 0x56
        // 0x588B1B49: push edi
        __asm _emit 0x57
        // 0x588B1B4A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B1B4C: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B1B52: push eax
        __asm _emit 0x50
        // 0x588B1B53: call 0x58778ad0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x6F
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588B1B58: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B1B5A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B1B5C: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B1B5E: je 0x588b1fd2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6E
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1B64: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B1B68: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B1B6C: push ecx
        __asm _emit 0x51
        // 0x588B1B6D: push edx
        __asm _emit 0x52
        // 0x588B1B6E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B1B70: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x17
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1B75: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588B1B7A: movzx eax, word ptr [edi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x0E
        // 0x588B1B7E: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588B1B81: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588B1B84: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1B89: push eax
        __asm _emit 0x50
        // 0x588B1B8A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1B8F: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x588B1B92: push ecx
        __asm _emit 0x51
        // 0x588B1B93: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588B1B96: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1B9B: mov edx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x70
        // 0x588B1B9E: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588B1BA1: push edx
        __asm _emit 0x52
        // 0x588B1BA2: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1BA7: mov eax, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x78
        // 0x588B1BAA: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1BB0: push eax
        __asm _emit 0x50
        // 0x588B1BB1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1BB6: mov ecx, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1BBC: mov edx, dword ptr [edi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1BC2: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B1BC6: mov cx, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588B1BCA: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588B1BCE: mov edx, 0x7c00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1BD3: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588B1BD6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1BD8: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B1BDA: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B1BDE: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B1BE2: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B1BE6: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588B1BE9: jae 0x588b1d09
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1BEF: push ebp
        __asm _emit 0x55
        // 0x588B1BF0: lea ebx, [esi + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1BF6: lea edx, [edi + 0xda]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1BFC: lea ebp, [esi + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1C02: jmp 0x588b1c14
        __asm _emit 0xEB
        __asm _emit 0x10
    }
}

// Ghidra body range 0x588B1C10..0x588B1D19; 265 mapped bytes.
extern "C" __declspec(naked) void FUN_588b1b40_segment_01() {
    __asm {
        // 0x588B1C10: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B1C14: test dword ptr [esp + 0x18], 0x80000000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588B1C1C: je 0x588b1c7d
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x588B1C1E: cmp dword ptr [esp + 0x14], 8
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x588B1C23: jge 0x588b1cd7
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1C29: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B1C2D: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B1C33: shr eax, 0x1b
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1B
        // 0x588B1C36: and eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x588B1C39: or eax, 0xcb
        __asm _emit 0x0D
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1C3E: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1C44: jle 0x588b1c5e
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588B1C46: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1C48: jl 0x588b1c5e
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588B1C4A: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1C51: je 0x588b1c5e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588B1C53: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588B1C56: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1C5C: jmp 0x588b1c60
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B1C5E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1C60: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588B1C63: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B1C67: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1C6D: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588B1C70: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588B1C75: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588B1C78: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588B1C7B: jmp 0x588b1cd1
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x588B1C7D: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588B1C80: jge 0x588b1cd7
        __asm _emit 0x7D
        __asm _emit 0x55
        // 0x588B1C82: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B1C86: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B1C8C: shr eax, 0x1b
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1B
        // 0x588B1C8F: and eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x588B1C92: or eax, 0xcb
        __asm _emit 0x0D
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1C97: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1C9D: jle 0x588b1cb7
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588B1C9F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1CA1: jl 0x588b1cb7
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588B1CA3: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1CAA: je 0x588b1cb7
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588B1CAC: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588B1CAF: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1CB5: jmp 0x588b1cb9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B1CB7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1CB9: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588B1CBB: inc dword ptr [esp + 0x24]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B1CBF: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1CC5: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588B1CC7: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588B1CCC: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588B1CCE: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588B1CD1: movzx eax, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x02
        // 0x588B1CD4: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588B1CD7: movzx ecx, word ptr [edi + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588B1CDB: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B1CDF: shl dword ptr [esp + 0x18], 1
        __asm _emit 0xD1
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B1CE3: shl dword ptr [esp + 0x10], 1
        __asm _emit 0xD1
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B1CE7: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x588B1CEA: inc eax
        __asm _emit 0x40
        // 0x588B1CEB: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588B1CEE: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x588B1CF1: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588B1CF3: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B1CF7: jl 0x588b1c10
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B1CFD: cmp dword ptr [esp + 0x24], 8
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588B1D02: pop ebp
        __asm _emit 0x5D
        // 0x588B1D03: jge 0x588b1d33
        __asm _emit 0x7D
        __asm _emit 0x2E
        // 0x588B1D05: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B1D09: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D0E: lea ecx, [esi + eax*4 + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D15: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588B1D17: jmp 0x588b1d20
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588B1D20..0x588B1FDB; 699 mapped bytes.
extern "C" __declspec(naked) void FUN_588b1b40_segment_02() {
    __asm {
        // 0x588B1D20: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B1D22: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D27: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588B1D2B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588B1D2E: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588B1D31: jne 0x588b1d20
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x588B1D33: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B1D37: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588B1D3A: jge 0x588b1d63
        __asm _emit 0x7D
        __asm _emit 0x27
        // 0x588B1D3C: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D41: lea ecx, [esi + eax*4 + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D48: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588B1D4A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D50: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B1D52: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D57: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588B1D5B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588B1D5E: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588B1D61: jne 0x588b1d50
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x588B1D63: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B1D69: movzx eax, word ptr [edi + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x588B1D6D: mov ecx, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D73: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D79: jle 0x588b1d90
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x588B1D7B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1D7D: jl 0x588b1d90
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x588B1D7F: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D85: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588B1D87: je 0x588b1d90
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588B1D89: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588B1D8C: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588B1D8E: jmp 0x588b1d92
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B1D90: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1D92: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1D98: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588B1D9B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1D9D: je 0x588b1dc7
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588B1D9F: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588B1DA2: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588B1DA5: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588B1DA8: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588B1DAB: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588B1DAE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B1DB0: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588B1DB3: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588B1DB5: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B1DB8: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588B1DBB: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B1DBE: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588B1DC1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588B1DC4: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588B1DC7: or word ptr [esi + 0x24], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x588B1DCC: cmp dword ptr [esp + 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x588B1DD1: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B1DD6: je 0x588b1ec2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1DDC: cmp dword ptr [eax + 0x164], 0x93
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1DE6: jle 0x588b1dff
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588B1DE8: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1DEF: je 0x588b1dff
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B1DF1: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1DF7: mov eax, dword ptr [ecx + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1DFD: jmp 0x588b1e01
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B1DFF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1E01: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588B1E04: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588B1E07: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1E09: je 0x588b1e33
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588B1E0B: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588B1E0E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588B1E11: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588B1E14: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588B1E17: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588B1E1A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B1E1C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588B1E1F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588B1E21: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B1E24: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588B1E27: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B1E2A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588B1E2D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588B1E30: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588B1E33: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B1E38: cmp dword ptr [eax + 0x164], 0x95
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1E42: jle 0x588b1e5b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588B1E44: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1E4B: je 0x588b1e5b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B1E4D: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1E53: mov eax, dword ptr [ecx + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1E59: jmp 0x588b1e5d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B1E5B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1E5D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588B1E60: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588B1E63: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1E65: je 0x588b1e8f
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588B1E67: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588B1E6A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588B1E6D: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588B1E70: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588B1E73: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588B1E76: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B1E78: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588B1E7B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588B1E7D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B1E80: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588B1E83: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B1E86: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588B1E89: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588B1E8C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588B1E8F: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B1E94: cmp dword ptr [eax + 0x164], 0x97
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1E9E: jle 0x588b1f9d
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1EA4: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1EAB: je 0x588b1f9d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1EB1: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1EB7: mov eax, dword ptr [ecx + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1EBD: jmp 0x588b1f9f
        __asm _emit 0xE9
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1EC2: cmp dword ptr [eax + 0x164], 0x94
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1ECC: jle 0x588b1ee5
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588B1ECE: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1ED5: je 0x588b1ee5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B1ED7: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1EDD: mov eax, dword ptr [ecx + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1EE3: jmp 0x588b1ee7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B1EE5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1EE7: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588B1EEA: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588B1EED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1EEF: je 0x588b1f19
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588B1EF1: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588B1EF4: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588B1EF7: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588B1EFA: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588B1EFD: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588B1F00: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B1F02: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588B1F05: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588B1F07: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B1F0A: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588B1F0D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B1F10: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588B1F13: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588B1F16: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588B1F19: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B1F1E: cmp dword ptr [eax + 0x164], 0x96
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1F28: jle 0x588b1f41
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588B1F2A: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1F31: je 0x588b1f41
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B1F33: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1F39: mov eax, dword ptr [ecx + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1F3F: jmp 0x588b1f43
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B1F41: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1F43: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588B1F46: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588B1F49: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1F4B: je 0x588b1f75
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588B1F4D: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588B1F50: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588B1F53: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588B1F56: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588B1F59: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588B1F5C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B1F5E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588B1F61: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588B1F63: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B1F66: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588B1F69: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B1F6C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588B1F6F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588B1F72: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588B1F75: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B1F7A: cmp dword ptr [eax + 0x164], 0x98
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1F84: jle 0x588b1f9d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588B1F86: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1F8D: je 0x588b1f9d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B1F8F: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1F95: mov eax, dword ptr [ecx + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1F9B: jmp 0x588b1f9f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B1F9D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1F9F: mov esi, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x70
        // 0x588B1FA2: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588B1FA5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1FA7: je 0x588b1fd2
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588B1FA9: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588B1FAC: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588B1FAF: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588B1FB2: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588B1FB5: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588B1FB8: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588B1FBB: lea ecx, [esi + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x588B1FBE: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588B1FC0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B1FC3: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588B1FC6: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B1FC9: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588B1FCC: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588B1FCF: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588B1FD2: pop edi
        __asm _emit 0x5F
        // 0x588B1FD3: pop esi
        __asm _emit 0x5E
        // 0x588B1FD4: pop ebx
        __asm _emit 0x5B
        // 0x588B1FD5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588B1FD8: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
