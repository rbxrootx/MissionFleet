// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EFF30 .. +0x218 bytes.
extern "C" __declspec(naked) void FUN_588eff30() {
    __asm {
        // 0x588EFF30: push ecx
        __asm _emit 0x51
        // 0x588EFF31: push ebx
        __asm _emit 0x53
        // 0x588EFF32: push ebp
        __asm _emit 0x55
        // 0x588EFF33: push esi
        __asm _emit 0x56
        // 0x588EFF34: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588EFF36: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF3C: push edi
        __asm _emit 0x57
        // 0x588EFF3D: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFF42: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF48: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588EFF4A: call 0x58908650
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFF4F: lea esi, [ebx + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF55: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF5A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF60: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588EFF62: call 0x58908650
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFF67: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588EFF6A: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588EFF6D: jne 0x588eff60
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588EFF6F: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF75: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFF7A: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588EFF7C: je 0x588f0142
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF82: cmp dword ptr [ebx + 0x3ec], edi
        __asm _emit 0x39
        __asm _emit 0xBB
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF88: mov eax, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF8E: mov ebp, dword ptr [eax + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x5C
        // 0x588EFF91: jle 0x588f010e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF97: mov eax, 0xa0c
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF9C: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x588EFF9E: lea esi, [ebx + 0x134]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFFA4: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EFFA8: jmp 0x588effb0
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588EFFAA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFFB0: mov ecx, dword ptr [esi - 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EFFB6: push ebp
        __asm _emit 0x55
        // 0x588EFFB7: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFFBC: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588EFFBE: push ebp
        __asm _emit 0x55
        // 0x588EFFBF: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFFC4: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFFCA: push ebp
        __asm _emit 0x55
        // 0x588EFFCB: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFFD0: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFFD6: push ebp
        __asm _emit 0x55
        // 0x588EFFD7: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFFDC: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFFE2: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFFE7: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588EFFEA: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588EFFEC: jge 0x588f00d3
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFFF2: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFFF8: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFFFD: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588EFFFF: jl 0x588f00d3
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0005: mov eax, dword ptr [esi - 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F000B: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588F0010: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0016: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F001A: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0020: lea ecx, [edx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x32
        // 0x588F0023: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x588F0026: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F0028: je 0x588f00fe
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F002E: movzx edx, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x12
        // 0x588F0031: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F0034: je 0x588f00fe
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F003A: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x588F003D: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F003F: je 0x588f0064
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588F0041: movzx edx, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x12
        // 0x588F0044: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588F0048: jne 0x588f0064
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588F004A: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F004C: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0051: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F0055: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F005B: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F005F: jmp 0x588f00fe
        __asm _emit 0xE9
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0064: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x588F0067: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F0069: je 0x588f0081
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588F006B: movzx edx, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x12
        // 0x588F006E: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588F0072: jne 0x588f0081
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588F0074: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F007A: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F007F: jmp 0x588f00fe
        __asm _emit 0xEB
        __asm _emit 0x7D
        // 0x588F0081: mov eax, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x588F0084: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F0086: je 0x588f00fe
        __asm _emit 0x74
        __asm _emit 0x76
        // 0x588F0088: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588F008B: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588F008F: jne 0x588f00fe
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x588F0091: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F0093: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0098: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F009C: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F00A1: mov edx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F00A7: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F00AD: movzx edx, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588F00B1: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588F00B4: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588F00B7: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588F00B9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F00BB: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588F00BE: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F00C4: je 0x588f00cc
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588F00C6: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F00CA: jmp 0x588f00fe
        __asm _emit 0xEB
        __asm _emit 0x32
        // 0x588F00CC: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F00D1: jmp 0x588f00fa
        __asm _emit 0xEB
        __asm _emit 0x27
        // 0x588F00D3: mov eax, dword ptr [esi - 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F00D9: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F00DE: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F00E2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F00E4: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F00E6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F00EA: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F00F0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F00F4: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F00FA: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F00FE: inc edi
        __asm _emit 0x47
        // 0x588F00FF: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588F0102: cmp edi, dword ptr [ebx + 0x3ec]
        __asm _emit 0x3B
        __asm _emit 0xBB
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0108: jl 0x588effb0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xA2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F010E: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0114: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0119: mov esi, dword ptr [ebx + 0x3ec]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F011F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F0121: mov eax, 0x46
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0126: cdq
        __asm _emit 0x99
        // 0x588F0127: sub esi, 8
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x08
        // 0x588F012A: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x588F012C: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x588F012F: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588F0132: lea eax, [ecx + edx + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x48
        // 0x588F0136: mov ecx, dword ptr [ebx + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F013C: push eax
        __asm _emit 0x50
        // 0x588F013D: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0142: pop edi
        __asm _emit 0x5F
        // 0x588F0143: pop esi
        __asm _emit 0x5E
        // 0x588F0144: pop ebp
        __asm _emit 0x5D
        // 0x588F0145: pop ebx
        __asm _emit 0x5B
        // 0x588F0146: pop ecx
        __asm _emit 0x59
        // 0x588F0147: ret
        __asm _emit 0xC3
    }
}
