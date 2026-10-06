// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2025 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_58893e80.

// Ghidra body range 0x58893E80..0x588941DA; 858 mapped bytes.
extern "C" __declspec(naked) void FUN_58893e80_segment_00() {
    __asm {
        // 0x58893E80: sub esp, 0x220
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893E86: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58893E8B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58893E8D: mov dword ptr [esp + 0x21c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893E94: push ebx
        __asm _emit 0x53
        // 0x58893E95: mov ebx, dword ptr [esp + 0x230]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893E9C: push ebp
        __asm _emit 0x55
        // 0x58893E9D: push esi
        __asm _emit 0x56
        // 0x58893E9E: push edi
        __asm _emit 0x57
        // 0x58893E9F: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58893EA1: mov ecx, dword ptr [esp + 0x234]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893EA8: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58893EAA: shr eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x10
        // 0x58893EAD: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58893EAF: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x58893EB2: dec eax
        __asm _emit 0x48
        // 0x58893EB3: and esi, 0xff00
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893EB9: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58893EBD: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x58893EC0: lea ebp, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x30
        // 0x58893EC3: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58893EC6: ja 0x5889464d
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893ECC: jmp dword ptr [eax*4 + 0x58894670]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58893ED3: movzx eax, word ptr [esp + 0x238]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893EDB: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58893EDE: jne 0x58893eff
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58893EE0: push 0x5898d670
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893EE5: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893EEB: push eax
        __asm _emit 0x50
        // 0x58893EEC: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58893EF0: push ecx
        __asm _emit 0x51
        // 0x58893EF1: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893EF7: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58893EFA: jmp 0x5889464d
        __asm _emit 0xE9
        __asm _emit 0x4E
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893EFF: lea edx, [edi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x78
        // 0x58893F02: push edx
        __asm _emit 0x52
        // 0x58893F03: push ebx
        __asm _emit 0x53
        // 0x58893F04: call dword ptr [0x5898c138]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893F0A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58893F0C: jne 0x58893fa7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893F12: mov eax, 0x800
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893F17: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58893F1A: jne 0x58893f24
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58893F1C: push ebp
        __asm _emit 0x55
        // 0x58893F1D: push 0x5899bfb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58893F22: jmp 0x58893f8d
        __asm _emit 0xEB
        __asm _emit 0x69
        // 0x58893F24: cmp dword ptr [esp + 0x240], 1
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58893F2C: jne 0x58893f5c
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x58893F2E: push ebp
        __asm _emit 0x55
        // 0x58893F2F: add ebx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x18
        // 0x58893F32: push ebx
        __asm _emit 0x53
        // 0x58893F33: push 0x5899bf9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58893F38: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893F3E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58893F41: push eax
        __asm _emit 0x50
        // 0x58893F42: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58893F46: push edx
        __asm _emit 0x52
        // 0x58893F47: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893F4D: mov edx, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893F53: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58893F56: push edx
        __asm _emit 0x52
        // 0x58893F57: jmp 0x58894641
        __asm _emit 0xE9
        __asm _emit 0xE5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893F5C: lea esi, [ebx + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0x18
        // 0x58893F5F: push esi
        __asm _emit 0x56
        // 0x58893F60: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893F66: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58893F68: je 0x58893f81
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58893F6A: push esi
        __asm _emit 0x56
        // 0x58893F6B: push 0x5898d648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893F70: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893F76: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58893F79: push eax
        __asm _emit 0x50
        // 0x58893F7A: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58893F7E: push eax
        __asm _emit 0x50
        // 0x58893F7F: jmp 0x58893f92
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x58893F81: push 0x5899bf78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58893F86: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893F8C: push eax
        __asm _emit 0x50
        // 0x58893F8D: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58893F91: push ecx
        __asm _emit 0x51
        // 0x58893F92: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893F98: mov edx, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893F9E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58893FA1: push edx
        __asm _emit 0x52
        // 0x58893FA2: jmp 0x58894641
        __asm _emit 0xE9
        __asm _emit 0x9A
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893FA7: mov ecx, 0x800
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893FAC: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x58893FAF: jne 0x58893fcf
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58893FB1: push ebp
        __asm _emit 0x55
        // 0x58893FB2: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58893FB6: push 0x5899bfb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58893FBB: push edx
        __asm _emit 0x52
        // 0x58893FBC: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58893FC2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58893FC5: push 0xa0bec8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        // 0x58893FCA: jmp 0x58894641
        __asm _emit 0xE9
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893FCF: lea ebp, [edi + 0x504]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893FD5: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58893FD7: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58893FD9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893FE0: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58893FE4: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58893FE6: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58893FE8: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x58893FEA: jne 0x58894006
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58893FEC: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58893FEE: je 0x58894002
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58893FF0: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58893FF3: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58893FF6: jne 0x58894006
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58893FF8: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58893FFB: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58893FFE: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58894000: jne 0x58893fe6
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58894002: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58894004: jmp 0x5889400b
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58894006: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58894008: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x5889400B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889400D: je 0x58894176
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894013: inc ebx
        __asm _emit 0x43
        // 0x58894014: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x58894017: cmp ebx, 4
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x04
        // 0x5889401A: jl 0x58893fe0
        __asm _emit 0x7C
        __asm _emit 0xC4
        // 0x5889401C: mov eax, dword ptr [edi + 0x54c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894022: mov ecx, dword ptr [edi + 0x550]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894028: mov edx, dword ptr [edi + 0x554]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889402E: mov dword ptr [edi + 0x564], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894034: mov eax, dword ptr [edi + 0x558]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889403A: mov dword ptr [edi + 0x568], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894040: mov ecx, dword ptr [edi + 0x55c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x5C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894046: mov dword ptr [edi + 0x56c], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x6C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889404C: mov edx, dword ptr [edi + 0x560]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894052: mov dword ptr [edi + 0x570], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894058: mov eax, dword ptr [edi + 0x534]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889405E: mov dword ptr [edi + 0x54c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894064: mov eax, dword ptr [edi + 0x540]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889406A: mov dword ptr [edi + 0x574], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894070: mov ecx, dword ptr [edi + 0x538]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894076: mov dword ptr [edi + 0x550], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889407C: mov ecx, dword ptr [edi + 0x544]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894082: mov dword ptr [edi + 0x578], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894088: mov edx, dword ptr [edi + 0x53c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x3C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889408E: mov dword ptr [edi + 0x554], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894094: mov edx, dword ptr [edi + 0x548]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889409A: mov dword ptr [edi + 0x558], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940A0: mov eax, dword ptr [edi + 0x51c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940A6: mov dword ptr [edi + 0x534], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940AC: mov eax, dword ptr [edi + 0x528]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940B2: mov dword ptr [edi + 0x55c], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x5C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940B8: mov ecx, dword ptr [edi + 0x520]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940BE: mov dword ptr [edi + 0x538], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940C4: mov ecx, dword ptr [edi + 0x52c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940CA: mov dword ptr [edi + 0x560], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940D0: mov edx, dword ptr [edi + 0x524]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940D6: mov dword ptr [edi + 0x53c], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x3C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940DC: mov edx, dword ptr [edi + 0x530]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940E2: mov dword ptr [edi + 0x540], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940E8: mov eax, dword ptr [edi + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940EE: mov dword ptr [edi + 0x51c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940F4: mov eax, dword ptr [edi + 0x510]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588940FA: mov dword ptr [edi + 0x544], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894100: mov ecx, dword ptr [edi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894106: mov dword ptr [edi + 0x520], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889410C: mov ecx, dword ptr [edi + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894112: mov dword ptr [edi + 0x548], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894118: mov edx, dword ptr [edi + 0x50c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889411E: mov dword ptr [edi + 0x524], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894124: mov edx, dword ptr [edi + 0x518]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889412A: mov dword ptr [edi + 0x528], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894130: mov dword ptr [edi + 0x52c], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894136: mov dword ptr [edi + 0x530], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889413C: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58894140: mov esi, 0x18
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894145: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58894147: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x58894149: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894150: lea ecx, [esi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58894156: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58894158: je 0x5889423e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889415E: mov cl, byte ptr [eax + edx]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x10
        // 0x58894161: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58894163: je 0x5889423e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894169: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5889416B: inc eax
        __asm _emit 0x40
        // 0x5889416C: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5889416F: jne 0x58894150
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x58894171: jmp 0x58894242
        __asm _emit 0xE9
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894176: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58894178: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889417C: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58894180: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58894184: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58894188: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5889418C: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58894190: lea esi, [eax + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x58894193: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58894197: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58894199: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889419B: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5889419D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588941A0: lea ecx, [esi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588941A6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588941A8: je 0x588941bb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588941AA: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x588941AD: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588941AF: je 0x588941bb
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588941B1: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588941B3: inc eax
        __asm _emit 0x40
        // 0x588941B4: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588941B7: jne 0x588941a0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588941B9: jmp 0x588941bf
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588941BB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588941BD: jne 0x588941c0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588941BF: dec eax
        __asm _emit 0x48
        // 0x588941C0: lea edx, [ebx + ebx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x5B
        // 0x588941C3: lea edx, [edi + edx*8 + 0x504]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0xD7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588941CA: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x588941CC: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588941CF: mov ebx, 0x18
        __asm _emit 0xBB
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588941D4: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x588941D6: sub esi, ebp
        __asm _emit 0x2B
        __asm _emit 0xF5
        // 0x588941D8: jmp 0x588941e0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588941E0..0x5889466F; 1167 mapped bytes.
extern "C" __declspec(naked) void FUN_58893e80_segment_01() {
    __asm {
        // 0x588941E0: lea ecx, [ebx + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588941E6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588941E8: je 0x588941fb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588941EA: mov cl, byte ptr [eax + esi]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x30
        // 0x588941ED: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588941EF: je 0x588941fb
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588941F1: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588941F3: inc eax
        __asm _emit 0x40
        // 0x588941F4: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588941F7: jne 0x588941e0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588941F9: jmp 0x588941ff
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588941FB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588941FD: jne 0x58894200
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588941FF: dec eax
        __asm _emit 0x48
        // 0x58894200: lea esi, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58894204: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894207: mov ebx, 0x18
        __asm _emit 0xBB
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889420C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5889420E: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x58894210: lea edx, [ebx + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58894216: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58894218: je 0x58894231
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5889421A: mov cl, byte ptr [eax + esi]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x30
        // 0x5889421D: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5889421F: je 0x58894231
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58894221: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58894223: inc eax
        __asm _emit 0x40
        // 0x58894224: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58894227: jne 0x58894210
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58894229: dec eax
        __asm _emit 0x48
        // 0x5889422A: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x5889422C: jmp 0x5889413c
        __asm _emit 0xE9
        __asm _emit 0x0B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58894231: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58894233: jne 0x58894236
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58894235: dec eax
        __asm _emit 0x48
        // 0x58894236: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894239: jmp 0x5889413c
        __asm _emit 0xE9
        __asm _emit 0xFE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889423E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58894240: jne 0x58894243
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58894242: dec eax
        __asm _emit 0x48
        // 0x58894243: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894246: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889424A: lea ecx, [eax + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x5889424D: push ecx
        __asm _emit 0x51
        // 0x5889424E: push eax
        __asm _emit 0x50
        // 0x5889424F: push 0x5899bf54
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58894254: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889425A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889425D: push eax
        __asm _emit 0x50
        // 0x5889425E: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58894262: push edx
        __asm _emit 0x52
        // 0x58894263: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894269: mov eax, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889426F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58894272: push eax
        __asm _emit 0x50
        // 0x58894273: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58894277: push ecx
        __asm _emit 0x51
        // 0x58894278: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0xC9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889427D: mov edx, 0x800
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894282: push ebp
        __asm _emit 0x55
        // 0x58894283: cmp si, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58894286: jne 0x588942aa
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58894288: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889428C: push 0x5899bfb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58894291: push eax
        __asm _emit 0x50
        // 0x58894292: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894298: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5889429B: push 0xa0bec8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        // 0x588942A0: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588942A4: push ecx
        __asm _emit 0x51
        // 0x588942A5: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0x9C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588942AA: push ebx
        __asm _emit 0x53
        // 0x588942AB: push 0x5899bfc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588942B0: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588942B6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588942B9: push eax
        __asm _emit 0x50
        // 0x588942BA: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588942BE: push edx
        __asm _emit 0x52
        // 0x588942BF: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588942C5: mov eax, dword ptr [edi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588942CB: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588942CE: push eax
        __asm _emit 0x50
        // 0x588942CF: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588942D3: push ecx
        __asm _emit 0x51
        // 0x588942D4: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0x6D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588942D9: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588942DF: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588942E2: movzx edx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588942E9: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588942EB: jne 0x5889464d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588942F1: mov eax, 0x800
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588942F6: push ebp
        __asm _emit 0x55
        // 0x588942F7: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588942FA: jne 0x5889431e
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x588942FC: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58894300: push 0x5899bfb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58894305: push ecx
        __asm _emit 0x51
        // 0x58894306: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889430C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5889430F: push 0xa0bec8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        // 0x58894314: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58894318: push edx
        __asm _emit 0x52
        // 0x58894319: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889431E: push ebx
        __asm _emit 0x53
        // 0x5889431F: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58894323: push 0x5899ffe4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58894328: push eax
        __asm _emit 0x50
        // 0x58894329: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889432F: mov ecx, dword ptr [edi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894335: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58894338: push ecx
        __asm _emit 0x51
        // 0x58894339: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889433D: push edx
        __asm _emit 0x52
        // 0x5889433E: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894343: push ebp
        __asm _emit 0x55
        // 0x58894344: push ebx
        __asm _emit 0x53
        // 0x58894345: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58894349: push 0x5899ffd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5889434E: push eax
        __asm _emit 0x50
        // 0x5889434F: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894355: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58894358: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889435D: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58894361: push ecx
        __asm _emit 0x51
        // 0x58894362: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894367: cmp ecx, 0x800
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889436D: jne 0x588943aa
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x5889436F: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58894375: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58894378: mov ecx, dword ptr [eax + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889437E: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x58894381: push ebx
        __asm _emit 0x53
        // 0x58894382: push eax
        __asm _emit 0x50
        // 0x58894383: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894389: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889438B: je 0x5889464d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894391: push ebp
        __asm _emit 0x55
        // 0x58894392: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58894396: push 0x5899bfb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5889439B: push edx
        __asm _emit 0x52
        // 0x5889439C: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588943A2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588943A5: jmp 0x5889463c
        __asm _emit 0xE9
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588943AA: mov ecx, 0x800
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588943AF: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x588943B2: je 0x58894391
        __asm _emit 0x74
        __asm _emit 0xDD
        // 0x588943B4: mov ecx, 0x2000
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588943B9: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x588943BC: jne 0x588943dd
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588943BE: push ebp
        __asm _emit 0x55
        // 0x588943BF: push ebx
        __asm _emit 0x53
        // 0x588943C0: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588943C4: push 0x5899ffd0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xFF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588943C9: push edx
        __asm _emit 0x52
        // 0x588943CA: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588943D0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588943D3: push 0xff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588943D8: jmp 0x58894641
        __asm _emit 0xE9
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588943DD: mov ecx, 0x4000
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588943E2: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x588943E5: jne 0x5889441d
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x588943E7: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588943ED: cmp edx, dword ptr [0x58a2459c]
        __asm _emit 0x3B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588943F3: jne 0x5889464d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588943F9: push ebp
        __asm _emit 0x55
        // 0x588943FA: push ebx
        __asm _emit 0x53
        // 0x588943FB: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588943FF: push 0x5899ffd0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xFF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58894404: push eax
        __asm _emit 0x50
        // 0x58894405: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889440B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5889440E: push 0xff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894413: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58894417: push ecx
        __asm _emit 0x51
        // 0x58894418: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889441D: mov edx, 0x8000
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894422: cmp si, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58894425: jne 0x5889445c
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x58894427: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889442C: cmp eax, dword ptr [0x58a2459c]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58894432: je 0x5889464d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894438: push ebp
        __asm _emit 0x55
        // 0x58894439: push ebx
        __asm _emit 0x53
        // 0x5889443A: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5889443E: push 0x5899ffd0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xFF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58894443: push ecx
        __asm _emit 0x51
        // 0x58894444: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889444A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5889444D: push 0xff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894452: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58894456: push edx
        __asm _emit 0x52
        // 0x58894457: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0xEA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889445C: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58894462: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58894464: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889446A: jne 0x5889448f
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5889446C: call 0x5888ce20
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x89
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58894471: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58894473: je 0x5889448f
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58894475: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889447B: push ebx
        __asm _emit 0x53
        // 0x5889447C: call 0x5888ce20
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x89
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58894481: push eax
        __asm _emit 0x50
        // 0x58894482: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894488: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889448A: jne 0x5889448f
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x5889448C: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x5889448F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58894491: mov eax, 0x5898d8b8
        __asm _emit 0xB8
        __asm _emit 0xB8
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894496: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58894498: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x5889449A: jne 0x588944b6
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5889449C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5889449E: je 0x588944b2
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588944A0: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588944A3: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x588944A6: jne 0x588944b6
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588944A8: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x588944AB: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x588944AE: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x588944B0: jne 0x58894496
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x588944B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588944B4: jmp 0x588944bb
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588944B6: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x588944B8: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x588944BB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588944BD: je 0x58894624
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588944C3: mov eax, dword ptr [esp + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588944CA: shr eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x10
        // 0x588944CD: dec eax
        __asm _emit 0x48
        // 0x588944CE: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588944D1: ja 0x5889464d
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588944D7: jmp dword ptr [eax*4 + 0x58894690]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x588944DE: cmp dword ptr [edi + 0x638], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588944E5: je 0x5889464d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588944EB: lea eax, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x30
        // 0x588944EE: push eax
        __asm _emit 0x50
        // 0x588944EF: push ebx
        __asm _emit 0x53
        // 0x588944F0: push 0x5899bf0c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588944F5: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588944FB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588944FE: push eax
        __asm _emit 0x50
        // 0x588944FF: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58894503: push eax
        __asm _emit 0x50
        // 0x58894504: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889450A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5889450D: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5889450F: je 0x58894522
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58894511: mov ecx, dword ptr [edi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894517: push ecx
        __asm _emit 0x51
        // 0x58894518: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889451C: push edx
        __asm _emit 0x52
        // 0x5889451D: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894522: mov eax, dword ptr [edi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894528: push eax
        __asm _emit 0x50
        // 0x58894529: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889452D: push ecx
        __asm _emit 0x51
        // 0x5889452E: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894533: cmp dword ptr [edi + 0x63c], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889453A: je 0x5889464d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894540: lea eax, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x30
        // 0x58894543: push eax
        __asm _emit 0x50
        // 0x58894544: push ebx
        __asm _emit 0x53
        // 0x58894545: push 0x5899bef0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5889454A: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894550: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58894553: push eax
        __asm _emit 0x50
        // 0x58894554: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58894558: push edx
        __asm _emit 0x52
        // 0x58894559: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889455F: mov eax, dword ptr [edi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894565: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58894568: push eax
        __asm _emit 0x50
        // 0x58894569: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889456D: push ecx
        __asm _emit 0x51
        // 0x5889456E: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894573: cmp dword ptr [edi + 0x640], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889457A: je 0x5889464d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894580: lea eax, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x30
        // 0x58894583: push eax
        __asm _emit 0x50
        // 0x58894584: push ebx
        __asm _emit 0x53
        // 0x58894585: push 0x5899beac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5889458A: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894590: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58894593: push eax
        __asm _emit 0x50
        // 0x58894594: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58894598: push edx
        __asm _emit 0x52
        // 0x58894599: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889459F: mov eax, dword ptr [edi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588945A5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588945A8: push eax
        __asm _emit 0x50
        // 0x588945A9: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588945AD: push ecx
        __asm _emit 0x51
        // 0x588945AE: jmp 0x58894646
        __asm _emit 0xE9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588945B3: cmp dword ptr [edi + 0x644], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588945BA: je 0x5889464d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588945C0: lea eax, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x30
        // 0x588945C3: push eax
        __asm _emit 0x50
        // 0x588945C4: push ebx
        __asm _emit 0x53
        // 0x588945C5: push 0x5899bed0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588945CA: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588945D0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588945D3: push eax
        __asm _emit 0x50
        // 0x588945D4: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588945D8: push edx
        __asm _emit 0x52
        // 0x588945D9: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588945DF: mov eax, dword ptr [edi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588945E5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588945E8: push eax
        __asm _emit 0x50
        // 0x588945E9: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588945ED: push ecx
        __asm _emit 0x51
        // 0x588945EE: jmp 0x58894646
        __asm _emit 0xEB
        __asm _emit 0x56
        // 0x588945F0: lea eax, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x30
        // 0x588945F3: push eax
        __asm _emit 0x50
        // 0x588945F4: push ebx
        __asm _emit 0x53
        // 0x588945F5: add ebx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x18
        // 0x588945F8: push ebx
        __asm _emit 0x53
        // 0x588945F9: push 0x5899be88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588945FE: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894604: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58894607: push eax
        __asm _emit 0x50
        // 0x58894608: lea edx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889460C: push edx
        __asm _emit 0x52
        // 0x5889460D: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894613: mov eax, dword ptr [edi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894619: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5889461C: push eax
        __asm _emit 0x50
        // 0x5889461D: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58894621: push ecx
        __asm _emit 0x51
        // 0x58894622: jmp 0x58894646
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x58894624: lea eax, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x30
        // 0x58894627: push eax
        __asm _emit 0x50
        // 0x58894628: push ebx
        __asm _emit 0x53
        // 0x58894629: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5889462D: push 0x5899ffd0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xFF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58894632: push edx
        __asm _emit 0x52
        // 0x58894633: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58894639: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5889463C: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x58894641: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58894645: push eax
        __asm _emit 0x50
        // 0x58894646: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58894648: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x8C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889464D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5889464F: call 0x5888d5c0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x8F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58894654: mov ecx, dword ptr [esp + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889465B: pop edi
        __asm _emit 0x5F
        // 0x5889465C: pop esi
        __asm _emit 0x5E
        // 0x5889465D: pop ebp
        __asm _emit 0x5D
        // 0x5889465E: pop ebx
        __asm _emit 0x5B
        // 0x5889465F: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58894661: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x85
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58894666: add esp, 0x220
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889466C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
