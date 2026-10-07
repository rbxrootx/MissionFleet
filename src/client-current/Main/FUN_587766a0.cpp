// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1122 bytes in 3 exact ranges.
// Source symbol alias: FUN_587766a0.

// Ghidra body range 0x587766A0..0x587767AA; 266 mapped bytes.
extern "C" __declspec(naked) void FUN_587766a0_segment_00() {
    __asm {
        // 0x587766A0: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x587766A3: push ebx
        __asm _emit 0x53
        // 0x587766A4: push ebp
        __asm _emit 0x55
        // 0x587766A5: push esi
        __asm _emit 0x56
        // 0x587766A6: push edi
        __asm _emit 0x57
        // 0x587766A7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587766A9: mov esi, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x587766AC: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587766B0: cmp esi, dword ptr [edi + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x587766B3: jbe 0x587766ba
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587766B5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587766BA: mov ebx, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x58
        // 0x587766BD: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x587766BF: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587766C3: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587766C7: mov esi, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x587766CA: cmp dword ptr [edi + 0x64], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x587766CD: jbe 0x587766d4
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587766CF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587766D4: mov eax, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x58
        // 0x587766D7: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587766D9: je 0x587766df
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587766DB: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587766DD: je 0x587766e4
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587766DF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587766E4: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x587766E6: je 0x58776b08
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587766EC: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587766EE: jne 0x587769ac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587766F4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587766F9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587766FB: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587766FE: jb 0x58776705
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776700: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776705: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58776708: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5877670B: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x5877670E: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58776711: jbe 0x58776718
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776713: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776718: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x5877671A: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877671E: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x58776720: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58776724: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58776728: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877672A: jne 0x587769b3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776730: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776735: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776737: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877673B: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877673E: jb 0x58776745
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776740: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776745: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58776749: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x5877674B: mov edi, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x5877674E: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58776751: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58776754: jbe 0x5877675b
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776756: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877675B: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5877675D: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877675F: je 0x58776765
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58776761: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x58776763: je 0x5877676a
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58776765: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877676A: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x5877676C: je 0x58776ad1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776772: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58776774: jne 0x587769ba
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877677A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877677F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776781: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58776784: jb 0x5877678b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776786: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877678B: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x5877678E: mov edi, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58776791: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58776794: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58776797: jbe 0x5877679e
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776799: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877679E: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x587767A0: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587767A4: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587767A8: jmp 0x587767b0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587767B0..0x58776818; 104 mapped bytes.
extern "C" __declspec(naked) void FUN_587766a0_segment_01() {
    __asm {
        // 0x587767B0: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587767B4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587767B6: jne 0x587769c1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587767BC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587767C1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587767C3: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587767C6: jb 0x587767cd
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587767C8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587767CD: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x587767D0: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587767D3: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x587767D6: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587767D9: jbe 0x587767e0
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587767DB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587767E0: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587767E2: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587767E4: je 0x587767ea
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587767E6: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587767E8: je 0x587767ef
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587767EA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587767EF: cmp dword ptr [esp + 0x1c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587767F3: je 0x58776a9f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587767F9: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587767FD: mov esi, dword ptr [eax + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x7C
        // 0x58776800: cmp esi, dword ptr [eax + 0x80]
        __asm _emit 0x3B
        __asm _emit 0xB0
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776806: jbe 0x5877680d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776808: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877680D: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58776811: mov ebp, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x70
        // 0x58776814: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x58776816: jmp 0x58776820
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x58776820..0x58776B10; 752 mapped bytes.
extern "C" __declspec(naked) void FUN_587766a0_segment_02() {
    __asm {
        // 0x58776820: mov esi, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776826: cmp dword ptr [edi + 0x7c], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x7C
        // 0x58776829: jbe 0x58776830
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877682B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776830: mov eax, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x70
        // 0x58776833: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58776835: je 0x5877683b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58776837: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58776839: je 0x58776840
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5877683B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776840: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x58776842: je 0x58776a05
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776848: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5877684A: jne 0x587769c8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776850: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776855: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776857: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x5877685A: jb 0x58776861
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877685C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776861: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776865: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58776867: jne 0x587769d0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877686D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776872: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776874: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58776878: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x5877687B: jb 0x58776882
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877687D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776882: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x58776885: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58776887: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5877688A: push ecx
        __asm _emit 0x51
        // 0x5877688B: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877688F: push eax
        __asm _emit 0x50
        // 0x58776890: call 0x58775980
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776895: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58776898: jne 0x5877698b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877689E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587768A0: jne 0x587769d7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587768A6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587768AB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587768AD: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587768B0: jb 0x587768b7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587768B2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587768B7: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587768B9: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587768BC: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587768BF: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587768C1: jne 0x587769de
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587768C7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587768CC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587768CE: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587768D1: jb 0x587768d8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587768D3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587768D8: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587768DA: mov edx, dword ptr [ecx + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587768E0: sub esi, dword ptr [edx + 4]
        __asm _emit 0x2B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587768E3: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587768E7: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x587768E9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587768EB: jne 0x587769e6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587768F1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587768F6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587768F8: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587768FC: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587768FF: jb 0x58776906
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776901: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776906: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877690A: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5877690C: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5877690F: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x58776912: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58776914: jne 0x587769ed
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877691A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877691F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776921: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776924: jb 0x5877692b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776926: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877692B: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x5877692D: mov eax, dword ptr [edx + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776933: sub esi, dword ptr [eax + 8]
        __asm _emit 0x2B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x58776936: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58776938: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877693A: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x5877693D: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x58776940: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58776942: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58776946: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877694A: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877694F: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776954: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58776959: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5877695B: jne 0x587769f5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776961: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776966: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776968: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877696C: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5877696F: jb 0x58776976
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776971: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776976: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58776978: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5877697B: mov eax, dword ptr [edx + 0xdcc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776981: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58776983: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58776985: jl 0x58776a5f
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877698B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5877698D: jne 0x58776a00
        __asm _emit 0x75
        __asm _emit 0x71
        // 0x5877698F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776994: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776996: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776999: jb 0x587769a0
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877699B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587769A0: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587769A4: add ebx, 8
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x08
        // 0x587769A7: jmp 0x58776820
        __asm _emit 0xE9
        __asm _emit 0x74
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769AC: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587769AE: jmp 0x587766fb
        __asm _emit 0xE9
        __asm _emit 0x48
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769B3: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587769B5: jmp 0x58776737
        __asm _emit 0xE9
        __asm _emit 0x7D
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769BA: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587769BC: jmp 0x58776781
        __asm _emit 0xE9
        __asm _emit 0xC0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769C1: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587769C3: jmp 0x587767c3
        __asm _emit 0xE9
        __asm _emit 0xFB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769C8: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587769CB: jmp 0x58776857
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769D0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587769D2: jmp 0x58776874
        __asm _emit 0xE9
        __asm _emit 0x9D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769D7: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587769D9: jmp 0x587768ad
        __asm _emit 0xE9
        __asm _emit 0xCF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769DE: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587769E1: jmp 0x587768ce
        __asm _emit 0xE9
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769E6: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587769E8: jmp 0x587768f8
        __asm _emit 0xE9
        __asm _emit 0x0B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769ED: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587769F0: jmp 0x58776921
        __asm _emit 0xE9
        __asm _emit 0x2C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587769F5: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587769F9: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587769FB: jmp 0x58776968
        __asm _emit 0xE9
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776A00: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58776A03: jmp 0x58776996
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x58776A05: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776A09: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58776A0B: jne 0x58776a57
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x58776A0D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776A12: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776A14: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58776A18: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58776A1B: jb 0x58776a22
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776A1D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776A22: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58776A24: mov dword ptr [ecx + 0x248], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776A2E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58776A30: jne 0x58776a5b
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58776A32: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776A37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776A39: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58776A3C: jb 0x58776a43
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776A3E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776A43: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776A47: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58776A4B: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58776A4E: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58776A52: jmp 0x587767b0
        __asm _emit 0xE9
        __asm _emit 0x59
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776A57: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58776A59: jmp 0x58776a14
        __asm _emit 0xEB
        __asm _emit 0xB9
        // 0x58776A5B: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58776A5D: jmp 0x58776a39
        __asm _emit 0xEB
        __asm _emit 0xDA
        // 0x58776A5F: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58776A61: jne 0x58776ac4
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x58776A63: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776A68: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776A6A: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58776A6D: jb 0x58776a74
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776A6F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776A74: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776A78: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58776A7A: jne 0x58776ac9
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x58776A7C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776A81: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776A83: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58776A87: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58776A8A: jb 0x58776a91
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776A8C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776A91: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58776A93: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58776A95: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58776A99: mov dword ptr [edx + 0x248], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776A9F: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58776AA3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58776AA5: jne 0x58776acd
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x58776AA7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776AAC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776AAE: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58776AB1: jb 0x58776ab8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776AB3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776AB8: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58776ABC: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58776ABF: jmp 0x58776720
        __asm _emit 0xE9
        __asm _emit 0x5C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776AC4: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58776AC7: jmp 0x58776a6a
        __asm _emit 0xEB
        __asm _emit 0xA1
        // 0x58776AC9: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58776ACB: jmp 0x58776a83
        __asm _emit 0xEB
        __asm _emit 0xB6
        // 0x58776ACD: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58776ACF: jmp 0x58776aae
        __asm _emit 0xEB
        __asm _emit 0xDD
        // 0x58776AD1: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58776AD5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58776AD7: jne 0x58776b04
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x58776AD9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776ADE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776AE0: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58776AE4: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58776AE7: jb 0x58776aee
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776AE9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776AEE: add dword ptr [esp + 0x24], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58776AF3: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58776AF7: mov ebp, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58776AFB: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58776AFF: jmp 0x587766c7
        __asm _emit 0xE9
        __asm _emit 0xC3
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776B04: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58776B06: jmp 0x58776ae0
        __asm _emit 0xEB
        __asm _emit 0xD8
        // 0x58776B08: pop edi
        __asm _emit 0x5F
        // 0x58776B09: pop esi
        __asm _emit 0x5E
        // 0x58776B0A: pop ebp
        __asm _emit 0x5D
        // 0x58776B0B: pop ebx
        __asm _emit 0x5B
        // 0x58776B0C: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58776B0F: ret
        __asm _emit 0xC3
    }
}
