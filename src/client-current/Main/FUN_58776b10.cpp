// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58776B10 .. +0x40B bytes.
// Source symbol alias: FUN_58776b10.
extern "C" __declspec(naked) void FUN_58776b10() {
    __asm {
        // 0x58776B10: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x58776B13: push ebx
        __asm _emit 0x53
        // 0x58776B14: push ebp
        __asm _emit 0x55
        // 0x58776B15: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58776B17: push esi
        __asm _emit 0x56
        // 0x58776B18: mov esi, dword ptr [ebx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x64
        // 0x58776B1B: push edi
        __asm _emit 0x57
        // 0x58776B1C: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776B24: cmp esi, dword ptr [ebx + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x73
        __asm _emit 0x68
        // 0x58776B27: jbe 0x58776b2e
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776B29: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776B2E: mov edi, dword ptr [ebx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x58
        // 0x58776B31: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58776B35: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58776B37: mov esi, dword ptr [ebx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x68
        // 0x58776B3A: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58776B3E: cmp dword ptr [ebx + 0x64], esi
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0x64
        // 0x58776B41: jbe 0x58776b48
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776B43: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776B48: mov eax, dword ptr [ebx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x58
        // 0x58776B4B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58776B4D: je 0x58776b53
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58776B4F: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58776B51: je 0x58776b58
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58776B53: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776B58: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x58776B5A: je 0x58776f0d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776B60: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58776B62: jne 0x58776ba2
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x58776B64: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776B69: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776B6B: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58776B6E: jb 0x58776b75
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776B70: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776B75: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58776B79: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776B80: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58776B83: cmp dword ptr [edx + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58776B86: je 0x58776baa
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58776B88: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58776B8A: jne 0x58776ba6
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58776B8C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776B91: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776B93: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58776B96: jb 0x58776b9d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776B98: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776B9D: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58776BA0: jmp 0x58776b37
        __asm _emit 0xEB
        __asm _emit 0x95
        // 0x58776BA2: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58776BA4: jmp 0x58776b6b
        __asm _emit 0xEB
        __asm _emit 0xC5
        // 0x58776BA6: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58776BA8: jmp 0x58776b93
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58776BAA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58776BAC: jne 0x58776dc3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776BB2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776BB7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776BB9: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58776BBC: jb 0x58776bc3
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776BBE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776BC3: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58776BC6: mov ebx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x58776BC9: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58776BCC: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58776BCF: jbe 0x58776bd6
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776BD1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776BD6: mov ebp, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x2E
        // 0x58776BD8: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58776BDC: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776BE0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58776BE2: jne 0x58776dca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776BE8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776BED: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58776BF1: cmp eax, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58776BF4: jb 0x58776bfb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776BF6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776BFB: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58776BFF: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x58776C01: mov edi, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58776C04: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58776C07: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58776C0A: jbe 0x58776c11
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776C0C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776C11: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58776C13: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58776C15: je 0x58776c1b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58776C17: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x58776C19: je 0x58776c20
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58776C1B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776C20: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58776C22: je 0x58776f0d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776C28: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58776C2A: jne 0x58776dd1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776C30: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776C35: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776C37: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776C3A: jb 0x58776c41
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776C3C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776C41: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x58776C43: mov ebx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x58776C46: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58776C49: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58776C4C: jbe 0x58776c53
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776C4E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776C53: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58776C55: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58776C57: jne 0x58776dd9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776C5D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776C62: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776C64: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776C68: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58776C6B: jb 0x58776c72
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776C6D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776C72: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776C76: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x58776C78: mov ebp, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x18
        // 0x58776C7B: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x58776C7E: cmp dword ptr [edi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6F
        __asm _emit 0x0C
        // 0x58776C81: jbe 0x58776c88
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776C83: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776C88: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x58776C8A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776C8C: je 0x58776c92
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58776C8E: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58776C90: je 0x58776c97
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58776C92: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776C97: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x58776C99: je 0x58776ed6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776C9F: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58776CA3: mov edx, dword ptr [ecx + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776CA9: mov edi, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x6C
        // 0x58776CAC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776CAE: jne 0x58776de1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776CB4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776CB9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776CBB: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776CBE: jb 0x58776cc5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776CC0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776CC5: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58776CC7: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58776CCA: mov edx, dword ptr [ecx + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776CD0: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x58776CD3: push edi
        __asm _emit 0x57
        // 0x58776CD4: push eax
        __asm _emit 0x50
        // 0x58776CD5: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58776CDB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58776CDD: jne 0x58776e9b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776CE3: cmp dword ptr [esp + 0x2c], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58776CE7: je 0x58776e08
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776CED: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776CEF: jne 0x58776de8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776CF5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776CFA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776CFC: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776CFF: jb 0x58776d06
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776D01: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776D06: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58776D08: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58776D0B: call 0x588df450
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58776D10: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776D12: jne 0x58776def
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776D18: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776D1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776D1F: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776D22: jb 0x58776d29
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776D24: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776D29: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58776D2B: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58776D2E: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776D33: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58776D37: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776D39: jne 0x58776df6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776D3F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776D44: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776D46: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776D49: jb 0x58776d50
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776D4B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776D50: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58776D52: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58776D55: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776D5A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58776D5E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776D60: jne 0x58776dfd
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776D66: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776D6B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776D6D: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776D70: jb 0x58776d77
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776D72: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x5E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776D77: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58776D79: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58776D7C: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58776D82: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58776D85: mov al, byte ptr [eax + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776D8B: cmp al, byte ptr [edx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776D91: je 0x58776e9b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776D97: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776D99: jne 0x58776e04
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x58776D9B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x5E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776DA0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776DA2: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776DA5: jb 0x58776dac
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776DA7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x5E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776DAC: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58776DAE: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58776DB1: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776DB7: mov ecx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x60
        // 0x58776DBA: add dword ptr [esp + 0x10], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58776DBE: jmp 0x58776e9b
        __asm _emit 0xE9
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776DC3: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58776DC5: jmp 0x58776bb9
        __asm _emit 0xE9
        __asm _emit 0xEF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776DCA: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x58776DCC: jmp 0x58776bed
        __asm _emit 0xE9
        __asm _emit 0x1C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776DD1: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58776DD4: jmp 0x58776c37
        __asm _emit 0xE9
        __asm _emit 0x5E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776DD9: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58776DDC: jmp 0x58776c64
        __asm _emit 0xE9
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776DE1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776DE3: jmp 0x58776cbb
        __asm _emit 0xE9
        __asm _emit 0xD3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776DE8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776DEA: jmp 0x58776cfc
        __asm _emit 0xE9
        __asm _emit 0x0D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776DEF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776DF1: jmp 0x58776d1f
        __asm _emit 0xE9
        __asm _emit 0x29
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776DF6: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776DF8: jmp 0x58776d46
        __asm _emit 0xE9
        __asm _emit 0x49
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776DFD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776DFF: jmp 0x58776d6d
        __asm _emit 0xE9
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776E04: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776E06: jmp 0x58776da2
        __asm _emit 0xEB
        __asm _emit 0x9A
        // 0x58776E08: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776E0A: jne 0x58776ebc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776E10: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x5E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776E15: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776E17: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776E1A: jb 0x58776e21
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776E1C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x5E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776E21: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58776E23: mov ecx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x58776E26: call 0x588df450
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58776E2B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776E2D: jne 0x58776ec3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776E33: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x5E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776E38: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776E3A: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776E3D: jb 0x58776e44
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776E3F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x5E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776E44: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58776E46: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58776E49: call 0x588da9e0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x3B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58776E4E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776E50: jne 0x58776eca
        __asm _emit 0x75
        __asm _emit 0x78
        // 0x58776E52: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x5E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776E57: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776E59: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776E5C: jb 0x58776e63
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776E5E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x5E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776E63: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58776E65: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58776E68: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776E6D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58776E71: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776E73: jne 0x58776ece
        __asm _emit 0x75
        __asm _emit 0x59
        // 0x58776E75: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776E7A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776E7C: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776E7F: jb 0x58776e86
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776E81: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776E86: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58776E88: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58776E8B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58776E8D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58776E8F: push ecx
        __asm _emit 0x51
        // 0x58776E90: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58776E96: call 0x587f21e0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58776E9B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58776E9D: jne 0x58776ed2
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58776E9F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776EA4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776EA6: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776EA9: jb 0x58776eb0
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776EAB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776EB0: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58776EB4: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58776EB7: jmp 0x58776c55
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776EBC: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776EBE: jmp 0x58776e17
        __asm _emit 0xE9
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776EC3: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776EC5: jmp 0x58776e3a
        __asm _emit 0xE9
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776ECA: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776ECC: jmp 0x58776e59
        __asm _emit 0xEB
        __asm _emit 0x8B
        // 0x58776ECE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776ED0: jmp 0x58776e7c
        __asm _emit 0xEB
        __asm _emit 0xAA
        // 0x58776ED2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776ED4: jmp 0x58776ea6
        __asm _emit 0xEB
        __asm _emit 0xD0
        // 0x58776ED6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58776EDA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58776EDC: jne 0x58776f09
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x58776EDE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776EE3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776EE5: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776EE9: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58776EEC: jb 0x58776ef3
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776EEE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776EF3: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x58776EF8: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58776EFC: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58776F00: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776F04: jmp 0x58776be0
        __asm _emit 0xE9
        __asm _emit 0xD7
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776F09: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58776F0B: jmp 0x58776ee5
        __asm _emit 0xEB
        __asm _emit 0xD8
        // 0x58776F0D: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58776F11: pop edi
        __asm _emit 0x5F
        // 0x58776F12: pop esi
        __asm _emit 0x5E
        // 0x58776F13: pop ebp
        __asm _emit 0x5D
        // 0x58776F14: pop ebx
        __asm _emit 0x5B
        // 0x58776F15: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58776F18: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
