// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 507 bytes in 7 exact ranges.
// Source symbol alias: FUN_5876ca70.

// Ghidra body range 0x5876CA70..0x5876CA99; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ca70_segment_00() {
    __asm {
        // 0x5876CA70: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5876CA75: dec eax
        __asm _emit 0x48
        // 0x5876CA76: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5876CA79: ja 0x5876cc99
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x1A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CA7F: push esi
        __asm _emit 0x56
        // 0x5876CA80: jmp dword ptr [eax*4 + 0x5876cc9c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0xCC
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x5876CA87: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CA8B: mov esi, 0x58991de8
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876CA90: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CA95: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5876CA97: jmp 0x5876caa0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5876CAA0..0x5876CAD8; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ca70_segment_01() {
    __asm {
        // 0x5876CAA0: lea ecx, [edx + 0x7ffffff6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876CAA6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876CAA8: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CAAE: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x5876CAB1: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5876CAB3: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CAB9: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5876CABB: inc eax
        __asm _emit 0x40
        // 0x5876CABC: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876CABF: jne 0x5876caa0
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5876CAC1: dec eax
        __asm _emit 0x48
        // 0x5876CAC2: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x5876CAC4: pop esi
        __asm _emit 0x5E
        // 0x5876CAC5: ret
        __asm _emit 0xC3
        // 0x5876CAC6: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CACA: mov esi, 0x58991de4
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x1D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876CACF: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CAD4: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5876CAD6: jmp 0x5876cae0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5876CAE0..0x5876CB18; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ca70_segment_02() {
    __asm {
        // 0x5876CAE0: lea ecx, [edx + 0x7ffffff6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876CAE6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876CAE8: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CAEE: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x5876CAF1: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5876CAF3: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CAF9: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5876CAFB: inc eax
        __asm _emit 0x40
        // 0x5876CAFC: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876CAFF: jne 0x5876cae0
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5876CB01: dec eax
        __asm _emit 0x48
        // 0x5876CB02: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x5876CB04: pop esi
        __asm _emit 0x5E
        // 0x5876CB05: ret
        __asm _emit 0xC3
        // 0x5876CB06: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CB0A: mov esi, 0x58991de0
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x1D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876CB0F: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CB14: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5876CB16: jmp 0x5876cb20
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5876CB20..0x5876CB58; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ca70_segment_03() {
    __asm {
        // 0x5876CB20: lea ecx, [edx + 0x7ffffff6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876CB26: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876CB28: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CB2E: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x5876CB31: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5876CB33: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CB39: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5876CB3B: inc eax
        __asm _emit 0x40
        // 0x5876CB3C: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876CB3F: jne 0x5876cb20
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5876CB41: dec eax
        __asm _emit 0x48
        // 0x5876CB42: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x5876CB44: pop esi
        __asm _emit 0x5E
        // 0x5876CB45: ret
        __asm _emit 0xC3
        // 0x5876CB46: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CB4A: mov esi, 0x58991ddc
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x1D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876CB4F: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CB54: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5876CB56: jmp 0x5876cb60
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5876CB60..0x5876CB98; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ca70_segment_04() {
    __asm {
        // 0x5876CB60: lea ecx, [edx + 0x7ffffff6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876CB66: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876CB68: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CB6E: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x5876CB71: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5876CB73: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CB79: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5876CB7B: inc eax
        __asm _emit 0x40
        // 0x5876CB7C: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876CB7F: jne 0x5876cb60
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5876CB81: dec eax
        __asm _emit 0x48
        // 0x5876CB82: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x5876CB84: pop esi
        __asm _emit 0x5E
        // 0x5876CB85: ret
        __asm _emit 0xC3
        // 0x5876CB86: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CB8A: mov esi, 0x58995b1c
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x5B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876CB8F: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CB94: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5876CB96: jmp 0x5876cba0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5876CBA0..0x5876CBD8; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ca70_segment_05() {
    __asm {
        // 0x5876CBA0: lea ecx, [edx + 0x7ffffff6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876CBA6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876CBA8: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CBAE: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x5876CBB1: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5876CBB3: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CBB9: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5876CBBB: inc eax
        __asm _emit 0x40
        // 0x5876CBBC: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876CBBF: jne 0x5876cba0
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5876CBC1: dec eax
        __asm _emit 0x48
        // 0x5876CBC2: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x5876CBC4: pop esi
        __asm _emit 0x5E
        // 0x5876CBC5: ret
        __asm _emit 0xC3
        // 0x5876CBC6: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CBCA: mov esi, 0x58991dd4
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x1D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876CBCF: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CBD4: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5876CBD6: jmp 0x5876cbe0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5876CBE0..0x5876CC9A; 186 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ca70_segment_06() {
    __asm {
        // 0x5876CBE0: lea ecx, [edx + 0x7ffffff6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876CBE6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876CBE8: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CBEE: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x5876CBF1: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5876CBF3: je 0x5876cc90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CBF9: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5876CBFB: inc eax
        __asm _emit 0x40
        // 0x5876CBFC: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876CBFF: jne 0x5876cbe0
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5876CC01: dec eax
        __asm _emit 0x48
        // 0x5876CC02: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x5876CC04: pop esi
        __asm _emit 0x5E
        // 0x5876CC05: ret
        __asm _emit 0xC3
        // 0x5876CC06: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CC0A: mov esi, 0x58991dd0
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x1D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876CC0F: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CC14: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5876CC16: lea ecx, [edx + 0x7ffffff6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876CC1C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876CC1E: je 0x5876cc90
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x5876CC20: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x5876CC23: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5876CC25: je 0x5876cc90
        __asm _emit 0x74
        __asm _emit 0x69
        // 0x5876CC27: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5876CC29: inc eax
        __asm _emit 0x40
        // 0x5876CC2A: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876CC2D: jne 0x5876cc16
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876CC2F: dec eax
        __asm _emit 0x48
        // 0x5876CC30: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x5876CC32: pop esi
        __asm _emit 0x5E
        // 0x5876CC33: ret
        __asm _emit 0xC3
        // 0x5876CC34: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CC38: mov esi, 0x58991dcc
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x1D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876CC3D: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CC42: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5876CC44: lea ecx, [edx + 0x7ffffff6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876CC4A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876CC4C: je 0x5876cc90
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5876CC4E: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x5876CC51: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5876CC53: je 0x5876cc90
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x5876CC55: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5876CC57: inc eax
        __asm _emit 0x40
        // 0x5876CC58: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876CC5B: jne 0x5876cc44
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876CC5D: dec eax
        __asm _emit 0x48
        // 0x5876CC5E: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x5876CC60: pop esi
        __asm _emit 0x5E
        // 0x5876CC61: ret
        __asm _emit 0xC3
        // 0x5876CC62: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CC66: mov esi, 0x58995b18
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x5B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876CC6B: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CC70: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5876CC72: lea ecx, [edx + 0x7ffffff6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876CC78: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876CC7A: je 0x5876cc90
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5876CC7C: mov cl, byte ptr [eax + esi]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x30
        // 0x5876CC7F: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5876CC81: je 0x5876cc90
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5876CC83: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5876CC85: inc eax
        __asm _emit 0x40
        // 0x5876CC86: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876CC89: jne 0x5876cc72
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876CC8B: dec eax
        __asm _emit 0x48
        // 0x5876CC8C: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x5876CC8E: pop esi
        __asm _emit 0x5E
        // 0x5876CC8F: ret
        __asm _emit 0xC3
        // 0x5876CC90: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876CC92: jne 0x5876cc95
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5876CC94: dec eax
        __asm _emit 0x48
        // 0x5876CC95: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CC98: pop esi
        __asm _emit 0x5E
        // 0x5876CC99: ret
        __asm _emit 0xC3
    }
}
