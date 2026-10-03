// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 540 bytes across one range.

// Ghidra range: 0x58853010 .. +0x21C bytes.
extern "C" __declspec(naked) void FUN_58853010_segment_00() {
    __asm {
        // 0x58853010: push esi
        __asm _emit 0x56
        // 0x58853011: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58853013: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58853017: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58853019: je 0x58853226
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885301F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58853023: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853028: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5885302B: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853030: push edi
        __asm _emit 0x57
        // 0x58853031: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58853034: jne 0x58853049
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58853036: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58853038: call 0x58852d60
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885303D: mov word ptr [esi + 0x274], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853044: jmp 0x58853205
        __asm _emit 0xE9
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853049: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5885304D: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58853050: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853055: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58853058: je 0x5885306f
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5885305A: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5885305E: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58853061: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853066: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58853069: jne 0x58853205
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885306F: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58853072: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58853075: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58853077: jne 0x58853081
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58853079: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5885307C: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x5885307F: je 0x58853100
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x58853081: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58853083: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58853086: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58853089: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x5885308C: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x5885308F: ja 0x588530b6
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x58853091: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58853094: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58853097: ja 0x588530ad
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x58853099: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885309B: jge 0x588530a2
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5885309D: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x588530A0: jmp 0x588530c1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588530A2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588530A4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588530A6: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x588530A9: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588530AB: jmp 0x588530c1
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588530AD: cdq
        __asm _emit 0x99
        // 0x588530AE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588530B0: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588530B2: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x588530B4: jmp 0x588530c1
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588530B6: cdq
        __asm _emit 0x99
        // 0x588530B7: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588530BA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588530BC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588530BE: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x588530C1: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x588530C4: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588530C7: ja 0x588530ec
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x588530C9: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x588530CC: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588530CF: ja 0x588530e3
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x588530D1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588530D3: jge 0x588530da
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588530D5: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588530D8: jmp 0x588530f7
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588530DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588530DC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588530DE: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x588530E1: jmp 0x588530f7
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588530E3: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588530E5: cdq
        __asm _emit 0x99
        // 0x588530E6: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588530E8: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588530EA: jmp 0x588530f7
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588530EC: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588530EE: cdq
        __asm _emit 0x99
        // 0x588530EF: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588530F2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588530F4: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588530F7: push eax
        __asm _emit 0x50
        // 0x588530F8: push edi
        __asm _emit 0x57
        // 0x588530F9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588530FB: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xFD
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58853100: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58853103: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x58853106: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58853108: je 0x58853134
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5885310A: jle 0x5885311d
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5885310C: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5885310E: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58853110: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58853113: jg 0x58853118
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58853115: push eax
        __asm _emit 0x50
        // 0x58853116: jmp 0x5885312d
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58853118: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x5885311B: jmp 0x5885312c
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5885311D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5885311F: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58853121: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58853124: jg 0x58853129
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58853126: push eax
        __asm _emit 0x50
        // 0x58853127: jmp 0x5885312d
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58853129: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x5885312C: push ecx
        __asm _emit 0x51
        // 0x5885312D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885312F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xFB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58853134: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58853137: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x5885313A: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5885313C: je 0x58853168
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5885313E: jle 0x58853151
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58853140: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58853142: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58853144: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58853147: jg 0x5885314c
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58853149: push eax
        __asm _emit 0x50
        // 0x5885314A: jmp 0x58853161
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5885314C: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x5885314F: jmp 0x58853160
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58853151: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58853153: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58853155: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58853158: jg 0x5885315d
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x5885315A: push eax
        __asm _emit 0x50
        // 0x5885315B: jmp 0x58853161
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5885315D: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x58853160: push ecx
        __asm _emit 0x51
        // 0x58853161: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58853163: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xFB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58853168: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885316B: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5885316E: jne 0x58853205
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853174: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58853177: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5885317A: jne 0x58853205
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853180: mov edx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x58853183: cmp edx, dword ptr [esi + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x58853186: jne 0x58853205
        __asm _emit 0x75
        __asm _emit 0x7D
        // 0x58853188: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5885318B: cmp eax, dword ptr [esi + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x5885318E: jne 0x58853205
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x58853190: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58853194: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853199: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5885319C: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588531A1: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588531A4: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588531A8: jne 0x588531c5
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588531AA: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588531AF: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588531B2: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588531B7: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588531BA: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588531BE: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588531C3: jmp 0x58853205
        __asm _emit 0xEB
        __asm _emit 0x40
        // 0x588531C5: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588531C8: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588531CD: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588531D0: jne 0x58853205
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588531D2: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588531D6: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588531DB: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588531DE: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588531E3: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588531E6: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588531EA: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588531EF: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588531F3: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588531F8: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588531FC: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853201: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58853205: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58853208: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885320A: je 0x58853225
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5885320C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58853210: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x58853213: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58853215: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58853218: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5885321B: je 0x58853228
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885321D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5885321F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58853221: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58853223: jne 0x58853210
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58853225: pop edi
        __asm _emit 0x5F
        // 0x58853226: pop esi
        __asm _emit 0x5E
        // 0x58853227: ret
        __asm _emit 0xC3
        // 0x58853228: pop edi
        __asm _emit 0x5F
        // 0x58853229: pop esi
        __asm _emit 0x5E
        // 0x5885322A: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
