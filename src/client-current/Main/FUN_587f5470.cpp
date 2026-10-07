// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 745 bytes in 2 exact ranges.
// Source symbol alias: FUN_587f5470.

// Ghidra body range 0x587F5470..0x587F56CD; 605 mapped bytes.
extern "C" __declspec(naked) void FUN_587f5470_segment_00() {
    __asm {
        // 0x587F5470: push esi
        __asm _emit 0x56
        // 0x587F5471: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587F5473: mov eax, dword ptr [esi + 0x104f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F5479: cdq
        __asm _emit 0x99
        // 0x587F547A: mov ecx, 0x19
        __asm _emit 0xB9
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F547F: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587F5481: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587F5483: jne 0x587f575a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5489: mov eax, dword ptr [esi + 0x218ac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F548F: push edi
        __asm _emit 0x57
        // 0x587F5490: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F5492: jne 0x587f5653
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5498: mov ecx, dword ptr [esi + 0x20de0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F549E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F54A0: je 0x587f54f2
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x587F54A2: mov eax, dword ptr [esi + 0x20dd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F54A8: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587F54AA: jl 0x587f54f2
        __asm _emit 0x7C
        __asm _emit 0x46
        // 0x587F54AC: add dword ptr [esi + 0x20ddc], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F54B2: push edx
        __asm _emit 0x52
        // 0x587F54B3: push edx
        __asm _emit 0x52
        // 0x587F54B4: cmp dword ptr [esi + 0x20dc8], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F54BA: je 0x587f54d7
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587F54BC: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F54C2: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F54C5: push eax
        __asm _emit 0x50
        // 0x587F54C6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F54C8: call 0x587f21e0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F54CD: pop edi
        __asm _emit 0x5F
        // 0x587F54CE: mov byte ptr [esi + 0x10474], 0x10
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x587F54D5: pop esi
        __asm _emit 0x5E
        // 0x587F54D6: ret
        __asm _emit 0xC3
        // 0x587F54D7: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F54DD: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F54E0: push edx
        __asm _emit 0x52
        // 0x587F54E1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F54E3: call 0x587f21e0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F54E8: pop edi
        __asm _emit 0x5F
        // 0x587F54E9: mov byte ptr [esi + 0x10474], 0x20
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587F54F0: pop esi
        __asm _emit 0x5E
        // 0x587F54F1: ret
        __asm _emit 0xC3
        // 0x587F54F2: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F54F7: add dword ptr [esi + 0x20dd8], edi
        __asm _emit 0x01
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F54FD: mov ecx, dword ptr [esi + 0x20dd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5503: mov eax, 0x88888889
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x88
        // 0x587F5508: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587F550A: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587F550C: mov ecx, dword ptr [esi + 0x20dd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5512: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587F5515: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587F5517: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587F551A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587F551C: push eax
        __asm _emit 0x50
        // 0x587F551D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x1E
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F5522: mov eax, dword ptr [esi + 0x20dd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5528: cdq
        __asm _emit 0x99
        // 0x587F5529: mov ecx, 0x3c
        __asm _emit 0xB9
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F552E: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587F5530: mov ecx, dword ptr [esi + 0x20dd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5536: push edx
        __asm _emit 0x52
        // 0x587F5537: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x1E
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F553C: mov ecx, dword ptr [esi + 0x20dd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5542: cmp ecx, dword ptr [esi + 0x20d68]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5548: jge 0x587f5587
        __asm _emit 0x7D
        __asm _emit 0x3D
        // 0x587F554A: mov edx, dword ptr [esi + 0x20d6c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5550: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F5552: cmp edx, dword ptr [esi + 0x20d88]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5558: jg 0x587f555c
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587F555A: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587F555C: mov edx, dword ptr [esi + 0x20d70]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5562: cmp edx, dword ptr [esi + 0x20d8c]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5568: jg 0x587f556c
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587F556A: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587F556C: mov edx, dword ptr [esi + 0x20d74]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5572: cmp edx, dword ptr [esi + 0x20d90]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5578: jg 0x587f557c
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587F557A: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587F557C: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587F557F: jne 0x587f5587
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587F5581: mov dword ptr [esi + 0x20dc8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5587: cmp ecx, dword ptr [esi + 0x20d78]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F558D: jge 0x587f55cc
        __asm _emit 0x7D
        __asm _emit 0x3D
        // 0x587F558F: mov ecx, dword ptr [esi + 0x20d7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5595: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F5597: cmp ecx, dword ptr [esi + 0x20d88]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F559D: jg 0x587f55a1
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587F559F: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587F55A1: mov edx, dword ptr [esi + 0x20d80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F55A7: cmp edx, dword ptr [esi + 0x20d8c]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F55AD: jg 0x587f55b1
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587F55AF: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587F55B1: mov ecx, dword ptr [esi + 0x20d84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F55B7: cmp ecx, dword ptr [esi + 0x20d90]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F55BD: jg 0x587f55c1
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587F55BF: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587F55C1: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587F55C4: jne 0x587f55cc
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587F55C6: mov dword ptr [esi + 0x20dcc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F55CC: cmp dword ptr [esi + 0x20dcc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F55D3: je 0x587f5759
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F55D9: add dword ptr [esi + 0x20de4], edi
        __asm _emit 0x01
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F55DF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F55E1: mov dword ptr [esi + 0x20dcc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F55EB: mov dword ptr [esi + 0x20dc8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F55F5: call 0x587e64d0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x0E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F55FA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F55FC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F55FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F5600: push 0x63
        __asm _emit 0x6A
        __asm _emit 0x63
        // 0x587F5602: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x64
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F5607: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587F5609: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xF7
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F560E: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xA1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5613: cmp dword ptr [eax + 0x164], 0x48
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x48
        // 0x587F561A: jle 0x587f5641
        __asm _emit 0x7E
        __asm _emit 0x25
        // 0x587F561C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5623: je 0x587f5641
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587F5625: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F562B: mov eax, dword ptr [edx + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5631: push eax
        __asm _emit 0x50
        // 0x587F5632: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F5637: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587F5639: call 0x58762a20
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xD3
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F563E: pop edi
        __asm _emit 0x5F
        // 0x587F563F: pop esi
        __asm _emit 0x5E
        // 0x587F5640: ret
        __asm _emit 0xC3
        // 0x587F5641: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F5643: push eax
        __asm _emit 0x50
        // 0x587F5644: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x64
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F5649: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587F564B: call 0x58762a20
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xD3
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F5650: pop edi
        __asm _emit 0x5F
        // 0x587F5651: pop esi
        __asm _emit 0x5E
        // 0x587F5652: ret
        __asm _emit 0xC3
        // 0x587F5653: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5658: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F565A: je 0x587f5665
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F565C: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587F565F: jne 0x587f5759
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5665: mov eax, dword ptr [esi + 0x20de0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F566B: push ebx
        __asm _emit 0x53
        // 0x587F566C: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x587F566E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F5670: je 0x587f567e
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587F5672: cmp dword ptr [esi + 0x20dd8], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5678: jge 0x587f570c
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F567E: add dword ptr [esi + 0x20dd8], edi
        __asm _emit 0x01
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5684: mov ecx, dword ptr [esi + 0x20dd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F568A: mov eax, 0x88888889
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x88
        // 0x587F568F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587F5691: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587F5693: mov ecx, dword ptr [esi + 0x20dd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5699: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587F569C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587F569E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587F56A1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587F56A3: push eax
        __asm _emit 0x50
        // 0x587F56A4: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x1C
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F56A9: mov eax, dword ptr [esi + 0x20dd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F56AF: cdq
        __asm _emit 0x99
        // 0x587F56B0: mov ecx, 0x3c
        __asm _emit 0xB9
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F56B5: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587F56B7: mov ecx, dword ptr [esi + 0x20dd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F56BD: push edx
        __asm _emit 0x52
        // 0x587F56BE: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x1C
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F56C3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F56C5: lea ecx, [esi + 0x20d88]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F56CB: jmp 0x587f56d0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587F56D0..0x587F575C; 140 mapped bytes.
extern "C" __declspec(naked) void FUN_587f5470_segment_01() {
    __asm {
        // 0x587F56D0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587F56D2: cmp edx, dword ptr [ecx + 0x508]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F56D8: jle 0x587f56e6
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587F56DA: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587F56DC: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587F56DF: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587F56E2: jl 0x587f56d0
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x587F56E4: jmp 0x587f56e8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587F56E6: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587F56E8: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x587F56EB: jge 0x587f5708
        __asm _emit 0x7D
        __asm _emit 0x1B
        // 0x587F56ED: lea ecx, [esi + eax*4 + 0x20d88]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F56F4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587F56F6: cmp edx, dword ptr [ecx + 0x508]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F56FC: jg 0x587f570c
        __asm _emit 0x7F
        __asm _emit 0x0E
        // 0x587F56FE: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587F5700: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587F5703: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x587F5706: jl 0x587f56f4
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x587F5708: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587F570A: je 0x587f5758
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x587F570C: mov eax, dword ptr [esi + 0x20dd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5712: add dword ptr [esi + 0x20ddc], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5718: cmp dword ptr [esi + 0x20dc8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F571F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F5721: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F5723: je 0x587f5741
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587F5725: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F572B: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F572E: push edx
        __asm _emit 0x52
        // 0x587F572F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F5731: call 0x587f21e0
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F5736: pop ebx
        __asm _emit 0x5B
        // 0x587F5737: pop edi
        __asm _emit 0x5F
        // 0x587F5738: mov byte ptr [esi + 0x10474], 0x10
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x587F573F: pop esi
        __asm _emit 0x5E
        // 0x587F5740: ret
        __asm _emit 0xC3
        // 0x587F5741: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5746: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587F5749: push ecx
        __asm _emit 0x51
        // 0x587F574A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F574C: call 0x587f21e0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F5751: mov byte ptr [esi + 0x10474], 0x20
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587F5758: pop ebx
        __asm _emit 0x5B
        // 0x587F5759: pop edi
        __asm _emit 0x5F
        // 0x587F575A: pop esi
        __asm _emit 0x5E
        // 0x587F575B: ret
        __asm _emit 0xC3
    }
}
