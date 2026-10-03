// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58886CD0 .. +0x1BB bytes.
extern "C" __declspec(naked) void FUN_58886cd0() {
    __asm {
        // 0x58886CD0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58886CD2: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58886CD7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886CDD: push eax
        __asm _emit 0x50
        // 0x58886CDE: push ecx
        __asm _emit 0x51
        // 0x58886CDF: push ebx
        __asm _emit 0x53
        // 0x58886CE0: push ebp
        __asm _emit 0x55
        // 0x58886CE1: push esi
        __asm _emit 0x56
        // 0x58886CE2: push edi
        __asm _emit 0x57
        // 0x58886CE3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58886CE8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58886CEA: push eax
        __asm _emit 0x50
        // 0x58886CEB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58886CEF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886CF5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58886CF7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58886CFB: mov dword ptr [esi], 0x5899f9bc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xBC
        __asm _emit 0xF9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58886D01: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58886D04: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58886D06: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58886D0A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886D0C: je 0x58886d19
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58886D0E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886D10: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886D12: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886D14: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886D16: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x58886D19: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58886D1C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886D1E: je 0x58886d2b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58886D20: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886D22: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886D24: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886D26: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886D28: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x58886D2B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58886D2E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886D30: je 0x58886d3d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58886D32: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886D34: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886D36: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886D38: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886D3A: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x58886D3D: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58886D40: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886D42: je 0x58886d4f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58886D44: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886D46: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886D48: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886D4A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886D4C: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x58886D4F: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58886D52: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886D54: je 0x58886d61
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58886D56: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886D58: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886D5A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886D5C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886D5E: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x58886D61: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58886D64: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886D66: je 0x58886d73
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58886D68: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886D6A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886D6C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886D6E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886D70: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x58886D73: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886D79: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886D7B: je 0x58886d8b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58886D7D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886D7F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886D81: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886D83: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886D85: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886D8B: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886D91: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886D93: je 0x58886da3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58886D95: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886D97: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886D99: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886D9B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886D9D: mov dword ptr [esi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886DA3: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886DA9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886DAB: je 0x58886dbb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58886DAD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886DAF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886DB1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886DB3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886DB5: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886DBB: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886DC1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886DC3: je 0x58886dd3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58886DC5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886DC7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886DC9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886DCB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886DCD: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886DD3: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886DD9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886DDB: je 0x58886deb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58886DDD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886DDF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886DE1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886DE3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886DE5: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886DEB: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886DF1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886DF3: je 0x58886e03
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58886DF5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886DF7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886DF9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886DFB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886DFD: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886E03: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886E09: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886E0B: je 0x58886e1b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58886E0D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886E0F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886E11: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886E13: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886E15: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886E1B: lea edi, [esi + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886E21: mov ebp, 8
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886E26: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58886E28: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886E2A: je 0x58886e36
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58886E2C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886E2E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886E30: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886E32: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886E34: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58886E36: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58886E39: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58886E3C: jne 0x58886e26
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58886E3E: lea edi, [esi + 0xbc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886E44: mov ebp, 9
        __asm _emit 0xBD
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886E49: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886E50: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58886E52: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58886E54: je 0x58886e60
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58886E56: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58886E58: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58886E5A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58886E5C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58886E5E: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58886E60: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58886E63: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58886E66: jne 0x58886e50
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58886E68: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58886E6A: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886E72: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xBD
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58886E77: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58886E7B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886E82: pop ecx
        __asm _emit 0x59
        // 0x58886E83: pop edi
        __asm _emit 0x5F
        // 0x58886E84: pop esi
        __asm _emit 0x5E
        // 0x58886E85: pop ebp
        __asm _emit 0x5D
        // 0x58886E86: pop ebx
        __asm _emit 0x5B
        // 0x58886E87: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58886E8A: ret
        __asm _emit 0xC3
    }
}
