// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 615 bytes in 1 exact ranges.
// Source symbol alias: FUN_588dc380.

// Ghidra body range 0x588DC380..0x588DC5E7; 615 mapped bytes.
extern "C" __declspec(naked) void FUN_588dc380_segment_00() {
    __asm {
        // 0x588DC380: cmp dword ptr [ecx + 0x100c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC387: je 0x588dc5e4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC38D: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DC391: push ebp
        __asm _emit 0x55
        // 0x588DC392: mov ebp, dword ptr [ecx + eax*4 + 0x6324]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC399: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588DC39B: je 0x588dc5e3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC3A1: mov edx, dword ptr [ecx + 0xdfc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xFC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC3A7: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588DC3AC: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588DC3AE: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588DC3B1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588DC3B3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588DC3B6: push edi
        __asm _emit 0x57
        // 0x588DC3B7: lea edi, [edx + eax + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x1E
        // 0x588DC3BB: cmp edi, 0x46
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x46
        // 0x588DC3BE: jle 0x588dc3c5
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x588DC3C0: mov edi, 0x46
        __asm _emit 0xBF
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC3C5: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DC3CA: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DC3CD: push ebx
        __asm _emit 0x53
        // 0x588DC3CE: mov ebx, dword ptr [eax + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DC3D4: push esi
        __asm _emit 0x56
        // 0x588DC3D5: mov esi, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DC3DB: lea eax, [ebx + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x53
        // 0x588DC3DE: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x588DC3E0: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DC3E4: cdq
        __asm _emit 0x99
        // 0x588DC3E5: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588DC3E7: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588DC3E9: jne 0x588dc5e0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC3EF: movzx edi, byte ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x588DC3F3: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DC3F7: lea eax, [ebx + ebp*2 + 6]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x6B
        __asm _emit 0x06
        // 0x588DC3FB: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x588DC3FD: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DC403: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DC408: mov esi, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x90
        // 0x588DC40B: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588DC410: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x588DC412: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588DC415: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588DC417: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588DC41A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588DC41C: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x588DC41F: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588DC421: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x588DC423: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x588DC426: jle 0x588dc480
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x588DC428: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588DC42A: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x588DC42D: mov edx, dword ptr [eax + ecx + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC434: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588DC436: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC43C: test edx, 0x3ff
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC442: je 0x588dc480
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588DC444: mov edx, dword ptr [eax + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC44A: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC450: dec edx
        __asm _emit 0x4A
        // 0x588DC451: xor edx, dword ptr [eax + 0x47c]
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC457: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC45D: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC463: xor dword ptr [eax + 0x47c], edx
        __asm _emit 0x31
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC469: mov edx, dword ptr [eax + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC46F: xor edx, dword ptr [eax + 0x47c]
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC475: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC47B: jmp 0x588dc537
        __asm _emit 0xE9
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC480: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588DC482: jl 0x588dc4df
        __asm _emit 0x7C
        __asm _emit 0x5B
        // 0x588DC484: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588DC486: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x588DC489: mov edx, dword ptr [eax + ecx + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC490: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588DC492: xor edx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DC498: test edx, 0xffc00
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0xFC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588DC49E: je 0x588dc4df
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x588DC4A0: mov edx, dword ptr [eax + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC4A6: xor edx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DC4AC: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588DC4AF: dec edx
        __asm _emit 0x4A
        // 0x588DC4B0: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC4B6: shl edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x0A
        // 0x588DC4B9: xor edx, dword ptr [eax + 0x47c]
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC4BF: and edx, 0xffc00
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0xFC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588DC4C5: xor dword ptr [eax + 0x47c], edx
        __asm _emit 0x31
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC4CB: mov edx, dword ptr [eax + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC4D1: xor edx, dword ptr [eax + 0x47c]
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC4D7: and edx, 0xffc00
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0xFC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588DC4DD: jmp 0x588dc537
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x588DC4DF: shl edi, 5
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x05
        // 0x588DC4E2: mov edx, dword ptr [edi + ecx + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x0F
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC4E9: lea eax, [edi + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x588DC4EC: xor edx, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588DC4F2: test edx, 0x3ff00000
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x3F
        // 0x588DC4F8: je 0x588dc53d
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x588DC4FA: mov edx, dword ptr [eax + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC500: xor edx, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588DC506: shr edx, 0x14
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x14
        // 0x588DC509: dec edx
        __asm _emit 0x4A
        // 0x588DC50A: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC510: shl edx, 0x14
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x14
        // 0x588DC513: xor edx, dword ptr [eax + 0x47c]
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC519: and edx, 0x3ff00000
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x3F
        // 0x588DC51F: xor dword ptr [eax + 0x47c], edx
        __asm _emit 0x31
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC525: mov edx, dword ptr [eax + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC52B: xor edx, dword ptr [eax + 0x47c]
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC531: and edx, 0x3ff00000
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x3F
        // 0x588DC537: xor dword ptr [eax + 0x87c], edx
        __asm _emit 0x31
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC53D: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DC542: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588DC545: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588DC547: jne 0x588dc5e0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC54D: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC553: movzx esi, word ptr [edx + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x72
        __asm _emit 0x10
        // 0x588DC557: mov eax, dword ptr [ecx + ebp*4 + 0x6324]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x24
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC55E: movzx edx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x10
        // 0x588DC561: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x588DC564: mov edx, dword ptr [edx + ecx + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x0A
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC56B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588DC56D: xor eax, 0xaa00000
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588DC572: xor edx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DC578: shr eax, 0x14
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x14
        // 0x588DC57B: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588DC57E: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC583: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC589: and esi, 0xff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC58F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588DC591: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588DC593: jge 0x588dc597
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x588DC595: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588DC597: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DC599: jne 0x588dc5a0
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588DC59B: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC5A0: mov edx, dword ptr [edi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC5A6: mov dl, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x588DC5A9: push eax
        __asm _emit 0x50
        // 0x588DC5AA: mov eax, dword ptr [ecx + ebp*4 + 0x6324]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x24
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC5B1: movzx ecx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        // 0x588DC5B4: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588DC5B7: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x588DC5BA: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DC5C0: push ecx
        __asm _emit 0x51
        // 0x588DC5C1: jne 0x588dc5d5
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588DC5C3: mov ecx, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC5C9: call 0x5885ead0
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x25
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588DC5CE: pop esi
        __asm _emit 0x5E
        // 0x588DC5CF: pop ebx
        __asm _emit 0x5B
        // 0x588DC5D0: pop edi
        __asm _emit 0x5F
        // 0x588DC5D1: pop ebp
        __asm _emit 0x5D
        // 0x588DC5D2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588DC5D5: mov ecx, dword ptr [edx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC5DB: call 0x58858450
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xBE
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588DC5E0: pop esi
        __asm _emit 0x5E
        // 0x588DC5E1: pop ebx
        __asm _emit 0x5B
        // 0x588DC5E2: pop edi
        __asm _emit 0x5F
        // 0x588DC5E3: pop ebp
        __asm _emit 0x5D
        // 0x588DC5E4: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
