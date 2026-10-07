// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 279 bytes in 1 exact ranges.
// Source symbol alias: FUN_588429f0.

// Ghidra body range 0x588429F0..0x58842B07; 279 mapped bytes.
extern "C" __declspec(naked) void FUN_588429f0_segment_00() {
    __asm {
        // 0x588429F0: push esi
        __asm _emit 0x56
        // 0x588429F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588429F3: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588429F9: mov dword ptr [eax + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A00: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A06: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58842A0A: push edi
        __asm _emit 0x57
        // 0x58842A0B: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A10: je 0x58842a15
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58842A12: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58842A15: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A1B: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58842A1F: je 0x58842a24
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58842A21: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58842A24: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A2A: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58842A2E: je 0x58842a33
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58842A30: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58842A33: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A39: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58842A3D: je 0x58842a42
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58842A3F: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58842A42: mov ecx, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A48: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58842A4A: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58842A4D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58842A4F: mov ecx, dword ptr [esi + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A55: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58842A57: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58842A5A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58842A5C: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A62: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58842A64: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58842A67: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58842A69: mov ecx, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A6F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58842A71: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58842A74: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58842A76: mov ecx, dword ptr [esi + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A7C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58842A7E: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58842A81: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58842A83: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A89: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58842A8B: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58842A8E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58842A90: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842A96: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58842A98: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58842A9B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58842A9D: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842AA3: call 0x5882f0b0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xC6
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58842AA8: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842AAE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58842AB0: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58842AB2: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58842AB5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58842AB7: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842ABD: push edi
        __asm _emit 0x57
        // 0x58842ABE: call 0x5882b9f0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x8F
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58842AC3: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842AC9: call 0x5882c7e0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x9D
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58842ACE: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842AD4: call 0x5882c940
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x9E
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58842AD9: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842ADF: call 0x5882ca80
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x9F
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58842AE4: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842AEA: call 0x5882cbc0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xA0
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58842AEF: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842AF5: call 0x5882eaa0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58842AFA: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842B00: pop edi
        __asm _emit 0x5F
        // 0x58842B01: pop esi
        __asm _emit 0x5E
        // 0x58842B02: jmp 0x5882d160
        __asm _emit 0xE9
        __asm _emit 0x59
        __asm _emit 0xA6
        __asm _emit 0xFE
        __asm _emit 0xFF
    }
}
