// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D1F10 .. +0x712 bytes.
// Source symbol alias: FUN_587d1f10.
extern "C" __declspec(naked) void FUN_587d1f10() {
    __asm {
        // 0x587D1F10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587D1F12: push 0x58981bad
        __asm _emit 0x68
        __asm _emit 0xAD
        __asm _emit 0x1B
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D1F17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1F1D: push eax
        __asm _emit 0x50
        // 0x587D1F1E: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587D1F21: push ebx
        __asm _emit 0x53
        // 0x587D1F22: push ebp
        __asm _emit 0x55
        // 0x587D1F23: push esi
        __asm _emit 0x56
        // 0x587D1F24: push edi
        __asm _emit 0x57
        // 0x587D1F25: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D1F2A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587D1F2C: push eax
        __asm _emit 0x50
        // 0x587D1F2D: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D1F31: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1F37: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D1F39: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587D1F3B: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xF5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D1F40: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587D1F42: mov dword ptr [esi + 0x7f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1F48: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xF5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D1F4D: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587D1F4F: mov dword ptr [esi + 0x7f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1F55: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xF5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D1F5A: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587D1F5C: mov dword ptr [esi + 0x7fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1F62: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xF5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D1F67: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587D1F69: mov dword ptr [esi + 0x800], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1F6F: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xF5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D1F74: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587D1F76: mov dword ptr [esi + 0x804], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1F7C: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xF5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D1F81: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587D1F83: mov dword ptr [esi + 0x808], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1F89: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xF5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D1F8E: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587D1F91: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D1F93: mov dword ptr [esi + 0x80c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1F99: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587D1F9B: jmp 0x587d1fa0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587D1F9D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587D1FA0: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x587D1FA2: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xF5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D1FA7: mov ecx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1FAD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D1FB0: mov dword ptr [ebx + ecx], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0B
        // 0x587D1FB3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587D1FB5: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587D1FB7: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xF5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D1FBC: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1FC2: mov ecx, dword ptr [ebx + edx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x13
        // 0x587D1FC5: mov dword ptr [edi + ecx], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x587D1FC8: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1FCE: mov eax, dword ptr [ebx + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x13
        // 0x587D1FD1: mov ecx, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x587D1FD4: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x587D1FD6: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1FDC: mov eax, dword ptr [ebx + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x13
        // 0x587D1FDF: mov ecx, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x587D1FE2: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587D1FE5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D1FE8: cmp edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x587D1FEB: mov dword ptr [ecx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x587D1FEE: jl 0x587d1fb5
        __asm _emit 0x7C
        __asm _emit 0xC5
        // 0x587D1FF0: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587D1FF3: cmp ebx, 0x24
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x24
        // 0x587D1FF6: jl 0x587d1fa0
        __asm _emit 0x7C
        __asm _emit 0xA8
        // 0x587D1FF8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587D1FFA: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587D1FFC: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D2000: cmp dword ptr [ebx + 0x589baa94], ebp
        __asm _emit 0x39
        __asm _emit 0xAB
        __asm _emit 0x94
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D2006: je 0x587d259f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D200C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2011: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xAC
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D2016: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D2019: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D201D: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587D2021: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587D2023: je 0x587d207f
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x587D2025: movzx edx, word ptr [ebx + 0x589baad6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0xD6
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D202C: mov ecx, dword ptr [0x58a24778]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D2032: cmp dword ptr [ecx + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2038: jle 0x587d2051
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587D203A: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x587D203C: jl 0x587d2051
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x587D203E: cmp dword ptr [ecx + 0x190], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2044: je 0x587d2051
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D2046: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x587D2049: add edx, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D204F: jmp 0x587d2053
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D2051: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587D2053: mov ecx, dword ptr [ebx + 0x589baae4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE4
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D2059: push 0xe10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D205E: push ecx
        __asm _emit 0x51
        // 0x587D205F: mov ecx, dword ptr [ebx + 0x589baae0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D2065: push ecx
        __asm _emit 0x51
        // 0x587D2066: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D206C: push edx
        __asm _emit 0x52
        // 0x587D206D: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D2073: push esi
        __asm _emit 0x56
        // 0x587D2074: push edx
        __asm _emit 0x52
        // 0x587D2075: push ecx
        __asm _emit 0x51
        // 0x587D2076: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D2078: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xBD
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D207D: jmp 0x587d2081
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D207F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D2081: mov edx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2087: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587D2089: mov dword ptr [esp + 0x34], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D2091: mov dword ptr [edi + edx], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D2094: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xAB
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D2099: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587D209B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D209E: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D20A2: mov dword ptr [esp + 0x30], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D20AA: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587D20AC: je 0x587d2144
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D20B2: movzx eax, word ptr [ebx + 0x589baad8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D20B9: mov ecx, dword ptr [0x58a24778]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D20BF: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D20C5: jle 0x587d20e3
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x587D20C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D20C9: jl 0x587d20e3
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x587D20CB: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D20D2: je 0x587d20e3
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587D20D4: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D20DA: mov edx, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x81
        // 0x587D20DD: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D20E1: jmp 0x587d20eb
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587D20E3: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D20EB: mov eax, dword ptr [ebx + 0x589baae4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D20F1: mov ecx, dword ptr [ebx + 0x589baae0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D20F7: push 0xe10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D20FC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D20FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D2100: push eax
        __asm _emit 0x50
        // 0x587D2101: push ecx
        __asm _emit 0x51
        // 0x587D2102: push esi
        __asm _emit 0x56
        // 0x587D2103: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587D2105: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D210A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D210E: mov dword ptr [ebp], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D2115: mov dword ptr [ebp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x50
        // 0x587D2118: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D211A: je 0x587d2146
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587D211C: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587D211F: mov dword ptr [ebp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x587D2122: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587D2125: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587D2128: mov dword ptr [ebp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x587D212B: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587D212D: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587D2130: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D2133: mov dword ptr [ebp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x587D2136: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587D2139: mov dword ptr [ebp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x587D213C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587D213F: mov dword ptr [ebp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x20
        // 0x587D2142: jmp 0x587d2146
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D2144: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D2146: mov eax, dword ptr [esi + 0x7f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D214C: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587D214E: mov dword ptr [esp + 0x34], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D2156: mov dword ptr [edi + eax], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x07
        // 0x587D2159: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xAA
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D215E: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587D2160: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D2163: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D2167: mov dword ptr [esp + 0x30], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D216F: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587D2171: je 0x587d2210
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2177: movzx eax, word ptr [ebx + 0x589baada]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0xDA
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D217E: mov ecx, dword ptr [0x58a24778]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D2184: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D218A: jle 0x587d21a8
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x587D218C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D218E: jl 0x587d21a8
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x587D2190: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2197: je 0x587d21a8
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587D2199: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587D219C: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D21A2: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D21A6: jmp 0x587d21b0
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587D21A8: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D21B0: mov eax, dword ptr [ebx + 0x589baaec]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D21B6: mov ecx, dword ptr [ebx + 0x589baae8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D21BC: push 0xe10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D21C1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D21C3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D21C5: push eax
        __asm _emit 0x50
        // 0x587D21C6: push ecx
        __asm _emit 0x51
        // 0x587D21C7: push esi
        __asm _emit 0x56
        // 0x587D21C8: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587D21CA: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x0F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D21CF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D21D3: mov dword ptr [ebp], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D21DA: mov dword ptr [ebp + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D21E1: mov dword ptr [ebp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x54
        // 0x587D21E4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D21E6: je 0x587d2212
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587D21E8: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x587D21EB: mov dword ptr [ebp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x587D21EE: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587D21F1: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587D21F4: mov dword ptr [ebp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x587D21F7: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587D21F9: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587D21FC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D21FF: mov dword ptr [ebp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x587D2202: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587D2205: mov dword ptr [ebp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x587D2208: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587D220B: mov dword ptr [ebp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x20
        // 0x587D220E: jmp 0x587d2212
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D2210: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D2212: mov eax, dword ptr [esi + 0x7fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2218: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587D221A: mov dword ptr [esp + 0x34], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D2222: mov dword ptr [edi + eax], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x07
        // 0x587D2225: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xAA
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D222A: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587D222C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D222F: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D2233: mov dword ptr [esp + 0x30], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D223B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587D223D: je 0x587d22d5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2243: movzx eax, word ptr [ebx + 0x589baadc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0xDC
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D224A: mov ecx, dword ptr [0x58a24778]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D2250: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2256: jle 0x587d2274
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x587D2258: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D225A: jl 0x587d2274
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x587D225C: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2263: je 0x587d2274
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587D2265: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D226B: mov edx, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x81
        // 0x587D226E: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D2272: jmp 0x587d227c
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587D2274: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D227C: mov eax, dword ptr [ebx + 0x589baaec]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D2282: mov ecx, dword ptr [ebx + 0x589baae8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D2288: push 0xe10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D228D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D228F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D2291: push eax
        __asm _emit 0x50
        // 0x587D2292: push ecx
        __asm _emit 0x51
        // 0x587D2293: push esi
        __asm _emit 0x56
        // 0x587D2294: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587D2296: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x0F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D229B: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D229F: mov dword ptr [ebp], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D22A6: mov dword ptr [ebp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x50
        // 0x587D22A9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D22AB: je 0x587d22d7
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587D22AD: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587D22B0: mov dword ptr [ebp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x587D22B3: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587D22B6: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587D22B9: mov dword ptr [ebp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x587D22BC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587D22BE: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587D22C1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D22C4: mov dword ptr [ebp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x587D22C7: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587D22CA: mov dword ptr [ebp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x587D22CD: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587D22D0: mov dword ptr [ebp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x20
        // 0x587D22D3: jmp 0x587d22d7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D22D5: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D22D7: mov eax, dword ptr [esi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D22DD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587D22DF: mov dword ptr [esp + 0x34], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D22E7: mov dword ptr [edi + eax], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x07
        // 0x587D22EA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xA9
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D22EF: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587D22F1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D22F4: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D22F8: mov dword ptr [esp + 0x30], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2300: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587D2302: je 0x587d2339
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x587D2304: mov eax, dword ptr [ebx + 0x589baae4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D230A: mov ecx, dword ptr [ebx + 0x589baae0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D2310: push 0xe10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2315: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D2317: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D2319: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D231C: add ecx, 6
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x06
        // 0x587D231F: push eax
        __asm _emit 0x50
        // 0x587D2320: push ecx
        __asm _emit 0x51
        // 0x587D2321: push esi
        __asm _emit 0x56
        // 0x587D2322: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587D2324: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x0E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D2329: mov dword ptr [ebp], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D2330: mov dword ptr [ebp + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2337: jmp 0x587d233b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D2339: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D233B: mov ecx, dword ptr [esi + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2341: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587D2343: mov dword ptr [esp + 0x34], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D234B: mov dword ptr [edi + ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x0F
        // 0x587D234E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xA8
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D2353: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587D2355: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D2358: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D235C: mov dword ptr [esp + 0x30], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2364: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587D2366: je 0x587d23a0
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x587D2368: mov eax, dword ptr [ebx + 0x589baae4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D236E: mov ebx, dword ptr [ebx + 0x589baae0]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0xE0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D2374: push 0xe10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2379: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D237B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D237D: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D2380: push eax
        __asm _emit 0x50
        // 0x587D2381: add ebx, 0xd2
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2387: push ebx
        __asm _emit 0x53
        // 0x587D2388: push esi
        __asm _emit 0x56
        // 0x587D2389: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587D238B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D2390: mov dword ptr [ebp], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D2397: mov dword ptr [ebp + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D239E: jmp 0x587d23a2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D23A0: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D23A2: mov edx, dword ptr [esi + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D23A8: mov dword ptr [edi + edx], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x17
        // 0x587D23AB: mov eax, dword ptr [esi + 0x7f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D23B1: mov ecx, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x587D23B4: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D23B9: mov dword ptr [esp + 0x34], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D23C1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x09
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D23C6: mov ecx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D23CC: mov eax, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x587D23CF: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D23D4: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D23D8: mov eax, dword ptr [esi + 0x7f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D23DE: mov ecx, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x587D23E1: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D23E6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D23EB: mov ecx, dword ptr [esi + 0x7f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D23F1: mov eax, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x587D23F4: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D23F9: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D23FD: mov eax, dword ptr [esi + 0x7fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2403: mov ecx, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x587D2406: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D240B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D2410: mov ecx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2416: mov eax, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x587D2419: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D241E: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D2422: mov eax, dword ptr [esi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2428: mov ecx, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x587D242B: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D2430: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D2435: mov ecx, dword ptr [esi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D243B: mov eax, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x587D243E: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2443: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D2447: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D2449: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D244D: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D2451: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D2453: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D2457: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587D2459: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xA7
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D245E: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587D2460: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D2463: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587D2467: mov dword ptr [esp + 0x30], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D246F: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587D2471: je 0x587d2504
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2477: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D247B: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x587D247D: mov eax, dword ptr [0x58a24778]
        __asm _emit 0xA1
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D2482: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2488: jle 0x587d24a2
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587D248A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587D248C: jl 0x587d24a2
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x587D248E: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2495: je 0x587d24a2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D2497: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D249D: mov ebp, dword ptr [ecx + ebp*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0xA9
        // 0x587D24A0: jmp 0x587d24a4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D24A2: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D24A4: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D24A8: mov eax, dword ptr [ecx + 0x589baae4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xE4
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D24AE: mov ecx, dword ptr [ecx + 0x589baae0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D24B4: push 0xe10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D24B9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D24BB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D24BD: sub eax, 8
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x587D24C0: push eax
        __asm _emit 0x50
        // 0x587D24C1: push ecx
        __asm _emit 0x51
        // 0x587D24C2: push esi
        __asm _emit 0x56
        // 0x587D24C3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D24C5: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x0C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D24CA: mov dword ptr [ebx], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D24D0: mov dword ptr [ebx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6B
        __asm _emit 0x50
        // 0x587D24D3: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587D24D5: je 0x587d24fe
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587D24D7: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x587D24DA: mov dword ptr [ebx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x0C
        // 0x587D24DD: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587D24E0: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587D24E3: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587D24E6: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587D24E9: mov dword ptr [ebx + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x587D24EC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D24EF: mov dword ptr [ebx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x18
        // 0x587D24F2: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587D24F5: mov dword ptr [ebx + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x1C
        // 0x587D24F8: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587D24FB: mov dword ptr [ebx + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x20
        // 0x587D24FE: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D2502: jmp 0x587d2506
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D2504: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587D2506: mov eax, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D250C: mov ecx, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x587D250F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D2513: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587D2516: mov dword ptr [edx + ebp*4], ebx
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0xAA
        // 0x587D2519: mov ecx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D251F: mov edx, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0F
        // 0x587D2522: mov eax, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x02
        // 0x587D2525: mov eax, dword ptr [eax + ebp*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xA8
        // 0x587D2528: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D252D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D2531: inc ebp
        __asm _emit 0x45
        // 0x587D2532: cmp ebp, 2
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x02
        // 0x587D2535: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D253D: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D2541: jl 0x587d2457
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D2547: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D254D: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D2550: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D2554: mov ecx, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x03
        // 0x587D2557: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D2559: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D255E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x07
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D2563: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2569: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D256C: mov ecx, dword ptr [eax + ebx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x18
        // 0x587D256F: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587D2572: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2577: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x07
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D257C: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D2580: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587D2583: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587D2586: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587D2589: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D258D: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D2591: jl 0x587d2451
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D2597: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D259B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D259D: jmp 0x587d25f5
        __asm _emit 0xEB
        __asm _emit 0x56
        // 0x587D259F: mov edx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D25A5: mov dword ptr [edi + edx], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x17
        // 0x587D25A8: mov eax, dword ptr [esi + 0x7f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D25AE: mov dword ptr [edi + eax], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x07
        // 0x587D25B1: mov ecx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D25B7: mov dword ptr [edi + ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x0F
        // 0x587D25BA: mov edx, dword ptr [esi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D25C0: mov dword ptr [edi + edx], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x17
        // 0x587D25C3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D25C5: jmp 0x587d25d0
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x587D25C7: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D25CE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587D25D0: mov ecx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D25D6: mov edx, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0F
        // 0x587D25D9: mov ecx, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x10
        // 0x587D25DC: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x587D25DE: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D25E4: mov ecx, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x17
        // 0x587D25E7: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587D25EA: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D25ED: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x587D25F0: mov dword ptr [edx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587D25F3: jl 0x587d25d0
        __asm _emit 0x7C
        __asm _emit 0xDB
        // 0x587D25F5: add ebx, 0xe84
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D25FB: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587D25FE: cmp ebx, 0x82a4
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xA4
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2604: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D2608: jl 0x587d2000
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF2
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D260E: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D2612: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2619: pop ecx
        __asm _emit 0x59
        // 0x587D261A: pop edi
        __asm _emit 0x5F
        // 0x587D261B: pop esi
        __asm _emit 0x5E
        // 0x587D261C: pop ebp
        __asm _emit 0x5D
        // 0x587D261D: pop ebx
        __asm _emit 0x5B
        // 0x587D261E: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587D2621: ret
        __asm _emit 0xC3
    }
}
