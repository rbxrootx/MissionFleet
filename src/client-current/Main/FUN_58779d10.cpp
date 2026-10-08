// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 840 bytes in 1 exact ranges.
// Source symbol alias: FUN_58779d10.

// Ghidra body range 0x58779D10..0x5877A058; 840 mapped bytes.
extern "C" __declspec(naked) void FUN_58779d10_segment_00() {
    __asm {
        // 0x58779D10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58779D12: push 0x5897f2a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xF2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58779D17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779D1D: push eax
        __asm _emit 0x50
        // 0x58779D1E: push ecx
        __asm _emit 0x51
        // 0x58779D1F: push esi
        __asm _emit 0x56
        // 0x58779D20: push edi
        __asm _emit 0x57
        // 0x58779D21: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58779D26: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58779D28: push eax
        __asm _emit 0x50
        // 0x58779D29: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58779D2D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779D33: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58779D35: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58779D39: mov dword ptr [esi], 0x5899689c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x9C
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58779D3F: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58779D44: mov eax, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779D4A: mov ecx, dword ptr [eax + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779D50: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58779D52: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58779D56: cmp dword ptr [ecx + 0x84], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779D5C: jne 0x58779d67
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58779D5E: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58779D60: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58779D62: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58779D65: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779D67: mov ecx, dword ptr [esi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779D6D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779D6F: je 0x58779d7f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779D71: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779D73: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779D75: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779D77: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779D79: mov dword ptr [esi + 0x1dc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779D7F: mov ecx, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779D85: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779D87: je 0x58779d97
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779D89: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779D8B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779D8D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779D8F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779D91: mov dword ptr [esi + 0x1e4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779D97: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779D9D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779D9F: je 0x58779daf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779DA1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779DA3: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779DA5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779DA7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779DA9: mov dword ptr [esi + 0x210], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779DAF: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779DB5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779DB7: je 0x58779dc7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779DB9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779DBB: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779DBD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779DBF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779DC1: mov dword ptr [esi + 0x214], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779DC7: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779DCD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779DCF: je 0x58779ddf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779DD1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779DD3: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779DD5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779DD7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779DD9: mov dword ptr [esi + 0x20c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779DDF: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779DE5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779DE7: je 0x58779df7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779DE9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779DEB: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779DED: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779DEF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779DF1: mov dword ptr [esi + 0x1e0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779DF7: mov ecx, dword ptr [esi + 0x1e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779DFD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779DFF: je 0x58779e0f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779E01: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779E03: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779E05: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779E07: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779E09: mov dword ptr [esi + 0x1e8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E0F: mov ecx, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E15: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779E17: je 0x58779e27
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779E19: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779E1B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779E1D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779E1F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779E21: mov dword ptr [esi + 0x1fc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E27: mov ecx, dword ptr [esi + 0x1f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E2D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779E2F: je 0x58779e3f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779E31: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779E33: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779E35: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779E37: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779E39: mov dword ptr [esi + 0x1f4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E3F: mov ecx, dword ptr [esi + 0x1f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E45: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779E47: je 0x58779e57
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779E49: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779E4B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779E4D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779E4F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779E51: mov dword ptr [esi + 0x1f8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E57: mov ecx, dword ptr [esi + 0x1ec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E5D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779E5F: je 0x58779e6f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779E61: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779E63: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779E65: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779E67: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779E69: mov dword ptr [esi + 0x1ec], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E6F: mov ecx, dword ptr [esi + 0x1f0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E75: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779E77: je 0x58779e87
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779E79: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779E7B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779E7D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779E7F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779E81: mov dword ptr [esi + 0x1f0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E87: mov ecx, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E8D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779E8F: je 0x58779e9f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779E91: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779E93: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779E95: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779E97: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779E99: mov dword ptr [esi + 0x208], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779E9F: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779EA5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779EA7: je 0x58779eb7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779EA9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779EAB: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779EAD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779EAF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779EB1: mov dword ptr [esi + 0x204], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779EB7: mov ecx, dword ptr [esi + 0x200]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779EBD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779EBF: je 0x58779ecf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779EC1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779EC3: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779EC5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779EC7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779EC9: mov dword ptr [esi + 0x200], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779ECF: mov ecx, dword ptr [esi + 0x228]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779ED5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779ED7: je 0x58779ee7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779ED9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779EDB: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779EDD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779EDF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779EE1: mov dword ptr [esi + 0x228], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779EE7: mov ecx, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779EED: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779EEF: je 0x58779eff
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779EF1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779EF3: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779EF5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779EF7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779EF9: mov dword ptr [esi + 0x22c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779EFF: mov ecx, dword ptr [esi + 0x230]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F05: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779F07: je 0x58779f17
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779F09: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779F0B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779F0D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779F0F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779F11: mov dword ptr [esi + 0x230], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F17: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F1D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779F1F: je 0x58779f2f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779F21: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779F23: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779F25: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779F27: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779F29: mov dword ptr [esi + 0x220], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F2F: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F35: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779F37: je 0x58779f47
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779F39: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779F3B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779F3D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779F3F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779F41: mov dword ptr [esi + 0x23c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F47: mov ecx, dword ptr [esi + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F4D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779F4F: je 0x58779f5f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779F51: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779F53: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779F55: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779F57: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779F59: mov dword ptr [esi + 0x238], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F5F: mov ecx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F65: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779F67: je 0x58779f77
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779F69: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779F6B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779F6D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779F6F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779F71: mov dword ptr [esi + 0x1d0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F77: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F7D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779F7F: je 0x58779f8f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779F81: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779F83: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779F85: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779F87: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779F89: mov dword ptr [esi + 0x1d8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F8F: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779F95: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779F97: je 0x58779fa7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779F99: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779F9B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779F9D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779F9F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779FA1: mov dword ptr [esi + 0x260], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779FA7: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779FAD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779FAF: je 0x58779fbf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779FB1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779FB3: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779FB5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779FB7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779FB9: mov dword ptr [esi + 0x264], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779FBF: mov ecx, dword ptr [esi + 0x248]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779FC5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779FC7: je 0x58779fd7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779FC9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779FCB: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779FCD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779FCF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779FD1: mov dword ptr [esi + 0x248], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779FD7: mov ecx, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779FDD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779FDF: je 0x58779fef
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779FE1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779FE3: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779FE5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779FE7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58779FE9: mov dword ptr [esi + 0x26c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779FEF: mov ecx, dword ptr [esi + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779FF5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58779FF7: je 0x5877a007
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58779FF9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58779FFB: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58779FFD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779FFF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877A001: mov dword ptr [esi + 0x270], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A007: mov ecx, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A00D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5877A00F: je 0x5877a01f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5877A011: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877A013: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5877A015: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877A017: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877A019: mov dword ptr [esi + 0x274], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A01F: mov ecx, dword ptr [esi + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A025: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5877A027: je 0x5877a037
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5877A029: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877A02B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5877A02D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877A02F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877A031: mov dword ptr [esi + 0x278], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A037: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877A039: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877A041: call 0x589033e0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x93
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877A046: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877A04A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A051: pop ecx
        __asm _emit 0x59
        // 0x5877A052: pop edi
        __asm _emit 0x5F
        // 0x5877A053: pop esi
        __asm _emit 0x5E
        // 0x5877A054: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5877A057: ret
        __asm _emit 0xC3
    }
}
