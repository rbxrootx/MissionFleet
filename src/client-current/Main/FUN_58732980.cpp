// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 611 bytes in 1 exact ranges.
// Source symbol alias: FUN_58732980.

// Ghidra body range 0x58732980..0x58732BE3; 611 mapped bytes.
extern "C" __declspec(naked) void FUN_58732980_segment_00() {
    __asm {
        // 0x58732980: push esi
        __asm _emit 0x56
        // 0x58732981: push edi
        __asm _emit 0x57
        // 0x58732982: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58732984: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58732986: call 0x58731d30
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873298B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873298D: call 0x587312d0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732992: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732997: cmp dword ptr [eax + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5873299E: jle 0x587329b4
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587329A0: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587329A7: je 0x587329b4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587329A9: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587329AF: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587329B2: jmp 0x587329b6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587329B4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587329B6: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587329BC: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587329BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587329C1: je 0x587329eb
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587329C3: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587329C6: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587329C9: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587329CC: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587329CF: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587329D2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587329D4: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587329D7: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587329D9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587329DC: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587329DF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587329E2: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587329E5: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587329E8: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587329EB: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587329F1: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587329F6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587329FB: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732A00: cmp dword ptr [eax + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58732A07: jle 0x58732a1d
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732A09: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732A10: je 0x58732a1d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732A12: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732A18: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732A1B: jmp 0x58732a1f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732A1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732A1F: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732A25: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732A28: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732A2A: je 0x58732a54
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732A2C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732A2F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732A32: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732A35: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732A38: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732A3B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732A3D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732A40: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732A42: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732A45: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732A48: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732A4B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732A4E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732A51: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732A54: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732A5A: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732A5F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58732A63: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732A69: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732A6E: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x02
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732A73: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732A78: cmp dword ptr [eax + 0x164], 4
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58732A7F: jle 0x58732a95
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732A81: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732A88: je 0x58732a95
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732A8A: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732A90: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58732A93: jmp 0x58732a97
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732A95: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732A97: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732A9D: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732AA0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732AA2: je 0x58732acc
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732AA4: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732AA7: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732AAA: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732AAD: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732AB0: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732AB3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732AB5: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732AB8: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732ABA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732ABD: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732AC0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732AC3: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732AC6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732AC9: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732ACC: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732AD2: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732AD7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732ADC: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732AE1: cmp dword ptr [eax + 0x164], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58732AE8: jle 0x58732afe
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58732AEA: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732AF1: je 0x58732afe
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58732AF3: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732AF9: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x58732AFC: jmp 0x58732b00
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732AFE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732B00: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732B06: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732B09: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58732B0B: je 0x58732b35
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732B0D: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732B10: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732B13: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732B16: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732B19: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732B1C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732B1E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732B21: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732B23: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732B26: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732B29: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732B2C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732B2F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732B32: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732B35: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732B3B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732B40: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x01
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732B45: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732B4B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58732B4D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x01
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732B52: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732B58: push 0x5898c804
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xC8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732B5D: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58732B5F: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58732B62: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58732B65: push eax
        __asm _emit 0x50
        // 0x58732B66: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732B6B: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58732B6E: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x58732B71: push ecx
        __asm _emit 0x51
        // 0x58732B72: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58732B75: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732B7A: push 0x5898c7e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xC7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732B7F: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58732B81: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58732B84: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58732B87: push eax
        __asm _emit 0x50
        // 0x58732B88: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732B8D: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58732B90: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58732B93: add edx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x46
        // 0x58732B96: push edx
        __asm _emit 0x52
        // 0x58732B97: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732B9C: push 0x5898c7bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0xC7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732BA1: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58732BA3: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58732BA6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58732BA9: push eax
        __asm _emit 0x50
        // 0x58732BAA: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732BAF: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58732BB2: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58732BB5: add eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x46
        // 0x58732BB8: push eax
        __asm _emit 0x50
        // 0x58732BB9: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732BBE: push 0x5898c798
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xC7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732BC3: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58732BC5: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58732BC8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58732BCB: push eax
        __asm _emit 0x50
        // 0x58732BCC: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732BD1: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58732BD4: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x58732BD7: push ecx
        __asm _emit 0x51
        // 0x58732BD8: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58732BDB: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732BE0: pop edi
        __asm _emit 0x5F
        // 0x58732BE1: pop esi
        __asm _emit 0x5E
        // 0x58732BE2: ret
        __asm _emit 0xC3
    }
}
