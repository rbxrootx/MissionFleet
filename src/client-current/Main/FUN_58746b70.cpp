// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1016 bytes in 1 exact ranges.
// Source symbol alias: FUN_58746b70.

// Ghidra body range 0x58746B70..0x58746F68; 1016 mapped bytes.
extern "C" __declspec(naked) void FUN_58746b70_segment_00() {
    __asm {
        // 0x58746B70: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58746B73: push ebx
        __asm _emit 0x53
        // 0x58746B74: push ebp
        __asm _emit 0x55
        // 0x58746B75: push esi
        __asm _emit 0x56
        // 0x58746B76: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58746B78: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58746B7A: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746B80: movzx eax, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58746B84: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58746B87: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x58746B8A: push edi
        __asm _emit 0x57
        // 0x58746B8B: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746B8F: mov byte ptr [esp + 0x13], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x01
        // 0x58746B94: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58746B98: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58746B9A: je 0x58746c62
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746BA0: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xFB
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58746BA5: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58746BAA: jne 0x58746c2b
        __asm _emit 0x75
        __asm _emit 0x7F
        // 0x58746BAC: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58746BAF: cmp word ptr [ecx + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58746BB7: jb 0x58746bca
        __asm _emit 0x72
        __asm _emit 0x11
        // 0x58746BB9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58746BBB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58746BBD: call 0x587453b0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746BC2: pop edi
        __asm _emit 0x5F
        // 0x58746BC3: pop esi
        __asm _emit 0x5E
        // 0x58746BC4: pop ebp
        __asm _emit 0x5D
        // 0x58746BC5: pop ebx
        __asm _emit 0x5B
        // 0x58746BC6: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58746BC9: ret
        __asm _emit 0xC3
        // 0x58746BCA: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58746BCD: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x58746BCF: sub eax, dword ptr [edi + 4]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58746BD2: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x58746BD5: sub ecx, dword ptr [edi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58746BD8: mov edx, dword ptr [edi + 0xdcc]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746BDE: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58746BE0: imul ebx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD9
        // 0x58746BE3: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58746BE5: imul ebp, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xE8
        // 0x58746BE8: add ebx, ebp
        __asm _emit 0x03
        __asm _emit 0xDD
        // 0x58746BEA: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x58746BEC: imul ebp, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xEA
        // 0x58746BEF: add ebp, ebp
        __asm _emit 0x03
        __asm _emit 0xED
        // 0x58746BF1: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x58746BF3: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x58746BF6: imul ecx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC9
        // 0x58746BF9: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58746BFB: imul ebx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD8
        // 0x58746BFE: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x58746C00: mov byte ptr [esp + 0x13], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58746C05: cmp ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x58746C08: jb 0x58746c0f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58746C0A: mov byte ptr [esp + 0x13], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x01
        // 0x58746C0F: cmp ecx, dword ptr [esi + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58746C12: jb 0x58746c19
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58746C14: mov byte ptr [esp + 0x13], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x01
        // 0x58746C19: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58746C1D: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58746C20: je 0x58746c2f
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58746C22: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58746C25: je 0x58746c2f
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58746C27: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58746C29: je 0x58746c88
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x58746C2B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58746C2D: jmp 0x58746c81
        __asm _emit 0xEB
        __asm _emit 0x52
        // 0x58746C2F: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58746C32: push eax
        __asm _emit 0x50
        // 0x58746C33: push edi
        __asm _emit 0x57
        // 0x58746C34: call 0x587477f0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746C39: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58746C3C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746C3E: jne 0x58746c43
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58746C40: push eax
        __asm _emit 0x50
        // 0x58746C41: jmp 0x58746c81
        __asm _emit 0xEB
        __asm _emit 0x3E
        // 0x58746C43: cmp byte ptr [esp + 0x13], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58746C48: je 0x58746c88
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58746C4A: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58746C4D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58746C50: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58746C53: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58746C55: push edx
        __asm _emit 0x52
        // 0x58746C56: push eax
        __asm _emit 0x50
        // 0x58746C57: push ecx
        __asm _emit 0x51
        // 0x58746C58: call 0x58747410
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746C5D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58746C60: jmp 0x58746c88
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x58746C62: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58746C65: je 0x58746c75
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58746C67: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58746C6A: je 0x58746c75
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58746C6C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58746C6E: call 0x587453e0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746C73: jmp 0x58746c7c
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58746C75: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58746C77: call 0x58745840
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746C7C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746C7E: je 0x58746c88
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58746C80: push eax
        __asm _emit 0x50
        // 0x58746C81: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58746C83: call 0x587453b0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746C88: cmp dword ptr [esi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58746C8C: je 0x58746dcd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746C92: lea edi, [esi + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x44
        // 0x58746C95: mov dword ptr [esp + 0x18], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746C9D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58746CA0: cmp word ptr [edi - 0x2c], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0xD4
        __asm _emit 0x01
        // 0x58746CA5: jne 0x58746dbf
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746CAB: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58746CAD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58746CAF: je 0x58746dbf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746CB5: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58746CB8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58746CBA: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58746CBD: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x58746CC0: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x58746CC3: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58746CC5: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58746CC7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58746CC9: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58746CCD: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x58746CCF: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58746CD1: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x58746CD4: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58746CD7: mov ecx, dword ptr [edi - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE8
        // 0x58746CDA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58746CDC: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746CE0: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58746CE2: ja 0x58746cf0
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x58746CE4: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746CE8: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746CEC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746CEE: jmp 0x58746cfa
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58746CF0: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746CF4: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746CF8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58746CFA: jge 0x58746d02
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58746CFC: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58746D02: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746D07: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x5F
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746D0C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58746D0E: lea ecx, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xB6
        // 0x58746D11: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x58746D13: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58746D18: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58746D1A: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58746D1E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58746D21: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58746D23: push 0x2ee
        __asm _emit 0x68
        __asm _emit 0xEE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746D28: push ecx
        __asm _emit 0x51
        // 0x58746D29: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58746D2C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58746D2E: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746D32: push ebp
        __asm _emit 0x55
        // 0x58746D33: push edx
        __asm _emit 0x52
        // 0x58746D34: push ebx
        __asm _emit 0x53
        // 0x58746D35: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x58746D37: call 0x58747650
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746D3C: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58746D3F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58746D41: je 0x58746d9e
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x58746D43: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58746D45: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58746D48: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58746D4D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58746D4F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746D53: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58746D55: mov ebx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x58746D58: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58746D5B: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58746D5E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58746D60: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58746D63: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58746D65: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x58746D67: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58746D69: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58746D6C: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58746D6F: push edx
        __asm _emit 0x52
        // 0x58746D70: push eax
        __asm _emit 0x50
        // 0x58746D71: push ebx
        __asm _emit 0x53
        // 0x58746D72: push ecx
        __asm _emit 0x51
        // 0x58746D73: call 0x587473e0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746D78: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58746D7B: fcomp qword ptr [0x5898cf48]
        __asm _emit 0xDC
        __asm _emit 0x1D
        __asm _emit 0x48
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58746D81: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x58746D83: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x58746D86: jne 0x58746d9e
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58746D88: lea ecx, [esi + esi*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x76
        // 0x58746D8B: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58746D90: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58746D92: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58746D95: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58746D97: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58746D9A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58746D9C: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x58746D9E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58746DA0: cmp dword ptr [edi - 0x24], eax
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0xDC
        // 0x58746DA3: jle 0x58746dbb
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58746DA5: mov ecx, dword ptr [edi - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xD8
        // 0x58746DA8: cmp dword ptr [ecx], esi
        __asm _emit 0x39
        __asm _emit 0x31
        // 0x58746DAA: jae 0x58746db7
        __asm _emit 0x73
        __asm _emit 0x0B
        // 0x58746DAC: inc eax
        __asm _emit 0x40
        // 0x58746DAD: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58746DB0: cmp eax, dword ptr [edi - 0x24]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0xDC
        // 0x58746DB3: jl 0x58746da8
        __asm _emit 0x7C
        __asm _emit 0xF3
        // 0x58746DB5: jmp 0x58746dbb
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58746DB7: mov word ptr [edi + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58746DBB: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746DBF: add edi, 0x38
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x38
        // 0x58746DC2: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x58746DC7: jne 0x58746ca0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746DCD: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58746DD0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58746DD2: je 0x58746f5a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746DD8: cmp byte ptr [esp + 0x13], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58746DDD: jne 0x58746f44
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746DE3: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x58746DE5: mov ebx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x58746DE8: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x58746DEB: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x58746DEE: mov ebp, dword ptr [edi + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746DF4: cmp ebp, 0x708
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746DFA: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58746DFD: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E01: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746E06: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746E0A: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746E0E: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58746E12: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58746E14: jge 0x58746e1d
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x58746E16: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58746E19: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58746E1D: cmp ebp, 0x384
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746E23: jle 0x58746e30
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x58746E25: cmp ebp, 0xa8c
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746E2B: jg 0x58746e30
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58746E2D: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x58746E30: cmp dword ptr [esp + 0x14], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746E34: je 0x58746ec5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746E3A: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E3E: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58746E40: je 0x58746ed5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746E46: sub ebx, dword ptr [esp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746E4A: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58746E4C: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E50: fild dword ptr [esp + 0x20]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E54: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E58: fidiv dword ptr [esp + 0x20]
        __asm _emit 0xDA
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E5C: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58746E60: fld dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58746E64: fmul st(0), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC8
        // 0x58746E66: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x58746E68: fadd st(1), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC1
        // 0x58746E6A: fld qword ptr [0x5898cae8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58746E70: fdivrp st(2)
        __asm _emit 0xDE
        __asm _emit 0xF2
        // 0x58746E72: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x58746E74: fstp dword ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E78: fld dword ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E7C: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x5E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746E81: fstp dword ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E85: fld dword ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E89: fstp dword ptr [esp + 0x24]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746E8D: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58746E91: fstp dword ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E95: fld dword ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746E99: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x58746E9B: fld dword ptr [esp + 0x24]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746E9F: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x58746EA1: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x58746EA3: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746EA7: faddp st(2)
        __asm _emit 0xDE
        __asm _emit 0xC2
        // 0x58746EA9: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x58746EAB: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x5D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746EB0: fmul dword ptr [esp + 0x1c]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58746EB4: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58746EB6: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x58746EB8: fiadd dword ptr [esp + 0x28]
        __asm _emit 0xDA
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746EBC: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x5D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746EC1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58746EC3: jmp 0x58746ee3
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58746EC5: imul ecx, ecx, 0x190
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746ECB: add ecx, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746ECF: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58746ED1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58746ED3: jmp 0x58746ee3
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58746ED5: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746ED9: imul edx, edx, 0x190
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746EDF: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58746EE1: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58746EE3: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58746EE9: mov eax, dword ptr [edx + 0x10910]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58746EEF: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746EF3: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58746EF5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58746EF7: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58746EFD: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58746F02: mov ebp, 0x10a
        __asm _emit 0xBD
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746F07: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x58746F0A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58746F0C: div ebp
        __asm _emit 0xF7
        __asm _emit 0xF5
        // 0x58746F0E: lea ecx, [edx + ecx - 0x85]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x7B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746F15: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746F19: lea eax, [edx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1A
        // 0x58746F1C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58746F1E: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58746F24: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58746F29: push ecx
        __asm _emit 0x51
        // 0x58746F2A: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58746F2C: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x58746F2F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58746F31: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58746F33: lea edx, [edx + ebx - 0x85]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x1A
        __asm _emit 0x7B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746F3A: push edx
        __asm _emit 0x52
        // 0x58746F3B: push edi
        __asm _emit 0x57
        // 0x58746F3C: call 0x58747410
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746F41: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58746F44: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58746F46: pop edi
        __asm _emit 0x5F
        // 0x58746F47: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746F4D: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746F53: pop esi
        __asm _emit 0x5E
        // 0x58746F54: pop ebp
        __asm _emit 0x5D
        // 0x58746F55: pop ebx
        __asm _emit 0x5B
        // 0x58746F56: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58746F59: ret
        __asm _emit 0xC3
        // 0x58746F5A: pop edi
        __asm _emit 0x5F
        // 0x58746F5B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58746F5D: pop esi
        __asm _emit 0x5E
        // 0x58746F5E: pop ebp
        __asm _emit 0x5D
        // 0x58746F5F: pop ebx
        __asm _emit 0x5B
        // 0x58746F60: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58746F63: jmp 0x58746720
        __asm _emit 0xE9
        __asm _emit 0xB8
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
