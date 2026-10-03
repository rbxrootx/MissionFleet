// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907990 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_58907990() {
    __asm {
        // 0x58907990: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58907993: cmp dword ptr [ecx + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58907997: je 0x589079cf
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58907999: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x5890799B: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5890799E: fst dword ptr [esp + 0xc]
        __asm _emit 0xD9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589079A2: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x589079A4: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589079A8: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589079AC: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x589079AE: fstp dword ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589079B2: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589079B6: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x589079B9: fstp dword ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589079BD: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589079C1: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x589079C4: call 0x58907820
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589079C9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x589079CC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x589079CF: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589079D3: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x589079D6: jg 0x58907a31
        __asm _emit 0x7F
        __asm _emit 0x59
        // 0x589079D8: je 0x58907a1f
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x589079DA: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x589079DD: je 0x58907a0d
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x589079DF: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x589079E2: je 0x589079fb
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x589079E4: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x589079E7: jne 0x58907a42
        __asm _emit 0x75
        __asm _emit 0x59
        // 0x589079E9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x589079EB: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x589079EE: mov dword ptr [esp + 4], 0xfffff9c0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xC0
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589079F6: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x589079F9: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x589079FB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x589079FD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58907A00: mov dword ptr [esp + 4], 0xfffffce0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58907A08: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58907A0B: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x58907A0D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58907A0F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58907A12: mov dword ptr [esp + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907A1A: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58907A1D: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x58907A1F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58907A21: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58907A24: mov dword ptr [esp + 4], 0xfffff6a0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xA0
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58907A2C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58907A2F: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x58907A31: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58907A34: je 0x58907a78
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58907A36: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x58907A39: je 0x58907a66
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58907A3B: cmp eax, 0x3e8
        __asm _emit 0x3D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907A40: je 0x58907a54
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58907A42: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58907A44: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58907A47: mov dword ptr [esp + 4], 0xffffd8f0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xF0
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58907A4F: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58907A52: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x58907A54: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58907A56: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58907A59: mov dword ptr [esp + 4], 0xffffd8f0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xF0
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58907A61: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58907A64: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x58907A66: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58907A68: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58907A6B: mov dword ptr [esp + 4], 0xfffff060
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x60
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58907A73: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58907A76: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x58907A78: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58907A7A: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58907A7D: mov dword ptr [esp + 4], 0xfffff380
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x80
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58907A85: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58907A88: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
