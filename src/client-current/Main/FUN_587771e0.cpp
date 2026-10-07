// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 576 bytes in 1 exact ranges.
// Source symbol alias: FUN_587771e0.

// Ghidra body range 0x587771E0..0x58777420; 576 mapped bytes.
extern "C" __declspec(naked) void FUN_587771e0_segment_00() {
    __asm {
        // 0x587771E0: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587771E3: push ebx
        __asm _emit 0x53
        // 0x587771E4: push ebp
        __asm _emit 0x55
        // 0x587771E5: push esi
        __asm _emit 0x56
        // 0x587771E6: push edi
        __asm _emit 0x57
        // 0x587771E7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587771E9: mov esi, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x587771EC: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587771F0: cmp esi, dword ptr [edi + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x587771F3: jbe 0x587771fa
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587771F5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x5A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587771FA: mov ebx, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x58
        // 0x587771FD: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58777201: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58777203: mov esi, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x58777206: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877720A: cmp dword ptr [edi + 0x64], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x5877720D: jbe 0x58777214
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877720F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x5A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777214: mov eax, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x58
        // 0x58777217: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777219: je 0x5877721f
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5877721B: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5877721D: je 0x58777224
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5877721F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x5A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777224: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x58777226: je 0x58777414
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877722C: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877722E: jne 0x5877736c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777234: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777239: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877723B: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5877723E: jb 0x58777245
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777240: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x5A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777245: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58777248: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5877724B: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x5877724E: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58777251: jbe 0x58777258
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777253: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x5A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777258: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x5877725A: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877725E: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777262: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58777266: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58777268: jne 0x58777373
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877726E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777273: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777275: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58777278: jb 0x5877727f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877727A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877727F: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58777282: mov edi, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58777285: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58777288: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5877728B: jbe 0x58777292
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877728D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777292: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58777294: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777296: je 0x5877729c
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58777298: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x5877729A: je 0x587772a1
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5877729C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587772A1: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587772A5: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587772A7: je 0x587773c3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587772AD: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587772AF: jne 0x5877737a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587772B5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587772BA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587772BC: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587772BF: jb 0x587772c6
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587772C1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587772C6: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587772C8: mov edi, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587772CB: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x587772CE: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587772D1: jbe 0x587772d8
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587772D3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587772D8: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x587772DA: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x587772DC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587772E0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587772E4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587772E6: jne 0x58777381
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587772EC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587772F1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587772F3: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587772F7: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587772FA: jb 0x58777301
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587772FC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777301: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58777303: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58777306: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58777309: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5877730C: jbe 0x58777313
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877730E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777313: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58777315: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777317: je 0x5877731d
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58777319: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x5877731B: je 0x58777322
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5877731D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777322: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x58777324: je 0x58777390
        __asm _emit 0x74
        __asm _emit 0x6A
        // 0x58777326: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777328: jne 0x58777388
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x5877732A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877732F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777331: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58777334: jb 0x5877733b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777336: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877733B: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5877733E: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58777341: movzx edx, word ptr [ecx + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58777345: cmp edx, dword ptr [esp + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58777349: je 0x587773f0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877734F: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777351: jne 0x5877738c
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x58777353: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777358: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877735A: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5877735D: jb 0x58777364
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877735F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777364: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58777367: jmp 0x587772e0
        __asm _emit 0xE9
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877736C: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5877736E: jmp 0x5877723b
        __asm _emit 0xE9
        __asm _emit 0xC8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777373: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58777375: jmp 0x58777275
        __asm _emit 0xE9
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877737A: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5877737C: jmp 0x587772bc
        __asm _emit 0xE9
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777381: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58777383: jmp 0x587772f3
        __asm _emit 0xE9
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777388: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5877738A: jmp 0x58777331
        __asm _emit 0xEB
        __asm _emit 0xA5
        // 0x5877738C: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5877738E: jmp 0x5877735a
        __asm _emit 0xEB
        __asm _emit 0xCA
        // 0x58777390: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58777394: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58777396: jne 0x587773bf
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x58777398: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877739D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877739F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587773A3: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587773A6: jb 0x587773ad
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587773A8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587773AD: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x587773B2: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587773B6: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587773BA: jmp 0x58777262
        __asm _emit 0xE9
        __asm _emit 0xA3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587773BF: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587773C1: jmp 0x5877739f
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x587773C3: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587773C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587773C9: jne 0x587773ec
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587773CB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587773D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587773D2: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587773D5: jb 0x587773dc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587773D7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587773DC: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587773E0: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587773E4: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587773E7: jmp 0x58777203
        __asm _emit 0xE9
        __asm _emit 0x17
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587773EC: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587773EE: jmp 0x587773d2
        __asm _emit 0xEB
        __asm _emit 0xE2
        // 0x587773F0: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587773F2: jne 0x58777410
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587773F4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587773F9: cmp ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x587773FC: jb 0x58777403
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587773FE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777403: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58777406: pop edi
        __asm _emit 0x5F
        // 0x58777407: pop esi
        __asm _emit 0x5E
        // 0x58777408: pop ebp
        __asm _emit 0x5D
        // 0x58777409: pop ebx
        __asm _emit 0x5B
        // 0x5877740A: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5877740D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58777410: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x58777412: jmp 0x587773f9
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x58777414: pop edi
        __asm _emit 0x5F
        // 0x58777415: pop esi
        __asm _emit 0x5E
        // 0x58777416: pop ebp
        __asm _emit 0x5D
        // 0x58777417: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777419: pop ebx
        __asm _emit 0x5B
        // 0x5877741A: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5877741D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
