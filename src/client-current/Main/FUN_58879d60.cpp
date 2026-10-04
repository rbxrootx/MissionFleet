// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58879D60 .. +0x222 bytes.
// Source symbol alias: FUN_58879d60.
extern "C" __declspec(naked) void FUN_58879d60() {
    __asm {
        // 0x58879D60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58879D62: push 0x58986799
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x67
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58879D67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879D6D: push eax
        __asm _emit 0x50
        // 0x58879D6E: push ecx
        __asm _emit 0x51
        // 0x58879D6F: push ebx
        __asm _emit 0x53
        // 0x58879D70: push ebp
        __asm _emit 0x55
        // 0x58879D71: push esi
        __asm _emit 0x56
        // 0x58879D72: push edi
        __asm _emit 0x57
        // 0x58879D73: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58879D78: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58879D7A: push eax
        __asm _emit 0x50
        // 0x58879D7B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58879D7F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879D85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58879D87: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58879D8B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58879D8F: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58879D93: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58879D97: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58879D9B: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58879D9F: push eax
        __asm _emit 0x50
        // 0x58879DA0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58879DA4: push ebx
        __asm _emit 0x53
        // 0x58879DA5: push edi
        __asm _emit 0x57
        // 0x58879DA6: push ecx
        __asm _emit 0x51
        // 0x58879DA7: push edx
        __asm _emit 0x52
        // 0x58879DA8: push eax
        __asm _emit 0x50
        // 0x58879DA9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58879DAB: call 0x5876e890
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58879DB0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58879DB2: mov dword ptr [esi + 0x180], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879DB8: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58879DBC: mov dword ptr [esi], 0x5899f0ec
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xEC
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58879DC2: mov dword ptr [esi + 0x84], 7
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879DCC: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58879DD0: lea ebp, [esi + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879DD6: lea edi, [esi + 0x108]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879DDC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58879DE0: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879DE5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x2E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879DEA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879DED: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58879DF1: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58879DF6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58879DF8: je 0x58879e2f
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58879DFA: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58879E00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879E07: jle 0x58879e1a
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58879E09: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879E10: je 0x58879e1a
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58879E12: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879E18: jmp 0x58879e1c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879E1A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58879E1C: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58879E20: push ebx
        __asm _emit 0x53
        // 0x58879E21: push ecx
        __asm _emit 0x51
        // 0x58879E22: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58879E24: push edx
        __asm _emit 0x52
        // 0x58879E25: push esi
        __asm _emit 0x56
        // 0x58879E26: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879E28: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xD2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879E2D: jmp 0x58879e31
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879E2F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58879E31: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879E36: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58879E3B: mov dword ptr [edi - 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x58879E3E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x2E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879E43: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879E46: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58879E4A: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58879E4F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58879E51: je 0x58879e8b
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58879E53: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58879E59: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879E60: jle 0x58879e73
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58879E62: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879E69: je 0x58879e73
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58879E6B: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879E71: jmp 0x58879e75
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879E73: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58879E75: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58879E79: push ebx
        __asm _emit 0x53
        // 0x58879E7A: add edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0A
        // 0x58879E7D: push edx
        __asm _emit 0x52
        // 0x58879E7E: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58879E80: push ecx
        __asm _emit 0x51
        // 0x58879E81: push esi
        __asm _emit 0x56
        // 0x58879E82: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879E84: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xD2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879E89: jmp 0x58879e8d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879E8B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58879E8D: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x58879E90: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879E95: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58879E9A: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58879E9C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879EA1: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58879EA3: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879EA8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879EAD: mov eax, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x58879EB0: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879EB5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58879EB9: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58879EBB: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58879EBD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58879EC1: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879EC6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x2D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879ECB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879ECE: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58879ED2: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58879ED7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58879ED9: je 0x58879f10
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58879EDB: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58879EE1: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879EE8: jle 0x58879efb
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58879EEA: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879EF1: je 0x58879efb
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58879EF3: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879EF9: jmp 0x58879efd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879EFB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58879EFD: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58879F01: push ebx
        __asm _emit 0x53
        // 0x58879F02: push edx
        __asm _emit 0x52
        // 0x58879F03: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58879F05: push ecx
        __asm _emit 0x51
        // 0x58879F06: push esi
        __asm _emit 0x56
        // 0x58879F07: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879F09: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xD1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879F0E: jmp 0x58879f12
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879F10: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58879F12: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879F17: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879F19: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58879F1E: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58879F21: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x8D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879F26: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58879F29: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879F2E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58879F32: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58879F35: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879F3A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58879F3E: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58879F42: inc eax
        __asm _emit 0x40
        // 0x58879F43: mov byte ptr [esi + 0x100], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879F4A: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58879F4D: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x58879F50: add ebx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x10
        // 0x58879F53: cmp eax, dword ptr [esi + 0x84]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879F59: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58879F5D: jl 0x58879de0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x7D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58879F63: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58879F65: call 0x58879cc0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58879F6A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58879F6C: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58879F70: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879F77: pop ecx
        __asm _emit 0x59
        // 0x58879F78: pop edi
        __asm _emit 0x5F
        // 0x58879F79: pop esi
        __asm _emit 0x5E
        // 0x58879F7A: pop ebp
        __asm _emit 0x5D
        // 0x58879F7B: pop ebx
        __asm _emit 0x5B
        // 0x58879F7C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58879F7F: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
