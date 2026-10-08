// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 873 bytes in 2 exact ranges.
// Source symbol alias: FUN_588fe0e0.

// Ghidra body range 0x588FE0E0..0x588FE113; 51 mapped bytes.
extern "C" __declspec(naked) void FUN_588fe0e0_segment_00() {
    __asm {
        // 0x588FE0E0: push ebx
        __asm _emit 0x53
        // 0x588FE0E1: push esi
        __asm _emit 0x56
        // 0x588FE0E2: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FE0E6: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588FE0EB: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x588FE0ED: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FE0F0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588FE0F2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588FE0F5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FE0F7: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x588FE0FA: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588FE0FC: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x588FE0FE: push edi
        __asm _emit 0x57
        // 0x588FE0FF: jne 0x588fe107
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588FE101: mov esi, 0xa
        __asm _emit 0xBE
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE106: dec eax
        __asm _emit 0x48
        // 0x588FE107: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FE109: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FE10B: dec esi
        __asm _emit 0x4E
        // 0x588FE10C: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FE110: push ebp
        __asm _emit 0x55
        // 0x588FE111: jmp 0x588fe120
        __asm _emit 0xEB
        __asm _emit 0x0D
    }
}

// Ghidra body range 0x588FE120..0x588FE456; 822 mapped bytes.
extern "C" __declspec(naked) void FUN_588fe0e0_segment_01() {
    __asm {
        // 0x588FE120: mov esi, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE126: cmp edi, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FE12A: jne 0x588fe207
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE130: mov edx, dword ptr [edi*4 + 0x589a2310]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x23
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FE137: cmp dword ptr [esi + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE13D: jle 0x588fe156
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588FE13F: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FE141: jl 0x588fe156
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588FE143: cmp dword ptr [esi + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE149: je 0x588fe156
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FE14B: mov esi, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE151: mov edx, dword ptr [esi + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x96
        // 0x588FE154: jmp 0x588fe158
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE156: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FE158: mov esi, dword ptr [ecx + edi*4 + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0xB9
        __asm _emit 0x64
        // 0x588FE15C: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588FE15F: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FE161: je 0x588fe18b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588FE163: mov ebp, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588FE166: mov dword ptr [esi + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x588FE169: mov ebp, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x588FE16C: add edx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x18
        // 0x588FE16F: mov dword ptr [esi + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x588FE172: mov ebp, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x2A
        // 0x588FE174: add esi, 0x14
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x14
        // 0x588FE177: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x588FE179: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588FE17C: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x588FE17F: mov ebp, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588FE182: mov dword ptr [esi + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x588FE185: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x588FE188: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588FE18B: mov esi, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE191: cmp edi, 9
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x09
        // 0x588FE194: jne 0x588fe1d2
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x588FE196: mov edx, dword ptr [eax*4 + 0x589a22ec]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FE19D: cmp dword ptr [esi + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1A3: jle 0x588fe1c5
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x588FE1A5: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FE1A7: jl 0x588fe1c5
        __asm _emit 0x7C
        __asm _emit 0x1C
        // 0x588FE1A9: cmp dword ptr [esi + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1AF: je 0x588fe1c5
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588FE1B1: mov esi, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1B7: mov edx, dword ptr [esi + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x96
        // 0x588FE1BA: mov esi, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1C0: jmp 0x588fe2d4
        __asm _emit 0xE9
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1C5: mov esi, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1CB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FE1CD: jmp 0x588fe2d4
        __asm _emit 0xE9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1D2: mov edx, dword ptr [eax*4 + 0x589a22e8]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FE1D9: cmp dword ptr [esi + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1DF: jle 0x588fe2cb
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1E5: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FE1E7: jl 0x588fe2cb
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1ED: cmp dword ptr [esi + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1F3: je 0x588fe2cb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1F9: mov esi, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE1FF: mov edx, dword ptr [esi + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x96
        // 0x588FE202: jmp 0x588fe2cd
        __asm _emit 0xE9
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE207: mov edx, dword ptr [edi*4 + 0x589a22c0]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xBD
        __asm _emit 0xC0
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FE20E: cmp dword ptr [esi + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE214: jle 0x588fe22d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588FE216: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FE218: jl 0x588fe22d
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588FE21A: cmp dword ptr [esi + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE220: je 0x588fe22d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FE222: mov esi, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE228: mov edx, dword ptr [esi + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x96
        // 0x588FE22B: jmp 0x588fe22f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE22D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FE22F: mov esi, dword ptr [ecx + edi*4 + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0xB9
        __asm _emit 0x64
        // 0x588FE233: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588FE236: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FE238: je 0x588fe262
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588FE23A: mov ebp, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588FE23D: mov dword ptr [esi + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x588FE240: mov ebp, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x588FE243: add edx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x18
        // 0x588FE246: mov dword ptr [esi + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x588FE249: mov ebp, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x2A
        // 0x588FE24B: add esi, 0x14
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x14
        // 0x588FE24E: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x588FE250: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588FE253: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x588FE256: mov ebp, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588FE259: mov dword ptr [esi + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x588FE25C: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x588FE25F: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588FE262: mov esi, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE268: cmp edi, 9
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x09
        // 0x588FE26B: jne 0x588fe2a5
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x588FE26D: mov edx, dword ptr [eax*4 + 0x589a229c]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FE274: cmp dword ptr [esi + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE27A: jle 0x588fe1c5
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FE280: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FE282: jl 0x588fe1c5
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FE288: cmp dword ptr [esi + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE28E: je 0x588fe1c5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FE294: mov esi, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE29A: mov edx, dword ptr [esi + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x96
        // 0x588FE29D: mov esi, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE2A3: jmp 0x588fe2d4
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x588FE2A5: mov edx, dword ptr [eax*4 + 0x589a2298]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FE2AC: cmp dword ptr [esi + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE2B2: jle 0x588fe2cb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588FE2B4: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FE2B6: jl 0x588fe2cb
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588FE2B8: cmp dword ptr [esi + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE2BE: je 0x588fe2cb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FE2C0: mov esi, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE2C6: mov edx, dword ptr [esi + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x96
        // 0x588FE2C9: jmp 0x588fe2cd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE2CB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FE2CD: mov esi, dword ptr [ecx + edi*4 + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE2D4: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588FE2D7: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588FE2D9: je 0x588fe304
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588FE2DB: mov ebp, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588FE2DE: mov dword ptr [esi + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x588FE2E1: mov ebp, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x588FE2E4: mov dword ptr [esi + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x588FE2E7: mov ebp, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x588FE2EA: add edx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x18
        // 0x588FE2ED: add esi, 0x14
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x14
        // 0x588FE2F0: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x588FE2F2: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588FE2F5: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x588FE2F8: mov ebp, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588FE2FB: mov dword ptr [esi + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x588FE2FE: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x588FE301: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588FE304: inc edi
        __asm _emit 0x47
        // 0x588FE305: cmp edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x0A
        // 0x588FE308: jl 0x588fe120
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x12
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FE30E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FE310: mov edx, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE316: mov esi, 0xf
        __asm _emit 0xBE
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE31B: pop ebp
        __asm _emit 0x5D
        // 0x588FE31C: jle 0x588fe324
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x588FE31E: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x588FE322: jmp 0x588fe336
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588FE324: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE329: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588FE32D: mov edx, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE333: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588FE336: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FE338: mov edx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE33E: jle 0x588fe346
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x588FE340: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x588FE344: jmp 0x588fe358
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588FE346: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE34B: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588FE34F: mov edx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE355: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588FE358: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FE35A: mov edx, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE360: jle 0x588fe368
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x588FE362: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x588FE366: jmp 0x588fe37a
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588FE368: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE36D: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588FE371: mov edx, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE377: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588FE37A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FE37C: mov edx, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE382: jle 0x588fe38a
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x588FE384: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x588FE388: jmp 0x588fe39c
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588FE38A: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE38F: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588FE393: mov edx, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE399: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588FE39C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FE39E: mov edx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE3A4: jle 0x588fe3ac
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x588FE3A6: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x588FE3AA: jmp 0x588fe3be
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588FE3AC: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE3B1: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588FE3B5: mov edx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE3BB: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588FE3BE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FE3C0: mov edx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE3C6: jle 0x588fe3ce
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x588FE3C8: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x588FE3CC: jmp 0x588fe3e0
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588FE3CE: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE3D3: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588FE3D7: mov edx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE3DD: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588FE3E0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FE3E2: mov edx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE3E8: jle 0x588fe3f0
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x588FE3EA: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x588FE3EE: jmp 0x588fe402
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588FE3F0: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE3F5: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588FE3F9: mov edx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE3FF: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588FE402: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FE404: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE40A: jle 0x588fe412
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x588FE40C: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x588FE410: jmp 0x588fe424
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588FE412: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE417: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x588FE41B: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE421: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588FE424: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FE426: jle 0x588fe438
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588FE428: mov ecx, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE42E: or word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x588FE432: pop edi
        __asm _emit 0x5F
        // 0x588FE433: pop esi
        __asm _emit 0x5E
        // 0x588FE434: pop ebx
        __asm _emit 0x5B
        // 0x588FE435: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FE438: mov eax, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE43E: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE443: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588FE447: mov eax, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE44D: pop edi
        __asm _emit 0x5F
        // 0x588FE44E: pop esi
        __asm _emit 0x5E
        // 0x588FE44F: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588FE452: pop ebx
        __asm _emit 0x5B
        // 0x588FE453: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
