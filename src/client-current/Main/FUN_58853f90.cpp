// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 461 bytes in 1 exact ranges.
// Source symbol alias: FUN_58853f90.

// Ghidra body range 0x58853F90..0x5885415D; 461 mapped bytes.
extern "C" __declspec(naked) void FUN_58853f90_segment_00() {
    __asm {
        // 0x58853F90: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x58853F93: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58853F97: push ebx
        __asm _emit 0x53
        // 0x58853F98: push ebp
        __asm _emit 0x55
        // 0x58853F99: push esi
        __asm _emit 0x56
        // 0x58853F9A: mov esi, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853FA0: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58853FA3: add edx, 0x34c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853FA9: mov edx, dword ptr [edx + eax*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x82
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853FB0: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58853FB2: push edi
        __asm _emit 0x57
        // 0x58853FB3: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58853FB7: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x58853FB9: je 0x58853fc0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58853FBB: movzx edx, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x12
        // 0x58853FBE: jmp 0x58853fc2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58853FC0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58853FC2: movzx edi, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xFA
        // 0x58853FC5: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58853FC8: movzx esi, byte ptr [edx + eax + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853FD0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58853FD2: movzx edx, byte ptr [edx + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x92
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853FD9: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58853FDD: lea edx, [edx + esi*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x72
        // 0x58853FE0: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58853FE4: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58853FE8: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58853FEC: cmp edi, 5
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x05
        // 0x58853FEF: jne 0x58853ff7
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58853FF1: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58853FF5: jmp 0x58854004
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58853FF7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58853FF9: cmp edi, 6
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x06
        // 0x58853FFC: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x58853FFF: inc edx
        __asm _emit 0x42
        // 0x58854000: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58854004: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58854008: mov dword ptr [ecx + eax*8 + 0x1a8], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885400F: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58854013: mov dword ptr [ecx + eax*8 + 0x1ac], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885401A: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885401F: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58854022: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58854024: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58854028: mov esi, 0xb44
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885402D: add edi, 0x21c
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854033: lea edx, [ecx + 0x1ac]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854039: mov dword ptr [esp + 0x30], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854041: movzx ecx, byte ptr [edi - 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0xE0
        // 0x58854045: cmp dword ptr [esp + 0x28], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58854049: jne 0x58854078
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x5885404B: movzx eax, byte ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x07
        // 0x5885404E: cmp dword ptr [esp + 0x10], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58854052: jne 0x58854078
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x58854054: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58854058: mov eax, dword ptr [esi + ecx + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885405F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58854061: je 0x58854068
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58854063: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x58854066: jmp 0x5885406a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58854068: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885406A: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5885406D: cmp dword ptr [esp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58854071: jne 0x58854078
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58854073: add ebx, dword ptr [edx - 4]
        __asm _emit 0x03
        __asm _emit 0x5A
        __asm _emit 0xFC
        // 0x58854076: add ebp, dword ptr [edx]
        __asm _emit 0x03
        __asm _emit 0x2A
        // 0x58854078: movzx ecx, byte ptr [edi - 0x1f]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0xE1
        // 0x5885407C: cmp dword ptr [esp + 0x28], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58854080: jne 0x588540b1
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58854082: movzx eax, byte ptr [edi + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x58854086: cmp dword ptr [esp + 0x10], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885408A: jne 0x588540b1
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x5885408C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58854090: mov eax, dword ptr [esi + ecx + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854097: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58854099: je 0x588540a0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5885409B: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x5885409E: jmp 0x588540a2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588540A0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588540A2: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588540A5: cmp dword ptr [esp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588540A9: jne 0x588540b1
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588540AB: add ebx, dword ptr [edx + 4]
        __asm _emit 0x03
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x588540AE: add ebp, dword ptr [edx + 8]
        __asm _emit 0x03
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588540B1: movzx ecx, byte ptr [edi - 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0xE2
        // 0x588540B5: cmp dword ptr [esp + 0x28], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588540B9: jne 0x588540ea
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x588540BB: movzx eax, byte ptr [edi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0x02
        // 0x588540BF: cmp dword ptr [esp + 0x10], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588540C3: jne 0x588540ea
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x588540C5: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588540C9: mov eax, dword ptr [esi + ecx + 0x350]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588540D0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588540D2: je 0x588540d9
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588540D4: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588540D7: jmp 0x588540db
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588540D9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588540DB: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588540DE: cmp dword ptr [esp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588540E2: jne 0x588540ea
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588540E4: add ebx, dword ptr [edx + 0xc]
        __asm _emit 0x03
        __asm _emit 0x5A
        __asm _emit 0x0C
        // 0x588540E7: add ebp, dword ptr [edx + 0x10]
        __asm _emit 0x03
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588540EA: movzx ecx, byte ptr [edi - 0x1d]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0xE3
        // 0x588540EE: cmp dword ptr [esp + 0x28], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588540F2: jne 0x58854123
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x588540F4: movzx eax, byte ptr [edi + 3]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0x03
        // 0x588540F8: cmp dword ptr [esp + 0x10], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588540FC: jne 0x58854123
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x588540FE: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58854102: mov eax, dword ptr [esi + ecx + 0x354]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854109: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885410B: je 0x58854112
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5885410D: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x58854110: jmp 0x58854114
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58854112: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58854114: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x58854117: cmp dword ptr [esp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885411B: jne 0x58854123
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5885411D: add ebx, dword ptr [edx + 0x14]
        __asm _emit 0x03
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x58854120: add ebp, dword ptr [edx + 0x18]
        __asm _emit 0x03
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x58854123: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x58854126: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58854129: add edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x20
        // 0x5885412C: sub dword ptr [esp + 0x30], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        // 0x58854131: jne 0x58854041
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58854137: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5885413B: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5885413F: lea eax, [ecx + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x51
        // 0x58854142: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58854146: mov ecx, dword ptr [ecx + eax*4 + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x81
        __asm _emit 0x7C
        // 0x5885414A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885414C: mov eax, dword ptr [edx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x20
        // 0x5885414F: push ebp
        __asm _emit 0x55
        // 0x58854150: push ebx
        __asm _emit 0x53
        // 0x58854151: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58854153: pop edi
        __asm _emit 0x5F
        // 0x58854154: pop esi
        __asm _emit 0x5E
        // 0x58854155: pop ebp
        __asm _emit 0x5D
        // 0x58854156: pop ebx
        __asm _emit 0x5B
        // 0x58854157: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885415A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
