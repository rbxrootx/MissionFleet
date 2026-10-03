// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 763 bytes across one range.

// Ghidra range: 0x58853C20 .. +0x2FB bytes.
extern "C" __declspec(naked) void FUN_58853C20_segment_00() {
    __asm {
        // 0x58853C20: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x58853C25: push esi
        __asm _emit 0x56
        // 0x58853C26: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58853C28: jne 0x58853f15
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C2E: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853C33: push ebx
        __asm _emit 0x53
        // 0x58853C34: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58853C3A: push ebp
        __asm _emit 0x55
        // 0x58853C3B: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58853C3F: push edi
        __asm _emit 0x57
        // 0x58853C40: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58853C42: mov dword ptr [eax + 0x104e0], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58853C48: mov dword ptr [eax + 0x104e4], 0x320
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C52: cmp ebp, dword ptr [esi + 0xa8]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C58: jne 0x58853cb8
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x58853C5A: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C60: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58853C62: jne 0x58853c8d
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58853C64: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C6A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853C6C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58853C6F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853C71: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C77: mov dword ptr [eax + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C7E: mov dword ptr [esi + 0xac], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C88: jmp 0x58853d36
        __asm _emit 0xE9
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C8D: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58853C90: jne 0x58853d36
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C96: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C9C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58853C9E: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58853CA1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58853CA3: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853CA9: mov dword ptr [ecx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853CB0: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853CB6: jmp 0x58853d36
        __asm _emit 0xEB
        __asm _emit 0x7E
        // 0x58853CB8: mov edx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853CBE: cmp ebp, dword ptr [edx + 0xf8]
        __asm _emit 0x3B
        __asm _emit 0xAA
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853CC4: jne 0x58853d36
        __asm _emit 0x75
        __asm _emit 0x70
        // 0x58853CC6: cmp dword ptr [esp + 0x1c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58853CCA: je 0x58853d36
        __asm _emit 0x74
        __asm _emit 0x6A
        // 0x58853CCC: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853CD2: cmp dword ptr [ecx + 0x104f0], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58853CD9: jne 0x58853cf1
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58853CDB: call 0x587e7f20
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58853CE0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58853CE2: jne 0x58853d36
        __asm _emit 0x75
        __asm _emit 0x52
        // 0x58853CE4: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853CEA: call 0x587eae10
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58853CEF: jmp 0x58853d36
        __asm _emit 0xEB
        __asm _emit 0x45
        // 0x58853CF1: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58853CF7: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58853CF9: mov eax, dword ptr [0x58a28364]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853CFE: add eax, 0x7d0
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853D03: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58853D05: jae 0x58853d2c
        __asm _emit 0x73
        __asm _emit 0x25
        // 0x58853D07: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853D0D: mov edi, dword ptr [ecx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853D13: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853D18: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853D1A: push 0x5899c15c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58853D1F: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58853D21: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58853D24: push eax
        __asm _emit 0x50
        // 0x58853D25: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58853D27: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x6E
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58853D2C: mov dword ptr [0x58a28364], ebp
        __asm _emit 0x89
        __asm _emit 0x2D
        __asm _emit 0x64
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853D32: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58853D36: cmp ebp, dword ptr [esi + 0x2f8]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853D3C: jne 0x58853e17
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853D42: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853D48: movzx eax, word ptr [edx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58853D4F: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58853D52: je 0x58853dbf
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x58853D54: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58853D57: je 0x58853dbf
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x58853D59: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853D5E: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58853D61: cmp word ptr [ecx + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853D69: jne 0x58853d77
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58853D6B: mov byte ptr [esi + 0x2fc], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58853D72: jmp 0x58853e17
        __asm _emit 0xE9
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853D77: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58853D7D: mov edx, dword ptr [0x58a28360]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853D83: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58853D85: add edx, 0x7d0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853D8B: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x58853D8D: jae 0x58853db3
        __asm _emit 0x73
        __asm _emit 0x24
        // 0x58853D8F: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853D94: mov edi, dword ptr [eax + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853D9A: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853D9F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853DA1: push 0x5899c8e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xC8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58853DA6: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58853DA8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58853DAB: push eax
        __asm _emit 0x50
        // 0x58853DAC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58853DAE: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x6D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58853DB3: mov dword ptr [0x58a28360], ebp
        __asm _emit 0x89
        __asm _emit 0x2D
        __asm _emit 0x60
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853DB9: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58853DBD: jmp 0x58853e17
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x58853DBF: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853DC5: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58853DC8: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853DCE: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58853DD2: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x58853DD5: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58853DD8: je 0x58853df2
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58853DDA: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58853DDD: je 0x58853df2
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58853DDF: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58853DE2: je 0x58853df2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58853DE4: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58853DE7: je 0x58853df2
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58853DE9: mov byte ptr [esi + 0x2fc], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58853DF0: jmp 0x58853e17
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x58853DF2: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853DF8: mov edi, dword ptr [ecx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853DFE: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853E03: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853E05: push 0x5899e934
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58853E0A: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58853E0C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58853E0F: push eax
        __asm _emit 0x50
        // 0x58853E10: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58853E12: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x6D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58853E17: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58853E19: lea eax, [esi + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853E1F: nop
        __asm _emit 0x90
        // 0x58853E20: cmp ebp, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x28
        // 0x58853E22: je 0x58853e36
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58853E24: inc edi
        __asm _emit 0x47
        // 0x58853E25: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58853E28: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x04
        // 0x58853E2B: jl 0x58853e20
        __asm _emit 0x7C
        __asm _emit 0xF3
        // 0x58853E2D: pop edi
        __asm _emit 0x5F
        // 0x58853E2E: pop ebp
        __asm _emit 0x5D
        // 0x58853E2F: pop ebx
        __asm _emit 0x5B
        // 0x58853E30: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58853E32: pop esi
        __asm _emit 0x5E
        // 0x58853E33: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58853E36: mov eax, dword ptr [esi + edi*4 + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853E3D: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58853E40: jne 0x58853eb0
        __asm _emit 0x75
        __asm _emit 0x6E
        // 0x58853E42: cmp dword ptr [esi + edi*8 + 0xdc], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xFE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853E4A: je 0x58853f12
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853E50: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58853E52: imul edx, edx, 0x4c
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x4C
        // 0x58853E55: mov dword ptr [esi + edi*4 + 0xf8], 2
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853E60: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58853E63: mov ecx, dword ptr [esi + edi*8 + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xFE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853E6A: add eax, 0x68
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x68
        // 0x58853E6D: lea ebx, [edx + 0x3d]
        __asm _emit 0x8D
        __asm _emit 0x5A
        __asm _emit 0x3D
        // 0x58853E70: push eax
        __asm _emit 0x50
        // 0x58853E71: push ebx
        __asm _emit 0x53
        // 0x58853E72: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x21
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58853E77: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58853E7A: add ecx, 0x9a
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853E80: push ecx
        __asm _emit 0x51
        // 0x58853E81: mov ecx, dword ptr [esi + edi*8 + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xFE
        __asm _emit 0x7C
        // 0x58853E85: lea ebp, [esi + edi*8 + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0x7C
        // 0x58853E89: push ebx
        __asm _emit 0x53
        // 0x58853E8A: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x21
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58853E8F: mov ecx, dword ptr [esi + edi*8 + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xFE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853E96: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58853E98: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58853E9B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58853E9D: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58853EA0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58853EA2: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58853EA5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58853EA7: pop edi
        __asm _emit 0x5F
        // 0x58853EA8: pop ebp
        __asm _emit 0x5D
        // 0x58853EA9: pop ebx
        __asm _emit 0x5B
        // 0x58853EAA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58853EAC: pop esi
        __asm _emit 0x5E
        // 0x58853EAD: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58853EB0: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58853EB3: jne 0x58853f12
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x58853EB5: cmp dword ptr [esi + edi*8 + 0xd8], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xFE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853EBD: je 0x58853f12
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x58853EBF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58853EC1: imul ecx, ecx, 0x4c
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x4C
        // 0x58853EC4: mov dword ptr [esi + edi*4 + 0xf8], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853ECF: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58853ED2: add edx, 0x68
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x68
        // 0x58853ED5: lea ebx, [ecx + 0x3d]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x3D
        // 0x58853ED8: mov ecx, dword ptr [esi + edi*8 + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xFE
        __asm _emit 0x7C
        // 0x58853EDC: push edx
        __asm _emit 0x52
        // 0x58853EDD: push ebx
        __asm _emit 0x53
        // 0x58853EDE: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x21
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58853EE3: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58853EE6: mov ecx, dword ptr [esi + edi*8 + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xFE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853EED: add eax, 0x9a
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853EF2: push eax
        __asm _emit 0x50
        // 0x58853EF3: push ebx
        __asm _emit 0x53
        // 0x58853EF4: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x21
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58853EF9: mov ecx, dword ptr [esi + edi*8 + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xFE
        __asm _emit 0x7C
        // 0x58853EFD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58853EFF: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58853F02: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58853F04: mov ecx, dword ptr [esi + edi*8 + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xFE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853F0B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58853F0D: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58853F10: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58853F12: pop edi
        __asm _emit 0x5F
        // 0x58853F13: pop ebp
        __asm _emit 0x5D
        // 0x58853F14: pop ebx
        __asm _emit 0x5B
        // 0x58853F15: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58853F17: pop esi
        __asm _emit 0x5E
        // 0x58853F18: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
