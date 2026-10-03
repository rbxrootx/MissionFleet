// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58888270 .. +0x207 bytes.
extern "C" __declspec(naked) void FUN_58888270() {
    __asm {
        // 0x58888270: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58888274: push esi
        __asm _emit 0x56
        // 0x58888275: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58888277: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5888827A: jne 0x58888454
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888280: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58888284: cmp eax, dword ptr [esi + 0x98]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888828A: jne 0x58888299
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5888828C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888828E: call 0x58887510
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58888293: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888295: pop esi
        __asm _emit 0x5E
        // 0x58888296: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888299: cmp eax, dword ptr [esi + 0x78]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5888829C: jne 0x588882cc
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x5888829E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588882A0: call 0x588876b0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588882A5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588882A7: jne 0x588882bd
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588882A9: push 0x1b1
        __asm _emit 0x68
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588882AE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588882B0: call 0x58886e90
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588882B5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588882B7: je 0x58888428
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588882BD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588882BF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588882C1: call 0x58887510
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588882C6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588882C8: pop esi
        __asm _emit 0x5E
        // 0x588882C9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588882CC: cmp eax, dword ptr [esi + 0x7c]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588882CF: jne 0x588882ff
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x588882D1: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588882D3: call 0x588876b0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588882D8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588882DA: jne 0x588882f0
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588882DC: push 0x281
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588882E1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588882E3: call 0x58886e90
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588882E8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588882EA: je 0x58888428
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588882F0: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588882F2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588882F4: call 0x58887510
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588882F9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588882FB: pop esi
        __asm _emit 0x5E
        // 0x588882FC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588882FF: cmp eax, dword ptr [esi + 0x80]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888305: jne 0x58888335
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x58888307: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58888309: call 0x588876b0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888830E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58888310: jne 0x58888326
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58888312: push 0x379
        __asm _emit 0x68
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888317: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58888319: call 0x58886e90
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888831E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58888320: je 0x58888428
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888326: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58888328: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888832A: call 0x58887510
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888832F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888331: pop esi
        __asm _emit 0x5E
        // 0x58888332: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888335: cmp eax, dword ptr [esi + 0x84]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888833B: jne 0x5888836b
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x5888833D: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5888833F: call 0x588876b0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58888344: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58888346: jne 0x5888835c
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58888348: push 0x411
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888834D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888834F: call 0x58886e90
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58888354: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58888356: je 0x58888428
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888835C: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5888835E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58888360: call 0x58887510
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58888365: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888367: pop esi
        __asm _emit 0x5E
        // 0x58888368: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5888836B: cmp eax, dword ptr [esi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888371: jne 0x588883a1
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x58888373: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58888375: call 0x588876b0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888837A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888837C: jne 0x58888392
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5888837E: push 0x551
        __asm _emit 0x68
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888383: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58888385: call 0x58886e90
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888838A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888838C: je 0x58888428
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888392: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58888394: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58888396: call 0x58887510
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888839B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888839D: pop esi
        __asm _emit 0x5E
        // 0x5888839E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588883A1: cmp eax, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588883A7: jne 0x588883d3
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588883A9: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588883AB: call 0x588876b0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588883B0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588883B2: jne 0x588883c4
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588883B4: push 0x609
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588883B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588883BB: call 0x58886e90
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588883C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588883C2: je 0x58888428
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x588883C4: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588883C6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588883C8: call 0x58887510
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588883CD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588883CF: pop esi
        __asm _emit 0x5E
        // 0x588883D0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588883D3: cmp eax, dword ptr [esi + 0x90]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588883D9: jne 0x58888405
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588883DB: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x588883DD: call 0x588876b0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588883E2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588883E4: jne 0x588883f6
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588883E6: push 0x719
        __asm _emit 0x68
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588883EB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588883ED: call 0x58886e90
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588883F2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588883F4: je 0x58888428
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588883F6: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x588883F8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588883FA: call 0x58887510
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588883FF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888401: pop esi
        __asm _emit 0x5E
        // 0x58888402: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888405: cmp eax, dword ptr [esi + 0x94]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888840B: jne 0x58888471
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x5888840D: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5888840F: call 0x588876b0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58888414: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58888416: jne 0x58888445
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x58888418: push 0x829
        __asm _emit 0x68
        __asm _emit 0x29
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888841D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888841F: call 0x58886e90
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58888424: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58888426: jne 0x58888445
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58888428: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888842A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888842C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888842E: push 0x2bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888433: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x36
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58888438: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888843A: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xC8
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5888843F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888441: pop esi
        __asm _emit 0x5E
        // 0x58888442: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888445: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58888447: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58888449: call 0x58887510
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888844E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888450: pop esi
        __asm _emit 0x5E
        // 0x58888451: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888454: cmp eax, 0xef10
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888459: jne 0x58888471
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x5888845B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888845D: call 0x58887510
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58888462: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888467: mov dword ptr [eax + 0xe08], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888471: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888473: pop esi
        __asm _emit 0x5E
        // 0x58888474: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
