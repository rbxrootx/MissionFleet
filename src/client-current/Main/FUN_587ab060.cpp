// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 589 bytes in 2 exact ranges.
// Source symbol alias: FUN_587ab060.

// Ghidra body range 0x587AB060..0x587AB2A3; 579 mapped bytes.
extern "C" __declspec(naked) void FUN_587ab060_segment_00() {
    __asm {
        // 0x587AB060: push ecx
        __asm _emit 0x51
        // 0x587AB061: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AB066: push ebp
        __asm _emit 0x55
        // 0x587AB067: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587AB069: mov ecx, dword ptr [eax + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587AB06F: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587AB072: mov eax, dword ptr [edx + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB078: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587AB07C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AB07E: je 0x587ab2e8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB084: push ebx
        __asm _emit 0x53
        // 0x587AB085: mov ebx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x587AB088: cmp ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x587AB08B: jbe 0x587ab092
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB08D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB092: push edi
        __asm _emit 0x57
        // 0x587AB093: mov edi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587AB096: push esi
        __asm _emit 0x56
        // 0x587AB097: mov esi, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587AB09A: cmp dword ptr [ebp + 0x10], esi
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587AB09D: jbe 0x587ab0a4
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB09F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB0A4: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587AB0A7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB0A9: je 0x587ab0af
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AB0AB: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587AB0AD: je 0x587ab0b4
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AB0AF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB0B4: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587AB0B6: je 0x587ab1f3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB0BC: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB0BE: jne 0x587ab137
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x587AB0C0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB0C5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB0C7: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AB0CA: jb 0x587ab0d1
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB0CC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB0D1: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AB0D3: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AB0D5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AB0D9: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB0DF: jle 0x587ab0f6
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x587AB0E1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AB0E3: jl 0x587ab0f6
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x587AB0E5: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB0EB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587AB0ED: je 0x587ab0f6
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587AB0EF: mov esi, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x81
        // 0x587AB0F2: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AB0F4: jne 0x587ab143
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x587AB0F6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB0F8: jne 0x587ab13b
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x587AB0FA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB0FF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB101: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AB104: jb 0x587ab10b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB106: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB10B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587AB10D: mov dword ptr [ecx + 8], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB114: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB116: jne 0x587ab13f
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587AB118: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB11D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB11F: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AB122: jb 0x587ab129
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB124: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB129: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587AB12B: mov dword ptr [edx + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB132: jmp 0x587ab1ce
        __asm _emit 0xE9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB137: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB139: jmp 0x587ab0c7
        __asm _emit 0xEB
        __asm _emit 0x8C
        // 0x587AB13B: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB13D: jmp 0x587ab101
        __asm _emit 0xEB
        __asm _emit 0xC2
        // 0x587AB13F: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB141: jmp 0x587ab11f
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x587AB143: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB145: jne 0x587ab1a2
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x587AB147: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB14C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB14E: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AB151: jb 0x587ab158
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB153: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x1B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB158: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AB15A: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587AB15C: cmp dword ptr [eax + 4], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AB160: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x587AB163: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AB165: je 0x587ab1aa
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x587AB167: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587AB169: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AB16B: jne 0x587ab1ce
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x587AB16D: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AB173: push ecx
        __asm _emit 0x51
        // 0x587AB174: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AB176: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587AB17B: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587AB17D: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587AB180: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AB182: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AB184: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587AB186: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB188: jne 0x587ab1a6
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587AB18A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB18F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB191: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AB194: jb 0x587ab19b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB196: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB19B: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AB19D: dec dword ptr [eax + 4]
        __asm _emit 0xFF
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587AB1A0: jmp 0x587ab1ce
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x587AB1A2: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB1A4: jmp 0x587ab14e
        __asm _emit 0xEB
        __asm _emit 0xA8
        // 0x587AB1A6: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB1A8: jmp 0x587ab191
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x587AB1AA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587AB1AC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AB1AE: jne 0x587ab1ce
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587AB1B0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB1B2: jne 0x587ab1eb
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x587AB1B4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB1B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB1BB: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AB1BE: jb 0x587ab1c5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB1C0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB1C5: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587AB1C7: mov dword ptr [ecx + 8], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB1CE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB1D0: jne 0x587ab1ef
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587AB1D2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB1D7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB1D9: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AB1DC: jb 0x587ab1e3
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB1DE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB1E3: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587AB1E6: jmp 0x587ab097
        __asm _emit 0xE9
        __asm _emit 0xAC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB1EB: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB1ED: jmp 0x587ab1bb
        __asm _emit 0xEB
        __asm _emit 0xCC
        // 0x587AB1EF: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB1F1: jmp 0x587ab1d9
        __asm _emit 0xEB
        __asm _emit 0xE6
        // 0x587AB1F3: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587AB1F6: cmp esi, dword ptr [ebp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587AB1F9: jbe 0x587ab200
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB1FB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB200: mov edi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587AB203: mov ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x587AB206: cmp dword ptr [ebp + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x587AB209: jbe 0x587ab210
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB20B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB210: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587AB213: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB215: je 0x587ab21b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AB217: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587AB219: je 0x587ab220
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AB21B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB220: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x587AB222: je 0x587ab2e5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB228: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB22A: jne 0x587ab27c
        __asm _emit 0x75
        __asm _emit 0x50
        // 0x587AB22C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB231: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB233: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AB236: jb 0x587ab23d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB238: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB23D: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587AB23F: cmp dword ptr [edx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AB243: jne 0x587ab262
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587AB245: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB247: jne 0x587ab280
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x587AB249: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB24E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB250: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AB253: jb 0x587ab25a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB255: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB25A: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AB25C: cmp dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587AB260: jne 0x587ab288
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x587AB262: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB264: jne 0x587ab284
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587AB266: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB26B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB26D: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AB270: jb 0x587ab277
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB272: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x19
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB277: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587AB27A: jmp 0x587ab203
        __asm _emit 0xEB
        __asm _emit 0x87
        // 0x587AB27C: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB27E: jmp 0x587ab233
        __asm _emit 0xEB
        __asm _emit 0xB3
        // 0x587AB280: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB282: jmp 0x587ab250
        __asm _emit 0xEB
        __asm _emit 0xCC
        // 0x587AB284: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB286: jmp 0x587ab26d
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x587AB288: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB28A: jne 0x587ab2e1
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x587AB28C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x19
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB291: cmp esi, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x10
        // 0x587AB294: jb 0x587ab29b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB296: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x19
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB29B: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587AB29D: push ecx
        __asm _emit 0x51
        // 0x587AB29E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x19
        __asm _emit 0x1D
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587AB2E1..0x587AB2EB; 10 mapped bytes.
extern "C" __declspec(naked) void FUN_587ab060_segment_01() {
    __asm {
        // 0x587AB2E1: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587AB2E3: jmp 0x587ab291
        __asm _emit 0xEB
        __asm _emit 0xAC
        // 0x587AB2E5: pop esi
        __asm _emit 0x5E
        // 0x587AB2E6: pop edi
        __asm _emit 0x5F
        // 0x587AB2E7: pop ebx
        __asm _emit 0x5B
        // 0x587AB2E8: pop ebp
        __asm _emit 0x5D
        // 0x587AB2E9: pop ecx
        __asm _emit 0x59
        // 0x587AB2EA: ret
        __asm _emit 0xC3
    }
}
