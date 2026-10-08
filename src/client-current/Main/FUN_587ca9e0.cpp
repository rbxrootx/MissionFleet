// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 584 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ca9e0.

// Ghidra body range 0x587CA9E0..0x587CAC28; 584 mapped bytes.
extern "C" __declspec(naked) void FUN_587ca9e0_segment_00() {
    __asm {
        // 0x587CA9E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CA9E2: push 0x589894ab
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CA9E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA9ED: push eax
        __asm _emit 0x50
        // 0x587CA9EE: push ecx
        __asm _emit 0x51
        // 0x587CA9EF: push ebx
        __asm _emit 0x53
        // 0x587CA9F0: push ebp
        __asm _emit 0x55
        // 0x587CA9F1: push esi
        __asm _emit 0x56
        // 0x587CA9F2: push edi
        __asm _emit 0x57
        // 0x587CA9F3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CA9F8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CA9FA: push eax
        __asm _emit 0x50
        // 0x587CA9FB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CA9FF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA05: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587CAA07: cmp dword ptr [ebx + 0x8c], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA0E: je 0x587cac14
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA14: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587CAA1B: je 0x587cab81
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA21: mov esi, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAA27: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAA2C: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CAA32: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587CAA35: sub eax, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587CAA38: mov edi, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA3E: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CAA40: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA46: cdq
        __asm _emit 0x99
        // 0x587CAA47: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587CAA49: mov edi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x04
        // 0x587CAA4C: mov ebp, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x587CAA4F: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587CAA51: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x587CAA54: sub eax, dword ptr [esi + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587CAA57: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x587CAA59: mov ebp, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x54
        // 0x587CAA5C: mov ecx, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA62: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CAA64: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA6A: cdq
        __asm _emit 0x99
        // 0x587CAA6B: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CAA6D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587CAA6F: sub esi, dword ptr [ebx + 8]
        __asm _emit 0x2B
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x587CAA72: add esi, ebp
        __asm _emit 0x03
        __asm _emit 0xF5
        // 0x587CAA74: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x21
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CAA79: cdq
        __asm _emit 0x99
        // 0x587CAA7A: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA7F: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CAA81: mov eax, dword ptr [0x58a246dc]
        __asm _emit 0xA1
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAA86: add edx, 0x13
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x13
        // 0x587CAA89: cmp dword ptr [eax + 0x170], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA8F: jle 0x587caae0
        __asm _emit 0x7E
        __asm _emit 0x4F
        // 0x587CAA91: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CAA93: jl 0x587caae0
        __asm _emit 0x7C
        __asm _emit 0x4B
        // 0x587CAA95: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAA9C: je 0x587caae0
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x587CAA9E: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAAA4: mov ebp, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x90
        // 0x587CAAA7: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587CAAA9: je 0x587caae0
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x587CAAAB: fild dword ptr [0x58a248f8]
        __asm _emit 0xDB
        __asm _emit 0x05
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAAB1: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x21
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CAAB6: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587CAAB8: fadd st(1), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC1
        // 0x587CAABA: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAABF: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587CAAC1: je 0x587caac5
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x587CAAC3: fmul st(1)
        __asm _emit 0xD8
        __asm _emit 0xC9
        // 0x587CAAC5: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x587CAAC7: je 0x587caacf
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CAAC9: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587CAACB: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x587CAACD: jmp 0x587caabf
        __asm _emit 0xEB
        __asm _emit 0xF0
        // 0x587CAACF: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x587CAAD1: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x21
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CAAD6: push eax
        __asm _emit 0x50
        // 0x587CAAD7: push esi
        __asm _emit 0x56
        // 0x587CAAD8: push edi
        __asm _emit 0x57
        // 0x587CAAD9: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587CAADB: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xC9
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587CAAE0: cmp dword ptr [ebx + 0x8c], 0xa
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x587CAAE7: jne 0x587caaef
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587CAAE9: inc dword ptr [ebx + 0x2bc]
        __asm _emit 0xFF
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAAEF: cmp dword ptr [ebx + 0x2bc], 4
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x587CAAF6: jb 0x587cab81
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAAFC: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAB02: push 0x3b
        __asm _emit 0x6A
        __asm _emit 0x3B
        // 0x587CAB04: push 0x38
        __asm _emit 0x6A
        __asm _emit 0x38
        // 0x587CAB06: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x587CAB08: call 0x588ebeb0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x13
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587CAB0D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CAB0F: jne 0x587cab77
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x587CAB11: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAB16: mov esi, 0x22
        __asm _emit 0xBE
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB1B: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB21: jle 0x587cab3a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587CAB23: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB2A: je 0x587cab3a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CAB2C: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB32: mov ecx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB38: jmp 0x587cab3c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CAB3A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CAB3C: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAB42: push edx
        __asm _emit 0x52
        // 0x587CAB43: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xCE
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CAB48: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAB4D: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB53: jle 0x587cab6c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587CAB55: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB5C: je 0x587cab6c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CAB5E: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB64: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB6A: jmp 0x587cab6e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CAB6C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CAB6E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CAB70: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587CAB73: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CAB75: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CAB77: mov dword ptr [ebx + 0x2bc], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB81: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x587CAB84: add dword ptr [ebx + 0x8c], ebp
        __asm _emit 0x01
        __asm _emit 0xAB
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAB8A: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587CAB8C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x20
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CAB91: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587CAB93: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CAB96: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CAB9A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587CAB9C: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CABA0: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587CABA2: je 0x587cac02
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x587CABA4: mov eax, dword ptr [0x58a246f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CABA9: cmp dword ptr [eax + 0x160], 0x14
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        // 0x587CABB0: jle 0x587cabc6
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587CABB2: cmp dword ptr [eax + 0x190], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CABB8: je 0x587cabc6
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587CABBA: mov esi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CABC0: add esi, 0x500
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CABC6: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CABCB: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CABD0: cdq
        __asm _emit 0x99
        // 0x587CABD1: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CABD6: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CABD8: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587CABDB: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CABDD: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587CABE0: push eax
        __asm _emit 0x50
        // 0x587CABE1: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CABE6: cdq
        __asm _emit 0x99
        // 0x587CABE7: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CABEC: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CABEE: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587CABF1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CABF3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CABF5: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587CABF8: push eax
        __asm _emit 0x50
        // 0x587CABF9: push esi
        __asm _emit 0x56
        // 0x587CABFA: push ebx
        __asm _emit 0x53
        // 0x587CABFB: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xD0
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CAC00: jmp 0x587cac04
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CAC02: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CAC04: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAC09: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CAC0B: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CAC0F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x81
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CAC14: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CAC18: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAC1F: pop ecx
        __asm _emit 0x59
        // 0x587CAC20: pop edi
        __asm _emit 0x5F
        // 0x587CAC21: pop esi
        __asm _emit 0x5E
        // 0x587CAC22: pop ebp
        __asm _emit 0x5D
        // 0x587CAC23: pop ebx
        __asm _emit 0x5B
        // 0x587CAC24: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CAC27: ret
        __asm _emit 0xC3
    }
}
