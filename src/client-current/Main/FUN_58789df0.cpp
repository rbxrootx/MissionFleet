// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58789DF0 .. +0x188 bytes.
// Source symbol alias: FUN_58789df0.
extern "C" __declspec(naked) void FUN_58789df0() {
    __asm {
        // 0x58789DF0: push ebx
        __asm _emit 0x53
        // 0x58789DF1: push ebp
        __asm _emit 0x55
        // 0x58789DF2: push esi
        __asm _emit 0x56
        // 0x58789DF3: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x58789DF6: push edi
        __asm _emit 0x57
        // 0x58789DF7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58789DF9: je 0x58789f64
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789DFF: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58789E03: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58789E07: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58789E0B: jmp 0x58789e10
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58789E0D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58789E10: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58789E14: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58789E17: jne 0x58789ebb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789E1D: lea ecx, [esi + 0x2a2]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789E23: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58789E25: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58789E27: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x58789E29: jne 0x58789e45
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58789E2B: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789E2D: je 0x58789e41
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58789E2F: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58789E32: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58789E35: jne 0x58789e45
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58789E37: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58789E3A: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58789E3D: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789E3F: jne 0x58789e25
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58789E41: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789E43: jmp 0x58789e4a
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58789E45: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58789E47: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58789E4A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58789E4C: jne 0x58789f5a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789E52: lea ecx, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58789E55: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58789E57: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58789E59: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x58789E5B: jne 0x58789e77
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58789E5D: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789E5F: je 0x58789e73
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58789E61: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58789E64: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58789E67: jne 0x58789e77
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58789E69: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58789E6C: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58789E6F: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789E71: jne 0x58789e57
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58789E73: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789E75: jmp 0x58789e7c
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58789E77: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58789E79: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58789E7C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58789E7E: jne 0x58789f5a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789E84: lea ecx, [esi + 0x2ba]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789E8A: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58789E8C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58789E90: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58789E92: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x58789E94: jne 0x58789f51
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789E9A: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789E9C: je 0x58789eb4
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58789E9E: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58789EA1: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58789EA4: jne 0x58789f51
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789EAA: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58789EAD: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58789EB0: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789EB2: jne 0x58789e90
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x58789EB4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789EB6: jmp 0x58789f56
        __asm _emit 0xE9
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789EBB: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58789EBE: jne 0x58789f5a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789EC4: lea ecx, [esi + 0x2da]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xDA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789ECA: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58789ECC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58789ED0: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58789ED2: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x58789ED4: jne 0x58789ef0
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58789ED6: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789ED8: je 0x58789eec
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58789EDA: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58789EDD: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58789EE0: jne 0x58789ef0
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58789EE2: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58789EE5: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58789EE8: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789EEA: jne 0x58789ed0
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58789EEC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789EEE: jmp 0x58789ef5
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58789EF0: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58789EF2: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58789EF5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58789EF7: jne 0x58789f5a
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x58789EF9: lea ecx, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58789EFC: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58789EFE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58789F00: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58789F02: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x58789F04: jne 0x58789f20
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58789F06: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789F08: je 0x58789f1c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58789F0A: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58789F0D: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58789F10: jne 0x58789f20
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58789F12: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58789F15: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58789F18: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789F1A: jne 0x58789f00
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58789F1C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789F1E: jmp 0x58789f25
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58789F20: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58789F22: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58789F25: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58789F27: jne 0x58789f5a
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58789F29: lea ecx, [esi + 0x2ba]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789F2F: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58789F31: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58789F33: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x58789F35: jne 0x58789f51
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58789F37: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789F39: je 0x58789f4d
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58789F3B: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58789F3E: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58789F41: jne 0x58789f51
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58789F43: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58789F46: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58789F49: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58789F4B: jne 0x58789f31
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58789F4D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789F4F: jmp 0x58789f56
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58789F51: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58789F53: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58789F56: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58789F58: je 0x58789f6e
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58789F5A: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58789F5C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58789F5E: jne 0x58789e10
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58789F64: pop edi
        __asm _emit 0x5F
        // 0x58789F65: pop esi
        __asm _emit 0x5E
        // 0x58789F66: pop ebp
        __asm _emit 0x5D
        // 0x58789F67: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58789F6A: pop ebx
        __asm _emit 0x5B
        // 0x58789F6B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58789F6E: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58789F71: pop edi
        __asm _emit 0x5F
        // 0x58789F72: pop esi
        __asm _emit 0x5E
        // 0x58789F73: pop ebp
        __asm _emit 0x5D
        // 0x58789F74: pop ebx
        __asm _emit 0x5B
        // 0x58789F75: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
