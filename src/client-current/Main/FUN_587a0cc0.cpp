// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 655 bytes in 2 exact ranges.
// Source symbol alias: FUN_587a0cc0.

// Ghidra body range 0x587A0CC0..0x587A0E5A; 410 mapped bytes.
extern "C" __declspec(naked) void FUN_587a0cc0_segment_00() {
    __asm {
        // 0x587A0CC0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A0CC2: push 0x5897e0a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xE0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x587A0CC7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0CCD: push eax
        __asm _emit 0x50
        // 0x587A0CCE: sub esp, 0x48
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x48
        // 0x587A0CD1: push ebx
        __asm _emit 0x53
        // 0x587A0CD2: push ebp
        __asm _emit 0x55
        // 0x587A0CD3: push esi
        __asm _emit 0x56
        // 0x587A0CD4: push edi
        __asm _emit 0x57
        // 0x587A0CD5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A0CDA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A0CDC: push eax
        __asm _emit 0x50
        // 0x587A0CDD: lea eax, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587A0CE1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0CE7: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587A0CE9: mov eax, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x587A0CED: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0CF1: je 0x587a0d3f
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x587A0CF3: push 0x1b
        __asm _emit 0x6A
        __asm _emit 0x1B
        // 0x587A0CF5: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A0CF7: push 0x5898cee0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A0CFC: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A0D00: mov dword ptr [esp + 0x38], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0D08: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587A0D0C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587A0D11: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x42
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587A0D16: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A0D1A: push eax
        __asm _emit 0x50
        // 0x587A0D1B: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587A0D1F: mov dword ptr [esp + 0x68], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587A0D23: call 0x58735360
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587A0D28: push 0x589ac270
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xC2
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x587A0D2D: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587A0D31: push ecx
        __asm _emit 0x51
        // 0x587A0D32: mov dword ptr [esp + 0x3c], 0x5898cec4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xC4
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A0D3A: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xBF
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A0D3F: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587A0D41: lea ecx, [esp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587A0D45: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A0D49: call 0x587a09e0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A0D4E: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587A0D50: cmp byte ptr [ecx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0D54: je 0x587a0d5b
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A0D56: mov edi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x587A0D59: jmp 0x587a0d76
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x587A0D5B: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x587A0D5E: cmp byte ptr [edx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0D62: je 0x587a0d68
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A0D64: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587A0D66: jmp 0x587a0d76
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587A0D68: mov eax, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x587A0D6C: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587A0D6F: lea edx, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587A0D72: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587A0D74: jne 0x587a0de1
        __asm _emit 0x75
        __asm _emit 0x6B
        // 0x587A0D76: cmp byte ptr [edi + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0D7A: mov esi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x587A0D7D: jne 0x587a0d82
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587A0D7F: mov dword ptr [edi + 4], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587A0D82: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587A0D85: cmp dword ptr [eax + 4], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587A0D88: jne 0x587a0d8f
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587A0D8A: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587A0D8D: jmp 0x587a0d9a
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587A0D8F: cmp dword ptr [esi], ebx
        __asm _emit 0x39
        __asm _emit 0x1E
        // 0x587A0D91: jne 0x587a0d97
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587A0D93: mov dword ptr [esi], edi
        __asm _emit 0x89
        __asm _emit 0x3E
        // 0x587A0D95: jmp 0x587a0d9a
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587A0D97: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587A0D9A: mov ebx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x587A0D9D: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587A0D9F: cmp eax, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A0DA3: jne 0x587a0dba
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587A0DA5: cmp byte ptr [edi + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0DA9: je 0x587a0daf
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A0DAB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A0DAD: jmp 0x587a0db8
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x587A0DAF: push edi
        __asm _emit 0x57
        // 0x587A0DB0: call 0x587a0930
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A0DB5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A0DB8: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x587A0DBA: mov ebx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x587A0DBD: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A0DC1: cmp dword ptr [ebx + 8], ecx
        __asm _emit 0x39
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x587A0DC4: jne 0x587a0e3d
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x587A0DC6: cmp byte ptr [edi + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0DCA: je 0x587a0dd3
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587A0DCC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A0DCE: mov dword ptr [ebx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587A0DD1: jmp 0x587a0e3d
        __asm _emit 0xEB
        __asm _emit 0x6A
        // 0x587A0DD3: push edi
        __asm _emit 0x57
        // 0x587A0DD4: call 0x587a0910
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A0DD9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A0DDC: mov dword ptr [ebx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587A0DDF: jmp 0x587a0e3d
        __asm _emit 0xEB
        __asm _emit 0x5C
        // 0x587A0DE1: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A0DE4: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587A0DE6: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587A0DE8: cmp eax, dword ptr [ebx + 8]
        __asm _emit 0x3B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587A0DEB: jne 0x587a0df1
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587A0DED: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A0DEF: jmp 0x587a0e0a
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x587A0DF1: cmp byte ptr [edi + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0DF5: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587A0DF8: jne 0x587a0dfd
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587A0DFA: mov dword ptr [edi + 4], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587A0DFD: mov dword ptr [esi], edi
        __asm _emit 0x89
        __asm _emit 0x3E
        // 0x587A0DFF: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x587A0E02: mov dword ptr [edx], ecx
        __asm _emit 0x89
        __asm _emit 0x0A
        // 0x587A0E04: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x587A0E07: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A0E0A: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587A0E0D: cmp dword ptr [ecx + 4], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x587A0E10: jne 0x587a0e17
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587A0E12: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A0E15: jmp 0x587a0e25
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587A0E17: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587A0E1A: cmp dword ptr [ecx], ebx
        __asm _emit 0x39
        __asm _emit 0x19
        // 0x587A0E1C: jne 0x587a0e22
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587A0E1E: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x587A0E20: jmp 0x587a0e25
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587A0E22: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587A0E25: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587A0E28: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A0E2B: lea ecx, [ebx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x587A0E2E: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x587A0E31: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587A0E33: je 0x587a0e3d
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587A0E35: mov bl, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x19
        // 0x587A0E37: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587A0E39: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x587A0E3B: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x587A0E3D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A0E41: mov bl, 1
        __asm _emit 0xB3
        __asm _emit 0x01
        // 0x587A0E43: cmp byte ptr [edx + 0x14], bl
        __asm _emit 0x38
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x587A0E46: jne 0x587a0f4b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0E4C: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587A0E4F: cmp edi, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587A0E52: je 0x587a0f48
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0E58: jmp 0x587a0e60
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587A0E60..0x587A0F55; 245 mapped bytes.
extern "C" __declspec(naked) void FUN_587a0cc0_segment_01() {
    __asm {
        // 0x587A0E60: cmp byte ptr [edi + 0x14], bl
        __asm _emit 0x38
        __asm _emit 0x5F
        __asm _emit 0x14
        // 0x587A0E63: jne 0x587a0f48
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0E69: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A0E6B: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587A0E6D: jne 0x587a0ed4
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x587A0E6F: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587A0E72: cmp byte ptr [eax + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A0E76: jne 0x587a0e8a
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587A0E78: mov byte ptr [eax + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x587A0E7B: push esi
        __asm _emit 0x56
        // 0x587A0E7C: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A0E7E: mov byte ptr [esi + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A0E82: call 0x58747980
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x6A
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587A0E87: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587A0E8A: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0E8E: jne 0x587a0f04
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x587A0E90: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587A0E92: cmp byte ptr [ecx + 0x14], bl
        __asm _emit 0x38
        __asm _emit 0x59
        __asm _emit 0x14
        // 0x587A0E95: jne 0x587a0e9f
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A0E97: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587A0E9A: cmp byte ptr [edx + 0x14], bl
        __asm _emit 0x38
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x587A0E9D: je 0x587a0f00
        __asm _emit 0x74
        __asm _emit 0x61
        // 0x587A0E9F: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A0EA2: cmp byte ptr [ecx + 0x14], bl
        __asm _emit 0x38
        __asm _emit 0x59
        __asm _emit 0x14
        // 0x587A0EA5: jne 0x587a0ebb
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587A0EA7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587A0EA9: mov byte ptr [edx + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x587A0EAC: push eax
        __asm _emit 0x50
        // 0x587A0EAD: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A0EAF: mov byte ptr [eax + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A0EB3: call 0x58743720
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587A0EB8: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587A0EBB: mov cl, byte ptr [esi + 0x14]
        __asm _emit 0x8A
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587A0EBE: mov byte ptr [eax + 0x14], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587A0EC1: mov byte ptr [esi + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x587A0EC4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587A0EC7: push esi
        __asm _emit 0x56
        // 0x587A0EC8: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A0ECA: mov byte ptr [edx + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x587A0ECD: call 0x58747980
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x6A
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587A0ED2: jmp 0x587a0f48
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x587A0ED4: cmp byte ptr [eax + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A0ED8: jne 0x587a0eeb
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587A0EDA: mov byte ptr [eax + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x587A0EDD: push esi
        __asm _emit 0x56
        // 0x587A0EDE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A0EE0: mov byte ptr [esi + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A0EE4: call 0x58743720
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x28
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587A0EE9: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A0EEB: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0EEF: jne 0x587a0f04
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587A0EF1: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A0EF4: cmp byte ptr [ecx + 0x14], bl
        __asm _emit 0x38
        __asm _emit 0x59
        __asm _emit 0x14
        // 0x587A0EF7: jne 0x587a0f17
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587A0EF9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587A0EFB: cmp byte ptr [edx + 0x14], bl
        __asm _emit 0x38
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x587A0EFE: jne 0x587a0f17
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587A0F00: mov byte ptr [eax + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A0F04: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587A0F07: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x587A0F09: mov esi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x587A0F0C: cmp edi, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587A0F0F: jne 0x587a0e60
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A0F15: jmp 0x587a0f48
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x587A0F17: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587A0F19: cmp byte ptr [ecx + 0x14], bl
        __asm _emit 0x38
        __asm _emit 0x59
        __asm _emit 0x14
        // 0x587A0F1C: jne 0x587a0f32
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587A0F1E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587A0F21: mov byte ptr [edx + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x587A0F24: push eax
        __asm _emit 0x50
        // 0x587A0F25: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A0F27: mov byte ptr [eax + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A0F2B: call 0x58747980
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x6A
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587A0F30: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A0F32: mov cl, byte ptr [esi + 0x14]
        __asm _emit 0x8A
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587A0F35: mov byte ptr [eax + 0x14], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587A0F38: mov byte ptr [esi + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x587A0F3B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587A0F3D: push esi
        __asm _emit 0x56
        // 0x587A0F3E: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A0F40: mov byte ptr [edx + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x587A0F43: call 0x58743720
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x27
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587A0F48: mov byte ptr [edi + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5F
        __asm _emit 0x14
        // 0x587A0F4B: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A0F4F: push eax
        __asm _emit 0x50
        // 0x587A0F50: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xBC
        __asm _emit 0x1D
        __asm _emit 0x00
    }
}
