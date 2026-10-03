// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874FEF0 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_5874fef0() {
    __asm {
        // 0x5874FEF0: push esi
        __asm _emit 0x56
        // 0x5874FEF1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874FEF3: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5874FEF6: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5874FEF9: jne 0x5874ff07
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5874FEFB: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5874FEFE: mov dword ptr [eax + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FF05: jmp 0x5874ff5b
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x5874FF07: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5874FF0A: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FF10: jle 0x5874ff27
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5874FF12: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FF14: jl 0x5874ff27
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x5874FF16: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FF1C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874FF1E: je 0x5874ff27
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5874FF20: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5874FF23: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5874FF25: jmp 0x5874ff29
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874FF27: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874FF29: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5874FF2C: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5874FF2F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FF31: je 0x5874ff5b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874FF33: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5874FF36: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5874FF39: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5874FF3C: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5874FF3F: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5874FF42: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874FF44: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5874FF47: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5874FF49: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5874FF4C: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5874FF4F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874FF52: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5874FF55: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874FF58: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5874FF5B: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FF61: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5874FF64: jne 0x5874ff72
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5874FF66: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5874FF69: mov dword ptr [ecx + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FF70: jmp 0x5874ffc6
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x5874FF72: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5874FF75: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FF7B: jle 0x5874ff92
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5874FF7D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FF7F: jl 0x5874ff92
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x5874FF81: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FF87: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874FF89: je 0x5874ff92
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5874FF8B: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5874FF8E: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5874FF90: jmp 0x5874ff94
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874FF92: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874FF94: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5874FF97: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5874FF9A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FF9C: je 0x5874ffc6
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874FF9E: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5874FFA1: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5874FFA4: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5874FFA7: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5874FFAA: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5874FFAD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874FFAF: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5874FFB2: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5874FFB4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5874FFB7: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5874FFBA: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874FFBD: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5874FFC0: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874FFC3: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5874FFC6: cmp dword ptr [esi + 0xb4], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5874FFCD: je 0x5874ffe3
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5874FFCF: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5874FFD2: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FFD9: mov edx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x5874FFDC: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FFE3: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5874FFE6: mov dword ptr [esi + 0x9c], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FFF0: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874FFF5: push eax
        __asm _emit 0x50
        // 0x5874FFF6: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x79
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874FFFB: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5874FFFE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58750000: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58750003: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58750005: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58750007: pop esi
        __asm _emit 0x5E
        // 0x58750008: ret
        __asm _emit 0xC3
    }
}
