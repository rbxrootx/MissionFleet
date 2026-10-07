// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1031 bytes in 3 exact ranges.
// Source symbol alias: FUN_587b1b70.

// Ghidra body range 0x587B1B70..0x587B1C1B; 171 mapped bytes.
extern "C" __declspec(naked) void FUN_587b1b70_segment_00() {
    __asm {
        // 0x587B1B70: mov eax, 0x103c
        __asm _emit 0xB8
        __asm _emit 0x3C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1B75: call 0x5897ce60
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B1B7A: push ebx
        __asm _emit 0x53
        // 0x587B1B7B: push ebp
        __asm _emit 0x55
        // 0x587B1B7C: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587B1B7E: movzx ecx, word ptr [ebp + 0x224]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1B85: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587B1B87: shr eax, 9
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x09
        // 0x587B1B8A: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x587B1B8D: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x587B1B90: push esi
        __asm _emit 0x56
        // 0x587B1B91: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B1B93: shr esi, 1
        __asm _emit 0xD1
        __asm _emit 0xEE
        // 0x587B1B95: and esi, 3
        __asm _emit 0x83
        __asm _emit 0xE6
        __asm _emit 0x03
        // 0x587B1B98: imul esi, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF0
        // 0x587B1B9B: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587B1B9D: shr ebx, 3
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587B1BA0: and ebx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x3F
        // 0x587B1BA3: neg esi
        __asm _emit 0xF7
        __asm _emit 0xDE
        // 0x587B1BA5: imul ebx, ebx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xDB
        __asm _emit 0x64
        // 0x587B1BA8: and ecx, 7
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x07
        // 0x587B1BAB: and ecx, 0x80000001
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587B1BB1: push edi
        __asm _emit 0x57
        // 0x587B1BB2: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B1BB6: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B1BBA: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B1BBE: jns 0x587b1bc5
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587B1BC0: dec ecx
        __asm _emit 0x49
        // 0x587B1BC1: or ecx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFE
        // 0x587B1BC4: inc ecx
        __asm _emit 0x41
        // 0x587B1BC5: jne 0x587b1bd2
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587B1BC7: cdq
        __asm _emit 0x99
        // 0x587B1BC8: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B1BCA: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B1BCC: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x587B1BCE: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B1BD2: mov eax, dword ptr [ebp + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1BD8: cdq
        __asm _emit 0x99
        // 0x587B1BD9: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587B1BDC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1BDE: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B1BE0: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1BE5: lea eax, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587B1BE9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B1BEB: push eax
        __asm _emit 0x50
        // 0x587B1BEC: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1BF4: sar edi, 3
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x587B1BF7: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B1BFC: movzx ebp, word ptr [ebp + 0x224]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xAD
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1C03: lea ecx, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587B1C07: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B1C0A: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1C12: and ebp, 7
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x07
        // 0x587B1C15: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B1C19: jmp 0x587b1c24
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587B1C20..0x587B1D08; 232 mapped bytes.
extern "C" __declspec(naked) void FUN_587b1b70_segment_01() {
    __asm {
        // 0x587B1C20: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B1C24: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B1C28: mov ecx, dword ptr [edx*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B1C2F: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B1C32: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B1C37: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B1C39: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B1C3D: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B1C40: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1C42: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1C45: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1C47: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B1C4B: mov dword ptr [esp + ecx*4 + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x8C
        __asm _emit 0x2C
        // 0x587B1C4F: mov eax, dword ptr [edx*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B1C56: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587B1C58: jbe 0x587b1c87
        __asm _emit 0x76
        __asm _emit 0x2D
        // 0x587B1C5A: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587B1C5D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B1C5F: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B1C64: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B1C66: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B1C6A: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B1C6D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1C6F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1C72: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1C74: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x587B1C76: mov dword ptr [ecx - 4], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xFC
        // 0x587B1C79: add esi, dword ptr [esp + 0x28]
        __asm _emit 0x03
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B1C7D: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x587B1C7F: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x587B1C82: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587B1C85: jne 0x587b1c76
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x587B1C87: add dword ptr [esp + 0x10], edi
        __asm _emit 0x01
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B1C8B: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x587B1C90: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587B1C92: add dword ptr [esp + 0x18], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        // 0x587B1C97: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587B1C99: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587B1C9C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1C9E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1CA1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1CA3: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1CA9: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587B1CAB: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B1CAF: inc eax
        __asm _emit 0x40
        // 0x587B1CB0: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587B1CB3: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B1CB7: jl 0x587b1c20
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x63
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1CBD: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B1CC1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B1CC3: add edx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1CC9: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B1CCD: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B1CD1: mov dword ptr [esp + 0x28], 0x24
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1CD9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1CE0: mov edi, dword ptr [ecx*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B1CE7: mov ebx, dword ptr [ecx*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x8D
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B1CEE: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1CF6: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587B1CF8: jbe 0x587b1f47
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1CFE: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B1D02: lea esi, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587B1D06: jmp 0x587b1d10
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x587B1D10..0x587B1F84; 628 mapped bytes.
extern "C" __declspec(naked) void FUN_587b1b70_segment_02() {
    __asm {
        // 0x587B1D10: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1D18: mov ebp, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0xFC
        // 0x587B1D1B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587B1D1D: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587B1D20: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x587B1D22: imul ebp, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xEB
        // 0x587B1D25: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587B1D28: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587B1D2A: mov eax, 0x14f8b589
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x587B1D2F: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1D31: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x587B1D34: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1D36: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1D39: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1D3B: mov dword ptr [ecx - 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0xFC
        // 0x587B1D3E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587B1D40: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x587B1D43: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x587B1D45: mov eax, 0x14f8b589
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x587B1D4A: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x587B1D4C: sar edx, 0xe
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x587B1D4F: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587B1D51: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x587B1D54: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x587B1D56: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B1D5A: mov edx, dword ptr [esp + edx*4 + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x94
        __asm _emit 0x2C
        // 0x587B1D5E: add edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x32
        // 0x587B1D61: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B1D66: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1D68: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B1D6B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1D6D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1D70: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1D72: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B1D76: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587B1D78: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x587B1D7A: movzx edx, word ptr [edx + 0x226]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1D81: mov ebp, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x587B1D84: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x587B1D86: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587B1D89: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587B1D8B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587B1D8D: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587B1D90: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587B1D93: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B1D95: imul ebp, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xEF
        // 0x587B1D98: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587B1D9B: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587B1D9D: mov eax, 0x14f8b589
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x587B1DA2: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1DA4: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x587B1DA7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1DA9: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1DAC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1DAE: mov dword ptr [ecx + 0x11c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1DB4: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587B1DB7: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587B1DBA: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x587B1DBC: mov eax, 0x14f8b589
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x587B1DC1: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x587B1DC3: sar edx, 0xe
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x587B1DC6: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587B1DC8: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x587B1DCB: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x587B1DCD: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B1DD1: mov edx, dword ptr [esp + edx*4 + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x94
        __asm _emit 0x30
        // 0x587B1DD5: add edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x32
        // 0x587B1DD8: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B1DDD: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1DDF: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B1DE2: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1DE4: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1DE7: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1DE9: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B1DED: mov dword ptr [ecx + 0x120], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1DF3: movzx edx, word ptr [edx + 0x226]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1DFA: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x587B1DFC: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587B1DFE: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587B1E01: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587B1E04: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587B1E06: mov dword ptr [ecx + 0x120], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1E0C: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587B1E0F: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587B1E12: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B1E14: imul ebp, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xEF
        // 0x587B1E17: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587B1E1A: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587B1E1C: mov eax, 0x14f8b589
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x587B1E21: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1E23: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x587B1E26: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1E28: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1E2B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1E2D: mov dword ptr [ecx + 0x23c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1E33: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587B1E36: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587B1E39: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x587B1E3B: mov eax, 0x14f8b589
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x587B1E40: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x587B1E42: sar edx, 0xe
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x587B1E45: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587B1E47: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x587B1E4A: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x587B1E4C: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B1E50: mov edx, dword ptr [esp + edx*4 + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x94
        __asm _emit 0x34
        // 0x587B1E54: add edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x32
        // 0x587B1E57: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B1E5C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1E5E: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B1E61: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1E63: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1E66: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1E68: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B1E6C: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587B1E6E: mov dword ptr [ecx + 0x240], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1E74: movzx edx, word ptr [edx + 0x226]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1E7B: mov ebp, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x18
        // 0x587B1E7E: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x587B1E80: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587B1E83: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587B1E85: mov dword ptr [ecx + 0x240], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1E8B: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587B1E8E: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587B1E91: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B1E93: imul ebp, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xEF
        // 0x587B1E96: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587B1E99: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587B1E9B: mov eax, 0x14f8b589
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x587B1EA0: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1EA2: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x587B1EA5: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1EA7: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1EAA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1EAC: mov dword ptr [ecx + 0x35c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1EB2: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587B1EB5: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587B1EB8: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x587B1EBA: mov eax, 0x14f8b589
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x587B1EBF: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x587B1EC1: sar edx, 0xe
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x587B1EC4: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587B1EC6: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x587B1EC9: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x587B1ECB: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B1ECF: mov edx, dword ptr [esp + edx*4 + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x94
        __asm _emit 0x38
        // 0x587B1ED3: add edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x32
        // 0x587B1ED6: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B1EDB: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B1EDD: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B1EE0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1EE2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1EE5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1EE7: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B1EEB: mov dword ptr [ecx + 0x360], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1EF1: movzx edx, word ptr [edx + 0x226]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1EF8: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x587B1EFA: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587B1EFC: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587B1EFF: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587B1F01: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B1F05: mov dword ptr [ecx + 0x360], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1F0B: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587B1F0E: add esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x20
        // 0x587B1F11: add ecx, 0x480
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1F17: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587B1F1A: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B1F1E: jl 0x587b1d18
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1F24: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B1F28: movzx ebp, word ptr [edx + 0x224]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xAA
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1F2F: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B1F33: inc eax
        __asm _emit 0x40
        // 0x587B1F34: and ebp, 7
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x07
        // 0x587B1F37: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B1F3B: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587B1F3D: jb 0x587b1d10
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xCD
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1F43: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B1F47: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x587B1F4A: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x587B1F4F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B1F51: add dword ptr [esp + 0x18], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        // 0x587B1F56: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587B1F58: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587B1F5B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1F5D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1F60: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B1F62: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1F68: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587B1F6A: sub dword ptr [esp + 0x28], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x587B1F6F: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B1F73: jne 0x587b1ce0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1F79: pop edi
        __asm _emit 0x5F
        // 0x587B1F7A: pop esi
        __asm _emit 0x5E
        // 0x587B1F7B: pop ebp
        __asm _emit 0x5D
        // 0x587B1F7C: pop ebx
        __asm _emit 0x5B
        // 0x587B1F7D: add esp, 0x103c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x3C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1F83: ret
        __asm _emit 0xC3
    }
}
