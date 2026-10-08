// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 537 bytes in 1 exact ranges.
// Source symbol alias: FUN_58828df0.

// Ghidra body range 0x58828DF0..0x58829009; 537 mapped bytes.
extern "C" __declspec(naked) void FUN_58828df0_segment_00() {
    __asm {
        // 0x58828DF0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58828DF4: push esi
        __asm _emit 0x56
        // 0x58828DF5: push edi
        __asm _emit 0x57
        // 0x58828DF6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58828DF8: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58828DFB: jne 0x58828f9e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E01: mov edi, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E07: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58828E0B: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58828E0D: jne 0x58828ed7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E13: cmp dword ptr [esi + 0x144], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E1A: je 0x58828ebb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E20: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x58828E28: jne 0x58829004
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E2E: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828E33: mov eax, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x60
        // 0x58828E36: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58828E38: je 0x58828e9f
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x58828E3A: mov ecx, dword ptr [eax + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E40: and ecx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0xFE
        // 0x58828E43: cmp ecx, 0x9e
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E49: jne 0x58828e9f
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x58828E4B: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E51: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x10
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58828E56: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828E58: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828E5A: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58828E5D: jne 0x58828e87
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x58828E5F: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E65: mov dword ptr [esi + 0x278], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E6B: call 0x58759eb0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58828E70: push eax
        __asm _emit 0x50
        // 0x58828E71: push 0x139
        __asm _emit 0x68
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E76: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x2C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58828E7B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58828E7D: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x16
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58828E82: pop edi
        __asm _emit 0x5F
        // 0x58828E83: pop esi
        __asm _emit 0x5E
        // 0x58828E84: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58828E87: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828E89: push 0x219
        __asm _emit 0x68
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828E8E: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x2C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58828E93: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58828E95: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xBE
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58828E9A: pop edi
        __asm _emit 0x5F
        // 0x58828E9B: pop esi
        __asm _emit 0x5E
        // 0x58828E9C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58828E9F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828EA1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828EA3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828EA5: push 0x4b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828EAA: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x2C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58828EAF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58828EB1: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xBE
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58828EB6: pop edi
        __asm _emit 0x5F
        // 0x58828EB7: pop esi
        __asm _emit 0x5E
        // 0x58828EB8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58828EBB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828EBD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828EBF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828EC1: push 0x218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828EC6: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x2C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58828ECB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58828ECD: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xBE
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58828ED2: pop edi
        __asm _emit 0x5F
        // 0x58828ED3: pop esi
        __asm _emit 0x5E
        // 0x58828ED4: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58828ED7: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828EDD: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58828EDF: jne 0x58828efa
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58828EE1: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xF2
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828EE6: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828EEC: push eax
        __asm _emit 0x50
        // 0x58828EED: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xF9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828EF2: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828EF8: jmp 0x58828f1b
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x58828EFA: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828F00: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58828F02: jne 0x58828f38
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x58828F04: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xF2
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828F09: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828F0F: push eax
        __asm _emit 0x50
        // 0x58828F10: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xF9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828F15: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828F1B: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xF2
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828F20: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828F26: push eax
        __asm _emit 0x50
        // 0x58828F27: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xF9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828F2C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58828F2E: call 0x58828be0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828F33: pop edi
        __asm _emit 0x5F
        // 0x58828F34: pop esi
        __asm _emit 0x5E
        // 0x58828F35: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58828F38: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828F3E: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58828F40: jne 0x58828f76
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x58828F42: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xF2
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828F47: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828F4D: push eax
        __asm _emit 0x50
        // 0x58828F4E: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xF8
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828F53: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828F59: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xF2
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828F5E: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828F64: push eax
        __asm _emit 0x50
        // 0x58828F65: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xF8
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828F6A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58828F6C: call 0x58828be0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828F71: pop edi
        __asm _emit 0x5F
        // 0x58828F72: pop esi
        __asm _emit 0x5E
        // 0x58828F73: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58828F76: cmp eax, dword ptr [esi + 0x134]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828F7C: jne 0x58828f8a
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58828F7E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58828F80: call 0x58828da0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828F85: pop edi
        __asm _emit 0x5F
        // 0x58828F86: pop esi
        __asm _emit 0x5E
        // 0x58828F87: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58828F8A: cmp eax, dword ptr [esi + 0x138]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828F90: jne 0x58829004
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x58828F92: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58828F94: call 0x58828dc0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828F99: pop edi
        __asm _emit 0x5F
        // 0x58828F9A: pop esi
        __asm _emit 0x5E
        // 0x58828F9B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58828F9E: cmp eax, 0xf230
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828FA3: jne 0x58829004
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x58828FA5: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58828FA9: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828FAE: cmp edx, dword ptr [eax + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828FB4: jne 0x58829004
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x58828FB6: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58828FBA: push ebx
        __asm _emit 0x53
        // 0x58828FBB: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58828FC1: push edi
        __asm _emit 0x57
        // 0x58828FC2: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58828FC4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58828FC6: jle 0x58829003
        __asm _emit 0x7E
        __asm _emit 0x3B
        // 0x58828FC8: mov ecx, dword ptr [esi + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828FCE: cmp ecx, dword ptr [esi + 0x130]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828FD4: jne 0x58829003
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x58828FD6: push edi
        __asm _emit 0x57
        // 0x58828FD7: push edi
        __asm _emit 0x57
        // 0x58828FD8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58828FDA: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828FE0: push eax
        __asm _emit 0x50
        // 0x58828FE1: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x0E
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58828FE6: movzx edx, word ptr [eax + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x58828FEA: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828FF0: push edx
        __asm _emit 0x52
        // 0x58828FF1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828FF3: call 0x587b9cf0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x0C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58828FF8: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828FFE: call 0x587b9dd0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x0D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58829003: pop ebx
        __asm _emit 0x5B
        // 0x58829004: pop edi
        __asm _emit 0x5F
        // 0x58829005: pop esi
        __asm _emit 0x5E
        // 0x58829006: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
