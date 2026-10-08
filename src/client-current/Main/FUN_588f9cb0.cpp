// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 442 bytes in 4 exact ranges.
// Source symbol alias: FUN_588f9cb0.

// Ghidra body range 0x588F9CB0..0x588F9CC9; 25 mapped bytes.
extern "C" __declspec(naked) void FUN_588f9cb0_segment_00() {
    __asm {
        // 0x588F9CB0: push ebx
        __asm _emit 0x53
        // 0x588F9CB1: push esi
        __asm _emit 0x56
        // 0x588F9CB2: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F9CB6: mov edx, 0x589a21b0
        __asm _emit 0xBA
        __asm _emit 0xB0
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F9CBB: push edi
        __asm _emit 0x57
        // 0x588F9CBC: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588F9CBE: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9CC3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588F9CC5: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x588F9CC7: jmp 0x588f9cd0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588F9CD0..0x588F9D66; 150 mapped bytes.
extern "C" __declspec(naked) void FUN_588f9cb0_segment_01() {
    __asm {
        // 0x588F9CD0: lea ecx, [edi + 0x7ffffefe]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xFE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588F9CD6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F9CD8: je 0x588f9ceb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588F9CDA: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x588F9CDD: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588F9CDF: je 0x588f9ceb
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588F9CE1: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588F9CE3: inc eax
        __asm _emit 0x40
        // 0x588F9CE4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588F9CE7: jne 0x588f9cd0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588F9CE9: jmp 0x588f9cef
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588F9CEB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588F9CED: jne 0x588f9cf0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588F9CEF: dec eax
        __asm _emit 0x48
        // 0x588F9CF0: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9CF3: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F9CF7: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588F9CFA: ja 0x588f9e33
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9D00: jmp dword ptr [eax*4 + 0x588f9e84]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588F9D07: push 0x589a21a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F9D0C: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F9D12: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F9D14: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F9D17: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9D1C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F9D1E: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x588F9D20: lea eax, [edi + 0x7ffffefe]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xFE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588F9D26: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F9D28: je 0x588f9e73
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9D2E: mov al, byte ptr [edx + ecx]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x0A
        // 0x588F9D31: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588F9D33: je 0x588f9e73
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9D39: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x588F9D3B: inc ecx
        __asm _emit 0x41
        // 0x588F9D3C: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588F9D3F: jne 0x588f9d20
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x588F9D41: pop edi
        __asm _emit 0x5F
        // 0x588F9D42: dec ecx
        __asm _emit 0x49
        // 0x588F9D43: pop esi
        __asm _emit 0x5E
        // 0x588F9D44: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F9D47: pop ebx
        __asm _emit 0x5B
        // 0x588F9D48: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F9D4B: push 0x589a2184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F9D50: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F9D56: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F9D58: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F9D5B: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9D60: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F9D62: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x588F9D64: jmp 0x588f9d70
        __asm _emit 0xEB
        __asm _emit 0x0A
    }
}

// Ghidra body range 0x588F9D70..0x588F9E0A; 154 mapped bytes.
extern "C" __declspec(naked) void FUN_588f9cb0_segment_02() {
    __asm {
        // 0x588F9D70: lea eax, [edi + 0x7ffffefe]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xFE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588F9D76: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F9D78: je 0x588f9e73
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9D7E: mov al, byte ptr [edx + ecx]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x0A
        // 0x588F9D81: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588F9D83: je 0x588f9e73
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9D89: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x588F9D8B: inc ecx
        __asm _emit 0x41
        // 0x588F9D8C: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588F9D8F: jne 0x588f9d70
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x588F9D91: pop edi
        __asm _emit 0x5F
        // 0x588F9D92: dec ecx
        __asm _emit 0x49
        // 0x588F9D93: pop esi
        __asm _emit 0x5E
        // 0x588F9D94: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F9D97: pop ebx
        __asm _emit 0x5B
        // 0x588F9D98: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F9D9B: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F9D9F: mov edx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F9DA5: mov eax, dword ptr [edx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9DAB: push ecx
        __asm _emit 0x51
        // 0x588F9DAC: push eax
        __asm _emit 0x50
        // 0x588F9DAD: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588F9DAF: call 0x588f9ad0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F9DB4: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588F9DB7: je 0x588f9e7b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9DBD: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588F9DC0: js 0x588f9e7b
        __asm _emit 0x0F
        __asm _emit 0x88
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9DC6: cmp eax, dword ptr [ebx + 0x60]
        __asm _emit 0x3B
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x588F9DC9: jge 0x588f9e7b
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9DCF: push 0x589a216c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F9DD4: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F9DDA: push eax
        __asm _emit 0x50
        // 0x588F9DDB: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9DE0: push esi
        __asm _emit 0x56
        // 0x588F9DE1: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x1C
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588F9DE6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F9DE9: pop edi
        __asm _emit 0x5F
        // 0x588F9DEA: pop esi
        __asm _emit 0x5E
        // 0x588F9DEB: pop ebx
        __asm _emit 0x5B
        // 0x588F9DEC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F9DEF: push 0x589a2158
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F9DF4: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F9DFA: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F9DFC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F9DFF: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9E04: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F9E06: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x588F9E08: jmp 0x588f9e10
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588F9E10..0x588F9E81; 113 mapped bytes.
extern "C" __declspec(naked) void FUN_588f9cb0_segment_03() {
    __asm {
        // 0x588F9E10: lea eax, [edi + 0x7ffffefe]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xFE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588F9E16: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F9E18: je 0x588f9e73
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x588F9E1A: mov al, byte ptr [edx + ecx]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x0A
        // 0x588F9E1D: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588F9E1F: je 0x588f9e73
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x588F9E21: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x588F9E23: inc ecx
        __asm _emit 0x41
        // 0x588F9E24: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588F9E27: jne 0x588f9e10
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588F9E29: pop edi
        __asm _emit 0x5F
        // 0x588F9E2A: dec ecx
        __asm _emit 0x49
        // 0x588F9E2B: pop esi
        __asm _emit 0x5E
        // 0x588F9E2C: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F9E2F: pop ebx
        __asm _emit 0x5B
        // 0x588F9E30: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F9E33: push 0x589a21a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F9E38: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F9E3E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F9E40: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F9E43: mov edi, 0x100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9E48: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F9E4A: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x588F9E4C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588F9E50: lea eax, [edi + 0x7ffffefe]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xFE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588F9E56: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F9E58: je 0x588f9e73
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588F9E5A: mov al, byte ptr [edx + ecx]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x0A
        // 0x588F9E5D: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588F9E5F: je 0x588f9e73
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588F9E61: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x588F9E63: inc ecx
        __asm _emit 0x41
        // 0x588F9E64: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588F9E67: jne 0x588f9e50
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588F9E69: pop edi
        __asm _emit 0x5F
        // 0x588F9E6A: dec ecx
        __asm _emit 0x49
        // 0x588F9E6B: pop esi
        __asm _emit 0x5E
        // 0x588F9E6C: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F9E6F: pop ebx
        __asm _emit 0x5B
        // 0x588F9E70: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F9E73: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588F9E75: jne 0x588f9e78
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588F9E77: dec ecx
        __asm _emit 0x49
        // 0x588F9E78: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F9E7B: pop edi
        __asm _emit 0x5F
        // 0x588F9E7C: pop esi
        __asm _emit 0x5E
        // 0x588F9E7D: pop ebx
        __asm _emit 0x5B
        // 0x588F9E7E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
