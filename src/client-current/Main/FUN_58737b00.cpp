// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 837 bytes in 4 exact ranges.
// Source symbol alias: FUN_58737b00.

// Ghidra body range 0x58737B00..0x58737B3A; 58 mapped bytes.
extern "C" __declspec(naked) void FUN_58737b00_segment_00() {
    __asm {
        // 0x58737B00: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58737B03: push ebp
        __asm _emit 0x55
        // 0x58737B04: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58737B06: cmp word ptr [ebp + 0x28], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x58737B0B: ja 0x58737e48
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737B11: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58737B16: je 0x58737e48
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737B1C: cmp dword ptr [esp + 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58737B21: je 0x58737e48
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737B27: push ebx
        __asm _emit 0x53
        // 0x58737B28: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58737B2C: push esi
        __asm _emit 0x56
        // 0x58737B2D: push edi
        __asm _emit 0x57
        // 0x58737B2E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58737B30: cmp dword ptr [ebx + 8], edi
        __asm _emit 0x39
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x58737B33: jle 0x58737b65
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x58737B35: lea esi, [ebx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x58737B38: jmp 0x58737b40
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58737B40..0x58737C1D; 221 mapped bytes.
extern "C" __declspec(naked) void FUN_58737b00_segment_01() {
    __asm {
        // 0x58737B40: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58737B45: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58737B47: mov ecx, dword ptr [eax + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58737B4D: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58737B50: push edx
        __asm _emit 0x52
        // 0x58737B51: push eax
        __asm _emit 0x50
        // 0x58737B52: call 0x58775980
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xDE
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58737B57: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58737B5A: je 0x58737b71
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58737B5C: inc edi
        __asm _emit 0x47
        // 0x58737B5D: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58737B60: cmp edi, dword ptr [ebx + 8]
        __asm _emit 0x3B
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x58737B63: jl 0x58737b40
        __asm _emit 0x7C
        __asm _emit 0xDB
        // 0x58737B65: pop edi
        __asm _emit 0x5F
        // 0x58737B66: pop esi
        __asm _emit 0x5E
        // 0x58737B67: pop ebx
        __asm _emit 0x5B
        // 0x58737B68: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58737B6A: pop ebp
        __asm _emit 0x5D
        // 0x58737B6B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58737B6E: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58737B71: cmp word ptr [ebp + 0xf0], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58737B79: jne 0x58737e1b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737B7F: cmp word ptr [ebp + 0x28], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x28
        __asm _emit 0x06
        // 0x58737B84: je 0x58737d93
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737B8A: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58737B8E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58737B90: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58737B92: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58737B96: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58737B9A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58737B9E: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58737BA2: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737BAA: jle 0x58737bef
        __asm _emit 0x7E
        __asm _emit 0x43
        // 0x58737BAC: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58737BB0: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x58737BB2: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58737BB5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58737BBA: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58737BBC: sar edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x58737BBF: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58737BC1: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58737BC4: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58737BC6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58737BC8: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58737BCD: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58737BCF: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x58737BD2: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58737BD4: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58737BD7: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58737BD9: lea edx, [eax + edi*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x78
        // 0x58737BDC: add ecx, 0x90
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737BE2: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58737BE5: mov dword ptr [esp + edx*4 + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x94
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737BED: jne 0x58737bb2
        __asm _emit 0x75
        __asm _emit 0xC3
        // 0x58737BEF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58737BF1: cmp dword ptr [esp + 0x10], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58737BF5: je 0x58737bfc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58737BF7: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737BFC: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58737C01: je 0x58737c04
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x58737C03: inc eax
        __asm _emit 0x40
        // 0x58737C04: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58737C09: je 0x58737c0c
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x58737C0B: inc eax
        __asm _emit 0x40
        // 0x58737C0C: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58737C11: je 0x58737c14
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x58737C13: inc eax
        __asm _emit 0x40
        // 0x58737C14: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58737C17: jne 0x58737c42
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58737C19: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58737C1B: jmp 0x58737c20
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58737C20..0x58737C4D; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_58737b00_segment_02() {
    __asm {
        // 0x58737C20: cmp dword ptr [esp + eax*4 + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58737C25: jne 0x58737c32
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58737C27: inc eax
        __asm _emit 0x40
        // 0x58737C28: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58737C2B: jl 0x58737c20
        __asm _emit 0x7C
        __asm _emit 0xF3
        // 0x58737C2D: jmp 0x58737cda
        __asm _emit 0xE9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737C32: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737C37: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58737C39: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58737C3D: jmp 0x58737cda
        __asm _emit 0xE9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737C42: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58737C45: jne 0x58737cc0
        __asm _emit 0x75
        __asm _emit 0x79
        // 0x58737C47: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58737C49: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58737C4B: jmp 0x58737c50
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58737C50..0x58737E51; 513 mapped bytes.
extern "C" __declspec(naked) void FUN_58737b00_segment_03() {
    __asm {
        // 0x58737C50: cmp dword ptr [esp + esi*4 + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xB4
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58737C55: jne 0x58737cb8
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x58737C57: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58737C5A: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58737C5D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58737C5F: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x01
        // 0x58737C62: imul eax, eax, 0x3200
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737C68: cdq
        __asm _emit 0x99
        // 0x58737C69: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58737C6B: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58737C6D: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58737C6F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58737C71: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x58737C73: imul eax, eax, 0x1900
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737C79: cdq
        __asm _emit 0x99
        // 0x58737C7A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58737C7C: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58737C7E: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58737C81: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x58737C83: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58737C85: sub eax, 0x640
        __asm _emit 0x2D
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737C8A: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58737C8C: sub ecx, 0xc80
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737C92: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x58737C95: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58737C97: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58737C9A: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58737C9C: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58737CA0: fild dword ptr [esp + 0x2c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58737CA4: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58737CA9: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58737CAE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58737CB0: jle 0x58737cb8
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x58737CB2: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58737CB4: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58737CB8: inc esi
        __asm _emit 0x46
        // 0x58737CB9: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x58737CBC: jl 0x58737c50
        __asm _emit 0x7C
        __asm _emit 0x92
        // 0x58737CBE: jmp 0x58737cda
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58737CC0: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58737CC3: jne 0x58737d1d
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x58737CC5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58737CC7: cmp dword ptr [esp + eax*4 + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58737CCC: je 0x58737cd6
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58737CCE: inc eax
        __asm _emit 0x40
        // 0x58737CCF: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58737CD2: jl 0x58737cc7
        __asm _emit 0x7C
        __asm _emit 0xF3
        // 0x58737CD4: jmp 0x58737cda
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58737CD6: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58737CDA: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58737CDE: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58737CE0: cdq
        __asm _emit 0x99
        // 0x58737CE1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58737CE3: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58737CE5: imul eax, eax, 0x1900
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737CEB: cdq
        __asm _emit 0x99
        // 0x58737CEC: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58737CEE: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58737CF0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58737CF2: add eax, 0x640
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737CF7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58737CF9: push eax
        __asm _emit 0x50
        // 0x58737CFA: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58737CFC: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58737D01: jns 0x58737d08
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58737D03: dec eax
        __asm _emit 0x48
        // 0x58737D04: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x58737D07: inc eax
        __asm _emit 0x40
        // 0x58737D08: imul eax, eax, 0x3200
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737D0E: cdq
        __asm _emit 0x99
        // 0x58737D0F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58737D11: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58737D13: add eax, 0xc80
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737D18: jmp 0x58737e29
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737D1D: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x58737D20: or ecx, edi
        __asm _emit 0x0B
        __asm _emit 0xCF
        // 0x58737D22: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58737D24: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58737D26: jle 0x58737d4a
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x58737D28: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58737D2C: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58737D2F: nop
        __asm _emit 0x90
        // 0x58737D30: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58737D32: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58737D34: jb 0x58737d3b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58737D36: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58737D39: jne 0x58737d3f
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58737D3B: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58737D3D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58737D3F: inc eax
        __asm _emit 0x40
        // 0x58737D40: add esi, 0x90
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737D46: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58737D48: jl 0x58737d30
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x58737D4A: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58737D4E: lea ecx, [ecx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC9
        // 0x58737D51: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58737D54: lea eax, [ecx + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x11
        // 0x58737D57: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58737D5A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58737D5C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58737D5E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58737D60: push ecx
        __asm _emit 0x51
        // 0x58737D61: push edx
        __asm _emit 0x52
        // 0x58737D62: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58737D64: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58737D66: call 0x587366f0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737D6B: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x58737D6E: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737D73: mov word ptr [ebp + 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x58737D77: mov edx, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x58737D7A: push edx
        __asm _emit 0x52
        // 0x58737D7B: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58737D81: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58737D86: mov eax, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x60
        // 0x58737D89: pop edi
        __asm _emit 0x5F
        // 0x58737D8A: pop esi
        __asm _emit 0x5E
        // 0x58737D8B: pop ebx
        __asm _emit 0x5B
        // 0x58737D8C: pop ebp
        __asm _emit 0x5D
        // 0x58737D8D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58737D90: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58737D93: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58737D96: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58737D99: mov edx, 0x3200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737D9E: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58737DA0: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58737DA2: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58737DA4: jge 0x58737dac
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58737DA6: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x58737DA8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58737DAA: jmp 0x58737db8
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58737DAC: mov ebx, 0x3200
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737DB1: sub ebx, edi
        __asm _emit 0x2B
        __asm _emit 0xDF
        // 0x58737DB3: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737DB8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58737DBB: mov esi, 0x1900
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737DC0: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x58737DC2: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58737DC4: jge 0x58737dcc
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58737DC6: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58737DC8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58737DCA: jmp 0x58737dd8
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58737DCC: mov esi, 0x3200
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737DD1: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x58737DD3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737DD8: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x58737DDA: jle 0x58737dee
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58737DDC: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58737DDE: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58737DE0: and eax, 0x1a90
        __asm _emit 0x25
        __asm _emit 0x90
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737DE5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58737DE7: add eax, 0xffffff38
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737DEC: jmp 0x58737e00
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58737DEE: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58737DF0: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x58737DF2: and ecx, 0x3390
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x90
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737DF8: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58737DFA: add ecx, 0xffffff38
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737E00: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58737E02: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58737E04: push eax
        __asm _emit 0x50
        // 0x58737E05: push ecx
        __asm _emit 0x51
        // 0x58737E06: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58737E08: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58737E0A: call 0x587366f0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737E0F: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58737E12: mov ecx, dword ptr [eax + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x58737E15: push ecx
        __asm _emit 0x51
        // 0x58737E16: jmp 0x58737d7b
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737E1B: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58737E1F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58737E22: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58737E24: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58737E26: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58737E28: push edx
        __asm _emit 0x52
        // 0x58737E29: push eax
        __asm _emit 0x50
        // 0x58737E2A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58737E2C: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58737E2E: call 0x587366f0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737E33: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58737E36: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737E3B: mov word ptr [ebp + 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x28
        // 0x58737E3F: mov eax, dword ptr [edx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x70
        // 0x58737E42: push eax
        __asm _emit 0x50
        // 0x58737E43: jmp 0x58737d7b
        __asm _emit 0xE9
        __asm _emit 0x33
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737E48: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58737E4A: pop ebp
        __asm _emit 0x5D
        // 0x58737E4B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58737E4E: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
