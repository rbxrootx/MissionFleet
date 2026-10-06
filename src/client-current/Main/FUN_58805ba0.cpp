// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805BA0 .. +0x1F0 bytes.
// Source symbol alias: FUN_58805ba0.
extern "C" __declspec(naked) void FUN_58805ba0() {
    __asm {
        // 0x58805BA0: push ebp
        __asm _emit 0x55
        // 0x58805BA1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58805BA3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58805BA6: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805BAB: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58805BAE: cmp dword ptr [eax + 4], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58805BB2: push ebx
        __asm _emit 0x53
        // 0x58805BB3: push ebp
        __asm _emit 0x55
        // 0x58805BB4: push esi
        __asm _emit 0x56
        // 0x58805BB5: push edi
        __asm _emit 0x57
        // 0x58805BB6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58805BB8: je 0x58805d88
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805BBE: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58805BC0: lea edi, [ebx + 0x290]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805BC6: jmp 0x58805bd0
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58805BC8: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805BCF: nop
        __asm _emit 0x90
        // 0x58805BD0: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805BD6: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805BDC: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58805BDF: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58805BE1: je 0x58805c5b
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x58805BE3: movzx edx, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805BEA: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x58805BEC: jne 0x58805c54
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x58805BEE: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805BF4: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x58805BF7: fild dword ptr [eax + 0x74]
        __asm _emit 0xDB
        __asm _emit 0x40
        __asm _emit 0x74
        // 0x58805BFA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58805BFC: jge 0x58805c04
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58805BFE: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58805C04: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58805C09: fmul qword ptr [0x5898cf20]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58805C0F: movzx edx, word ptr [ebx + 0x1c4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805C16: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58805C18: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58805C1C: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58805C20: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x58805C22: fild dword ptr [edi]
        __asm _emit 0xDB
        __asm _emit 0x07
        // 0x58805C24: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58805C26: jge 0x58805c2e
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58805C28: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58805C2E: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58805C32: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58805C37: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x58805C39: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805C3E: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805C42: fldcw word ptr [esp + 0x18]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805C46: fistp qword ptr [esp + 0x18]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805C4A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805C4E: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x58805C50: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58805C54: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58805C57: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58805C59: jne 0x58805be3
        __asm _emit 0x75
        __asm _emit 0x88
        // 0x58805C5B: inc ebp
        __asm _emit 0x45
        // 0x58805C5C: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58805C5F: cmp ebp, 8
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x08
        // 0x58805C62: jl 0x58805bd0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58805C68: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805C6E: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58805C71: movzx esi, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB0
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805C78: mov eax, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805C7E: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x58805C81: fild dword ptr [eax + 0x74]
        __asm _emit 0xDB
        __asm _emit 0x40
        __asm _emit 0x74
        // 0x58805C84: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58805C86: jge 0x58805c8e
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58805C88: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58805C8E: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x6F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58805C93: fmul qword ptr [0x5898cf20]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58805C99: movzx edx, word ptr [ebx + 0x1c4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805CA0: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58805CA4: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58805CA9: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805CAD: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805CB2: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805CB6: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805CBA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58805CBC: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x58805CBE: fldcw word ptr [esp + 0x18]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805CC2: fistp qword ptr [esp + 0x18]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805CC6: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58805CCA: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58805CCE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58805CD0: je 0x58805cd8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58805CD2: mov eax, dword ptr [ebx + 0x290]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805CD8: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x58805CDB: je 0x58805ce3
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58805CDD: add eax, dword ptr [ebx + 0x294]
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805CE3: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x58805CE6: je 0x58805cee
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58805CE8: add eax, dword ptr [ebx + 0x298]
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805CEE: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x58805CF1: je 0x58805cf9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58805CF3: add eax, dword ptr [ebx + 0x29c]
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805CF9: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x58805CFC: je 0x58805d04
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58805CFE: add eax, dword ptr [ebx + 0x2a0]
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D04: cmp esi, 5
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x58805D07: je 0x58805d0f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58805D09: add eax, dword ptr [ebx + 0x2a4]
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D0F: cmp esi, 6
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x58805D12: je 0x58805d1a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58805D14: add eax, dword ptr [ebx + 0x2a8]
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D1A: cmp esi, 7
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x07
        // 0x58805D1D: je 0x58805d25
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58805D1F: add eax, dword ptr [ebx + 0x2ac]
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D25: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805D2B: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58805D2E: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x58805D31: movzx esi, byte ptr [edx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB2
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D38: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58805D3A: div dword ptr [ebx + esi*4 + 0x290]
        __asm _emit 0xF7
        __asm _emit 0xB4
        __asm _emit 0xB3
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D41: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805D47: mov edx, dword ptr [ecx + 0x4a0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D4D: mov dword ptr [edx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x58805D50: push eax
        __asm _emit 0x50
        // 0x58805D51: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805D56: mov ecx, dword ptr [eax + 0x10bf8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58805D5C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58805D61: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58805D63: lea edi, [ebx + 0x290]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D69: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D70: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58805D72: push ecx
        __asm _emit 0x51
        // 0x58805D73: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D79: push esi
        __asm _emit 0x56
        // 0x58805D7A: call 0x588a5400
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xF6
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58805D7F: inc esi
        __asm _emit 0x46
        // 0x58805D80: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58805D83: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x58805D86: jl 0x58805d70
        __asm _emit 0x7C
        __asm _emit 0xE8
        // 0x58805D88: pop edi
        __asm _emit 0x5F
        // 0x58805D89: pop esi
        __asm _emit 0x5E
        // 0x58805D8A: pop ebp
        __asm _emit 0x5D
        // 0x58805D8B: pop ebx
        __asm _emit 0x5B
        // 0x58805D8C: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58805D8E: pop ebp
        __asm _emit 0x5D
        // 0x58805D8F: ret
        __asm _emit 0xC3
    }
}
