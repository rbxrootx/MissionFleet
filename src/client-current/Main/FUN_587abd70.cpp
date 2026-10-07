// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1018 bytes in 3 discontiguous ranges.
// Source symbol alias: FUN_587abd70.

// Ghidra body range 0x587ABD70..0x587AC05F; 751 mapped bytes.
extern "C" __declspec(naked) void FUN_587abd70_segment_00() {
    __asm {
        // 0x587ABD70: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587ABD73: push ebx
        __asm _emit 0x53
        // 0x587ABD74: push ebp
        __asm _emit 0x55
        // 0x587ABD75: push esi
        __asm _emit 0x56
        // 0x587ABD76: push edi
        __asm _emit 0x57
        // 0x587ABD77: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587ABD79: mov esi, dword ptr [edi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABD7F: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ABD83: cmp esi, dword ptr [edi + 0x174]
        __asm _emit 0x3B
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABD89: jbe 0x587abd90
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABD8B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABD90: mov ebp, dword ptr [edi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABD96: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x587ABD98: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ABD9C: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ABDA0: mov esi, dword ptr [edi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABDA6: cmp dword ptr [edi + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABDAC: jbe 0x587abdb3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABDAE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABDB3: mov eax, dword ptr [edi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABDB9: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ABDBB: je 0x587abdc1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587ABDBD: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587ABDBF: je 0x587abdc6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587ABDC1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABDC6: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587ABDC8: je 0x587ac187
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABDCE: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ABDD0: jne 0x587abf82
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABDD6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABDDB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABDDD: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587ABDE0: jb 0x587abde7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABDE2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABDE7: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587ABDE9: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABDEF: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ABDF2: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ABDF5: jbe 0x587abdfc
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABDF7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABDFC: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x587ABDFE: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587ABE02: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ABE06: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ABE08: jne 0x587abf8a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABE0E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABE13: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABE15: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ABE19: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587ABE1C: jb 0x587abe23
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABE1E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABE23: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ABE27: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587ABE29: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABE2F: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ABE32: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ABE35: jbe 0x587abe3c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABE37: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABE3C: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ABE3E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587ABE40: je 0x587abe46
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587ABE42: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587ABE44: je 0x587abe4b
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587ABE46: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABE4B: cmp dword ptr [esp + 0x18], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ABE4F: je 0x587ac157
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABE55: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587ABE57: jne 0x587abf92
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABE5D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABE62: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABE64: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ABE68: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587ABE6B: jb 0x587abe72
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABE6D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABE72: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ABE76: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587ABE78: mov edi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABE7E: mov esi, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x587ABE81: cmp esi, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x10
        // 0x587ABE84: jbe 0x587abe8b
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABE86: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABE8B: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587ABE8D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587ABE90: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587ABE92: jne 0x587abf99
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABE98: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABE9D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABE9F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ABEA3: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587ABEA6: jb 0x587abead
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABEA8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABEAD: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ABEB1: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587ABEB3: mov ebx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABEB9: mov ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x587ABEBC: cmp dword ptr [ebx + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x587ABEBF: jbe 0x587abec6
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABEC1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABEC6: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x587ABEC8: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587ABECA: je 0x587abed0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587ABECC: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587ABECE: je 0x587abed5
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587ABED0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABED5: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587ABED7: je 0x587ac124
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABEDD: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587ABEDF: jne 0x587abfa0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABEE5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABEEA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABEEC: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587ABEEF: jb 0x587abef6
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABEF1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABEF6: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ABEFA: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ABEFC: push ecx
        __asm _emit 0x51
        // 0x587ABEFD: add edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0E
        // 0x587ABF00: push edx
        __asm _emit 0x52
        // 0x587ABF01: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ABF07: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ABF09: jne 0x587ac0ff
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABF0F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587ABF11: jne 0x587abfa7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABF17: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABF1C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABF1E: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587ABF21: jb 0x587abf28
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABF23: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABF28: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587ABF2A: mov ecx, dword ptr [eax + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x587ABF2D: push ecx
        __asm _emit 0x51
        // 0x587ABF2E: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ABF34: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xCB
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587ABF39: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587ABF3B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587ABF3D: je 0x587ac01c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABF43: mov dl, byte ptr [ebx + 4]
        __asm _emit 0x8A
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x587ABF46: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587ABF49: cmp dl, 0x10
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x10
        // 0x587ABF4C: jae 0x587abfb2
        __asm _emit 0x73
        __asm _emit 0x64
        // 0x587ABF4E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587ABF50: jne 0x587abfae
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x587ABF52: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABF57: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABF59: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587ABF5C: jb 0x587abf63
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABF5E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x0D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABF63: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587ABF65: movzx edx, word ptr [ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x587ABF69: movzx eax, byte ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587ABF6D: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ABF71: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587ABF74: lea ecx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC0
        // 0x587ABF77: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x587ABF79: lea eax, [edx + ecx*8 + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABF80: jmp 0x587abfe4
        __asm _emit 0xEB
        __asm _emit 0x62
        // 0x587ABF82: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ABF85: jmp 0x587abddd
        __asm _emit 0xE9
        __asm _emit 0x53
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABF8A: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ABF8D: jmp 0x587abe15
        __asm _emit 0xE9
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABF92: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587ABF94: jmp 0x587abe64
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABF99: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587ABF9B: jmp 0x587abe9f
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABFA0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587ABFA2: jmp 0x587abeec
        __asm _emit 0xE9
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABFA7: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587ABFA9: jmp 0x587abf1e
        __asm _emit 0xE9
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABFAE: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587ABFB0: jmp 0x587abf59
        __asm _emit 0xEB
        __asm _emit 0xA7
        // 0x587ABFB2: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587ABFB4: jne 0x587ac014
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x587ABFB6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x0C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABFBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABFBD: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587ABFC0: jb 0x587abfc7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABFC2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x0C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABFC7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587ABFC9: movzx edx, word ptr [ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x587ABFCD: movzx eax, byte ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587ABFD1: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ABFD5: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587ABFD8: lea ecx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC0
        // 0x587ABFDB: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x587ABFDD: lea eax, [edx + ecx*8 + 0x196]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABFE4: dec byte ptr [eax]
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x587ABFE6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587ABFE8: jne 0x587ac018
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x587ABFEA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x0C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABFEF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABFF1: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587ABFF4: jb 0x587abffb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABFF6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x0C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABFFB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587ABFFD: movzx ecx, byte ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587AC001: mov edx, dword ptr [ebx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x78
        // 0x587AC004: sub dword ptr [ebp + ecx*4 + 0x3dc], edx
        __asm _emit 0x29
        __asm _emit 0x94
        __asm _emit 0x8D
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AC00B: lea eax, [ebp + ecx*4 + 0x3dc]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AC012: jmp 0x587ac020
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587AC014: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AC016: jmp 0x587abfbd
        __asm _emit 0xEB
        __asm _emit 0xA5
        // 0x587AC018: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AC01A: jmp 0x587abff1
        __asm _emit 0xEB
        __asm _emit 0xD5
        // 0x587AC01C: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AC020: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AC022: jne 0x587ac0e6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AC028: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC02D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AC02F: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AC032: jb 0x587ac039
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AC034: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x0C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC039: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587AC03C: je 0x587ac07f
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x587AC03E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AC040: jne 0x587ac0ed
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AC046: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x0C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC04B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AC04D: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AC050: jb 0x587ac057
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AC052: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x0C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC057: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AC059: push eax
        __asm _emit 0x50
        // 0x587AC05A: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587AC07F..0x587AC0F4; 117 mapped bytes.
extern "C" __declspec(naked) void FUN_587abd70_segment_01() {
    __asm {
        // 0x587AC07F: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AC083: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AC085: jne 0x587ac0fb
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x587AC087: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC08C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AC08E: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AC092: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AC095: jb 0x587ac09c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AC097: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC09C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587AC09E: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AC0A4: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x587AC0A7: lea ecx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587AC0AA: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587AC0AC: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587AC0AF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AC0B1: jle 0x587ac0c3
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AC0B3: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587AC0B5: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587AC0B7: push eax
        __asm _emit 0x50
        // 0x587AC0B8: push ecx
        __asm _emit 0x51
        // 0x587AC0B9: push eax
        __asm _emit 0x50
        // 0x587AC0BA: push esi
        __asm _emit 0x56
        // 0x587AC0BB: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC0C0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AC0C3: add dword ptr [edi + 0x10], -4
        __asm _emit 0x83
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0xFC
        // 0x587AC0C7: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x587AC0CA: cmp dword ptr [edi + 0xc], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x587AC0CD: ja 0x587ac0d3
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587AC0CF: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587AC0D1: jbe 0x587ac0d8
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AC0D3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC0D8: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587AC0DA: dec dword ptr [ebp + 0x6c]
        __asm _emit 0xFF
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x587AC0DD: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AC0E1: jmp 0x587abe90
        __asm _emit 0xE9
        __asm _emit 0xAA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AC0E6: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AC0E8: jmp 0x587ac02f
        __asm _emit 0xE9
        __asm _emit 0x42
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AC0ED: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AC0EF: jmp 0x587ac04d
        __asm _emit 0xE9
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}

// Ghidra body range 0x587AC0FB..0x587AC191; 150 mapped bytes.
extern "C" __declspec(naked) void FUN_587abd70_segment_02() {
    __asm {
        // 0x587AC0FB: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AC0FD: jmp 0x587ac08e
        __asm _emit 0xEB
        __asm _emit 0x8F
        // 0x587AC0FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AC101: jne 0x587ac120
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587AC103: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC108: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AC10A: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AC10D: jb 0x587ac114
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AC10F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC114: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AC118: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587AC11B: jmp 0x587abe90
        __asm _emit 0xE9
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AC120: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AC122: jmp 0x587ac10a
        __asm _emit 0xEB
        __asm _emit 0xE6
        // 0x587AC124: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AC128: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AC12A: jne 0x587ac153
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587AC12C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC131: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AC133: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AC137: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587AC13A: jb 0x587ac141
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AC13C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC141: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x587AC146: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AC14A: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AC14E: jmp 0x587abe06
        __asm _emit 0xE9
        __asm _emit 0xB3
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AC153: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AC155: jmp 0x587ac133
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x587AC157: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AC159: jne 0x587ac182
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587AC15B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC160: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AC162: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AC166: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587AC169: jb 0x587ac170
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AC16B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x0B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC170: add dword ptr [esp + 0x20], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x587AC175: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AC179: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AC17D: jmp 0x587abda0
        __asm _emit 0xE9
        __asm _emit 0x1E
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AC182: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AC185: jmp 0x587ac162
        __asm _emit 0xEB
        __asm _emit 0xDB
        // 0x587AC187: pop edi
        __asm _emit 0x5F
        // 0x587AC188: pop esi
        __asm _emit 0x5E
        // 0x587AC189: pop ebp
        __asm _emit 0x5D
        // 0x587AC18A: pop ebx
        __asm _emit 0x5B
        // 0x587AC18B: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587AC18E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
