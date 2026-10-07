// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1044 bytes in 1 exact ranges.
// Source symbol alias: FUN_58763f70.

// Ghidra body range 0x58763F70..0x58764384; 1044 mapped bytes.
extern "C" __declspec(naked) void FUN_58763f70_segment_00() {
    __asm {
        // 0x58763F70: push esi
        __asm _emit 0x56
        // 0x58763F71: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58763F73: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58763F77: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x58763F79: je 0x5876437d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763F7F: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58763F82: push edi
        __asm _emit 0x57
        // 0x58763F83: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58763F87: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58763F89: je 0x58763faf
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58763F8B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x58763F8E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58763F90: je 0x58763fa8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58763F92: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58763F94: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58763F96: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58763F99: push edi
        __asm _emit 0x57
        // 0x58763F9A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58763F9C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58763F9F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58763FA2: je 0x58763faf
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58763FA4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58763FA6: jne 0x58763f92
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58763FA8: pop edi
        __asm _emit 0x5F
        // 0x58763FA9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58763FAB: pop esi
        __asm _emit 0x5E
        // 0x58763FAC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58763FAF: cmp dword ptr [edi + 4], 0x101
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763FB6: jne 0x58764375
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763FBC: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x58763FBF: cmp edi, 0xd
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x0D
        // 0x58763FC2: je 0x5876419b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763FC8: cmp edi, 0x1b
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x1B
        // 0x58763FCB: jne 0x58764375
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763FD1: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58763FD4: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x58763FD7: je 0x58763ffa
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x58763FD9: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58763FDC: jne 0x58764375
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763FE2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58763FE4: call 0x587635a0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58763FE9: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58763FEB: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58763FEE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58763FF0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58763FF2: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58763FF5: pop edi
        __asm _emit 0x5F
        // 0x58763FF6: pop esi
        __asm _emit 0x5E
        // 0x58763FF7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58763FFA: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58763FFD: cmp eax, 0x19b
        __asm _emit 0x3D
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764002: jg 0x58764121
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764008: je 0x587640f9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876400E: cmp eax, 0x131
        __asm _emit 0x3D
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764013: jg 0x587640c8
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764019: je 0x58764071
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x5876401B: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5876401E: je 0x58764047
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58764020: sub eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x11
        // 0x58764023: jne 0x5876436c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764029: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876402F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58764031: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58764034: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764036: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764038: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876403B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876403D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876403F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58764042: pop edi
        __asm _emit 0x5F
        // 0x58764043: pop esi
        __asm _emit 0x5E
        // 0x58764044: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58764047: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876404D: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764053: jne 0x5876436c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764059: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5876405B: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5876405E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764060: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764062: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764065: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764067: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764069: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5876406C: pop edi
        __asm _emit 0x5F
        // 0x5876406D: pop esi
        __asm _emit 0x5E
        // 0x5876406E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58764071: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764077: call 0x587c2c90
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xEC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5876407C: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764082: cmp ecx, dword ptr [0x58a24594]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764088: jne 0x587640a8
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5876408A: call 0x5878f920
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5876408F: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58764091: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58764097: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764099: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876409C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876409E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587640A0: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587640A3: pop edi
        __asm _emit 0x5F
        // 0x587640A4: pop esi
        __asm _emit 0x5E
        // 0x587640A5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587640A8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587640AA: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587640AD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587640AF: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587640B1: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587640B7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587640B9: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587640BC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587640BE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587640C0: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587640C3: pop edi
        __asm _emit 0x5F
        // 0x587640C4: pop esi
        __asm _emit 0x5E
        // 0x587640C5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587640C8: cmp eax, 0x191
        __asm _emit 0x3D
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587640CD: jne 0x5876436c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587640D3: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587640D9: mov edx, dword ptr [ecx + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587640DF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587640E1: mov word ptr [edx + 0x19c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587640E8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587640EA: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587640ED: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587640EF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587640F1: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587640F4: pop edi
        __asm _emit 0x5F
        // 0x587640F5: pop esi
        __asm _emit 0x5E
        // 0x587640F6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587640F9: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587640FF: mov edx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764105: mov ecx, dword ptr [edx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876410B: call 0x58869f50
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x5E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58764110: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764112: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764115: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764117: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764119: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5876411C: pop edi
        __asm _emit 0x5F
        // 0x5876411D: pop esi
        __asm _emit 0x5E
        // 0x5876411E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58764121: sub eax, 0x320
        __asm _emit 0x2D
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764126: cmp eax, 0x96
        __asm _emit 0x3D
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876412B: ja 0x5876436c
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x3B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764131: movzx eax, byte ptr [eax + 0x58764394]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x43
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x58764138: jmp dword ptr [eax*4 + 0x58764384]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x5876413F: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764145: mov eax, dword ptr [ecx + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876414B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876414D: je 0x5876436c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764153: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58764157: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5876415B: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5876415E: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58764161: jne 0x5876436c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764167: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876416C: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x5876416F: jmp 0x5876434b
        __asm _emit 0xE9
        __asm _emit 0xD7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764174: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876417A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876417C: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5876417F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58764181: push 0xef10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764186: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58764188: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876418A: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5876418C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876418F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764191: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764193: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58764196: pop edi
        __asm _emit 0x5F
        // 0x58764197: pop esi
        __asm _emit 0x5E
        // 0x58764198: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5876419B: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876419E: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x587641A1: je 0x587641c4
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587641A3: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587641A6: jne 0x58764375
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587641AC: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587641AE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587641B1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587641B3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587641B5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587641B7: call 0x58762d30
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587641BC: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587641BF: pop edi
        __asm _emit 0x5F
        // 0x587641C0: pop esi
        __asm _emit 0x5E
        // 0x587641C1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587641C4: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587641C7: cmp eax, 0x19b
        __asm _emit 0x3D
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587641CC: jg 0x587642b7
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587641D2: je 0x58764290
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587641D8: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587641DB: je 0x58764266
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587641E1: sub eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x11
        // 0x587641E4: je 0x58764248
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x587641E6: sub eax, 0x11f
        __asm _emit 0x2D
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587641EB: jne 0x5876436c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587641F1: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587641F7: call 0x587c2c90
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xEA
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587641FC: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764202: cmp ecx, dword ptr [0x58a24594]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764208: jne 0x58764228
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5876420A: call 0x5878f920
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xB7
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5876420F: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58764211: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58764217: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764219: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876421C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876421E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764220: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58764223: pop edi
        __asm _emit 0x5F
        // 0x58764224: pop esi
        __asm _emit 0x5E
        // 0x58764225: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58764228: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876422A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876422D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876422F: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58764231: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58764237: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764239: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876423C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876423E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764240: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58764243: pop edi
        __asm _emit 0x5F
        // 0x58764244: pop esi
        __asm _emit 0x5E
        // 0x58764245: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58764248: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876424E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58764250: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764253: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764255: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764257: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876425A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876425C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876425E: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58764261: pop edi
        __asm _emit 0x5F
        // 0x58764262: pop esi
        __asm _emit 0x5E
        // 0x58764263: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58764266: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876426C: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764272: jne 0x5876436c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764278: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876427A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876427D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876427F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764281: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764284: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764286: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764288: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5876428B: pop edi
        __asm _emit 0x5F
        // 0x5876428C: pop esi
        __asm _emit 0x5E
        // 0x5876428D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58764290: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764295: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876429B: mov ecx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587642A1: call 0x58869f50
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x5C
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587642A6: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587642A8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587642AB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587642AD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587642AF: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587642B2: pop edi
        __asm _emit 0x5F
        // 0x587642B3: pop esi
        __asm _emit 0x5E
        // 0x587642B4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587642B7: sub eax, 0x320
        __asm _emit 0x2D
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587642BC: cmp eax, 0x96
        __asm _emit 0x3D
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587642C1: ja 0x5876436c
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587642C7: movzx edx, byte ptr [eax + 0x5876443c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x3C
        __asm _emit 0x44
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x587642CE: jmp dword ptr [edx*4 + 0x5876442c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x2C
        __asm _emit 0x44
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x587642D5: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587642DA: mov eax, dword ptr [eax + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587642E0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587642E2: je 0x5876436c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587642E8: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587642EC: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x587642F0: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587642F3: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587642F6: jne 0x5876436c
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x587642F8: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587642FE: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x30
        // 0x58764301: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764307: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58764309: mov edx, dword ptr [edx + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876430F: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x18
        // 0x58764312: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58764314: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58764316: push edx
        __asm _emit 0x52
        // 0x58764317: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764319: jmp 0x58764362
        __asm _emit 0xEB
        __asm _emit 0x47
        // 0x5876431B: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764321: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58764323: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58764326: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58764328: push 0xef10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876432D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876432F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764331: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764333: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764336: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764338: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876433A: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5876433D: pop edi
        __asm _emit 0x5F
        // 0x5876433E: pop esi
        __asm _emit 0x5E
        // 0x5876433F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58764342: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764348: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x5876434B: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764350: mov eax, dword ptr [eax + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764356: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58764358: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x5876435B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876435D: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5876435F: push eax
        __asm _emit 0x50
        // 0x58764360: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764362: mov dword ptr [esi + 0xa4], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876436C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5876436E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764371: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764373: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764375: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58764378: pop edi
        __asm _emit 0x5F
        // 0x58764379: pop esi
        __asm _emit 0x5E
        // 0x5876437A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5876437D: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58764380: pop esi
        __asm _emit 0x5E
        // 0x58764381: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
