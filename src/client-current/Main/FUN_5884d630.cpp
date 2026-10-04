// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884D630 .. +0x237 bytes.
// Source symbol alias: FUN_5884d630.
extern "C" __declspec(naked) void FUN_5884d630() {
    __asm {
        // 0x5884D630: push esi
        __asm _emit 0x56
        // 0x5884D631: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5884D635: push edi
        __asm _emit 0x57
        // 0x5884D636: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5884D638: mov ecx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x5884D63B: push esi
        __asm _emit 0x56
        // 0x5884D63C: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x10
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5884D641: mov ecx, dword ptr [edi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x5C
        // 0x5884D644: push esi
        __asm _emit 0x56
        // 0x5884D645: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x10
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5884D64A: cmp esi, dword ptr [edi + 0x60]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x60
        // 0x5884D64D: jle 0x5884d714
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D653: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884D658: cmp dword ptr [eax + 0x164], 0x207
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D662: jle 0x5884d67b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884D664: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D66B: je 0x5884d67b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884D66D: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D673: mov eax, dword ptr [eax + 0x81c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D679: jmp 0x5884d67d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884D67B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884D67D: mov ecx, dword ptr [edi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x5C
        // 0x5884D680: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5884D683: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884D685: je 0x5884d6af
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5884D687: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5884D68A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5884D68D: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5884D690: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5884D693: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884D696: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884D698: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5884D69B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5884D69D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5884D6A0: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884D6A3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5884D6A6: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884D6A9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5884D6AC: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5884D6AF: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884D6B4: cmp dword ptr [eax + 0x164], 0x9aa
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D6BE: jle 0x5884d6d7
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884D6C0: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D6C7: je 0x5884d6d7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884D6C9: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D6CF: mov eax, dword ptr [ecx + 0x26a8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D6D5: jmp 0x5884d6d9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884D6D7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884D6D9: mov ecx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x5884D6DC: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5884D6DF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884D6E1: je 0x5884d862
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D6E7: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5884D6EA: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5884D6ED: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5884D6F0: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5884D6F3: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884D6F6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884D6F8: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5884D6FB: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5884D6FD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5884D700: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884D703: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5884D706: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884D709: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5884D70C: pop edi
        __asm _emit 0x5F
        // 0x5884D70D: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5884D710: pop esi
        __asm _emit 0x5E
        // 0x5884D711: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884D714: mov eax, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x64
        // 0x5884D717: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5884D719: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884D71E: jle 0x5884d78a
        __asm _emit 0x7E
        __asm _emit 0x6A
        // 0x5884D720: cmp dword ptr [eax + 0x164], 0x9ab
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAB
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D72A: jle 0x5884d743
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884D72C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D733: je 0x5884d743
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884D735: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D73B: mov eax, dword ptr [ecx + 0x26ac]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D741: jmp 0x5884d745
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884D743: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884D745: mov ecx, dword ptr [edi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x5C
        // 0x5884D748: push eax
        __asm _emit 0x50
        // 0x5884D749: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x3F
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884D74E: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884D753: cmp dword ptr [eax + 0x164], 0x9ac
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D75D: jle 0x5884d857
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D763: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D76A: je 0x5884d857
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D770: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D776: mov eax, dword ptr [edx + 0x26b0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB0
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D77C: mov ecx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x5884D77F: push eax
        __asm _emit 0x50
        // 0x5884D780: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x3F
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884D785: pop edi
        __asm _emit 0x5F
        // 0x5884D786: pop esi
        __asm _emit 0x5E
        // 0x5884D787: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884D78A: cmp esi, dword ptr [edi + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x5884D78D: jle 0x5884d7f5
        __asm _emit 0x7E
        __asm _emit 0x66
        // 0x5884D78F: cmp dword ptr [eax + 0x164], 0x9ad
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAD
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D799: jle 0x5884d7b2
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884D79B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D7A2: je 0x5884d7b2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884D7A4: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D7AA: mov eax, dword ptr [eax + 0x26b4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D7B0: jmp 0x5884d7b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884D7B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884D7B4: mov ecx, dword ptr [edi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x5C
        // 0x5884D7B7: push eax
        __asm _emit 0x50
        // 0x5884D7B8: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x3F
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884D7BD: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884D7C2: cmp dword ptr [eax + 0x164], 0x9ae
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAE
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D7CC: jle 0x5884d857
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D7D2: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D7D9: je 0x5884d857
        __asm _emit 0x74
        __asm _emit 0x7C
        // 0x5884D7DB: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D7E1: mov eax, dword ptr [ecx + 0x26b8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D7E7: mov ecx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x5884D7EA: push eax
        __asm _emit 0x50
        // 0x5884D7EB: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x3E
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884D7F0: pop edi
        __asm _emit 0x5F
        // 0x5884D7F1: pop esi
        __asm _emit 0x5E
        // 0x5884D7F2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884D7F5: cmp dword ptr [eax + 0x164], 0x9af
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAF
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D7FF: jle 0x5884d818
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884D801: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D808: je 0x5884d818
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884D80A: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D810: mov eax, dword ptr [edx + 0x26bc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xBC
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D816: jmp 0x5884d81a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884D818: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884D81A: mov ecx, dword ptr [edi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x5C
        // 0x5884D81D: push eax
        __asm _emit 0x50
        // 0x5884D81E: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x3E
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884D823: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884D828: cmp dword ptr [eax + 0x164], 0x9b0
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xB0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D832: jle 0x5884d857
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5884D834: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D83B: je 0x5884d857
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5884D83D: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D843: mov eax, dword ptr [eax + 0x26c0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D849: mov ecx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x5884D84C: push eax
        __asm _emit 0x50
        // 0x5884D84D: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x3E
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884D852: pop edi
        __asm _emit 0x5F
        // 0x5884D853: pop esi
        __asm _emit 0x5E
        // 0x5884D854: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884D857: mov ecx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x5884D85A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884D85C: push eax
        __asm _emit 0x50
        // 0x5884D85D: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x3E
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884D862: pop edi
        __asm _emit 0x5F
        // 0x5884D863: pop esi
        __asm _emit 0x5E
        // 0x5884D864: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
