// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 2583 bytes across one range.

// Ghidra range: 0x58900400 .. +0xA17 bytes.
extern "C" __declspec(naked) void FUN_58900400_segment_00() {
    __asm {
        // 0x58900400: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58900402: push 0x5898a6ad
        __asm _emit 0x68
        __asm _emit 0xAD
        __asm _emit 0xA6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58900407: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890040D: push eax
        __asm _emit 0x50
        // 0x5890040E: sub esp, 0x118
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900414: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58900419: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5890041B: mov dword ptr [esp + 0x114], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900422: push ebx
        __asm _emit 0x53
        // 0x58900423: push ebp
        __asm _emit 0x55
        // 0x58900424: push esi
        __asm _emit 0x56
        // 0x58900425: push edi
        __asm _emit 0x57
        // 0x58900426: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5890042B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5890042D: push eax
        __asm _emit 0x50
        // 0x5890042E: lea eax, [esp + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900435: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890043B: mov edx, dword ptr [esp + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900442: mov edi, dword ptr [esp + 0x144]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900449: mov ebp, dword ptr [esp + 0x140]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900450: mov eax, dword ptr [esp + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900457: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58900459: mov ecx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900460: push ecx
        __asm _emit 0x51
        // 0x58900461: mov ecx, dword ptr [esp + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900468: push edx
        __asm _emit 0x52
        // 0x58900469: push ecx
        __asm _emit 0x51
        // 0x5890046A: push edi
        __asm _emit 0x57
        // 0x5890046B: push ebp
        __asm _emit 0x55
        // 0x5890046C: push eax
        __asm _emit 0x50
        // 0x5890046D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890046F: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58900473: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900478: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890047E: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58900483: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58900485: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x58900488: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5890048B: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900492: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x58900495: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58900497: mov dword ptr [esp + 0x138], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890049E: mov dword ptr [esi], 0x589a23e4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE4
        __asm _emit 0x23
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589004A4: mov dword ptr [esi + 0x60], 0xa
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589004AB: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x589004AE: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x589004B1: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x589004B4: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x589004B7: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x589004BA: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x589004BD: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x589004C0: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589004C6: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589004CC: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589004D2: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589004D8: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589004DE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589004E3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589004E6: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589004EA: mov byte ptr [esp + 0x134], 1
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x589004F2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x589004F4: je 0x58900535
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x589004F6: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x589004FC: cmp dword ptr [ecx + 0x164], 0x3f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3F
        // 0x58900503: jle 0x5890051b
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58900505: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890050B: je 0x5890051b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5890050D: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900513: mov ecx, dword ptr [edx + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900519: jmp 0x5890051d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5890051B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5890051D: mov edx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900524: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x58900527: push edx
        __asm _emit 0x52
        // 0x58900528: push edi
        __asm _emit 0x57
        // 0x58900529: push ebp
        __asm _emit 0x55
        // 0x5890052A: push ecx
        __asm _emit 0x51
        // 0x5890052B: push esi
        __asm _emit 0x56
        // 0x5890052C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890052E: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x17
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58900533: jmp 0x58900537
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900535: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58900537: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890053C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890053E: mov byte ptr [esp + 0x138], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900545: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58900548: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890054D: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58900550: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900555: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58900559: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5890055B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xC6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58900560: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58900563: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58900567: mov byte ptr [esp + 0x134], 2
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5890056F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900571: je 0x589005b2
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x58900573: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58900579: cmp dword ptr [ecx + 0x164], 0x3e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3E
        // 0x58900580: jle 0x58900598
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58900582: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900588: je 0x58900598
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5890058A: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900590: mov ecx, dword ptr [edx + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900596: jmp 0x5890059a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900598: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5890059A: mov edx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589005A1: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x589005A4: push edx
        __asm _emit 0x52
        // 0x589005A5: push edi
        __asm _emit 0x57
        // 0x589005A6: push ebp
        __asm _emit 0x55
        // 0x589005A7: push ecx
        __asm _emit 0x51
        // 0x589005A8: push esi
        __asm _emit 0x56
        // 0x589005A9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589005AB: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x16
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x589005B0: jmp 0x589005b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x589005B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589005B4: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x589005B7: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589005BC: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x589005C0: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x589005C3: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589005C8: mov byte ptr [esp + 0x138], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589005CF: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589005D4: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x589005D6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xC6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589005DB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589005DE: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589005E2: mov byte ptr [esp + 0x134], 3
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x589005EA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x589005EC: je 0x58900630
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x589005EE: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x589005F4: cmp dword ptr [ecx + 0x164], 0x41
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x41
        // 0x589005FB: jle 0x58900613
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x589005FD: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900603: je 0x58900613
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58900605: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890060B: mov ecx, dword ptr [edx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900611: jmp 0x58900615
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900613: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58900615: mov edx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890061C: add edx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900622: push edx
        __asm _emit 0x52
        // 0x58900623: push edi
        __asm _emit 0x57
        // 0x58900624: push ebp
        __asm _emit 0x55
        // 0x58900625: push ecx
        __asm _emit 0x51
        // 0x58900626: push esi
        __asm _emit 0x56
        // 0x58900627: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900629: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x16
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x5890062E: jmp 0x58900632
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900630: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58900632: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58900637: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900639: mov byte ptr [esp + 0x138], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900640: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58900643: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900648: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5890064B: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900650: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58900654: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58900656: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xC5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890065B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890065E: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58900662: mov byte ptr [esp + 0x134], 4
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5890066A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5890066C: je 0x589006b0
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5890066E: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58900674: cmp dword ptr [ecx + 0x164], 0x40
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5890067B: jle 0x58900693
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5890067D: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900683: je 0x58900693
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58900685: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890068B: mov ecx, dword ptr [edx + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900691: jmp 0x58900695
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900693: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58900695: mov edx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890069C: add edx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589006A2: push edx
        __asm _emit 0x52
        // 0x589006A3: push edi
        __asm _emit 0x57
        // 0x589006A4: push ebp
        __asm _emit 0x55
        // 0x589006A5: push ecx
        __asm _emit 0x51
        // 0x589006A6: push esi
        __asm _emit 0x56
        // 0x589006A7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589006A9: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x15
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x589006AE: jmp 0x589006b2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x589006B0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589006B2: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589006B7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589006B9: mov byte ptr [esp + 0x138], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589006C0: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x589006C3: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589006C8: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x589006CB: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589006D0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x589006D4: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589006D9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xC5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589006DE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589006E1: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589006E5: mov byte ptr [esp + 0x134], 5
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x589006ED: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x589006EF: je 0x5890071f
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x589006F1: mov edx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589006F8: add edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589006FE: push edx
        __asm _emit 0x52
        // 0x589006FF: lea ecx, [edi + 0x4a]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x4A
        // 0x58900702: push ecx
        __asm _emit 0x51
        // 0x58900703: lea edx, [ebp + 0x15b]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x5B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900709: push edx
        __asm _emit 0x52
        // 0x5890070A: lea ecx, [edi + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x38
        // 0x5890070D: push ecx
        __asm _emit 0x51
        // 0x5890070E: lea edx, [ebp + 0xd2]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900714: push edx
        __asm _emit 0x52
        // 0x58900715: push esi
        __asm _emit 0x56
        // 0x58900716: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900718: call 0x587c9340
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x8C
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5890071D: jmp 0x58900721
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5890071F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58900721: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58900723: push 0x3e
        __asm _emit 0x6A
        __asm _emit 0x3E
        // 0x58900725: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900727: mov byte ptr [esp + 0x13c], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890072E: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58900731: call 0x587c9780
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x90
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58900736: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58900739: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890073E: mov dword ptr [eax + 0xf0], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900744: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xC5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58900749: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890074C: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58900750: mov byte ptr [esp + 0x134], 6
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x58900758: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5890075A: je 0x5890078a
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5890075C: mov ecx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900763: add ecx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900769: push ecx
        __asm _emit 0x51
        // 0x5890076A: lea edx, [edi + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x60
        // 0x5890076D: push edx
        __asm _emit 0x52
        // 0x5890076E: lea ecx, [ebp + 0x15b]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x5B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900774: push ecx
        __asm _emit 0x51
        // 0x58900775: lea edx, [edi + 0x4e]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x4E
        // 0x58900778: push edx
        __asm _emit 0x52
        // 0x58900779: lea ecx, [ebp + 0xd2]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890077F: push ecx
        __asm _emit 0x51
        // 0x58900780: push esi
        __asm _emit 0x56
        // 0x58900781: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900783: call 0x587c9340
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x8B
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58900788: jmp 0x5890078c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5890078A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890078C: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5890078E: push 0x3e
        __asm _emit 0x6A
        __asm _emit 0x3E
        // 0x58900790: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900792: mov byte ptr [esp + 0x13c], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900799: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5890079C: call 0x587c9780
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x8F
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x589007A1: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x589007A4: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589007A9: mov dword ptr [eax + 0xf0], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589007AF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xC4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589007B4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589007B7: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589007BB: mov byte ptr [esp + 0x134], 7
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x589007C3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x589007C5: je 0x589007f9
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x589007C7: push ebx
        __asm _emit 0x53
        // 0x589007C8: push ebx
        __asm _emit 0x53
        // 0x589007C9: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x589007CE: lea edx, [edi + 0xf9]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589007D4: push edx
        __asm _emit 0x52
        // 0x589007D5: lea ecx, [ebp + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589007DB: push ecx
        __asm _emit 0x51
        // 0x589007DC: lea edx, [edi + 0xa7]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589007E2: push edx
        __asm _emit 0x52
        // 0x589007E3: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x3C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x589007E9: lea ecx, [ebp + 0x1a]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x1A
        // 0x589007EC: push ecx
        __asm _emit 0x51
        // 0x589007ED: push edx
        __asm _emit 0x52
        // 0x589007EE: push ebx
        __asm _emit 0x53
        // 0x589007EF: push esi
        __asm _emit 0x56
        // 0x589007F0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589007F2: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x589007F7: jmp 0x589007fb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x589007F9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589007FB: mov ecx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900802: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58900805: mov dword ptr [eax + 0xc], 0x16
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890080C: mov dword ptr [eax + 0x10], 9
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900813: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58900816: add ecx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890081C: mov word ptr [eax + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x26
        // 0x58900820: mov ecx, dword ptr [eax + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x40
        // 0x58900823: mov byte ptr [esp + 0x134], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890082A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890082E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58900830: je 0x5890083c
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58900832: push eax
        __asm _emit 0x50
        // 0x58900833: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900838: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890083C: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x5890083F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900841: je 0x5890084f
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58900843: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58900847: push ecx
        __asm _emit 0x51
        // 0x58900848: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890084A: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890084F: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58900852: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900857: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x5890085C: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5890085F: mov edx, 0x32
        __asm _emit 0xBA
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900864: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900869: mov word ptr [eax + 0x9c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900870: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xC3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58900875: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58900878: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890087C: mov byte ptr [esp + 0x134], 8
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x58900884: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900886: je 0x589008e1
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x58900888: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890088E: cmp dword ptr [ecx + 0x160], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x58900895: jle 0x589008ad
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58900897: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890089D: je 0x589008ad
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5890089F: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589008A5: add edx, 0x280
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589008AB: jmp 0x589008af
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x589008AD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x589008AF: mov ecx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589008B6: add ecx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589008BC: push ecx
        __asm _emit 0x51
        // 0x589008BD: lea ecx, [edi + 0x13c]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589008C3: push ecx
        __asm _emit 0x51
        // 0x589008C4: lea ecx, [ebp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x64
        // 0x589008C7: push ecx
        __asm _emit 0x51
        // 0x589008C8: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x589008CE: push edx
        __asm _emit 0x52
        // 0x589008CF: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x589008D5: push esi
        __asm _emit 0x56
        // 0x589008D6: push edx
        __asm _emit 0x52
        // 0x589008D7: push ecx
        __asm _emit 0x51
        // 0x589008D8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589008DA: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xD4
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x589008DF: jmp 0x589008e3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x589008E1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589008E3: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x589008E5: mov byte ptr [esp + 0x138], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589008EC: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589008F2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xC3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589008F7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589008FA: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589008FE: mov byte ptr [esp + 0x134], 9
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x58900906: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900908: je 0x58900955
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5890090A: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58900910: cmp dword ptr [ecx + 0x164], 0x45
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x45
        // 0x58900917: jle 0x5890092f
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58900919: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890091F: je 0x5890092f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58900921: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900927: mov ecx, dword ptr [edx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890092D: jmp 0x58900931
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5890092F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58900931: mov edx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900938: add edx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890093E: push edx
        __asm _emit 0x52
        // 0x5890093F: lea edx, [edi + 0x13c]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900945: push edx
        __asm _emit 0x52
        // 0x58900946: lea edx, [ebp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x64
        // 0x58900949: push edx
        __asm _emit 0x52
        // 0x5890094A: push ecx
        __asm _emit 0x51
        // 0x5890094B: push esi
        __asm _emit 0x56
        // 0x5890094C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890094E: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x13
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58900953: jmp 0x58900957
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900955: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58900957: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890095C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890095E: mov byte ptr [esp + 0x138], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900965: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890096B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900970: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900975: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xC2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890097A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890097D: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58900981: mov byte ptr [esp + 0x134], 0xa
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x58900989: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5890098B: je 0x589009e9
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x5890098D: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58900993: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x5890099A: jle 0x589009b2
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5890099C: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589009A2: je 0x589009b2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x589009A4: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589009AA: add ecx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589009B0: jmp 0x589009b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x589009B2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x589009B4: mov edx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589009BB: add edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589009C1: push edx
        __asm _emit 0x52
        // 0x589009C2: lea edx, [edi + 0x13c]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589009C8: push edx
        __asm _emit 0x52
        // 0x589009C9: lea edx, [ebp + 0xc3]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589009CF: push edx
        __asm _emit 0x52
        // 0x589009D0: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x589009D6: push ecx
        __asm _emit 0x51
        // 0x589009D7: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x589009DD: push esi
        __asm _emit 0x56
        // 0x589009DE: push ecx
        __asm _emit 0x51
        // 0x589009DF: push edx
        __asm _emit 0x52
        // 0x589009E0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589009E2: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xD3
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x589009E7: jmp 0x589009eb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x589009E9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589009EB: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589009F0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589009F2: mov byte ptr [esp + 0x138], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589009F9: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589009FF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A04: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58900A06: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xC2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58900A0B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58900A0E: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58900A12: mov byte ptr [esp + 0x134], 0xb
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x58900A1A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900A1C: je 0x58900a6c
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x58900A1E: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58900A24: cmp dword ptr [ecx + 0x164], 0x49
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x49
        // 0x58900A2B: jle 0x58900a43
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58900A2D: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A33: je 0x58900a43
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58900A35: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A3B: mov ecx, dword ptr [ecx + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A41: jmp 0x58900a45
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900A43: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58900A45: mov edx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A4C: add edx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A52: push edx
        __asm _emit 0x52
        // 0x58900A53: lea edx, [edi + 0x13c]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A59: push edx
        __asm _emit 0x52
        // 0x58900A5A: add ebp, 0xc3
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A60: push ebp
        __asm _emit 0x55
        // 0x58900A61: push ecx
        __asm _emit 0x51
        // 0x58900A62: push esi
        __asm _emit 0x56
        // 0x58900A63: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900A65: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x11
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58900A6A: jmp 0x58900a6e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900A6C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58900A6E: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58900A73: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900A75: mov byte ptr [esp + 0x138], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A7C: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A82: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900A87: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58900A89: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xC1
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58900A8E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58900A91: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58900A95: mov byte ptr [esp + 0x134], 0xc
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x58900A9D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900A9F: je 0x58900adb
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x58900AA1: mov ecx, dword ptr [esp + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900AA8: mov edx, dword ptr [esp + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900AAF: push ebx
        __asm _emit 0x53
        // 0x58900AB0: push ebx
        __asm _emit 0x53
        // 0x58900AB1: push 0xa0aff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x0A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58900AB6: push ecx
        __asm _emit 0x51
        // 0x58900AB7: push edx
        __asm _emit 0x52
        // 0x58900AB8: mov edx, dword ptr [esp + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900ABF: lea ecx, [edi + 0x4a]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x4A
        // 0x58900AC2: push ecx
        __asm _emit 0x51
        // 0x58900AC3: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x3C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58900AC9: add edx, 0x1a
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x1A
        // 0x58900ACC: push edx
        __asm _emit 0x52
        // 0x58900ACD: push ecx
        __asm _emit 0x51
        // 0x58900ACE: push ebx
        __asm _emit 0x53
        // 0x58900ACF: push esi
        __asm _emit 0x56
        // 0x58900AD0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900AD2: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x27
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58900AD7: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58900AD9: jmp 0x58900add
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900ADB: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58900ADD: mov eax, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900AE4: mov dword ptr [esi + 0x80], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900AEA: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x40
        // 0x58900AED: add eax, 0xc8
        __asm _emit 0x05
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900AF2: mov byte ptr [esp + 0x134], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900AF9: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58900AFD: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        // 0x58900B01: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58900B03: je 0x58900b0b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58900B05: push ebp
        __asm _emit 0x55
        // 0x58900B06: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900B0B: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x58900B0E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58900B10: je 0x58900b18
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58900B12: push ebp
        __asm _emit 0x55
        // 0x58900B13: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900B18: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900B1E: push 0x589a2490
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58900B23: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x11
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58900B28: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58900B2A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xC1
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58900B2F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58900B32: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58900B36: mov byte ptr [esp + 0x134], 0xd
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x58900B3E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900B40: je 0x58900b7a
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58900B42: mov edx, dword ptr [esp + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900B49: mov ecx, dword ptr [esp + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900B50: push ebx
        __asm _emit 0x53
        // 0x58900B51: push ebx
        __asm _emit 0x53
        // 0x58900B52: push 0xe9fe
        __asm _emit 0x68
        __asm _emit 0xFE
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900B57: push edx
        __asm _emit 0x52
        // 0x58900B58: push ecx
        __asm _emit 0x51
        // 0x58900B59: mov ecx, dword ptr [esp + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900B60: lea edx, [edi + 0x6b]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x6B
        // 0x58900B63: push edx
        __asm _emit 0x52
        // 0x58900B64: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x3C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58900B6A: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x58900B6D: push ecx
        __asm _emit 0x51
        // 0x58900B6E: push edx
        __asm _emit 0x52
        // 0x58900B6F: push ebx
        __asm _emit 0x53
        // 0x58900B70: push esi
        __asm _emit 0x56
        // 0x58900B71: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900B73: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x27
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58900B78: jmp 0x58900b7c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900B7A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58900B7C: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58900B7E: mov byte ptr [esp + 0x138], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900B85: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900B8B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58900B90: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58900B93: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58900B97: mov byte ptr [esp + 0x134], 0xe
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0E
        // 0x58900B9F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900BA1: je 0x58900bdb
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58900BA3: mov ecx, dword ptr [esp + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900BAA: mov edx, dword ptr [esp + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900BB1: push ebx
        __asm _emit 0x53
        // 0x58900BB2: push ebx
        __asm _emit 0x53
        // 0x58900BB3: push 0xe9fe
        __asm _emit 0x68
        __asm _emit 0xFE
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900BB8: push ecx
        __asm _emit 0x51
        // 0x58900BB9: push edx
        __asm _emit 0x52
        // 0x58900BBA: mov edx, dword ptr [esp + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900BC1: lea ecx, [edi + 0x7e]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x7E
        // 0x58900BC4: push ecx
        __asm _emit 0x51
        // 0x58900BC5: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x3C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58900BCB: add edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x20
        // 0x58900BCE: push edx
        __asm _emit 0x52
        // 0x58900BCF: push ecx
        __asm _emit 0x51
        // 0x58900BD0: push ebx
        __asm _emit 0x53
        // 0x58900BD1: push esi
        __asm _emit 0x56
        // 0x58900BD2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900BD4: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x26
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58900BD9: jmp 0x58900bdd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900BDB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58900BDD: mov ebp, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900BE3: mov dx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58900BE8: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900BEE: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x40
        // 0x58900BF1: mov byte ptr [esp + 0x134], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900BF8: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        // 0x58900BFC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58900BFE: je 0x58900c06
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58900C00: push ebp
        __asm _emit 0x55
        // 0x58900C01: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C06: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x58900C09: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58900C0B: je 0x58900c13
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58900C0D: push ebp
        __asm _emit 0x55
        // 0x58900C0E: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C13: mov ebp, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C19: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x40
        // 0x58900C1C: mov ax, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58900C21: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        // 0x58900C25: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58900C27: je 0x58900c2f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58900C29: push ebp
        __asm _emit 0x55
        // 0x58900C2A: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C2F: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x58900C32: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58900C34: je 0x58900c3c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58900C36: push ebp
        __asm _emit 0x55
        // 0x58900C37: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C3C: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C41: lea ecx, [esp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2D
        // 0x58900C45: push ebx
        __asm _emit 0x53
        // 0x58900C46: push ecx
        __asm _emit 0x51
        // 0x58900C47: mov byte ptr [esp + 0x34], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58900C4B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xBF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58900C50: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58900C52: push 0x589a2470
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x24
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58900C57: lea edx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58900C5B: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C60: push edx
        __asm _emit 0x52
        // 0x58900C61: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xAD
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x58900C66: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C6C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58900C6F: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58900C73: push eax
        __asm _emit 0x50
        // 0x58900C74: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x10
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58900C79: lea eax, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C7F: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58900C83: lea ebp, [edi + 0x105]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C89: mov dword ptr [esp + 0x14], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900C91: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58900C93: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xBF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58900C98: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58900C9B: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58900C9F: mov byte ptr [esp + 0x134], 0xf
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58900CA7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900CA9: je 0x58900ce2
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58900CAB: mov ecx, dword ptr [esp + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900CB2: mov edx, dword ptr [esp + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900CB9: push ebx
        __asm _emit 0x53
        // 0x58900CBA: push ebx
        __asm _emit 0x53
        // 0x58900CBB: push 0xe9fe
        __asm _emit 0x68
        __asm _emit 0xFE
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900CC0: push ecx
        __asm _emit 0x51
        // 0x58900CC1: mov ecx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900CC8: push edx
        __asm _emit 0x52
        // 0x58900CC9: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x3C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58900CCF: push ebp
        __asm _emit 0x55
        // 0x58900CD0: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x58900CD3: push ecx
        __asm _emit 0x51
        // 0x58900CD4: push edx
        __asm _emit 0x52
        // 0x58900CD5: push ebx
        __asm _emit 0x53
        // 0x58900CD6: push esi
        __asm _emit 0x56
        // 0x58900CD7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58900CD9: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x25
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58900CDE: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58900CE0: jmp 0x58900ce4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58900CE2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58900CE4: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58900CE8: mov cx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58900CED: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58900CEF: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x58900CF3: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58900CF6: mov byte ptr [esp + 0x134], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900CFD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58900CFF: je 0x58900d07
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58900D01: push edi
        __asm _emit 0x57
        // 0x58900D02: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900D07: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58900D0A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58900D0C: je 0x58900d14
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58900D0E: push edi
        __asm _emit 0x57
        // 0x58900D0F: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900D14: add dword ptr [esp + 0x1c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x04
        // 0x58900D19: add ebp, 0x12
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x12
        // 0x58900D1C: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58900D21: jne 0x58900c91
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58900D27: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900D2D: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58900D30: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900D32: je 0x58900d62
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58900D34: mov edx, 0x589a2450
        __asm _emit 0xBA
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58900D39: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900D3E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58900D40: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58900D46: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58900D48: je 0x58900d5b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58900D4A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58900D4C: cmp cl, bl
        __asm _emit 0x3A
        __asm _emit 0xCB
        // 0x58900D4E: je 0x58900d5b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58900D50: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58900D52: inc eax
        __asm _emit 0x40
        // 0x58900D53: inc edx
        __asm _emit 0x42
        // 0x58900D54: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58900D57: jne 0x58900d40
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58900D59: jmp 0x58900d5f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58900D5B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58900D5D: jne 0x58900d60
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58900D5F: dec eax
        __asm _emit 0x48
        // 0x58900D60: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x58900D62: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900D68: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58900D6B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900D6D: je 0x58900da2
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58900D6F: mov edx, 0x589a2428
        __asm _emit 0xBA
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58900D74: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900D79: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900D80: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58900D86: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58900D88: je 0x58900d9b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58900D8A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58900D8C: cmp cl, bl
        __asm _emit 0x3A
        __asm _emit 0xCB
        // 0x58900D8E: je 0x58900d9b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58900D90: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58900D92: inc eax
        __asm _emit 0x40
        // 0x58900D93: inc edx
        __asm _emit 0x42
        // 0x58900D94: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58900D97: jne 0x58900d80
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58900D99: jmp 0x58900d9f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58900D9B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58900D9D: jne 0x58900da0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58900D9F: dec eax
        __asm _emit 0x48
        // 0x58900DA0: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x58900DA2: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900DA8: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58900DAB: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58900DAD: je 0x58900de2
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58900DAF: mov edx, 0x589a2408
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x24
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58900DB4: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900DB9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900DC0: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58900DC6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58900DC8: je 0x58900ddb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58900DCA: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58900DCC: cmp cl, bl
        __asm _emit 0x3A
        __asm _emit 0xCB
        // 0x58900DCE: je 0x58900ddb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58900DD0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58900DD2: inc eax
        __asm _emit 0x40
        // 0x58900DD3: inc edx
        __asm _emit 0x42
        // 0x58900DD4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58900DD7: jne 0x58900dc0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58900DD9: jmp 0x58900ddf
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58900DDB: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58900DDD: jne 0x58900de0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58900DDF: dec eax
        __asm _emit 0x48
        // 0x58900DE0: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x58900DE2: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900DE7: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58900DEB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58900DED: mov ecx, dword ptr [esp + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900DF4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900DFB: pop ecx
        __asm _emit 0x59
        // 0x58900DFC: pop edi
        __asm _emit 0x5F
        // 0x58900DFD: pop esi
        __asm _emit 0x5E
        // 0x58900DFE: pop ebp
        __asm _emit 0x5D
        // 0x58900DFF: pop ebx
        __asm _emit 0x5B
        // 0x58900E00: mov ecx, dword ptr [esp + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900E07: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58900E09: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xBD
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58900E0E: add esp, 0x124
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58900E14: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
