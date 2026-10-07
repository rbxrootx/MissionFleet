// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 855 bytes in 4 exact ranges.
// Source symbol alias: FUN_587ecf10.

// Ghidra body range 0x587ECF10..0x587ECF2D; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_587ecf10_segment_00() {
    __asm {
        // 0x587ECF10: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587ECF15: push esi
        __asm _emit 0x56
        // 0x587ECF16: push edi
        __asm _emit 0x57
        // 0x587ECF17: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECF1C: lea esi, [ecx + 0x10bcc]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xCC
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECF22: lea eax, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFF
        // 0x587ECF25: je 0x587ed16b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECF2B: jmp 0x587ecf30
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587ECF30..0x587ECF4A; 26 mapped bytes.
extern "C" __declspec(naked) void FUN_587ecf10_segment_01() {
    __asm {
        // 0x587ECF30: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ECF32: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ECF36: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587ECF39: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587ECF3B: jne 0x587ecf30
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587ECF3D: lea esi, [ecx + 0x10bd4]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xD4
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECF43: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECF48: jmp 0x587ecf50
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587ECF50..0x587ECF6A; 26 mapped bytes.
extern "C" __declspec(naked) void FUN_587ecf10_segment_02() {
    __asm {
        // 0x587ECF50: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ECF52: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ECF56: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587ECF59: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587ECF5B: jne 0x587ecf50
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587ECF5D: lea esi, [ecx + 0x10be8]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECF63: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECF68: jmp 0x587ecf70
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587ECF70..0x587ED276; 774 mapped bytes.
extern "C" __declspec(naked) void FUN_587ecf10_segment_03() {
    __asm {
        // 0x587ECF70: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ECF72: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ECF76: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587ECF79: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587ECF7B: jne 0x587ecf70
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587ECF7D: mov edx, dword ptr [ecx + 0x10bf8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECF83: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ECF87: movzx edx, word ptr [ecx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECF8E: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587ECF92: je 0x587ecfbe
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587ECF94: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587ECF98: je 0x587ecfbe
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587ECF9A: cmp dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x587ECF9E: je 0x587ecfbe
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587ECFA0: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587ECFA4: je 0x587ecfbe
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587ECFA6: cmp dx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x587ECFAA: je 0x587ecfbe
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587ECFAC: cmp dx, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x10
        // 0x587ECFB0: je 0x587ecfbe
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587ECFB2: cmp dx, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x587ECFB6: je 0x587ecfbe
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587ECFB8: cmp dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587ECFBC: jne 0x587ecff1
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x587ECFBE: lea esi, [ecx + 0x21c58]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x58
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECFC4: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECFC9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECFD0: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ECFD2: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ECFD6: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587ECFD9: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587ECFDB: jne 0x587ecfd0
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587ECFDD: mov edx, dword ptr [ecx + 0x21c60]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECFE3: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ECFE7: mov edx, dword ptr [ecx + 0x21c64]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECFED: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ECFF1: movzx edx, word ptr [ecx + 0x21ccc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0xCC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECFF8: cmp dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587ECFFC: jne 0x587ed04c
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x587ECFFE: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED004: movzx edx, word ptr [edx + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED00B: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x587ED00F: je 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED015: cmp dx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587ED019: je 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED01F: cmp dx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587ED023: je 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED029: mov edx, dword ptr [ecx + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED02F: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ED033: mov edx, dword ptr [ecx + 0x21cc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED039: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ED03D: mov ecx, dword ptr [ecx + 0x21cc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED043: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587ED047: pop edi
        __asm _emit 0x5F
        // 0x587ED048: pop esi
        __asm _emit 0x5E
        // 0x587ED049: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587ED04C: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587ED04F: jne 0x587ed0f5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED055: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED05B: movzx edx, word ptr [edx + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED062: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x587ED066: je 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED06C: cmp dx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587ED070: je 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED076: cmp dx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587ED07A: je 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED080: mov edx, dword ptr [ecx + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED086: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ED08A: lea esi, [ecx + 0x21cb0]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED090: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED095: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ED097: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ED09B: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587ED09E: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587ED0A0: jne 0x587ed095
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587ED0A2: lea esi, [ecx + 0x21cb8]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED0A8: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED0AD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587ED0B0: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ED0B2: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ED0B6: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587ED0B9: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587ED0BB: jne 0x587ed0b0
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587ED0BD: mov edx, dword ptr [ecx + 0x21cc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED0C3: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED0C8: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587ED0CC: mov edx, dword ptr [ecx + 0x21cc4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED0D2: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587ED0D6: mov edx, dword ptr [ecx + 0x21cd4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED0DC: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587ED0E0: mov edx, dword ptr [ecx + 0x21cd8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xD8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED0E6: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587ED0EA: pop edi
        __asm _emit 0x5F
        // 0x587ED0EB: mov dword ptr [ecx + 0x21cc8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xC8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED0F1: pop esi
        __asm _emit 0x5E
        // 0x587ED0F2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587ED0F5: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x587ED0F9: je 0x587ed104
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587ED0FB: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587ED0FE: jne 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED104: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED10A: movzx edx, word ptr [edx + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED111: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x587ED115: je 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED11B: cmp dx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587ED11F: je 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED125: cmp dx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587ED129: je 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED12F: mov edx, dword ptr [ecx + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED135: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ED139: mov edx, dword ptr [ecx + 0x21cc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED13F: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED144: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587ED148: mov edx, dword ptr [ecx + 0x21cc4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED14E: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587ED152: mov edx, dword ptr [ecx + 0x21cd4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED158: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587ED15C: mov ecx, dword ptr [ecx + 0x21cd8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED162: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587ED166: pop edi
        __asm _emit 0x5F
        // 0x587ED167: pop esi
        __asm _emit 0x5E
        // 0x587ED168: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587ED16B: push ebx
        __asm _emit 0x53
        // 0x587ED16C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587ED170: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ED172: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED177: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x587ED17B: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587ED17E: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587ED180: jne 0x587ed170
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x587ED182: lea esi, [ecx + 0x10bd4]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xD4
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ED188: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED18D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587ED190: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ED192: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED197: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x587ED19B: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587ED19E: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587ED1A0: jne 0x587ed190
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x587ED1A2: lea esi, [ecx + 0x10be8]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ED1A8: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED1AD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587ED1B0: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ED1B2: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED1B7: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x587ED1BB: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587ED1BE: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587ED1C0: jne 0x587ed1b0
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x587ED1C2: mov edx, dword ptr [ecx + 0x10bf8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ED1C8: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x587ED1CA: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x587ED1CE: movzx edx, word ptr [ecx + 0x21ccc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0xCC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED1D5: pop ebx
        __asm _emit 0x5B
        // 0x587ED1D6: cmp dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587ED1DA: je 0x587ed271
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED1E0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587ED1E3: jne 0x587ed207
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x587ED1E5: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED1EA: movzx eax, word ptr [eax + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED1F1: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587ED1F5: je 0x587ed271
        __asm _emit 0x74
        __asm _emit 0x7A
        // 0x587ED1F7: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587ED1FB: je 0x587ed271
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x587ED1FD: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587ED201: je 0x587ed271
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x587ED203: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587ED205: jmp 0x587ed25b
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x587ED207: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x587ED20B: je 0x587ed212
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587ED20D: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587ED210: jne 0x587ed271
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x587ED212: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED218: movzx eax, word ptr [edx + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED21F: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587ED223: je 0x587ed271
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x587ED225: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587ED229: je 0x587ed271
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587ED22B: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587ED22F: je 0x587ed271
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587ED231: mov eax, dword ptr [ecx + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED237: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587ED239: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587ED23D: mov eax, dword ptr [ecx + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED243: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587ED247: mov eax, dword ptr [ecx + 0x21cc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED24D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587ED251: mov eax, dword ptr [ecx + 0x21cc4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED257: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587ED25B: mov eax, dword ptr [ecx + 0x21cd4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED261: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587ED265: mov ecx, dword ptr [ecx + 0x21cd8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED26B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587ED26D: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587ED271: pop edi
        __asm _emit 0x5F
        // 0x587ED272: pop esi
        __asm _emit 0x5E
        // 0x587ED273: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
