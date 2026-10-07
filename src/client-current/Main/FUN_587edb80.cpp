// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587EDB80 .. +0x3C0 bytes.
// Source symbol alias: FUN_587edb80.
extern "C" __declspec(naked) void FUN_587edb80() {
    __asm {
        // 0x587EDB80: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587EDB83: push ebx
        __asm _emit 0x53
        // 0x587EDB84: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EDB88: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDB8E: push esi
        __asm _emit 0x56
        // 0x587EDB8F: push edi
        __asm _emit 0x57
        // 0x587EDB90: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587EDB92: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587EDB96: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587EDB9A: cmp dword ptr [esp + 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587EDB9F: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x587EDBA2: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EDBA6: je 0x587edc35
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDBAC: cmp dword ptr [esp + 0x28], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587EDBB4: jne 0x587edc35
        __asm _emit 0x75
        __asm _emit 0x7F
        // 0x587EDBB6: cmp dword ptr [edi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDBBD: je 0x587edbfc
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x587EDBBF: mov ecx, dword ptr [ebx + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDBC5: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EDBCB: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x587EDBD0: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587EDBD2: mov eax, dword ptr [edi + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EDBD8: mov ecx, dword ptr [ebx + 0x1278]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDBDE: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x587EDBE1: imul edx, dword ptr [eax + 0x88]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDBE8: mov eax, 0xd1b71759
        __asm _emit 0xB8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x587EDBED: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587EDBEF: shr edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0D
        // 0x587EDBF2: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EDBF8: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587EDBFA: jmp 0x587edc29
        __asm _emit 0xEB
        __asm _emit 0x2D
        // 0x587EDBFC: cmp word ptr [edi + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587EDC04: je 0x587edc35
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587EDC06: mov edx, dword ptr [ebx + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDC0C: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EDC12: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x587EDC17: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587EDC19: mov eax, dword ptr [ebx + 0x1278]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDC1F: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x587EDC22: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EDC27: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587EDC29: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EDC2F: mov dword ptr [ebx + 0x1278], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDC35: push ebp
        __asm _emit 0x55
        // 0x587EDC36: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587EDC3A: mov ecx, dword ptr [ebp + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDC40: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587EDC43: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EDC49: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EDC4D: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EDC51: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xF0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EDC56: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xF0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EDC5B: cdq
        __asm _emit 0x99
        // 0x587EDC5C: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587EDC5E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587EDC60: lea eax, [eax*8 + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xC5
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDC67: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EDC6B: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EDC6F: fstp qword ptr [esp + 0x10]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EDC73: fild dword ptr [esp + 0x24]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587EDC77: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xF0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EDC7C: fmul qword ptr [0x5899c0f0]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EDC82: fadd qword ptr [0x5898cf10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EDC88: fmul qword ptr [esp + 0x10]
        __asm _emit 0xDC
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EDC8C: fdiv qword ptr [0x5898ceb8]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xB8
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EDC92: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xF0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EDC97: movzx ecx, word ptr [esp + 0x34]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587EDC9C: imul ecx, dword ptr [esp + 0x30]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587EDCA1: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EDCA5: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587EDCA9: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EDCAD: fild dword ptr [esp + 0x34]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587EDCB1: fmul dword ptr [edi + 0x10a24]
        __asm _emit 0xD8
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDCB7: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x587EDCB9: fld qword ptr [0x5898cae0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EDCBF: fdiv st(1), st(0)
        __asm _emit 0xDC
        __asm _emit 0xF9
        // 0x587EDCC1: fild dword ptr [esp + 0x38]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587EDCC5: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x587EDCC7: fdivp st(1)
        __asm _emit 0xDE
        __asm _emit 0xF9
        // 0x587EDCC9: fabs
        __asm _emit 0xD9
        __asm _emit 0xE1
        // 0x587EDCCB: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xEF
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EDCD0: test byte ptr [edi + 0x105a8], 1
        __asm _emit 0xF6
        __asm _emit 0x87
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587EDCD7: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587EDCD9: je 0x587edd8d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDCDF: cmp dword ptr [ebp + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDCE6: je 0x587eddb4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDCEC: mov eax, dword ptr [ebx + 0x125c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x5C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDCF2: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x587EDCF5: jg 0x587edd15
        __asm _emit 0x7F
        __asm _emit 0x1E
        // 0x587EDCF7: imul esi, esi, 0x8c
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDCFD: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587EDD02: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587EDD04: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587EDD07: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587EDD09: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587EDD0C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EDD0E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587EDD10: jmp 0x587eddb4
        __asm _emit 0xE9
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDD15: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x587EDD18: jg 0x587edd25
        __asm _emit 0x7F
        __asm _emit 0x0B
        // 0x587EDD1A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587EDD1C: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587EDD1F: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587EDD21: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587EDD23: jmp 0x587edd51
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x587EDD25: cmp eax, 0x23
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x23
        // 0x587EDD28: jg 0x587edd45
        __asm _emit 0x7F
        __asm _emit 0x1B
        // 0x587EDD2A: lea ecx, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xB6
        // 0x587EDD2D: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587EDD30: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587EDD35: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587EDD37: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587EDD3A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587EDD3C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587EDD3F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EDD41: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587EDD43: jmp 0x587eddb4
        __asm _emit 0xEB
        __asm _emit 0x6F
        // 0x587EDD45: cmp eax, 0x2d
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x2D
        // 0x587EDD48: jg 0x587edd6a
        __asm _emit 0x7F
        __asm _emit 0x20
        // 0x587EDD4A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587EDD4C: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587EDD4F: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587EDD51: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587EDD53: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587EDD55: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587EDD5A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587EDD5C: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587EDD5F: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587EDD61: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587EDD64: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587EDD66: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587EDD68: jmp 0x587eddb4
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x587EDD6A: lea ecx, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xB6
        // 0x587EDD6D: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587EDD6F: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587EDD71: cmp eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x37
        // 0x587EDD74: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587EDD79: jg 0x587edd5a
        __asm _emit 0x7F
        __asm _emit 0xDF
        // 0x587EDD7B: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587EDD7D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587EDD7F: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587EDD82: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587EDD84: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587EDD87: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EDD89: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587EDD8B: jmp 0x587eddb4
        __asm _emit 0xEB
        __asm _emit 0x27
        // 0x587EDD8D: cmp dword ptr [ebp + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDD94: je 0x587eddb4
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587EDD96: mov edx, dword ptr [edi + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EDD9C: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587EDD9F: mov ecx, dword ptr [eax + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDDA5: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x587EDDA8: mov eax, 0xd1b71759
        __asm _emit 0xB8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x587EDDAD: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587EDDAF: shr edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0D
        // 0x587EDDB2: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587EDDB4: cmp word ptr [edi + 0x105a2], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x587EDDBC: pop ebp
        __asm _emit 0x5D
        // 0x587EDDBD: jne 0x587edde8
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x587EDDBF: mov ecx, dword ptr [edi + 0x21f08]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x08
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EDDC5: push ebx
        __asm _emit 0x53
        // 0x587EDDC6: call 0x5875cb90
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xED
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587EDDCB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EDDCD: je 0x587edde8
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587EDDCF: imul esi, esi, 0x96
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDDD5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587EDDDA: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587EDDDC: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587EDDDF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587EDDE1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587EDDE4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EDDE6: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587EDDE8: movzx eax, word ptr [edi + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDDEF: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDDF4: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587EDDF8: je 0x587ede18
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587EDDFA: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587EDDFE: je 0x587ede18
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587EDE00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x587EDE04: je 0x587ede18
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587EDE06: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x587EDE0A: je 0x587ede18
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587EDE0C: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587EDE10: je 0x587ede18
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587EDE12: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x587EDE16: jne 0x587ede72
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x587EDE18: movzx edx, byte ptr [ebx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDE1F: xor dword ptr [edi + edx*4 + 0x10a8c], 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x97
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EDE2A: cmp word ptr [edi + 0x105a2], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x587EDE32: lea eax, [edi + edx*4 + 0x10a8c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDE39: jne 0x587ede44
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587EDE3B: cmp word ptr [edi + 0x105a4], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDE42: je 0x587ede59
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587EDE44: movzx eax, byte ptr [ebx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDE4B: lea edx, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xB6
        // 0x587EDE4E: lea eax, [edi + eax*4 + 0x10a8c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDE55: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587EDE57: add dword ptr [eax], edx
        __asm _emit 0x01
        __asm _emit 0x10
        // 0x587EDE59: movzx eax, byte ptr [ebx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDE60: xor dword ptr [edi + eax*4 + 0x10a8c], 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EDE6B: lea eax, [edi + eax*4 + 0x10a8c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDE72: movzx eax, word ptr [edi + 0x105a2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDE79: add eax, -4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFC
        // 0x587EDE7C: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x587EDE7F: ja 0x587edf07
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDE85: movzx edx, byte ptr [eax + 0x587edf50]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0xDF
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587EDE8C: jmp dword ptr [edx*4 + 0x587edf40]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xDF
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587EDE93: movzx eax, word ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EDE98: movzx ecx, word ptr [eax*2 + 0x589cc0bc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0C
        __asm _emit 0x45
        __asm _emit 0xBC
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EDEA0: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x587EDEA3: push ecx
        __asm _emit 0x51
        // 0x587EDEA4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EDEA6: call 0x588d6e10
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x8F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EDEAB: pop edi
        __asm _emit 0x5F
        // 0x587EDEAC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EDEAE: pop esi
        __asm _emit 0x5E
        // 0x587EDEAF: pop ebx
        __asm _emit 0x5B
        // 0x587EDEB0: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EDEB3: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587EDEB6: cmp word ptr [edi + 0x105a4], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDEBD: jne 0x587edee4
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x587EDEBF: movzx edx, word ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EDEC4: movzx eax, word ptr [edx*2 + 0x589cc0bc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x55
        __asm _emit 0xBC
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EDECC: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x587EDECF: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587EDED1: push eax
        __asm _emit 0x50
        // 0x587EDED2: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EDED4: call 0x588d6e10
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x8F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EDED9: pop edi
        __asm _emit 0x5F
        // 0x587EDEDA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EDEDC: pop esi
        __asm _emit 0x5E
        // 0x587EDEDD: pop ebx
        __asm _emit 0x5B
        // 0x587EDEDE: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EDEE1: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587EDEE4: movzx ecx, word ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EDEE9: movzx edx, word ptr [ecx*2 + 0x589cc0bc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x14
        __asm _emit 0x4D
        __asm _emit 0xBC
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EDEF1: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x587EDEF4: push edx
        __asm _emit 0x52
        // 0x587EDEF5: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EDEF7: call 0x588d6e10
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x8F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EDEFC: pop edi
        __asm _emit 0x5F
        // 0x587EDEFD: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EDEFF: pop esi
        __asm _emit 0x5E
        // 0x587EDF00: pop ebx
        __asm _emit 0x5B
        // 0x587EDF01: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EDF04: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587EDF07: movzx eax, word ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EDF0C: movzx ecx, word ptr [eax*2 + 0x589cc0d0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0C
        __asm _emit 0x45
        __asm _emit 0xD0
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EDF14: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x587EDF17: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x587EDF1A: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587EDF1F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587EDF21: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587EDF24: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587EDF26: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587EDF29: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587EDF2B: push ecx
        __asm _emit 0x51
        // 0x587EDF2C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EDF2E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EDF30: call 0x588dcdd0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xEE
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EDF35: pop edi
        __asm _emit 0x5F
        // 0x587EDF36: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EDF38: pop esi
        __asm _emit 0x5E
        // 0x587EDF39: pop ebx
        __asm _emit 0x5B
        // 0x587EDF3A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EDF3D: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
