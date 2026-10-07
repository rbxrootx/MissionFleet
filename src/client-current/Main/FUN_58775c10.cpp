// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 555 bytes in 1 exact ranges.
// Source symbol alias: FUN_58775c10.

// Ghidra body range 0x58775C10..0x58775E3B; 555 mapped bytes.
extern "C" __declspec(naked) void FUN_58775c10_segment_00() {
    __asm {
        // 0x58775C10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58775C13: push ebx
        __asm _emit 0x53
        // 0x58775C14: push ebp
        __asm _emit 0x55
        // 0x58775C15: push esi
        __asm _emit 0x56
        // 0x58775C16: push edi
        __asm _emit 0x57
        // 0x58775C17: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58775C19: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775C1F: sub ecx, dword ptr [edi + 0x7c]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x7C
        // 0x58775C22: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58775C27: sar ecx, 3
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x58775C2A: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x58775C2C: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x58775C2F: inc edx
        __asm _emit 0x42
        // 0x58775C30: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58775C34: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58775C38: cmp edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x58775C3B: jae 0x58775c45
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x58775C3D: mov dword ptr [esp + 0x10], 0xa
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775C45: mov esi, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x7C
        // 0x58775C48: cmp esi, dword ptr [edi + 0x80]
        __asm _emit 0x3B
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775C4E: jbe 0x58775c55
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58775C50: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775C55: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775C5B: sub edx, dword ptr [edi + 0x7c]
        __asm _emit 0x2B
        __asm _emit 0x57
        __asm _emit 0x7C
        // 0x58775C5E: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58775C62: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58775C64: mov ebx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x70
        // 0x58775C67: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x58775C6A: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58775C6C: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775C70: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775C74: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58775C76: jae 0x58775c8c
        __asm _emit 0x73
        __asm _emit 0x14
        // 0x58775C78: push eax
        __asm _emit 0x50
        // 0x58775C79: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775C7D: call 0x5873bf40
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x62
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58775C82: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775C86: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775C8A: jmp 0x58775c92
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58775C8C: mov dword ptr [ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775C92: mov esi, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775C98: cmp dword ptr [edi + 0x7c], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x7C
        // 0x58775C9B: jbe 0x58775ca2
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58775C9D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x6F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775CA2: mov eax, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x70
        // 0x58775CA5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775CA7: je 0x58775cad
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58775CA9: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58775CAB: je 0x58775cb2
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58775CAD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x6F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775CB2: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x58775CB4: je 0x58775e2f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775CBA: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58775CBF: jbe 0x58775e2f
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775CC5: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58775CC9: inc dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58775CCB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775CCD: jne 0x58775de8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775CD3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x6F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775CD8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775CDA: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58775CDD: jb 0x58775ce4
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775CDF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x6F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775CE4: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58775CE7: cmp dword ptr [eax + 0x460], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775CEE: jne 0x58775dc3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775CF4: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775CF6: jne 0x58775def
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775CFC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x6F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775D01: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775D03: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58775D06: jb 0x58775d0d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775D08: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x6F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775D0D: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x58775D10: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58775D14: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58775D17: push ecx
        __asm _emit 0x51
        // 0x58775D18: push eax
        __asm _emit 0x50
        // 0x58775D19: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58775D1B: call 0x58775980
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775D20: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58775D23: jne 0x58775dc3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775D29: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58775D2C: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x58775D2F: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775D31: jne 0x58775df6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775D37: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x6F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775D3C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775D3E: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58775D41: jb 0x58775d48
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775D43: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x6F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775D48: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58775D4B: mov ecx, dword ptr [eax + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775D51: sub esi, dword ptr [ecx + 4]
        __asm _emit 0x2B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x58775D54: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58775D58: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58775D5B: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x58775D5D: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x58775D60: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775D62: jne 0x58775dfd
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775D68: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x6F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775D6D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775D6F: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58775D72: jb 0x58775d79
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775D74: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x6E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775D79: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58775D7C: mov edx, dword ptr [ecx + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775D82: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58775D86: sub esi, dword ptr [edx + 8]
        __asm _emit 0x2B
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x58775D89: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58775D8B: add eax, 0x68
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x68
        // 0x58775D8E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58775D90: cmp word ptr [eax - 0xc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0xF4
        __asm _emit 0x02
        // 0x58775D95: jne 0x58775db6
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58775D97: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58775D99: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58775D9B: jbe 0x58775db6
        __asm _emit 0x76
        __asm _emit 0x19
        // 0x58775D9D: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58775D9F: jbe 0x58775db6
        __asm _emit 0x76
        __asm _emit 0x15
        // 0x58775DA1: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x58775DA3: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x58775DA5: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x58775DA8: imul ebp, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xEF
        // 0x58775DAB: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x58775DAD: cmp dword ptr [eax + 8], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58775DB0: ja 0x58775e08
        __asm _emit 0x77
        __asm _emit 0x56
        // 0x58775DB2: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775DB6: inc ecx
        __asm _emit 0x41
        // 0x58775DB7: add eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x38
        // 0x58775DBA: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58775DBD: jl 0x58775d90
        __asm _emit 0x7C
        __asm _emit 0xD1
        // 0x58775DBF: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58775DC3: dec dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58775DC7: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775DC9: jne 0x58775e04
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x58775DCB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x6E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775DD0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775DD2: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58775DD5: jb 0x58775ddc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775DD7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x6E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775DDC: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x58775DDF: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775DE3: jmp 0x58775c92
        __asm _emit 0xE9
        __asm _emit 0xAA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775DE8: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775DEA: jmp 0x58775cda
        __asm _emit 0xE9
        __asm _emit 0xEB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775DEF: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775DF1: jmp 0x58775d03
        __asm _emit 0xE9
        __asm _emit 0x0D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775DF6: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775DF8: jmp 0x58775d3e
        __asm _emit 0xE9
        __asm _emit 0x41
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775DFD: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775DFF: jmp 0x58775d6f
        __asm _emit 0xE9
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775E04: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775E06: jmp 0x58775dd2
        __asm _emit 0xEB
        __asm _emit 0xCA
        // 0x58775E08: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775E0A: jne 0x58775e2b
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58775E0C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x6E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775E11: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775E15: cmp esi, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x58775E18: jb 0x58775e1f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775E1A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x6E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775E1F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58775E21: pop edi
        __asm _emit 0x5F
        // 0x58775E22: pop esi
        __asm _emit 0x5E
        // 0x58775E23: pop ebp
        __asm _emit 0x5D
        // 0x58775E24: pop ebx
        __asm _emit 0x5B
        // 0x58775E25: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58775E28: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58775E2B: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x58775E2D: jmp 0x58775e11
        __asm _emit 0xEB
        __asm _emit 0xE2
        // 0x58775E2F: pop edi
        __asm _emit 0x5F
        // 0x58775E30: pop esi
        __asm _emit 0x5E
        // 0x58775E31: pop ebp
        __asm _emit 0x5D
        // 0x58775E32: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775E34: pop ebx
        __asm _emit 0x5B
        // 0x58775E35: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58775E38: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
