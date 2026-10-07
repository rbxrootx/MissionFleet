// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 601 bytes in 3 exact ranges.
// Source symbol alias: FUN_587ab4d0.

// Ghidra body range 0x587AB4D0..0x587AB50A; 58 mapped bytes.
extern "C" __declspec(naked) void FUN_587ab4d0_segment_00() {
    __asm {
        // 0x587AB4D0: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x587AB4D3: push ebx
        __asm _emit 0x53
        // 0x587AB4D4: push ebp
        __asm _emit 0x55
        // 0x587AB4D5: push esi
        __asm _emit 0x56
        // 0x587AB4D6: push edi
        __asm _emit 0x57
        // 0x587AB4D7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587AB4D9: mov esi, dword ptr [edi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB4DF: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AB4E3: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB4EB: cmp esi, dword ptr [edi + 0x174]
        __asm _emit 0x3B
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB4F1: jbe 0x587ab4f8
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB4F3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x17
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB4F8: mov ebp, dword ptr [edi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB4FE: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x587AB500: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AB504: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587AB508: jmp 0x587ab510
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587AB510..0x587AB5F7; 231 mapped bytes.
extern "C" __declspec(naked) void FUN_587ab4d0_segment_01() {
    __asm {
        // 0x587AB510: mov esi, dword ptr [edi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB516: cmp dword ptr [edi + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB51C: jbe 0x587ab523
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB51E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x17
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB523: mov eax, dword ptr [edi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB529: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AB52B: je 0x587ab531
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AB52D: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587AB52F: je 0x587ab536
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AB531: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x17
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB536: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587AB538: je 0x587ab730
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB53E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AB540: jne 0x587ab6a7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB546: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x17
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB54B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB54D: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AB550: jb 0x587ab557
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB552: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x17
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB557: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AB559: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB55F: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587AB562: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AB565: jbe 0x587ab56c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB567: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x17
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB56C: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x587AB56E: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AB572: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AB576: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AB578: jne 0x587ab6af
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB57E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB583: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB585: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587AB589: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AB58C: jb 0x587ab593
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB58E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB593: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587AB595: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB59B: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AB59E: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587AB5A1: jbe 0x587ab5a8
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB5A3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB5A8: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587AB5AA: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AB5AC: je 0x587ab5b2
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AB5AE: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587AB5B0: je 0x587ab5b7
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AB5B2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB5B7: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AB5BB: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587AB5BD: je 0x587ab700
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB5C3: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AB5C5: jne 0x587ab6b7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB5CB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB5D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB5D2: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AB5D5: jb 0x587ab5dc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB5D7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB5DC: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587AB5DE: mov esi, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB5E4: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587AB5E7: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587AB5EA: jbe 0x587ab5f1
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB5EC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB5F1: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x587AB5F3: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x587AB5F5: jmp 0x587ab600
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587AB600..0x587AB738; 312 mapped bytes.
extern "C" __declspec(naked) void FUN_587ab4d0_segment_02() {
    __asm {
        // 0x587AB600: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AB604: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AB606: jne 0x587ab6be
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB60C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB611: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB613: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AB617: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AB61A: jb 0x587ab621
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB61C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB621: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AB623: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB629: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587AB62C: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587AB62F: jbe 0x587ab636
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB631: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB636: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587AB638: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB63A: je 0x587ab640
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AB63C: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587AB63E: je 0x587ab645
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AB640: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB645: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587AB647: je 0x587ab6cd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB64D: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AB651: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AB655: cmp byte ptr [esi + ebx + 0x408], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x1E
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB65D: je 0x587ab6cd
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x587AB65F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB661: jne 0x587ab6c5
        __asm _emit 0x75
        __asm _emit 0x62
        // 0x587AB663: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x16
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB668: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB66A: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587AB66D: jb 0x587ab674
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB66F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x15
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB674: movzx ecx, byte ptr [esi + ebx + 0x408]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x1E
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB67C: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587AB67F: inc esi
        __asm _emit 0x46
        // 0x587AB680: mov dword ptr [edx + 0x11c], ecx
        __asm _emit 0x89
        __asm _emit 0x8A
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB686: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AB68A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AB68C: jne 0x587ab6c9
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x587AB68E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x15
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB693: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB695: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587AB698: jb 0x587ab69f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB69A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x15
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB69F: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587AB6A2: jmp 0x587ab600
        __asm _emit 0xE9
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB6A7: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AB6AA: jmp 0x587ab54d
        __asm _emit 0xE9
        __asm _emit 0x9E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB6AF: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AB6B2: jmp 0x587ab585
        __asm _emit 0xE9
        __asm _emit 0xCE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB6B7: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AB6B9: jmp 0x587ab5d2
        __asm _emit 0xE9
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB6BE: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AB6C0: jmp 0x587ab613
        __asm _emit 0xE9
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB6C5: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB6C7: jmp 0x587ab66a
        __asm _emit 0xEB
        __asm _emit 0xA1
        // 0x587AB6C9: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB6CB: jmp 0x587ab695
        __asm _emit 0xEB
        __asm _emit 0xC8
        // 0x587AB6CD: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AB6D1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AB6D3: jne 0x587ab6fc
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587AB6D5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB6DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB6DC: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AB6E0: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587AB6E3: jb 0x587ab6ea
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB6E5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB6EA: add dword ptr [esp + 0x1c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x04
        // 0x587AB6EF: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AB6F3: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AB6F7: jmp 0x587ab576
        __asm _emit 0xE9
        __asm _emit 0x7A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB6FC: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AB6FE: jmp 0x587ab6dc
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x587AB700: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AB702: jne 0x587ab72b
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587AB704: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x15
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB709: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AB70B: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587AB70F: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587AB712: jb 0x587ab719
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AB714: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x15
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB719: add dword ptr [esp + 0x24], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587AB71E: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587AB722: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AB726: jmp 0x587ab510
        __asm _emit 0xE9
        __asm _emit 0xE5
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AB72B: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AB72E: jmp 0x587ab70b
        __asm _emit 0xEB
        __asm _emit 0xDB
        // 0x587AB730: pop edi
        __asm _emit 0x5F
        // 0x587AB731: pop esi
        __asm _emit 0x5E
        // 0x587AB732: pop ebp
        __asm _emit 0x5D
        // 0x587AB733: pop ebx
        __asm _emit 0x5B
        // 0x587AB734: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587AB737: ret
        __asm _emit 0xC3
    }
}
