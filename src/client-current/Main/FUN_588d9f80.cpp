// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 447 bytes in 2 exact ranges.
// Source symbol alias: FUN_588d9f80.

// Ghidra body range 0x588D9F80..0x588DA11A; 410 mapped bytes.
extern "C" __declspec(naked) void FUN_588d9f80_segment_00() {
    __asm {
        // 0x588D9F80: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D9F84: push ebx
        __asm _emit 0x53
        // 0x588D9F85: push esi
        __asm _emit 0x56
        // 0x588D9F86: push edi
        __asm _emit 0x57
        // 0x588D9F87: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D9F89: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D9F8E: jne 0x588da0a0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9F94: cmp dword ptr [esi + 0x6090], 0x50000
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588D9F9E: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9FA3: jne 0x588d9fdb
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x588D9FA5: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D9FAA: cmp word ptr [eax + 0x204], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x588D9FB2: jne 0x588d9fdb
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x588D9FB4: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D9FBA: mov ecx, dword ptr [ecx + 0x21f08]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D9FC0: push esi
        __asm _emit 0x56
        // 0x588D9FC1: call 0x5875cb90
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x2B
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588D9FC6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D9FC8: je 0x588d9fdb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588D9FCA: mov eax, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9FD0: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9FD5: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588D9FD9: jmp 0x588d9fe5
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588D9FDB: mov eax, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9FE1: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588D9FE5: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D9FEA: cmp dword ptr [eax + 0x170], 0xa
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x588D9FF1: jle 0x588da007
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588D9FF3: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9FFA: je 0x588da007
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D9FFC: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA002: mov edi, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x28
        // 0x588DA005: jmp 0x588da009
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DA007: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588DA009: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA00F: push ecx
        __asm _emit 0x51
        // 0x588DA010: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DA012: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xD9
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DA017: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588DA019: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588DA01C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DA01E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DA020: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588DA022: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA028: cmp dword ptr [ecx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x588DA02B: je 0x588da042
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588DA02D: cmp dword ptr [esi + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA034: je 0x588da042
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588DA036: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA03C: push ebx
        __asm _emit 0x53
        // 0x588DA03D: call 0x587565f0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xC5
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DA042: mov ecx, 0x40000
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DA047: cmp dword ptr [esi + 0x6090], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA04D: jne 0x588da13f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA053: mov eax, dword ptr [esi + 0x12f0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA059: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588DA05D: cmp dword ptr [esi + 0x6090], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA063: jne 0x588da13f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA069: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DA06B: cmp dword ptr [esi + 0x130c], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA071: jbe 0x588da13f
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA077: lea eax, [esi + 0x1320]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA07D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588DA080: mov ecx, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xF0
        // 0x588DA083: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588DA087: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588DA089: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588DA08D: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x588DA08F: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588DA092: cmp edx, dword ptr [esi + 0x130c]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA098: jb 0x588da080
        __asm _emit 0x72
        __asm _emit 0xE6
        // 0x588DA09A: pop edi
        __asm _emit 0x5F
        // 0x588DA09B: pop esi
        __asm _emit 0x5E
        // 0x588DA09C: pop ebx
        __asm _emit 0x5B
        // 0x588DA09D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DA0A0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA0A2: jne 0x588da13f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA0A8: mov eax, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA0AE: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA0B3: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DA0B7: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA0BC: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588DA0BF: je 0x588da0d7
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588DA0C1: cmp dword ptr [esi + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA0C8: je 0x588da0d7
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588DA0CA: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA0D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DA0D2: call 0x587565f0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xC5
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DA0D7: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA0DD: cmp word ptr [ecx + 0x204], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x588DA0E5: jne 0x588da0f6
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588DA0E7: mov eax, dword ptr [esi + 0x1308]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA0ED: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA0F2: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DA0F6: mov eax, dword ptr [esi + 0x12f0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA0FC: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA101: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DA105: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DA107: cmp dword ptr [esi + 0x130c], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA10D: jbe 0x588da13f
        __asm _emit 0x76
        __asm _emit 0x30
        // 0x588DA10F: lea eax, [esi + 0x1320]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA115: lea ebx, [edx + 1]
        __asm _emit 0x8D
        __asm _emit 0x5A
        __asm _emit 0x01
        // 0x588DA118: jmp 0x588da120
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588DA120..0x588DA145; 37 mapped bytes.
extern "C" __declspec(naked) void FUN_588d9f80_segment_01() {
    __asm {
        // 0x588DA120: mov ecx, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xF0
        // 0x588DA123: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA128: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x588DA12C: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588DA12E: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x588DA132: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x588DA134: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588DA137: cmp edx, dword ptr [esi + 0x130c]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA13D: jb 0x588da120
        __asm _emit 0x72
        __asm _emit 0xE1
        // 0x588DA13F: pop edi
        __asm _emit 0x5F
        // 0x588DA140: pop esi
        __asm _emit 0x5E
        // 0x588DA141: pop ebx
        __asm _emit 0x5B
        // 0x588DA142: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
