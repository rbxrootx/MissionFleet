// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888B010 .. +0x62D bytes.
extern "C" __declspec(naked) void FUN_5888b010() {
    __asm {
        // 0x5888B010: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5888B012: push 0x58986e96
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x6E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888B017: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B01D: push eax
        __asm _emit 0x50
        // 0x5888B01E: push ecx
        __asm _emit 0x51
        // 0x5888B01F: push ebx
        __asm _emit 0x53
        // 0x5888B020: push ebp
        __asm _emit 0x55
        // 0x5888B021: push esi
        __asm _emit 0x56
        // 0x5888B022: push edi
        __asm _emit 0x57
        // 0x5888B023: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5888B028: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5888B02A: push eax
        __asm _emit 0x50
        // 0x5888B02B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888B02F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B035: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5888B037: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888B03B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B03F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5888B043: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5888B047: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5888B04B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5888B04F: push eax
        __asm _emit 0x50
        // 0x5888B050: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5888B054: push ecx
        __asm _emit 0x51
        // 0x5888B055: push edx
        __asm _emit 0x52
        // 0x5888B056: push esi
        __asm _emit 0x56
        // 0x5888B057: push ebx
        __asm _emit 0x53
        // 0x5888B058: push eax
        __asm _emit 0x50
        // 0x5888B059: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5888B05B: call 0x587b62b0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xB2
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5888B060: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5888B062: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5888B064: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5888B068: mov dword ptr [edi], 0x5899fbd8
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0xD8
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888B06E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x1B
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B073: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888B076: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B07A: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5888B07F: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5888B081: je 0x5888b0c2
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5888B083: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B089: cmp dword ptr [ecx + 0x164], 0x20f
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B093: jle 0x5888b0ab
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5888B095: cmp dword ptr [ecx + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B09B: je 0x5888b0ab
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888B09D: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B0A3: mov ecx, dword ptr [ecx + 0x83c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B0A9: jmp 0x5888b0ad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B0AB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5888B0AD: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5888B0AF: lea edx, [esi + 0x16]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x16
        // 0x5888B0B2: push edx
        __asm _emit 0x52
        // 0x5888B0B3: lea edx, [ebx + 2]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x02
        // 0x5888B0B6: push edx
        __asm _emit 0x52
        // 0x5888B0B7: push ecx
        __asm _emit 0x51
        // 0x5888B0B8: push edi
        __asm _emit 0x57
        // 0x5888B0B9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B0BB: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x6B
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888B0C0: jmp 0x5888b0c4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B0C2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888B0C4: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B0C9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B0CB: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5888B0D0: mov dword ptr [edi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B0D6: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x7C
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B0DB: mov eax, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B0E1: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B0E6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888B0EA: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5888B0EC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x1B
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B0F1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888B0F4: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B0F8: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5888B0FD: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5888B0FF: je 0x5888b14c
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5888B101: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B107: cmp dword ptr [ecx + 0x164], 0x20e
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B111: jle 0x5888b129
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5888B113: cmp dword ptr [ecx + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B119: je 0x5888b129
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888B11B: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B121: mov ecx, dword ptr [edx + 0x838]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B127: jmp 0x5888b12b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B129: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5888B12B: push 0x82
        __asm _emit 0x68
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B130: lea edx, [esi + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B136: push edx
        __asm _emit 0x52
        // 0x5888B137: lea edx, [ebx + 2]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x02
        // 0x5888B13A: push edx
        __asm _emit 0x52
        // 0x5888B13B: push ecx
        __asm _emit 0x51
        // 0x5888B13C: mov ecx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B142: push ecx
        __asm _emit 0x51
        // 0x5888B143: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B145: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x6B
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888B14A: jmp 0x5888b14e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B14C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888B14E: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5888B150: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5888B155: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B15B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x1A
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B160: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888B163: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B167: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5888B16C: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5888B16E: je 0x5888b1b2
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5888B170: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B176: cmp dword ptr [ecx + 0x164], 0x210
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B180: jle 0x5888b198
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5888B182: cmp dword ptr [ecx + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B188: je 0x5888b198
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888B18A: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B190: mov ecx, dword ptr [edx + 0x840]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B196: jmp 0x5888b19a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B198: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5888B19A: push 0x63
        __asm _emit 0x6A
        __asm _emit 0x63
        // 0x5888B19C: add esi, 0xa
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0A
        // 0x5888B19F: push esi
        __asm _emit 0x56
        // 0x5888B1A0: push ebx
        __asm _emit 0x53
        // 0x5888B1A1: push ecx
        __asm _emit 0x51
        // 0x5888B1A2: mov ecx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B1A8: push ecx
        __asm _emit 0x51
        // 0x5888B1A9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B1AB: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x6A
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888B1B0: jmp 0x5888b1b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B1B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888B1B4: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888B1B9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B1BB: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5888B1C0: mov dword ptr [edi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B1C6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x7B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B1CB: mov eax, dword ptr [edi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B1D1: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B1D6: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888B1DA: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5888B1DC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x1A
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B1E1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888B1E4: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B1E8: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5888B1ED: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5888B1EF: je 0x5888b22b
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5888B1F1: mov ecx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B1F7: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x5888B1FA: push ebp
        __asm _emit 0x55
        // 0x5888B1FB: push ebp
        __asm _emit 0x55
        // 0x5888B1FC: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5888B201: lea edx, [ecx + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B207: push edx
        __asm _emit 0x52
        // 0x5888B208: lea edx, [ebx + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x78
        // 0x5888B20B: push edx
        __asm _emit 0x52
        // 0x5888B20C: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B212: add ecx, 0x10c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B218: push ecx
        __asm _emit 0x51
        // 0x5888B219: lea ecx, [ebx + 0xf]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x0F
        // 0x5888B21C: push ecx
        __asm _emit 0x51
        // 0x5888B21D: push edx
        __asm _emit 0x52
        // 0x5888B21E: push ebp
        __asm _emit 0x55
        // 0x5888B21F: push edi
        __asm _emit 0x57
        // 0x5888B220: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B222: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x80
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888B227: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5888B229: jmp 0x5888b22d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B22B: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5888B22D: mov dword ptr [edi + 0x94], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B233: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5888B236: mov eax, 0x8c
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B23B: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5888B240: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5888B244: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5888B246: je 0x5888b24e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B248: push esi
        __asm _emit 0x56
        // 0x5888B249: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x7D
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B24E: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5888B251: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5888B253: je 0x5888b25b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B255: push esi
        __asm _emit 0x56
        // 0x5888B256: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x7C
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B25B: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5888B25D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x19
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B262: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888B265: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B269: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5888B26E: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5888B270: je 0x5888b2b0
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5888B272: mov edx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B278: mov esi, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x5888B27B: push ebp
        __asm _emit 0x55
        // 0x5888B27C: push ebp
        __asm _emit 0x55
        // 0x5888B27D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5888B282: lea ecx, [esi + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B288: push ecx
        __asm _emit 0x51
        // 0x5888B289: lea ecx, [ebx + 0xd2]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B28F: push ecx
        __asm _emit 0x51
        // 0x5888B290: add esi, 0x10c
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B296: push esi
        __asm _emit 0x56
        // 0x5888B297: lea ecx, [ebx + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B29D: push ecx
        __asm _emit 0x51
        // 0x5888B29E: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B2A4: push ecx
        __asm _emit 0x51
        // 0x5888B2A5: push ebp
        __asm _emit 0x55
        // 0x5888B2A6: push edx
        __asm _emit 0x52
        // 0x5888B2A7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B2A9: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x7F
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888B2AE: jmp 0x5888b2b2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B2B0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888B2B2: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5888B2B4: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5888B2B9: mov dword ptr [edi + 0x11c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B2BF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x19
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B2C4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888B2C7: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B2CB: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5888B2D0: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5888B2D2: je 0x5888b312
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5888B2D4: mov edx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B2DA: mov esi, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x5888B2DD: push ebp
        __asm _emit 0x55
        // 0x5888B2DE: push ebp
        __asm _emit 0x55
        // 0x5888B2DF: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5888B2E4: lea ecx, [esi + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B2EA: push ecx
        __asm _emit 0x51
        // 0x5888B2EB: lea ecx, [ebx + 0xd2]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B2F1: push ecx
        __asm _emit 0x51
        // 0x5888B2F2: add esi, 0x10c
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B2F8: push esi
        __asm _emit 0x56
        // 0x5888B2F9: lea ecx, [ebx + 0xaa]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B2FF: push ecx
        __asm _emit 0x51
        // 0x5888B300: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B306: push ecx
        __asm _emit 0x51
        // 0x5888B307: push ebp
        __asm _emit 0x55
        // 0x5888B308: push edx
        __asm _emit 0x52
        // 0x5888B309: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B30B: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x7F
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888B310: jmp 0x5888b314
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B312: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888B314: mov esi, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B31A: mov dword ptr [edi + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B320: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5888B323: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B328: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5888B32D: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5888B331: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5888B333: je 0x5888b33b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B335: push esi
        __asm _emit 0x56
        // 0x5888B336: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x7C
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B33B: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5888B33E: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5888B340: je 0x5888b348
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B342: push esi
        __asm _emit 0x56
        // 0x5888B343: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x7B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B348: mov esi, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B34E: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5888B351: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B356: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5888B35A: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5888B35C: je 0x5888b364
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B35E: push esi
        __asm _emit 0x56
        // 0x5888B35F: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x7B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B364: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5888B367: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5888B369: je 0x5888b371
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B36B: push esi
        __asm _emit 0x56
        // 0x5888B36C: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x7B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B371: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B375: lea ebp, [edi + 0x124]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B37B: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5888B37D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B382: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888B385: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5888B389: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5888B38E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888B390: je 0x5888b3d6
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x5888B392: mov edx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B398: mov esi, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x5888B39B: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B39F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888B3A1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888B3A3: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5888B3A8: lea ecx, [esi + ecx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x0E
        __asm _emit 0x14
        // 0x5888B3AC: push ecx
        __asm _emit 0x51
        // 0x5888B3AD: lea ecx, [ebx + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B3B3: push ecx
        __asm _emit 0x51
        // 0x5888B3B4: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5888B3B8: lea ecx, [esi + ecx + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x0E
        __asm _emit 0x04
        // 0x5888B3BC: push ecx
        __asm _emit 0x51
        // 0x5888B3BD: lea ecx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x5888B3C0: push ecx
        __asm _emit 0x51
        // 0x5888B3C1: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B3C7: push ecx
        __asm _emit 0x51
        // 0x5888B3C8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888B3CA: push edx
        __asm _emit 0x52
        // 0x5888B3CB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B3CD: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x7E
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888B3D2: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5888B3D4: jmp 0x5888b3d8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B3D6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5888B3D8: mov dword ptr [ebp - 0x88], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888B3DE: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5888B3E1: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B3E6: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5888B3EB: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5888B3EF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888B3F1: je 0x5888b3f9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B3F3: push esi
        __asm _emit 0x56
        // 0x5888B3F4: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x7B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B3F9: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5888B3FC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888B3FE: je 0x5888b406
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B400: push esi
        __asm _emit 0x56
        // 0x5888B401: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x7A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B406: mov eax, dword ptr [ebp - 0x88]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888B40C: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B411: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888B415: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B41A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B41F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888B422: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5888B426: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x5888B42B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888B42D: je 0x5888b485
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x5888B42F: mov ecx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B435: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x5888B438: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B43E: cmp dword ptr [ecx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x5888B445: jle 0x5888b45e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5888B447: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B44E: je 0x5888b45e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888B450: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B456: add edx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B45C: jmp 0x5888b460
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B45E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5888B460: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B464: lea ecx, [esi + ecx + 6]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x0E
        __asm _emit 0x06
        // 0x5888B468: push ecx
        __asm _emit 0x51
        // 0x5888B469: lea ecx, [ebx + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B46F: push ecx
        __asm _emit 0x51
        // 0x5888B470: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5888B472: push edx
        __asm _emit 0x52
        // 0x5888B473: mov edx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B479: push edx
        __asm _emit 0x52
        // 0x5888B47A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B47C: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xBC
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B481: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5888B483: jmp 0x5888b487
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B485: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5888B487: mov dword ptr [ebp], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x5888B48A: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5888B48D: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B492: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5888B497: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5888B49B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888B49D: je 0x5888b4a5
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B49F: push esi
        __asm _emit 0x56
        // 0x5888B4A0: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x7A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B4A5: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5888B4A8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888B4AA: je 0x5888b4b2
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B4AC: push esi
        __asm _emit 0x56
        // 0x5888B4AD: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x7A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B4B2: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5888B4B5: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B4BA: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B4BF: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5888B4C2: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B4C7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888B4CB: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B4D0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B4D5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888B4D8: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5888B4DC: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x5888B4E1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888B4E3: je 0x5888b539
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x5888B4E5: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B4EB: cmp dword ptr [edx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x5888B4F2: mov ecx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B4F8: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x5888B4FB: jle 0x5888b514
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5888B4FD: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B504: je 0x5888b514
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888B506: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B50C: add edx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B512: jmp 0x5888b516
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B514: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5888B516: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B51A: lea esi, [esi + ebx + 6]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x06
        // 0x5888B51E: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5888B522: push esi
        __asm _emit 0x56
        // 0x5888B523: lea esi, [ebx + 0xaa]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B529: push esi
        __asm _emit 0x56
        // 0x5888B52A: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5888B52C: push edx
        __asm _emit 0x52
        // 0x5888B52D: push ecx
        __asm _emit 0x51
        // 0x5888B52E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B530: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xBB
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B535: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5888B537: jmp 0x5888b53b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B539: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5888B53B: mov dword ptr [ebp + 0x80], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B541: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5888B544: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B549: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5888B54E: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5888B552: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888B554: je 0x5888b55c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B556: push esi
        __asm _emit 0x56
        // 0x5888B557: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B55C: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5888B55F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888B561: je 0x5888b569
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888B563: push esi
        __asm _emit 0x56
        // 0x5888B564: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B569: mov ecx, dword ptr [ebp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B56F: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B574: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888B579: mov eax, dword ptr [ebp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B57F: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B584: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888B588: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B58C: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x5888B58F: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5888B592: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B597: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888B59B: jl 0x5888b37b
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xDA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888B5A1: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B5A6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x16
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B5AB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888B5AE: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5888B5B2: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5888B5B4: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x5888B5B9: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5888B5BB: je 0x5888b611
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x5888B5BD: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B5C3: cmp dword ptr [edx + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5888B5CA: jle 0x5888b5e2
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5888B5CC: cmp dword ptr [edx + 0x190], esi
        __asm _emit 0x39
        __asm _emit 0xB2
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B5D2: je 0x5888b5e2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888B5D4: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B5DA: add edx, 0x100
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B5E0: jmp 0x5888b5e4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B5E2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5888B5E4: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5888B5E8: push 0x7d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B5ED: add ecx, 0x132
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B5F3: push ecx
        __asm _emit 0x51
        // 0x5888B5F4: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B5FA: add ebx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x64
        // 0x5888B5FD: push ebx
        __asm _emit 0x53
        // 0x5888B5FE: push edx
        __asm _emit 0x52
        // 0x5888B5FF: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888B605: push edi
        __asm _emit 0x57
        // 0x5888B606: push edx
        __asm _emit 0x52
        // 0x5888B607: push ecx
        __asm _emit 0x51
        // 0x5888B608: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888B60A: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x27
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5888B60F: jmp 0x5888b613
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888B611: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888B613: mov dword ptr [edi + 0x224], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B619: mov dword ptr [edi + 0x228], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B61F: mov dword ptr [edi + 0x22c], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B625: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5888B627: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888B62B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B632: pop ecx
        __asm _emit 0x59
        // 0x5888B633: pop edi
        __asm _emit 0x5F
        // 0x5888B634: pop esi
        __asm _emit 0x5E
        // 0x5888B635: pop ebp
        __asm _emit 0x5D
        // 0x5888B636: pop ebx
        __asm _emit 0x5B
        // 0x5888B637: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5888B63A: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
