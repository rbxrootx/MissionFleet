// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 401 bytes in 2 exact ranges.
// Source symbol alias: FUN_587eaa20.

// Ghidra body range 0x587EAA20..0x587EAA5D; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_587eaa20_segment_00() {
    __asm {
        // 0x587EAA20: push ecx
        __asm _emit 0x51
        // 0x587EAA21: push edi
        __asm _emit 0x57
        // 0x587EAA22: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587EAA24: cmp dword ptr [edi + 0x39c], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xBF
        __asm _emit 0x9C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587EAA2E: jne 0x587eab1c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA34: push ebp
        __asm _emit 0x55
        // 0x587EAA35: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EAA39: cmp dword ptr [ebp + 0x100c], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA40: je 0x587eab1b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA46: push ebx
        __asm _emit 0x53
        // 0x587EAA47: push esi
        __asm _emit 0x56
        // 0x587EAA48: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA50: mov esi, 0x1390
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA55: lea ebx, [edi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA5B: jmp 0x587eaa60
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587EAA60..0x587EABB4; 340 mapped bytes.
extern "C" __declspec(naked) void FUN_587eaa20_segment_01() {
    __asm {
        // 0x587EAA60: cmp dword ptr [ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x587EAA63: je 0x587eaa92
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587EAA65: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAA6A: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587EAA6D: mov eax, dword ptr [esi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x0E
        // 0x587EAA70: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EAA72: je 0x587eaa92
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587EAA74: mov ebp, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x0C
        // 0x587EAA77: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587EAA79: call 0x5873a250
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xF7
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EAA7E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EAA80: je 0x587eaa8e
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587EAA82: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EAA86: cmp dword ptr [ebp + 0x4d8], edx
        __asm _emit 0x39
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA8C: je 0x587eaaa7
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587EAA8E: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EAA92: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x587EAA95: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587EAA98: cmp esi, 0x1410
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA9E: jl 0x587eaa60
        __asm _emit 0x7C
        __asm _emit 0xC0
        // 0x587EAAA0: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAAA5: jmp 0x587eaab2
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587EAAA7: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAAAC: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EAAB0: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587EAAB2: mov eax, dword ptr [edi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EAAB8: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x587EAABB: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EAABF: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x587EAAC2: push edx
        __asm _emit 0x52
        // 0x587EAAC3: push ecx
        __asm _emit 0x51
        // 0x587EAAC4: push eax
        __asm _emit 0x50
        // 0x587EAAC5: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587EAAC7: call 0x588de0d0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x36
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587EAACC: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587EAAD1: jne 0x587eab3b
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x587EAAD3: cmp byte ptr [edi + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x587EAAD7: mov dword ptr [edi + 0x39c], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAAE1: mov dword ptr [edi + 0x10554], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EAAE7: movzx eax, word ptr [ebp + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAAEE: mov dword ptr [edi + 0x104c4], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EAAF4: jne 0x587eab19
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x587EAAF6: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAAFC: cmp byte ptr [ecx + 0x2fc], 1
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587EAB03: je 0x587eab19
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587EAB05: cmp dword ptr [ebp + 0x1258], esi
        __asm _emit 0x39
        __asm _emit 0xB5
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAB0B: jne 0x587eab21
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587EAB0D: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAB13: push esi
        __asm _emit 0x56
        // 0x587EAB14: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x62
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EAB19: pop esi
        __asm _emit 0x5E
        // 0x587EAB1A: pop ebx
        __asm _emit 0x5B
        // 0x587EAB1B: pop ebp
        __asm _emit 0x5D
        // 0x587EAB1C: pop edi
        __asm _emit 0x5F
        // 0x587EAB1D: pop ecx
        __asm _emit 0x59
        // 0x587EAB1E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EAB21: pop esi
        __asm _emit 0x5E
        // 0x587EAB22: pop ebx
        __asm _emit 0x5B
        // 0x587EAB23: pop ebp
        __asm _emit 0x5D
        // 0x587EAB24: pop edi
        __asm _emit 0x5F
        // 0x587EAB25: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EAB28: mov dword ptr [esp + 4], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAB30: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAB36: jmp 0x588c0da0
        __asm _emit 0xE9
        __asm _emit 0x65
        __asm _emit 0x62
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EAB3B: mov dword ptr [edi + 0x10554], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAB45: mov dword ptr [edi + 0x104c4], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EAB4F: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAB55: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x42
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EAB5A: cmp eax, 0x3f1
        __asm _emit 0x3D
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAB5F: je 0x587eab19
        __asm _emit 0x74
        __asm _emit 0xB8
        // 0x587EAB61: cmp byte ptr [edi + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x587EAB65: jne 0x587eab83
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587EAB67: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAB6D: cmp byte ptr [edx + 0x2fc], 1
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587EAB74: je 0x587eab83
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587EAB76: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAB7C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EAB7E: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x62
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EAB83: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAB89: cmp dword ptr [ecx + 0x50], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x587EAB8C: jne 0x587eab19
        __asm _emit 0x75
        __asm _emit 0x8B
        // 0x587EAB8E: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAB93: cmp byte ptr [eax + 0x2fc], 1
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587EAB9A: je 0x587eab19
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EABA0: pop esi
        __asm _emit 0x5E
        // 0x587EABA1: pop ebx
        __asm _emit 0x5B
        // 0x587EABA2: pop ebp
        __asm _emit 0x5D
        // 0x587EABA3: pop edi
        __asm _emit 0x5F
        // 0x587EABA4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EABA7: mov dword ptr [esp + 4], 0x12c
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EABAF: jmp 0x588c0da0
        __asm _emit 0xE9
        __asm _emit 0xEC
        __asm _emit 0x61
        __asm _emit 0x0D
        __asm _emit 0x00
    }
}
