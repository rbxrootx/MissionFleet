// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58819C70 .. +0x669 bytes.
// Source symbol alias: FUN_58819c70.
extern "C" __declspec(naked) void FUN_58819c70() {
    __asm {
        // 0x58819C70: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58819C72: push 0x58983437
        __asm _emit 0x68
        __asm _emit 0x37
        __asm _emit 0x34
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58819C77: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819C7D: push eax
        __asm _emit 0x50
        // 0x58819C7E: push ecx
        __asm _emit 0x51
        // 0x58819C7F: push ebx
        __asm _emit 0x53
        // 0x58819C80: push ebp
        __asm _emit 0x55
        // 0x58819C81: push esi
        __asm _emit 0x56
        // 0x58819C82: push edi
        __asm _emit 0x57
        // 0x58819C83: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58819C88: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58819C8A: push eax
        __asm _emit 0x50
        // 0x58819C8B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58819C8F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819C95: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58819C97: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58819C9B: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58819C9F: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58819CA3: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58819CA7: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58819CAB: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58819CAD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819CAF: movsx eax, di
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xC7
        // 0x58819CB2: push eax
        __asm _emit 0x50
        // 0x58819CB3: push ebx
        __asm _emit 0x53
        // 0x58819CB4: push ebp
        __asm _emit 0x55
        // 0x58819CB5: push ecx
        __asm _emit 0x51
        // 0x58819CB6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58819CB8: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x94
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58819CBD: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58819CC3: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58819CC8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819CCA: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x58819CCD: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x58819CD0: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819CD7: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58819CDA: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58819CDE: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58819CE0: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58819CE4: mov dword ptr [esi], 0x5899d7dc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xDC
        __asm _emit 0xD7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58819CEA: mov dword ptr [esi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x58819CED: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x2F
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58819CF2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58819CF5: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58819CF9: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58819CFE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819D00: je 0x58819d40
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58819D02: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58819D06: cmp dword ptr [ecx + 0x164], 5
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58819D0D: jle 0x58819d2d
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58819D0F: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819D15: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58819D17: je 0x58819d2d
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58819D19: mov ecx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x14
        // 0x58819D1C: lea edx, [edi - 9]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0xF7
        // 0x58819D1F: push edx
        __asm _emit 0x52
        // 0x58819D20: push ebx
        __asm _emit 0x53
        // 0x58819D21: push ebp
        __asm _emit 0x55
        // 0x58819D22: push ecx
        __asm _emit 0x51
        // 0x58819D23: push esi
        __asm _emit 0x56
        // 0x58819D24: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819D26: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x7F
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58819D2B: jmp 0x58819d42
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58819D2D: lea edx, [edi - 9]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0xF7
        // 0x58819D30: push edx
        __asm _emit 0x52
        // 0x58819D31: push ebx
        __asm _emit 0x53
        // 0x58819D32: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58819D34: push ebp
        __asm _emit 0x55
        // 0x58819D35: push ecx
        __asm _emit 0x51
        // 0x58819D36: push esi
        __asm _emit 0x56
        // 0x58819D37: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819D39: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x7F
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58819D3E: jmp 0x58819d42
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819D40: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819D42: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58819D44: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58819D49: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58819D4C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x2E
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58819D51: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58819D54: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58819D58: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58819D5D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819D5F: je 0x58819da2
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x58819D61: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58819D65: cmp dword ptr [ecx + 0x164], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x58819D6C: jle 0x58819d8f
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x58819D6E: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819D74: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58819D76: je 0x58819d8f
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58819D78: mov ecx, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819D7E: lea edx, [edi - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0xF6
        // 0x58819D81: push edx
        __asm _emit 0x52
        // 0x58819D82: push ebx
        __asm _emit 0x53
        // 0x58819D83: push ebp
        __asm _emit 0x55
        // 0x58819D84: push ecx
        __asm _emit 0x51
        // 0x58819D85: push esi
        __asm _emit 0x56
        // 0x58819D86: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819D88: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x7E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58819D8D: jmp 0x58819da4
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58819D8F: lea edx, [edi - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0xF6
        // 0x58819D92: push edx
        __asm _emit 0x52
        // 0x58819D93: push ebx
        __asm _emit 0x53
        // 0x58819D94: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58819D96: push ebp
        __asm _emit 0x55
        // 0x58819D97: push ecx
        __asm _emit 0x51
        // 0x58819D98: push esi
        __asm _emit 0x56
        // 0x58819D99: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819D9B: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x7E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58819DA0: jmp 0x58819da4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819DA2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819DA4: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58819DA9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819DAB: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58819DB0: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58819DB3: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x8F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58819DB8: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58819DBA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x2E
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58819DBF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58819DC2: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58819DC6: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58819DCB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819DCD: je 0x58819e0d
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58819DCF: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58819DD3: cmp dword ptr [ecx + 0x164], 6
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x58819DDA: jle 0x58819dfa
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58819DDC: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819DE2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58819DE4: je 0x58819dfa
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58819DE6: mov ecx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x18
        // 0x58819DE9: lea edx, [edi - 7]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0xF9
        // 0x58819DEC: push edx
        __asm _emit 0x52
        // 0x58819DED: push ebx
        __asm _emit 0x53
        // 0x58819DEE: push ebp
        __asm _emit 0x55
        // 0x58819DEF: push ecx
        __asm _emit 0x51
        // 0x58819DF0: push esi
        __asm _emit 0x56
        // 0x58819DF1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819DF3: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x7E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58819DF8: jmp 0x58819e0f
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58819DFA: lea edx, [edi - 7]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0xF9
        // 0x58819DFD: push edx
        __asm _emit 0x52
        // 0x58819DFE: push ebx
        __asm _emit 0x53
        // 0x58819DFF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58819E01: push ebp
        __asm _emit 0x55
        // 0x58819E02: push ecx
        __asm _emit 0x51
        // 0x58819E03: push esi
        __asm _emit 0x56
        // 0x58819E04: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819E06: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x7E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58819E0B: jmp 0x58819e0f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819E0D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819E0F: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58819E11: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58819E16: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58819E19: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x2E
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58819E1E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58819E21: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58819E25: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58819E2A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819E2C: je 0x58819e6c
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58819E2E: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58819E32: cmp dword ptr [ecx + 0x164], 7
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x58819E39: jle 0x58819e59
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58819E3B: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819E41: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58819E43: je 0x58819e59
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58819E45: mov ecx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x1C
        // 0x58819E48: add edi, -8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xF8
        // 0x58819E4B: push edi
        __asm _emit 0x57
        // 0x58819E4C: push ebx
        __asm _emit 0x53
        // 0x58819E4D: push ebp
        __asm _emit 0x55
        // 0x58819E4E: push ecx
        __asm _emit 0x51
        // 0x58819E4F: push esi
        __asm _emit 0x56
        // 0x58819E50: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819E52: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58819E57: jmp 0x58819e6e
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58819E59: add edi, -8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xF8
        // 0x58819E5C: push edi
        __asm _emit 0x57
        // 0x58819E5D: push ebx
        __asm _emit 0x53
        // 0x58819E5E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58819E60: push ebp
        __asm _emit 0x55
        // 0x58819E61: push ecx
        __asm _emit 0x51
        // 0x58819E62: push esi
        __asm _emit 0x56
        // 0x58819E63: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819E65: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x7D
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58819E6A: jmp 0x58819e6e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819E6C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819E6E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819E73: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819E75: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58819E7A: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58819E7D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x8E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58819E82: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819E87: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x2D
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58819E8C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58819E8F: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58819E93: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58819E98: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819E9A: je 0x58819ecc
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58819E9C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819E9E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819EA0: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58819EA5: lea ecx, [ebx + 0x96]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819EAB: push ecx
        __asm _emit 0x51
        // 0x58819EAC: lea edx, [ebp + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819EB2: push edx
        __asm _emit 0x52
        // 0x58819EB3: lea ecx, [ebx + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x1E
        // 0x58819EB6: push ecx
        __asm _emit 0x51
        // 0x58819EB7: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58819EBD: lea edx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58819EC0: push edx
        __asm _emit 0x52
        // 0x58819EC1: push ecx
        __asm _emit 0x51
        // 0x58819EC2: push esi
        __asm _emit 0x56
        // 0x58819EC3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819EC5: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xE1
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58819ECA: jmp 0x58819ece
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819ECC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819ECE: lea edi, [esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58819ED1: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819ED6: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58819EDB: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58819EDD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x2D
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58819EE2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58819EE5: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58819EE9: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x58819EEE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819EF0: je 0x58819f25
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58819EF2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819EF4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819EF6: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58819EFB: lea edx, [ebx + 0x96]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819F01: push edx
        __asm _emit 0x52
        // 0x58819F02: lea ecx, [ebp + 0x146]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819F08: push ecx
        __asm _emit 0x51
        // 0x58819F09: lea edx, [ebx + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x1E
        // 0x58819F0C: push edx
        __asm _emit 0x52
        // 0x58819F0D: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58819F13: lea ecx, [ebp + 0xae]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819F19: push ecx
        __asm _emit 0x51
        // 0x58819F1A: push edx
        __asm _emit 0x52
        // 0x58819F1B: push esi
        __asm _emit 0x56
        // 0x58819F1C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819F1E: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xE0
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58819F23: jmp 0x58819f27
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819F25: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819F27: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819F2C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58819F31: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58819F34: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x2D
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58819F39: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58819F3C: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58819F40: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x58819F45: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819F47: je 0x58819f7c
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58819F49: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819F4B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819F4D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58819F52: lea ecx, [ebx + 0x96]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819F58: push ecx
        __asm _emit 0x51
        // 0x58819F59: lea edx, [ebp + 0x121]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819F5F: push edx
        __asm _emit 0x52
        // 0x58819F60: lea ecx, [ebx + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x1E
        // 0x58819F63: push ecx
        __asm _emit 0x51
        // 0x58819F64: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58819F6A: lea edx, [ebp + 0xe1]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819F70: push edx
        __asm _emit 0x52
        // 0x58819F71: push ecx
        __asm _emit 0x51
        // 0x58819F72: push esi
        __asm _emit 0x56
        // 0x58819F73: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819F75: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xE0
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58819F7A: jmp 0x58819f7e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819F7C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819F7E: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819F83: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58819F88: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58819F8B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58819F90: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58819F93: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58819F97: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x58819F9C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819F9E: je 0x58819fd3
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58819FA0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819FA2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819FA4: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58819FA9: lea edx, [ebx + 0x96]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819FAF: push edx
        __asm _emit 0x52
        // 0x58819FB0: lea ecx, [ebp + 0xaf]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819FB6: push ecx
        __asm _emit 0x51
        // 0x58819FB7: lea edx, [ebx + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x1E
        // 0x58819FBA: push edx
        __asm _emit 0x52
        // 0x58819FBB: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58819FC1: lea ecx, [ebp + 0x8f]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819FC7: push ecx
        __asm _emit 0x51
        // 0x58819FC8: push edx
        __asm _emit 0x52
        // 0x58819FC9: push esi
        __asm _emit 0x56
        // 0x58819FCA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58819FCC: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xDF
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58819FD1: jmp 0x58819fd5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819FD3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819FD5: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819FDA: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58819FDF: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819FE5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x2C
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58819FEA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58819FED: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58819FF1: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x58819FF6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819FF8: je 0x5881a02d
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58819FFA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819FFC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58819FFE: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5881A003: lea ecx, [ebx + 0x96]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A009: push ecx
        __asm _emit 0x51
        // 0x5881A00A: lea edx, [ebp + 0x15e]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A010: push edx
        __asm _emit 0x52
        // 0x5881A011: lea ecx, [ebx + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x1E
        // 0x5881A014: push ecx
        __asm _emit 0x51
        // 0x5881A015: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881A01B: lea edx, [ebp + 0x116]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A021: push edx
        __asm _emit 0x52
        // 0x5881A022: push ecx
        __asm _emit 0x51
        // 0x5881A023: push esi
        __asm _emit 0x56
        // 0x5881A024: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881A026: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xDF
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A02B: jmp 0x5881a02f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881A02D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881A02F: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A034: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5881A039: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A03F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x2C
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881A044: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881A047: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881A04B: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x5881A050: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881A052: je 0x5881a087
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5881A054: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881A056: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881A058: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5881A05D: lea edx, [ebx + 0x96]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A063: push edx
        __asm _emit 0x52
        // 0x5881A064: lea ecx, [ebp + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A06A: push ecx
        __asm _emit 0x51
        // 0x5881A06B: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881A071: lea edx, [ebx + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x1E
        // 0x5881A074: push edx
        __asm _emit 0x52
        // 0x5881A075: add ebp, 0x15d
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x5D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A07B: push ebp
        __asm _emit 0x55
        // 0x5881A07C: push ecx
        __asm _emit 0x51
        // 0x5881A07D: push esi
        __asm _emit 0x56
        // 0x5881A07E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881A080: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xDF
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A085: jmp 0x5881a089
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881A087: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881A089: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5881A08E: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A094: mov dword ptr [esp + 0x34], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A09C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5881A0A0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5881A0A2: mov dword ptr [eax + 0x5c], 0xd
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A0A9: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5881A0AB: mov ecx, dword ptr [eax + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x5881A0AE: lea edx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x89
        // 0x5881A0B1: add edx, dword ptr [eax + 0x18]
        __asm _emit 0x03
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5881A0B4: mov dword ptr [eax + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x5881A0B7: mov ebp, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x2F
        // 0x5881A0B9: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x40
        // 0x5881A0BC: mov ax, word ptr [esp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881A0C1: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        // 0x5881A0C5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5881A0C7: je 0x5881a0cf
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881A0C9: push ebp
        __asm _emit 0x55
        // 0x5881A0CA: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x8E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A0CF: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x5881A0D2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5881A0D4: je 0x5881a0dc
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881A0D6: push ebp
        __asm _emit 0x55
        // 0x5881A0D7: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x8E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A0DC: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5881A0DE: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A0E3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881A0E7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5881A0EA: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x5881A0EF: jne 0x5881a0a0
        __asm _emit 0x75
        __asm _emit 0xAF
        // 0x5881A0F1: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A0F6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x2B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881A0FB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881A0FE: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881A102: mov ebp, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5881A106: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x5881A10B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881A10D: je 0x5881a15c
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5881A10F: cmp dword ptr [ebp + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5881A116: jle 0x5881a12a
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5881A118: mov ecx, dword ptr [ebp + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A11E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5881A120: je 0x5881a12a
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5881A122: lea edx, [ecx + 0x1c0]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A128: jmp 0x5881a12c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881A12A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5881A12C: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881A130: push ecx
        __asm _emit 0x51
        // 0x5881A131: lea ecx, [ebx + 0x9e]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A137: push ecx
        __asm _emit 0x51
        // 0x5881A138: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881A13C: add ecx, 0x122
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A142: push ecx
        __asm _emit 0x51
        // 0x5881A143: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881A149: push edx
        __asm _emit 0x52
        // 0x5881A14A: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881A150: push esi
        __asm _emit 0x56
        // 0x5881A151: push edx
        __asm _emit 0x52
        // 0x5881A152: push ecx
        __asm _emit 0x51
        // 0x5881A153: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881A155: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x3C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881A15A: jmp 0x5881a15e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881A15C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881A15E: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A163: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5881A168: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A16E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x2A
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881A173: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881A176: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5881A17A: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x5881A17F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881A181: je 0x5881a1d0
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5881A183: cmp dword ptr [ebp + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x5881A18A: jle 0x5881a19e
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5881A18C: mov ecx, dword ptr [ebp + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A192: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5881A194: je 0x5881a19e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5881A196: add ecx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A19C: jmp 0x5881a1a0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881A19E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881A1A0: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881A1A4: push edx
        __asm _emit 0x52
        // 0x5881A1A5: lea edx, [ebx + 0x9e]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A1AB: push edx
        __asm _emit 0x52
        // 0x5881A1AC: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881A1B0: add edx, 0x154
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A1B6: push edx
        __asm _emit 0x52
        // 0x5881A1B7: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881A1BD: push ecx
        __asm _emit 0x51
        // 0x5881A1BE: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881A1C4: push esi
        __asm _emit 0x56
        // 0x5881A1C5: push ecx
        __asm _emit 0x51
        // 0x5881A1C6: push edx
        __asm _emit 0x52
        // 0x5881A1C7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881A1C9: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x3B
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881A1CE: jmp 0x5881a1d2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881A1D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881A1D2: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A1D8: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A1DD: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5881A1E2: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A1E8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x8B
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A1ED: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A1F3: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A1F8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x8B
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A1FD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881A1FF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x2A
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881A204: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881A206: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881A209: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5881A20D: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x5881A212: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5881A214: je 0x5881a287
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x5881A216: cmp dword ptr [ebp + 0x164], 0x22
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        // 0x5881A21D: jle 0x5881a231
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5881A21F: mov eax, dword ptr [ebp + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A225: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881A227: je 0x5881a231
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5881A229: mov ebp, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A22F: jmp 0x5881a233
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881A231: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5881A233: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881A237: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881A23B: dec eax
        __asm _emit 0x48
        // 0x5881A23C: push eax
        __asm _emit 0x50
        // 0x5881A23D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881A23F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881A241: add ebx, 0x38
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x38
        // 0x5881A244: push ebx
        __asm _emit 0x53
        // 0x5881A245: add ecx, 5
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x05
        // 0x5881A248: push ecx
        __asm _emit 0x51
        // 0x5881A249: push esi
        __asm _emit 0x56
        // 0x5881A24A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881A24C: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x8F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A251: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881A257: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5881A25A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5881A25C: je 0x5881a289
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5881A25E: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5881A261: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x5881A264: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5881A267: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5881A26A: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5881A26D: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5881A270: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5881A273: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881A276: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5881A279: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5881A27C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5881A27F: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5881A282: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5881A285: jmp 0x5881a289
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881A287: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5881A289: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A28E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881A290: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5881A295: mov dword ptr [esi + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A29B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x8A
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A2A0: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A2A5: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5881A2A9: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5881A2AD: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A2B2: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A2B7: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5881A2BA: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5881A2BD: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5881A2C1: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5881A2C3: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881A2C7: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A2CE: pop ecx
        __asm _emit 0x59
        // 0x5881A2CF: pop edi
        __asm _emit 0x5F
        // 0x5881A2D0: pop esi
        __asm _emit 0x5E
        // 0x5881A2D1: pop ebp
        __asm _emit 0x5D
        // 0x5881A2D2: pop ebx
        __asm _emit 0x5B
        // 0x5881A2D3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5881A2D6: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
