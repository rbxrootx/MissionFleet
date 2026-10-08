// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 603 bytes in 1 exact ranges.
// Source symbol alias: FUN_58732e60.

// Ghidra body range 0x58732E60..0x587330BB; 603 mapped bytes.
extern "C" __declspec(naked) void FUN_58732e60_segment_00() {
    __asm {
        // 0x58732E60: push esi
        __asm _emit 0x56
        // 0x58732E61: push edi
        __asm _emit 0x57
        // 0x58732E62: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58732E64: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58732E66: call 0x58731d30
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732E6B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58732E6D: call 0x587312d0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732E72: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732E77: cmp dword ptr [eax + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58732E7E: jle 0x58732e94
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732E80: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732E87: je 0x58732e94
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732E89: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732E8F: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58732E92: jmp 0x58732e96
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732E94: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732E96: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732E9C: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732E9F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732EA1: je 0x58732ecb
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732EA3: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732EA6: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732EA9: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732EAC: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732EAF: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732EB2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732EB4: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732EB7: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732EB9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732EBC: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732EBF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732EC2: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732EC5: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732EC8: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732ECB: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732ED1: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732ED6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58732EDB: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732EE0: cmp dword ptr [eax + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58732EE7: jle 0x58732efd
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732EE9: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732EF0: je 0x58732efd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732EF2: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732EF8: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732EFB: jmp 0x58732eff
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732EFD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732EFF: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732F05: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732F08: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732F0A: je 0x58732f34
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732F0C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732F0F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732F12: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732F15: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732F18: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732F1B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732F1D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732F20: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732F22: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732F25: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732F28: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732F2B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732F2E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732F31: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732F34: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732F3A: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732F3F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58732F43: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732F49: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732F4E: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58732F53: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732F58: cmp dword ptr [eax + 0x164], 4
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58732F5F: jle 0x58732f75
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732F61: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732F68: je 0x58732f75
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732F6A: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732F70: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58732F73: jmp 0x58732f77
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732F75: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732F77: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732F7D: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732F80: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732F82: je 0x58732fac
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732F84: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732F87: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732F8A: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732F8D: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732F90: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732F93: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732F95: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732F98: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732F9A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732F9D: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732FA0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732FA3: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732FA6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732FA9: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732FAC: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732FB2: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732FB7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58732FBC: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732FC1: cmp dword ptr [eax + 0x164], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58732FC8: jle 0x58732fde
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732FCA: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732FD1: je 0x58732fde
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732FD3: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732FD9: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x58732FDC: jmp 0x58732fe0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732FDE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732FE0: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732FE6: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732FE9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732FEB: je 0x58733015
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732FED: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732FF0: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732FF3: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732FF6: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732FF9: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732FFC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732FFE: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58733001: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58733003: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58733006: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58733009: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873300C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5873300F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58733012: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58733015: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873301B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733020: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733025: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873302B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873302D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733032: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733038: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x5873303A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873303F: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733045: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x58733047: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873304C: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58733052: push 0x5898c900
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58733057: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58733059: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5873305C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873305F: push eax
        __asm _emit 0x50
        // 0x58733060: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733065: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58733068: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x5873306B: push ecx
        __asm _emit 0x51
        // 0x5873306C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5873306F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58733074: push 0x5898c8dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xC8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58733079: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5873307B: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5873307E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733081: push eax
        __asm _emit 0x50
        // 0x58733082: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733087: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5873308A: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5873308D: add edx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x46
        // 0x58733090: push edx
        __asm _emit 0x52
        // 0x58733091: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x02
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58733096: push 0x5898c8b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xC8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873309B: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5873309D: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587330A0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587330A3: push eax
        __asm _emit 0x50
        // 0x587330A4: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587330A9: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587330AC: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587330AF: add eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x46
        // 0x587330B2: push eax
        __asm _emit 0x50
        // 0x587330B3: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587330B8: pop edi
        __asm _emit 0x5F
        // 0x587330B9: pop esi
        __asm _emit 0x5E
        // 0x587330BA: ret
        __asm _emit 0xC3
    }
}
