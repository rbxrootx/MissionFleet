// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1459 bytes in 3 exact ranges.
// Source symbol alias: FUN_58738d00.

// Ghidra body range 0x58738D00..0x58738E14; 276 mapped bytes.
extern "C" __declspec(naked) void FUN_58738d00_segment_00() {
    __asm {
        // 0x58738D00: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x58738D03: push ebx
        __asm _emit 0x53
        // 0x58738D04: push ebp
        __asm _emit 0x55
        // 0x58738D05: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58738D07: cmp dword ptr [ebp + 0xf4], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738D0E: push esi
        __asm _emit 0x56
        // 0x58738D0F: push edi
        __asm _emit 0x57
        // 0x58738D10: je 0x587390c5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738D16: lea edi, [ebp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x70
        // 0x58738D19: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58738D1D: mov dword ptr [esp + 0x1c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738D25: cmp word ptr [edi - 0x14], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0xEC
        __asm _emit 0x01
        // 0x58738D2A: jne 0x587390b3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738D30: mov eax, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x2C
        // 0x58738D33: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738D3B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58738D3D: je 0x58738de6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738D43: cmp word ptr [eax + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58738D4B: jae 0x58738de6
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738D51: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58738D54: mov eax, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x2C
        // 0x58738D57: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738D5B: movzx eax, word ptr [ebp + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x58738D5F: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58738D63: je 0x58738d7b
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58738D65: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58738D69: je 0x58738d7b
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58738D6B: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58738D6F: je 0x58738d7b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58738D71: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58738D75: jne 0x58739023
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738D7B: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738D7F: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xD9
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58738D84: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58738D86: je 0x58739023
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738D8C: mov edx, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x2C
        // 0x58738D8F: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58738D92: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58738D95: sub ecx, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58738D98: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58738D9B: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58738D9E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58738DA0: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x58738DA3: imul esi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF1
        // 0x58738DA6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x58738DA8: cmp eax, dword ptr [edi]
        __asm _emit 0x3B
        __asm _emit 0x07
        // 0x58738DAA: ja 0x58738dd7
        __asm _emit 0x77
        __asm _emit 0x2B
        // 0x58738DAC: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58738DB0: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58738DB4: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738DB8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58738DBA: jge 0x58738dc2
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58738DBC: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58738DC2: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x3E
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738DC7: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x3E
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738DCC: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58738DD0: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58738DD2: jmp 0x58739023
        __asm _emit 0xE9
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738DD7: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58738DDB: mov dword ptr [edx], 1
        __asm _emit 0xC7
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738DE1: jmp 0x58739023
        __asm _emit 0xE9
        __asm _emit 0x3D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738DE6: mov eax, dword ptr [ebp + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738DEC: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58738DEE: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58738DF2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58738DF4: je 0x58738e02
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58738DF6: cmp dword ptr [eax], ebx
        __asm _emit 0x39
        __asm _emit 0x18
        // 0x58738DF8: jne 0x58738e02
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58738DFA: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738E02: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58738E07: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x58738E0A: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58738E0C: je 0x58738f0b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738E12: jmp 0x58738e20
        __asm _emit 0xEB
        __asm _emit 0x0C
    }
}

// Ghidra body range 0x58738E20..0x58738FE8; 456 mapped bytes.
extern "C" __declspec(naked) void FUN_58738d00_segment_01() {
    __asm {
        // 0x58738E20: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58738E26: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58738E29: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58738E2F: push esi
        __asm _emit 0x56
        // 0x58738E30: push edx
        __asm _emit 0x52
        // 0x58738E31: call 0x58775980
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xCB
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58738E36: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58738E39: jne 0x58738f00
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738E3F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58738E41: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xD8
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58738E46: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58738E4B: jne 0x58738f00
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738E51: cmp word ptr [esi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58738E59: jae 0x58738f00
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738E5F: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58738E62: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58738E65: sub eax, dword ptr [edi + 4]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58738E68: cdq
        __asm _emit 0x99
        // 0x58738E69: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58738E6B: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58738E6E: sub eax, dword ptr [edi + 8]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58738E71: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x58738E73: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58738E75: cdq
        __asm _emit 0x99
        // 0x58738E76: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58738E78: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58738E7A: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58738E7C: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x58738E7F: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58738E82: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58738E84: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58738E89: je 0x58738e94
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58738E8B: mov ecx, dword ptr [ebp + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738E91: mov dword ptr [ecx + ebx*4], esi
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0x99
        // 0x58738E94: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58738E98: cmp eax, dword ptr [edx]
        __asm _emit 0x3B
        __asm _emit 0x02
        // 0x58738E9A: ja 0x58738ee5
        __asm _emit 0x77
        __asm _emit 0x49
        // 0x58738E9C: mov edi, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58738EA0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58738EA2: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58738EA5: je 0x58738eab
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58738EA7: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58738EA9: jbe 0x58738ecd
        __asm _emit 0x76
        __asm _emit 0x22
        // 0x58738EAB: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738EAF: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738EB3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58738EB5: jge 0x58738ebd
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58738EB7: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58738EBD: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x3D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738EC2: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x3D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738EC7: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58738EC9: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738ECD: cmp dword ptr [ebp + 0xe0], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738ED4: je 0x58738efb
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58738ED6: mov eax, dword ptr [ebp + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738EDC: mov dword ptr [eax + ebx*4], 1
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738EE3: jmp 0x58738efb
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58738EE5: cmp dword ptr [ebp + 0xe0], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738EEC: je 0x58738efb
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58738EEE: mov ecx, dword ptr [ebp + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738EF4: mov dword ptr [ecx + ebx*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738EFB: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58738EFF: inc ebx
        __asm _emit 0x43
        // 0x58738F00: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58738F03: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58738F05: jne 0x58738e20
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738F0B: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58738F10: je 0x58738f19
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58738F12: mov word ptr [ebp + 0xec], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738F19: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738F1D: push edx
        __asm _emit 0x52
        // 0x58738F1E: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58738F20: call 0x58735cc0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738F25: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58738F27: je 0x58738f55
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x58738F29: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58738F2C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58738F2F: sub edx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58738F32: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58738F35: sub ecx, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58738F38: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58738F3A: imul esi, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF2
        // 0x58738F3D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58738F3F: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58738F42: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58738F44: cmp esi, dword ptr [edi]
        __asm _emit 0x3B
        __asm _emit 0x37
        // 0x58738F46: ja 0x58738f55
        __asm _emit 0x77
        __asm _emit 0x0D
        // 0x58738F48: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58738F4C: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x58738F4F: jne 0x58738f55
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58738F51: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738F55: cmp dword ptr [ebp + 0xe0], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738F5C: jne 0x58739023
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738F62: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58738F64: jle 0x58739023
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738F6A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58738F6C: movzx eax, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC3
        // 0x58738F6F: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738F74: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58738F76: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x58738F79: mov word ptr [ebp + 0xec], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738F80: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58738F82: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58738F84: push ecx
        __asm _emit 0x51
        // 0x58738F85: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58738F8A: mov dword ptr [ebp + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738F90: movzx eax, word ptr [ebp + 0xec]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738F97: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58738F99: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738F9E: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58738FA0: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x58738FA3: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58738FA5: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58738FA7: push ecx
        __asm _emit 0x51
        // 0x58738FA8: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58738FAD: mov dword ptr [ebp + 0xe4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738FB3: movzx eax, word ptr [ebp + 0xec]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738FBA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58738FBC: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738FC1: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58738FC3: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x58738FC6: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58738FC8: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58738FCA: push ecx
        __asm _emit 0x51
        // 0x58738FCB: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58738FD0: mov dword ptr [ebp + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738FD6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58738FD8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58738FDB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58738FDD: cmp cx, word ptr [ebp + 0xec]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x8D
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738FE4: jae 0x58739023
        __asm _emit 0x73
        __asm _emit 0x3D
        // 0x58738FE6: jmp 0x58738ff0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x58738FF0..0x587392C7; 727 mapped bytes.
extern "C" __declspec(naked) void FUN_58738d00_segment_02() {
    __asm {
        // 0x58738FF0: mov edx, dword ptr [ebp + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738FF6: mov dword ptr [edx + eax*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738FFD: mov ecx, dword ptr [ebp + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739003: mov dword ptr [ecx + eax*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873900A: mov edx, dword ptr [ebp + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739010: mov dword ptr [edx + eax*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739017: movzx ecx, word ptr [ebp + 0xec]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873901E: inc eax
        __asm _emit 0x40
        // 0x5873901F: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58739021: jl 0x58738ff0
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x58739023: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58739027: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x5873902A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873902C: je 0x587390b3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739032: mov ebx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58739036: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x58739038: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873903D: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5873903F: imul edx, edx, 0xd
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x0D
        // 0x58739042: add edx, dword ptr [eax + 0x10490]
        __asm _emit 0x03
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58739048: mov eax, dword ptr [eax + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873904E: lea eax, [edx + eax + 0x11]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x11
        // 0x58739052: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58739054: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873905A: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58739060: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x58739065: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x58739068: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5873906A: shr edx, 2
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x5873906D: lea edx, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x92
        // 0x58739070: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58739072: jne 0x58739079
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58739074: add esi, 0x19
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x19
        // 0x58739077: mov dword ptr [ebx], esi
        __asm _emit 0x89
        __asm _emit 0x33
        // 0x58739079: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5873907B: lea edx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x89
        // 0x5873907E: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58739080: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58739085: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58739087: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873908A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873908C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873908F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58739091: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58739093: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58739095: mov dword ptr [ebx], ecx
        __asm _emit 0x89
        __asm _emit 0x0B
        // 0x58739097: cmp dword ptr [edi - 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0xF4
        // 0x5873909A: jle 0x587390b3
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5873909C: mov edx, dword ptr [edi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0xF0
        // 0x5873909F: nop
        __asm _emit 0x90
        // 0x587390A0: cmp dword ptr [edx], ecx
        __asm _emit 0x39
        __asm _emit 0x0A
        // 0x587390A2: jae 0x587390af
        __asm _emit 0x73
        __asm _emit 0x0B
        // 0x587390A4: inc eax
        __asm _emit 0x40
        // 0x587390A5: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587390A8: cmp eax, dword ptr [edi - 0xc]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0xF4
        // 0x587390AB: jl 0x587390a0
        __asm _emit 0x7C
        __asm _emit 0xF3
        // 0x587390AD: jmp 0x587390b3
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587390AF: mov word ptr [edi + 0x20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x587390B3: add edi, 0x38
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x38
        // 0x587390B6: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x587390BB: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587390BF: jne 0x58738d25
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587390C5: cmp dword ptr [ebp + 0xf8], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587390CC: je 0x587391c5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587390D2: lea esi, [ebp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x587390D5: mov edi, 8
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587390DA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587390E0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587390E2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587390E4: je 0x5873910d
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587390E6: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587390EC: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587390F2: push eax
        __asm _emit 0x50
        // 0x587390F3: call 0x58738c60
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587390F8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587390FA: je 0x58739107
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587390FC: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587390FE: cmp dword ptr [edx + 0x460], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739105: je 0x5873910d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58739107: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873910D: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58739110: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58739113: jne 0x587390e0
        __asm _emit 0x75
        __asm _emit 0xCB
        // 0x58739115: lea edi, [ebp + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873911B: mov dword ptr [esp + 0x44], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739123: cmp word ptr [edi - 0x30], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0xD0
        __asm _emit 0x02
        // 0x58739128: jne 0x587391b7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873912E: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58739130: mov dword ptr [edi], esi
        __asm _emit 0x89
        __asm _emit 0x37
        // 0x58739132: mov dword ptr [esp + 0x48], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58739136: lea ebx, [ebp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x38
        // 0x58739139: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739140: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58739142: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58739144: je 0x5873917d
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58739146: mov edx, dword ptr [eax + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873914C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5873914F: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58739152: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x58739155: sub ecx, dword ptr [edx + 8]
        __asm _emit 0x2B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x58739158: sub eax, dword ptr [edx + 4]
        __asm _emit 0x2B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873915B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5873915D: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58739160: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58739162: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x58739165: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58739167: cmp edx, dword ptr [edi - 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x57
        __asm _emit 0xE4
        // 0x5873916A: jbe 0x58739174
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5873916C: mov dword ptr [ebx], 0
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739172: jmp 0x5873917d
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58739174: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58739178: inc eax
        __asm _emit 0x40
        // 0x58739179: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5873917D: inc esi
        __asm _emit 0x46
        // 0x5873917E: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58739181: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x58739184: jl 0x58739140
        __asm _emit 0x7C
        __asm _emit 0xBA
        // 0x58739186: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5873918A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873918C: jle 0x587391b7
        __asm _emit 0x7E
        __asm _emit 0x29
        // 0x5873918E: mov eax, dword ptr [ebp + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739194: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58739197: imul eax, eax, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x5873919A: add eax, dword ptr [edx + 4]
        __asm _emit 0x03
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873919D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873919F: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587391A5: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587391AA: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x587391AD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587391AF: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x587391B1: mov ecx, dword ptr [ebp + edx*4 + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x95
        __asm _emit 0x38
        // 0x587391B5: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x587391B7: add edi, 0x38
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x38
        // 0x587391BA: sub dword ptr [esp + 0x44], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        // 0x587391BF: jne 0x58739123
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587391C5: cmp word ptr [ebp + 0xf0], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587391CD: jne 0x5873927f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587391D3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587391D5: mov dword ptr [ebp + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587391DB: mov dword ptr [ebp + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587391E1: mov dword ptr [ebp + 0xd4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587391E7: mov dword ptr [ebp + 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587391ED: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587391F3: mov ebx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x0C
        // 0x587391F6: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587391F8: je 0x5873927f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587391FE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58739200: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58739202: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xD4
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58739207: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58739209: je 0x58739278
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x5873920B: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58739210: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58739213: mov ecx, dword ptr [eax + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58739219: push ebx
        __asm _emit 0x53
        // 0x5873921A: push edx
        __asm _emit 0x52
        // 0x5873921B: call 0x58775980
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58739220: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58739223: jne 0x58739278
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x58739225: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58739227: lea ecx, [ebp + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873922D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58739230: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58739232: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58739234: je 0x58739271
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x58739236: mov esi, dword ptr [ebx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873923C: mov edx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739242: mov esi, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x60
        // 0x58739245: cmp esi, dword ptr [edx + 0x60]
        __asm _emit 0x3B
        __asm _emit 0x72
        __asm _emit 0x60
        // 0x58739248: ja 0x58739255
        __asm _emit 0x77
        __asm _emit 0x0B
        // 0x5873924A: inc eax
        __asm _emit 0x40
        // 0x5873924B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5873924E: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58739251: jl 0x58739230
        __asm _emit 0x7C
        __asm _emit 0xDD
        // 0x58739253: jmp 0x58739278
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x58739255: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58739258: jge 0x58739271
        __asm _emit 0x7D
        __asm _emit 0x17
        // 0x5873925A: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873925F: lea edi, [ebp + eax*4 + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739266: lea esi, [ebp + eax*4 + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873926D: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5873926F: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58739271: mov dword ptr [ebp + eax*4 + 0xcc], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739278: mov ebx, dword ptr [ebx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x78
        // 0x5873927B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5873927D: jne 0x58739200
        __asm _emit 0x75
        __asm _emit 0x81
        // 0x5873927F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58739281: add ebp, 0x5c
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x5C
        // 0x58739284: movzx eax, word ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58739288: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5873928C: jne 0x58739294
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5873928E: cmp dword ptr [ebp + 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x58739292: jmp 0x5873929e
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58739294: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58739298: jne 0x587392a0
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5873929A: cmp dword ptr [ebp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5873929E: jne 0x587392b8
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587392A0: inc ecx
        __asm _emit 0x41
        // 0x587392A1: add ebp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x38
        // 0x587392A4: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587392A7: jl 0x58739284
        __asm _emit 0x7C
        __asm _emit 0xDB
        // 0x587392A9: pop edi
        __asm _emit 0x5F
        // 0x587392AA: pop esi
        __asm _emit 0x5E
        // 0x587392AB: pop ebp
        __asm _emit 0x5D
        // 0x587392AC: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587392B1: pop ebx
        __asm _emit 0x5B
        // 0x587392B2: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x587392B5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587392B8: pop edi
        __asm _emit 0x5F
        // 0x587392B9: pop esi
        __asm _emit 0x5E
        // 0x587392BA: pop ebp
        __asm _emit 0x5D
        // 0x587392BB: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587392C0: pop ebx
        __asm _emit 0x5B
        // 0x587392C1: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x587392C4: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
