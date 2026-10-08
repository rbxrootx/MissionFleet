// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2126 bytes in 2 exact ranges.
// Source symbol alias: FUN_58832cf0.

// Ghidra body range 0x58832CF0..0x58832DAD; 189 mapped bytes.
extern "C" __declspec(naked) void FUN_58832cf0_segment_00() {
    __asm {
        // 0x58832CF0: push ecx
        __asm _emit 0x51
        // 0x58832CF1: push ebx
        __asm _emit 0x53
        // 0x58832CF2: push esi
        __asm _emit 0x56
        // 0x58832CF3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58832CF5: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58832CF9: push edi
        __asm _emit 0x57
        // 0x58832CFA: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x58832CFC: je 0x58833537
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832D02: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58832D05: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58832D09: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58832D0B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58832D0D: je 0x58832d35
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58832D0F: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x58832D12: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58832D14: je 0x58832d2c
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58832D16: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58832D18: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58832D1A: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58832D1D: push edi
        __asm _emit 0x57
        // 0x58832D1E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58832D20: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58832D23: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58832D26: je 0x58832d35
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58832D28: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58832D2A: jne 0x58832d16
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58832D2C: pop edi
        __asm _emit 0x5F
        // 0x58832D2D: pop esi
        __asm _emit 0x5E
        // 0x58832D2E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58832D30: pop ebx
        __asm _emit 0x5B
        // 0x58832D31: pop ecx
        __asm _emit 0x59
        // 0x58832D32: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58832D35: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58832D38: push ebp
        __asm _emit 0x55
        // 0x58832D39: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832D3E: je 0x58832ef1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832D44: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832D49: jne 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832D4F: lea eax, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832D55: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58832D57: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58832D5B: mov dword ptr [esp + 0x10], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832D63: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832D69: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x58832D6C: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58832D6F: push edi
        __asm _emit 0x57
        // 0x58832D70: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xE7
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58832D75: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58832D77: je 0x58832e25
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832D7D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58832D80: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832D85: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58832D87: jne 0x58832d91
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58832D89: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58832D8C: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832D91: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x58832D94: cmp dword ptr [edx + 0x88], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832D9A: jle 0x58832ed0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832DA0: lea edi, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832DA6: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832DAB: jmp 0x58832db0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58832DB0..0x58833541; 1937 mapped bytes.
extern "C" __declspec(naked) void FUN_58832cf0_segment_01() {
    __asm {
        // 0x58832DB0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832DB2: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58832DB4: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x5A
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832DB9: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58832DBC: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58832DBF: jne 0x58832db0
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x58832DC1: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832DC7: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xCB
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58832DCC: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832DD2: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58832DD7: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xEF
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58832DDC: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832DE2: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832DE7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58832DEB: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832DF1: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58832DF3: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58832DF7: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832DFD: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58832E00: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E06: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x58832E09: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58832E0C: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58832E11: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E17: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E1C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58832E20: jmp 0x58832ed0
        __asm _emit 0xE9
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E25: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58832E28: push edi
        __asm _emit 0x57
        // 0x58832E29: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xE7
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58832E2E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58832E30: je 0x58832ed0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E36: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E3C: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x53
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832E41: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58832E43: jne 0x58832e50
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58832E45: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E4B: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x53
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832E50: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E56: cmp dword ptr [eax + 0x88], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E5C: jle 0x58832ed0
        __asm _emit 0x7E
        __asm _emit 0x72
        // 0x58832E5E: lea edi, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x58832E61: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E66: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832E68: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58832E6A: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x59
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832E6F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58832E72: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58832E75: jne 0x58832e66
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x58832E77: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58832E7A: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xCA
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58832E7F: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58832E82: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58832E87: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xEE
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58832E8C: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E92: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832E97: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58832E9B: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832EA1: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58832EA3: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58832EA7: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832EAD: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58832EB0: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832EB6: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x58832EB9: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58832EBC: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832EC1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58832EC5: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832ECB: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58832ED0: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58832ED4: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58832ED7: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x58832EDC: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58832EE0: jne 0x58832d63
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58832EE6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58832EE9: pop ebp
        __asm _emit 0x5D
        // 0x58832EEA: pop edi
        __asm _emit 0x5F
        // 0x58832EEB: pop esi
        __asm _emit 0x5E
        // 0x58832EEC: pop ebx
        __asm _emit 0x5B
        // 0x58832EED: pop ecx
        __asm _emit 0x59
        // 0x58832EEE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58832EF1: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58832EF4: sub eax, 9
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x09
        // 0x58832EF7: je 0x5883341a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1D
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832EFD: sub eax, 0x1d
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x1D
        // 0x58832F00: je 0x588331af
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832F06: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x58832F09: jne 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832F0F: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58832F12: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58832F16: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x58832F19: je 0x5883304f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832F1F: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x58832F22: cmp dword ptr [edx + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832F29: lea ebx, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x58832F2C: jle 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832F32: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58832F34: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832F3A: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x52
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832F3F: dec edi
        __asm _emit 0x4F
        // 0x58832F40: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58832F42: jge 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xEE
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832F48: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x58832F4A: mov dword ptr [esp + 0x18], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832F52: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832F54: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x52
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832F59: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832F5B: inc eax
        __asm _emit 0x40
        // 0x58832F5C: push eax
        __asm _emit 0x50
        // 0x58832F5D: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x58
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832F62: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832F64: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x52
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832F69: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832F6B: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58832F6D: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x51
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832F72: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58832F74: jl 0x58832f8b
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x58832F76: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832F78: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x51
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832F7D: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832F7F: lea ebp, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x03
        // 0x58832F82: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x52
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832F87: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58832F89: jl 0x58832f9a
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x58832F8B: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832F8D: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x52
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832F92: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832F94: push eax
        __asm _emit 0x50
        // 0x58832F95: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x51
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832F9A: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832F9C: mov ebp, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832FA2: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x51
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832FA7: add ebp, -3
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0xFD
        // 0x58832FAA: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58832FAC: jle 0x58832fbf
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58832FAE: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832FB0: mov eax, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832FB6: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x58832FB9: push eax
        __asm _emit 0x50
        // 0x58832FBA: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x51
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832FBF: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58832FC2: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x58832FC7: jne 0x58832f52
        __asm _emit 0x75
        __asm _emit 0x89
        // 0x58832FC9: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832FCF: push ecx
        __asm _emit 0x51
        // 0x58832FD0: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832FD6: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x49
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832FDB: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832FE1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58832FE3: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58832FE6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58832FE8: push edi
        __asm _emit 0x57
        // 0x58832FE9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58832FEB: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58832FEE: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x6E
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58832FF3: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58832FF5: push eax
        __asm _emit 0x50
        // 0x58832FF6: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x6E
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58832FFB: push eax
        __asm _emit 0x50
        // 0x58832FFC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58832FFE: call 0x58831e20
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58833003: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833009: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883300E: push ebx
        __asm _emit 0x53
        // 0x5883300F: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xE6
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833014: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883301A: push ebx
        __asm _emit 0x53
        // 0x5883301B: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xE6
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833020: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833026: push edi
        __asm _emit 0x57
        // 0x58833027: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xE5
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883302C: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833032: push edi
        __asm _emit 0x57
        // 0x58833033: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833038: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883303E: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x58833041: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833047: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5883304A: jmp 0x588332c3
        __asm _emit 0xE9
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883304F: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833055: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x58833059: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5883305B: je 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833061: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833067: cmp dword ptr [ecx + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883306E: lea ebx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833074: jle 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883307A: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833080: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833085: dec edi
        __asm _emit 0x4F
        // 0x58833086: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58833088: jge 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883308E: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x58833090: mov dword ptr [esp + 0x18], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833098: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883309A: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883309F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588330A1: inc eax
        __asm _emit 0x40
        // 0x588330A2: push eax
        __asm _emit 0x50
        // 0x588330A3: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x57
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588330A8: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588330AA: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x51
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588330AF: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588330B1: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588330B3: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588330B8: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588330BA: jl 0x588330d1
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x588330BC: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588330BE: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588330C3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588330C5: lea ebp, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x03
        // 0x588330C8: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588330CD: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588330CF: jl 0x588330e0
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588330D1: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588330D3: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588330D8: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588330DA: push eax
        __asm _emit 0x50
        // 0x588330DB: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588330E0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588330E2: mov ebp, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588330E8: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588330ED: add ebp, -3
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0xFD
        // 0x588330F0: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588330F2: jle 0x58833105
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588330F4: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588330F6: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588330FC: sub edx, 3
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x588330FF: push edx
        __asm _emit 0x52
        // 0x58833100: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833105: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58833108: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x5883310D: jne 0x58833098
        __asm _emit 0x75
        __asm _emit 0x89
        // 0x5883310F: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833114: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883311A: push eax
        __asm _emit 0x50
        // 0x5883311B: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x48
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833120: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833126: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58833128: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5883312B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883312D: push edi
        __asm _emit 0x57
        // 0x5883312E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58833130: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833136: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x6D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5883313B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5883313D: push eax
        __asm _emit 0x50
        // 0x5883313E: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x6D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58833143: push eax
        __asm _emit 0x50
        // 0x58833144: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58833146: call 0x58831e20
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883314B: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833151: push edi
        __asm _emit 0x57
        // 0x58833152: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833157: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883315D: push edi
        __asm _emit 0x57
        // 0x5883315E: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833163: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833169: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883316E: push ebx
        __asm _emit 0x53
        // 0x5883316F: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833174: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883317A: push ebx
        __asm _emit 0x53
        // 0x5883317B: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833180: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833186: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x58833189: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883318F: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x58833192: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833198: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5883319B: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588331A1: pop ebp
        __asm _emit 0x5D
        // 0x588331A2: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588331A5: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588331A8: pop edi
        __asm _emit 0x5F
        // 0x588331A9: pop esi
        __asm _emit 0x5E
        // 0x588331AA: pop ebx
        __asm _emit 0x5B
        // 0x588331AB: pop ecx
        __asm _emit 0x59
        // 0x588331AC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588331AF: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588331B2: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588331B6: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588331B8: je 0x588332e0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588331BE: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588331C1: cmp dword ptr [ecx + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588331C8: lea ebx, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x588331CB: jle 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588331D1: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x4F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588331D6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588331D8: jle 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588331DE: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x588331E0: mov dword ptr [esp + 0x18], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588331E8: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588331ED: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588331F0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588331F2: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x4F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588331F7: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588331F9: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x588331FB: push eax
        __asm _emit 0x50
        // 0x588331FC: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x56
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833201: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58833203: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x4F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833208: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883320A: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5883320C: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x4F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833211: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58833213: jl 0x5883322a
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x58833215: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58833217: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x4F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883321C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883321E: lea ebp, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x03
        // 0x58833221: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x4F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833226: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58833228: jl 0x58833239
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x5883322A: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883322C: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x4F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833231: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58833233: push eax
        __asm _emit 0x50
        // 0x58833234: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x4F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833239: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883323E: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58833241: sub dword ptr [esp + 0x18], ebp
        __asm _emit 0x29
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58833245: jne 0x588331f0
        __asm _emit 0x75
        __asm _emit 0xA9
        // 0x58833247: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883324D: push ecx
        __asm _emit 0x51
        // 0x5883324E: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833254: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x47
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833259: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883325F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58833261: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58833264: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58833266: push edi
        __asm _emit 0x57
        // 0x58833267: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58833269: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5883326C: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x6C
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58833271: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58833273: push eax
        __asm _emit 0x50
        // 0x58833274: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x6C
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58833279: push eax
        __asm _emit 0x50
        // 0x5883327A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883327C: call 0x58831e20
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58833281: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833287: push ebp
        __asm _emit 0x55
        // 0x58833288: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883328D: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833293: push ebp
        __asm _emit 0x55
        // 0x58833294: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833299: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883329F: push edi
        __asm _emit 0x57
        // 0x588332A0: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588332A5: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588332AB: push edi
        __asm _emit 0x57
        // 0x588332AC: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588332B1: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588332B7: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x588332BA: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588332C0: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x588332C3: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588332C9: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x588332CC: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588332D2: pop ebp
        __asm _emit 0x5D
        // 0x588332D3: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588332D6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588332D9: pop edi
        __asm _emit 0x5F
        // 0x588332DA: pop esi
        __asm _emit 0x5E
        // 0x588332DB: pop ebx
        __asm _emit 0x5B
        // 0x588332DC: pop ecx
        __asm _emit 0x59
        // 0x588332DD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588332E0: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588332E6: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588332EA: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588332EC: je 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588332F2: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588332F8: cmp dword ptr [ecx + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588332FF: lea ebx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833305: jle 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x2B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883330B: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x4E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833310: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833312: jle 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833318: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x5883331A: mov dword ptr [esp + 0x18], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833322: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833327: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58833329: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x4E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883332E: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58833330: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x58833332: push eax
        __asm _emit 0x50
        // 0x58833333: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833338: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883333A: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x4E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883333F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58833341: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58833343: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x4E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833348: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5883334A: jl 0x58833361
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x5883334C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883334E: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x4E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833353: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58833355: lea ebp, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x03
        // 0x58833358: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x4E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883335D: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5883335F: jl 0x58833370
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x58833361: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58833363: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x4E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833368: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883336A: push eax
        __asm _emit 0x50
        // 0x5883336B: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x4E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833370: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833375: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58833378: sub dword ptr [esp + 0x18], ebp
        __asm _emit 0x29
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883337C: jne 0x58833327
        __asm _emit 0x75
        __asm _emit 0xA9
        // 0x5883337E: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833384: push ecx
        __asm _emit 0x51
        // 0x58833385: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883338B: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833390: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833396: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58833398: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5883339B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883339D: push edi
        __asm _emit 0x57
        // 0x5883339E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588333A0: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588333A6: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x6A
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588333AB: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588333AD: push eax
        __asm _emit 0x50
        // 0x588333AE: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x6A
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588333B3: push eax
        __asm _emit 0x50
        // 0x588333B4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588333B6: call 0x58831e20
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588333BB: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588333C1: push edi
        __asm _emit 0x57
        // 0x588333C2: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xE2
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588333C7: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588333CD: push edi
        __asm _emit 0x57
        // 0x588333CE: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xE2
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588333D3: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588333D9: push ebp
        __asm _emit 0x55
        // 0x588333DA: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xE2
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588333DF: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588333E5: push ebp
        __asm _emit 0x55
        // 0x588333E6: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xE2
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588333EB: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588333F1: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588333F4: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588333FA: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588333FD: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833403: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x58833406: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883340C: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x5883340F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58833412: pop ebp
        __asm _emit 0x5D
        // 0x58833413: pop edi
        __asm _emit 0x5F
        // 0x58833414: pop esi
        __asm _emit 0x5E
        // 0x58833415: pop ebx
        __asm _emit 0x5B
        // 0x58833416: pop ecx
        __asm _emit 0x59
        // 0x58833417: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883341A: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x5883341D: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x58833421: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58833423: jne 0x588334a6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833429: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5883342C: cmp dword ptr [ecx + 0x88], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833432: jle 0x588334a6
        __asm _emit 0x7E
        __asm _emit 0x72
        // 0x58833434: lea edi, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883343A: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883343F: nop
        __asm _emit 0x90
        // 0x58833440: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58833442: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58833444: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x53
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58833449: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883344C: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5883344F: jne 0x58833440
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x58833451: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833457: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xC4
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5883345C: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833462: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58833467: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883346C: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833472: push ebx
        __asm _emit 0x53
        // 0x58833473: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xE1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833478: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883347E: push ebx
        __asm _emit 0x53
        // 0x5883347F: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xE1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833484: mov edx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883348A: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5883348D: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833493: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58833496: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58833499: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x5883349B: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xE1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588334A0: push ebx
        __asm _emit 0x53
        // 0x588334A1: jmp 0x5883352b
        __asm _emit 0xE9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588334A6: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588334AC: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588334B0: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588334B3: jne 0x58833536
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588334B9: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588334BF: cmp dword ptr [eax + 0x88], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588334C5: jle 0x58833536
        __asm _emit 0x7E
        __asm _emit 0x6F
        // 0x588334C7: lea edi, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x588334CA: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588334CF: nop
        __asm _emit 0x90
        // 0x588334D0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588334D2: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588334D4: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x53
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588334D9: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588334DC: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588334DF: jne 0x588334d0
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x588334E1: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588334E4: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xC4
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588334E9: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588334EC: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588334F1: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xE7
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588334F6: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588334FC: push ebx
        __asm _emit 0x53
        // 0x588334FD: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xE1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833502: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833508: push ebx
        __asm _emit 0x53
        // 0x58833509: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xE1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883350E: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833514: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x58833517: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883351D: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x58833520: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58833523: push ebx
        __asm _emit 0x53
        // 0x58833524: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xE0
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833529: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x5883352B: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833531: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xE0
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833536: pop ebp
        __asm _emit 0x5D
        // 0x58833537: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5883353A: pop edi
        __asm _emit 0x5F
        // 0x5883353B: pop esi
        __asm _emit 0x5E
        // 0x5883353C: pop ebx
        __asm _emit 0x5B
        // 0x5883353D: pop ecx
        __asm _emit 0x59
        // 0x5883353E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
