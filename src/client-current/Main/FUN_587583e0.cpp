// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 889 bytes in 1 exact ranges.
// Source symbol alias: FUN_587583e0.

// Ghidra body range 0x587583E0..0x58758759; 889 mapped bytes.
extern "C" __declspec(naked) void FUN_587583e0_segment_00() {
    __asm {
        // 0x587583E0: sub esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x38
        // 0x587583E3: push ebx
        __asm _emit 0x53
        // 0x587583E4: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587583E8: mov eax, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x587583EB: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x587583EE: cdq
        __asm _emit 0x99
        // 0x587583EF: idiv dword ptr [0x58a244c8]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587583F5: push ebp
        __asm _emit 0x55
        // 0x587583F6: push esi
        __asm _emit 0x56
        // 0x587583F7: push edi
        __asm _emit 0x57
        // 0x587583F8: mov edi, dword ptr [ebx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x24
        // 0x587583FB: add edi, 5
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x05
        // 0x587583FE: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58758400: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58758402: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58758406: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875840A: cdq
        __asm _emit 0x99
        // 0x5875840B: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5875840D: mov edi, 0x64
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758412: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58758414: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x58758417: movsx eax, byte ptr [eax + 0x99]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875841E: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x58758420: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x58758423: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58758428: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875842A: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5875842D: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5875842F: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58758432: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58758434: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758439: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5875843B: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875843F: mov dword ptr [ebx + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x28
        // 0x58758442: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58758445: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58758447: je 0x58758498
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x58758449: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5875844D: mov ecx, dword ptr [eax + edx*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758454: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58758456: je 0x587585be
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875845C: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x5875845F: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x58758463: jne 0x587585be
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758469: mov eax, dword ptr [eax + edx*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758470: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58758472: je 0x587585be
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758478: movzx eax, word ptr [eax + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875847F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58758481: and ecx, 0x7f0
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xF0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758487: cmp ecx, 0x2d0
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875848D: jbe 0x587585ae
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758493: mov esi, 0x1c2
        __asm _emit 0xBE
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758498: mov ebx, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x18
        // 0x5875849B: mov ecx, dword ptr [esi*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB5
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587584A2: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587584A5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587584AA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587584AC: mov ecx, dword ptr [esi*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB5
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587584B3: mov dword ptr [esp + 0x4c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587584B7: imul ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587584BC: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587584BF: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587584C1: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587584C4: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x587584C6: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587584CB: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587584CD: mov ecx, dword ptr [0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587584D3: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587584D6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587584D8: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587584DB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587584DD: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587584E0: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587584E5: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587584E7: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587584EA: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587584EC: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587584EF: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587584F1: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587584F5: mov edi, 0xc8
        __asm _emit 0xBF
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587584FA: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x587584FC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58758500: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58758505: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x58758507: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x5875850A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875850C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875850F: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58758511: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x58758514: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58758518: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5875851D: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875851F: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x58758522: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58758524: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58758527: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58758529: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875852E: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x58758530: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x58758533: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58758537: mov eax, 0x447a7a9
        __asm _emit 0xB8
        __asm _emit 0xA9
        __asm _emit 0xA7
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5875853C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875853E: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x58758541: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58758543: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58758546: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58758548: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5875854A: cmp esi, 0x2710
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758550: jle 0x58758557
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x58758552: mov esi, 0x2710
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758557: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x5875855A: mov eax, 0x68db8bad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x8B
        __asm _emit 0xDB
        __asm _emit 0x68
        // 0x5875855F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58758561: sar edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x58758564: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58758566: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58758569: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5875856B: add ebx, dword ptr [0x58a244c0]
        __asm _emit 0x03
        __asm _emit 0x1D
        __asm _emit 0xC0
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58758571: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58758575: mov dword ptr [esp + 0x40], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58758579: js 0x5875859d
        __asm _emit 0x78
        __asm _emit 0x22
        // 0x5875857B: lea edx, [esi - 0x1388]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58758581: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x58758584: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58758586: mov eax, 0x68db8bad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x8B
        __asm _emit 0xDB
        __asm _emit 0x68
        // 0x5875858B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875858D: sar edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x58758590: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58758592: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58758595: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58758597: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58758599: mov dword ptr [esp + 0x40], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5875859D: cmp edi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587585A3: jle 0x587585ca
        __asm _emit 0x7E
        __asm _emit 0x25
        // 0x587585A5: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x587585A7: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x587585A9: jmp 0x5875870f
        __asm _emit 0xE9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587585AE: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x587585B1: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x587585B4: lea esi, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x80
        // 0x587585B7: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587585B9: jmp 0x58758498
        __asm _emit 0xE9
        __asm _emit 0xDA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587585BE: pop edi
        __asm _emit 0x5F
        // 0x587585BF: pop esi
        __asm _emit 0x5E
        // 0x587585C0: pop ebp
        __asm _emit 0x5D
        // 0x587585C1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587585C3: pop ebx
        __asm _emit 0x5B
        // 0x587585C4: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x587585C7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587585CA: lea esi, [ebx + edi]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x3B
        // 0x587585CD: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587585D1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587585D3: jge 0x587585fe
        __asm _emit 0x7D
        __asm _emit 0x29
        // 0x587585D5: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587585D7: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x587585DA: cdq
        __asm _emit 0x99
        // 0x587585DB: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587585DD: cdq
        __asm _emit 0x99
        // 0x587585DE: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587585E0: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587585E2: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587585E5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587585E7: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587585EC: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587585EE: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587585F1: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587585F3: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587585F6: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587585F8: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587585FA: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587585FC: jmp 0x58758635
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x587585FE: cmp esi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758604: jle 0x58758633
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x58758606: mov eax, 0xfa0
        __asm _emit 0xB8
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875860B: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5875860D: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58758610: cdq
        __asm _emit 0x99
        // 0x58758611: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58758613: mov esi, 0xfa0
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758618: cdq
        __asm _emit 0x99
        // 0x58758619: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5875861B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5875861D: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58758620: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58758622: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58758627: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58758629: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5875862C: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5875862E: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58758631: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58758633: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x58758635: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58758637: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x58758639: mov ebp, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875863F: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58758643: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58758645: imul edx, edx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x75
        // 0x58758648: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875864A: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5875864C: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58758650: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58758655: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58758657: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5875865A: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5875865C: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5875865F: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x58758661: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58758663: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x58758666: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5875866B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875866D: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58758671: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58758674: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x58758676: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x58758679: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x5875867B: cdq
        __asm _emit 0x99
        // 0x5875867C: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5875867E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58758680: cdq
        __asm _emit 0x99
        // 0x58758681: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58758683: mov dword ptr [esp + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58758687: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58758689: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875868B: cdq
        __asm _emit 0x99
        // 0x5875868C: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5875868E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58758690: cdq
        __asm _emit 0x99
        // 0x58758691: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58758693: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58758695: jle 0x587586a2
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x58758697: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5875869B: cdq
        __asm _emit 0x99
        // 0x5875869C: idiv dword ptr [esp + 0x50]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587586A0: jmp 0x587586a7
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587586A2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587586A4: cdq
        __asm _emit 0x99
        // 0x587586A5: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587586A7: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587586AB: cdq
        __asm _emit 0x99
        // 0x587586AC: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587586AE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587586B0: cdq
        __asm _emit 0x99
        // 0x587586B1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587586B3: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587586B5: sar ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xFB
        // 0x587586B7: inc ebx
        __asm _emit 0x43
        // 0x587586B8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587586BA: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587586BC: jle 0x587586fd
        __asm _emit 0x7E
        __asm _emit 0x3F
        // 0x587586BE: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587586C2: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587586C6: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587586CA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587586D0: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587586D4: cdq
        __asm _emit 0x99
        // 0x587586D5: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587586D7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587586D9: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587586DD: cdq
        __asm _emit 0x99
        // 0x587586DE: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587586E0: mov edx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587586E4: add dword ptr [esp + 0x50], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587586E8: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587586EA: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587586EC: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587586F0: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587586F4: add esi, edi
        __asm _emit 0x03
        __asm _emit 0xF7
        // 0x587586F6: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x587586FB: jne 0x587586d0
        __asm _emit 0x75
        __asm _emit 0xD3
        // 0x587586FD: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587586FF: jle 0x5875872f
        __asm _emit 0x7E
        __asm _emit 0x2E
        // 0x58758701: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58758705: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758709: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5875870D: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x5875870F: cmp dword ptr [esp + 0x14], 0x3e8
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758717: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875871B: jl 0x58758500
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xDF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58758721: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58758725: pop edi
        __asm _emit 0x5F
        // 0x58758726: pop esi
        __asm _emit 0x5E
        // 0x58758727: pop ebp
        __asm _emit 0x5D
        // 0x58758728: pop ebx
        __asm _emit 0x5B
        // 0x58758729: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x5875872C: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5875872F: mov eax, dword ptr [0x58a244bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58758734: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58758737: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58758739: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5875873E: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58758740: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58758743: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58758745: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x58758748: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x5875874A: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5875874C: cdq
        __asm _emit 0x99
        // 0x5875874D: pop edi
        __asm _emit 0x5F
        // 0x5875874E: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x58758750: pop esi
        __asm _emit 0x5E
        // 0x58758751: pop ebp
        __asm _emit 0x5D
        // 0x58758752: pop ebx
        __asm _emit 0x5B
        // 0x58758753: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x58758756: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
