// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 528 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897b000.

// Ghidra body range 0x5897B000..0x5897B210; 528 mapped bytes.
extern "C" __declspec(naked) void FUN_5897b000_segment_00() {
    __asm {
        // 0x5897B000: push ebx
        __asm _emit 0x53
        // 0x5897B001: push esi
        __asm _emit 0x56
        // 0x5897B002: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5897B006: push edi
        __asm _emit 0x57
        // 0x5897B007: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5897B009: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897B00B: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5897B00E: push esi
        __asm _emit 0x56
        // 0x5897B00F: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897B011: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5897B013: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5897B016: mov dword ptr [esi + 0x150], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B01C: mov ebx, 4
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B021: mov dword ptr [edi], 0x5897b780
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x80
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B027: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5897B02A: dec eax
        __asm _emit 0x48
        // 0x5897B02B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5897B02D: ja 0x5897b069
        __asm _emit 0x77
        __asm _emit 0x3A
        // 0x5897B02F: jmp dword ptr [eax*4 + 0x5897b210]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xB2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B036: cmp dword ptr [esi + 0x24], 1
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5897B03A: je 0x5897b080
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x5897B03C: jmp 0x5897b06f
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x5897B03E: cmp dword ptr [esi + 0x24], 3
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x5897B042: je 0x5897b080
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5897B044: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B046: push esi
        __asm _emit 0x56
        // 0x5897B047: mov dword ptr [eax + 0x14], 9
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B04E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B050: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897B052: jmp 0x5897b07d
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x5897B054: cmp dword ptr [esi + 0x24], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x5897B057: je 0x5897b080
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5897B059: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B05B: push esi
        __asm _emit 0x56
        // 0x5897B05C: mov dword ptr [edx + 0x14], 9
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B063: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B065: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897B067: jmp 0x5897b07d
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5897B069: cmp dword ptr [esi + 0x24], 1
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5897B06D: jge 0x5897b080
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x5897B06F: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B071: push esi
        __asm _emit 0x56
        // 0x5897B072: mov dword ptr [ecx + 0x14], 9
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B079: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B07B: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897B07D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B080: mov eax, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x40
        // 0x5897B083: lea ecx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0xFF
        // 0x5897B086: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5897B088: ja 0x5897b1e5
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B08E: jmp dword ptr [ecx*4 + 0x5897b224]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x24
        __asm _emit 0xB2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B095: cmp dword ptr [esi + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5897B099: je 0x5897b0ac
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5897B09B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B09D: push esi
        __asm _emit 0x56
        // 0x5897B09E: mov dword ptr [eax + 0x14], 0xa
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B0A5: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B0A7: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897B0A9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B0AC: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5897B0AF: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5897B0B2: jne 0x5897b0bf
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5897B0B4: mov dword ptr [edi + 4], 0x5897b670
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x70
        __asm _emit 0xB6
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B0BB: pop edi
        __asm _emit 0x5F
        // 0x5897B0BC: pop esi
        __asm _emit 0x5E
        // 0x5897B0BD: pop ebx
        __asm _emit 0x5B
        // 0x5897B0BE: ret
        __asm _emit 0xC3
        // 0x5897B0BF: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5897B0C2: jne 0x5897b0d5
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5897B0C4: mov dword ptr [edi], 0x5897b240
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x40
        __asm _emit 0xB2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B0CA: mov dword ptr [edi + 4], 0x5897b450
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B0D1: pop edi
        __asm _emit 0x5F
        // 0x5897B0D2: pop esi
        __asm _emit 0x5E
        // 0x5897B0D3: pop ebx
        __asm _emit 0x5B
        // 0x5897B0D4: ret
        __asm _emit 0xC3
        // 0x5897B0D5: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5897B0D8: jne 0x5897b188
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B0DE: mov dword ptr [edi + 4], 0x5897b670
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x70
        __asm _emit 0xB6
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B0E5: pop edi
        __asm _emit 0x5F
        // 0x5897B0E6: pop esi
        __asm _emit 0x5E
        // 0x5897B0E7: pop ebx
        __asm _emit 0x5B
        // 0x5897B0E8: ret
        __asm _emit 0xC3
        // 0x5897B0E9: cmp dword ptr [esi + 0x3c], 3
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x5897B0ED: je 0x5897b100
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5897B0EF: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B0F1: push esi
        __asm _emit 0x56
        // 0x5897B0F2: mov dword ptr [ecx + 0x14], 0xa
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B0F9: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B0FB: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897B0FD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B100: cmp dword ptr [esi + 0x28], 2
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x28
        __asm _emit 0x02
        // 0x5897B104: je 0x5897b205
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B10A: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B10C: push esi
        __asm _emit 0x56
        // 0x5897B10D: mov dword ptr [eax + 0x14], 0x1b
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B114: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B116: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897B118: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B11B: pop edi
        __asm _emit 0x5F
        // 0x5897B11C: pop esi
        __asm _emit 0x5E
        // 0x5897B11D: pop ebx
        __asm _emit 0x5B
        // 0x5897B11E: ret
        __asm _emit 0xC3
        // 0x5897B11F: cmp dword ptr [esi + 0x3c], 3
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x5897B123: je 0x5897b136
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5897B125: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B127: push esi
        __asm _emit 0x56
        // 0x5897B128: mov dword ptr [edx + 0x14], 0xa
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B12F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B131: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897B133: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B136: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5897B139: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5897B13C: jne 0x5897b14f
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5897B13E: mov dword ptr [edi], 0x5897b240
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x40
        __asm _emit 0xB2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B144: mov dword ptr [edi + 4], 0x5897b320
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0xB3
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B14B: pop edi
        __asm _emit 0x5F
        // 0x5897B14C: pop esi
        __asm _emit 0x5E
        // 0x5897B14D: pop ebx
        __asm _emit 0x5B
        // 0x5897B14E: ret
        __asm _emit 0xC3
        // 0x5897B14F: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5897B152: je 0x5897b205
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B158: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B15A: push esi
        __asm _emit 0x56
        // 0x5897B15B: mov dword ptr [ecx + 0x14], 0x1b
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B162: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B164: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897B166: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B169: pop edi
        __asm _emit 0x5F
        // 0x5897B16A: pop esi
        __asm _emit 0x5E
        // 0x5897B16B: pop ebx
        __asm _emit 0x5B
        // 0x5897B16C: ret
        __asm _emit 0xC3
        // 0x5897B16D: cmp dword ptr [esi + 0x3c], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x3C
        // 0x5897B170: je 0x5897b183
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5897B172: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B174: push esi
        __asm _emit 0x56
        // 0x5897B175: mov dword ptr [eax + 0x14], 0xa
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B17C: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B17E: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897B180: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B183: cmp dword ptr [esi + 0x28], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x28
        // 0x5897B186: je 0x5897b205
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x5897B188: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B18A: push esi
        __asm _emit 0x56
        // 0x5897B18B: mov dword ptr [edx + 0x14], 0x1b
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B192: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B194: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897B196: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B199: pop edi
        __asm _emit 0x5F
        // 0x5897B19A: pop esi
        __asm _emit 0x5E
        // 0x5897B19B: pop ebx
        __asm _emit 0x5B
        // 0x5897B19C: ret
        __asm _emit 0xC3
        // 0x5897B19D: cmp dword ptr [esi + 0x3c], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x3C
        // 0x5897B1A0: je 0x5897b1b3
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5897B1A2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B1A4: push esi
        __asm _emit 0x56
        // 0x5897B1A5: mov dword ptr [ecx + 0x14], 0xa
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B1AC: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B1AE: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897B1B0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B1B3: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5897B1B6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5897B1B8: jne 0x5897b1cb
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5897B1BA: mov dword ptr [edi], 0x5897b240
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x40
        __asm _emit 0xB2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B1C0: mov dword ptr [edi + 4], 0x5897b500
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0xB5
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B1C7: pop edi
        __asm _emit 0x5F
        // 0x5897B1C8: pop esi
        __asm _emit 0x5E
        // 0x5897B1C9: pop ebx
        __asm _emit 0x5B
        // 0x5897B1CA: ret
        __asm _emit 0xC3
        // 0x5897B1CB: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5897B1CE: je 0x5897b205
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5897B1D0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B1D2: push esi
        __asm _emit 0x56
        // 0x5897B1D3: mov dword ptr [eax + 0x14], 0x1b
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B1DA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B1DC: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897B1DE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B1E1: pop edi
        __asm _emit 0x5F
        // 0x5897B1E2: pop esi
        __asm _emit 0x5E
        // 0x5897B1E3: pop ebx
        __asm _emit 0x5B
        // 0x5897B1E4: ret
        __asm _emit 0xC3
        // 0x5897B1E5: cmp eax, dword ptr [esi + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5897B1E8: jne 0x5897b1f4
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5897B1EA: mov edx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x3C
        // 0x5897B1ED: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5897B1F0: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5897B1F2: je 0x5897b205
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5897B1F4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B1F6: push esi
        __asm _emit 0x56
        // 0x5897B1F7: mov dword ptr [eax + 0x14], 0x1b
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B1FE: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B200: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897B202: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B205: mov dword ptr [edi + 4], 0x5897b6e0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0xE0
        __asm _emit 0xB6
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B20C: pop edi
        __asm _emit 0x5F
        // 0x5897B20D: pop esi
        __asm _emit 0x5E
        // 0x5897B20E: pop ebx
        __asm _emit 0x5B
        // 0x5897B20F: ret
        __asm _emit 0xC3
    }
}
