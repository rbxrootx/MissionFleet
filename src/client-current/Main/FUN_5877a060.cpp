// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 547 bytes in 1 exact ranges.
// Source symbol alias: FUN_5877a060.

// Ghidra body range 0x5877A060..0x5877A283; 547 mapped bytes.
extern "C" __declspec(naked) void FUN_5877a060_segment_00() {
    __asm {
        // 0x5877A060: push esi
        __asm _emit 0x56
        // 0x5877A061: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877A063: cmp dword ptr [esi + 0x254], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A06A: jne 0x5877a281
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A070: cmp dword ptr [esi + 0x24c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A077: jne 0x5877a281
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A07D: cmp dword ptr [esi + 0x258], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A084: jne 0x5877a281
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A08A: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A090: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877A092: mov dword ptr [esi + 0x24c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A09C: cmp eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x50
        // 0x5877A09F: je 0x5877a0da
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5877A0A1: cmp eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x54
        // 0x5877A0A4: je 0x5877a0da
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5877A0A6: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A0AB: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A0B1: mov ecx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A0B7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A0B9: push esi
        __asm _emit 0x56
        // 0x5877A0BA: call 0x5886ffa0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x5E
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5877A0BF: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A0C5: mov eax, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A0CB: mov ecx, dword ptr [eax + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A0D1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877A0D3: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5877A0D6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877A0D8: jmp 0x5877a0fe
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x5877A0DA: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A0E0: mov edx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A0E6: mov ecx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A0EC: push esi
        __asm _emit 0x56
        // 0x5877A0ED: call 0x588c08a0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x67
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5877A0F2: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A0F7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877A0F9: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877A0FE: cmp dword ptr [esi + 0x258], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A105: jne 0x5877a152
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x5877A107: cmp dword ptr [esi + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5877A10E: jne 0x5877a138
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x5877A110: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A116: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877A118: cmp eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x50
        // 0x5877A11B: je 0x5877a134
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5877A11D: cmp eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x54
        // 0x5877A120: je 0x5877a134
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5877A122: cmp eax, 0x56
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x56
        // 0x5877A125: je 0x5877a134
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5877A127: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A12D: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x5877A12F: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x74
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877A134: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877A136: jmp 0x5877a147
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5877A138: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A13E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A140: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x74
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877A145: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A147: mov ecx, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A14D: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x74
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877A152: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A158: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877A15B: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A160: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5877A163: push edx
        __asm _emit 0x52
        // 0x5877A164: push ecx
        __asm _emit 0x51
        // 0x5877A165: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A16B: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A170: push eax
        __asm _emit 0x50
        // 0x5877A171: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xD2
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877A176: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A17C: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5877A17E: cmp ecx, 0x50
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x50
        // 0x5877A181: je 0x5877a212
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A187: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5877A18B: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5877A18E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5877A190: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5877A193: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5877A195: lea eax, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD1
        // 0x5877A198: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A19E: mov ecx, dword ptr [eax + 0x589cfd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877A1A4: inc ecx
        __asm _emit 0x41
        // 0x5877A1A5: push ecx
        __asm _emit 0x51
        // 0x5877A1A6: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A1AC: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x76
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877A1B1: mov ecx, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A1B7: push eax
        __asm _emit 0x50
        // 0x5877A1B8: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xA7
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877A1BD: mov eax, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A1C3: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5877A1C8: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5877A1CC: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5877A1CF: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5877A1D1: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5877A1D4: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5877A1D6: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A1DC: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877A1DE: lea ecx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD0
        // 0x5877A1E1: imul ecx, ecx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A1E7: mov edx, dword ptr [ecx + 0x589cfd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877A1ED: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A1F3: push edx
        __asm _emit 0x52
        // 0x5877A1F4: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x75
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877A1F9: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A1FF: push eax
        __asm _emit 0x50
        // 0x5877A200: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xA7
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877A205: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A20B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A20D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877A212: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A218: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877A21A: cmp eax, 0x51
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x51
        // 0x5877A21D: je 0x5877a236
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5877A21F: cmp eax, 0x52
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x52
        // 0x5877A222: je 0x5877a236
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5877A224: cmp eax, 0x53
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x53
        // 0x5877A227: je 0x5877a236
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5877A229: mov eax, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A22F: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A236: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A23C: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877A23E: cmp eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x50
        // 0x5877A241: je 0x5877a269
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5877A243: cmp eax, 0x51
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x51
        // 0x5877A246: je 0x5877a269
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5877A248: cmp eax, 0x52
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x52
        // 0x5877A24B: je 0x5877a269
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5877A24D: cmp eax, 0x53
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x53
        // 0x5877A250: je 0x5877a269
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5877A252: cmp eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x54
        // 0x5877A255: je 0x5877a269
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5877A257: cmp eax, 0x56
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x56
        // 0x5877A25A: je 0x5877a269
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5877A25C: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A262: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A269: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5877A26D: mov eax, 0xe1ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A272: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5877A275: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A27A: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5877A27D: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5877A281: pop esi
        __asm _emit 0x5E
        // 0x5877A282: ret
        __asm _emit 0xC3
    }
}
