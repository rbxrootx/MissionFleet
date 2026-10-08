// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1200 bytes in 1 exact ranges.
// Source symbol alias: FUN_58770d50.

// Ghidra body range 0x58770D50..0x58771200; 1200 mapped bytes.
extern "C" __declspec(naked) void FUN_58770d50_segment_00() {
    __asm {
        // 0x58770D50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58770D52: push 0x5897f010
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xF0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58770D57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770D5D: push eax
        __asm _emit 0x50
        // 0x58770D5E: push ecx
        __asm _emit 0x51
        // 0x58770D5F: push ebx
        __asm _emit 0x53
        // 0x58770D60: push ebp
        __asm _emit 0x55
        // 0x58770D61: push esi
        __asm _emit 0x56
        // 0x58770D62: push edi
        __asm _emit 0x57
        // 0x58770D63: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58770D68: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58770D6A: push eax
        __asm _emit 0x50
        // 0x58770D6B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58770D6F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770D75: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770D77: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58770D7B: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58770D7F: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58770D83: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58770D87: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58770D8B: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58770D8F: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58770D93: push ebx
        __asm _emit 0x53
        // 0x58770D94: push eax
        __asm _emit 0x50
        // 0x58770D95: push ecx
        __asm _emit 0x51
        // 0x58770D96: push ebp
        __asm _emit 0x55
        // 0x58770D97: push edi
        __asm _emit 0x57
        // 0x58770D98: push edx
        __asm _emit 0x52
        // 0x58770D99: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58770D9B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x24
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770DA0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58770DA6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58770DAB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770DAD: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x58770DB0: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x58770DB3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770DBA: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58770DBD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58770DBF: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58770DC3: mov dword ptr [esi], 0x58996170
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x70
        __asm _emit 0x61
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58770DC9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58770DCE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58770DD1: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58770DD5: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58770DDA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770DDC: je 0x58770e15
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58770DDE: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58770DE2: cmp dword ptr [ecx + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770DE9: jle 0x58770e05
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58770DEB: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770DF1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58770DF3: je 0x58770e05
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58770DF5: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58770DF7: push ebx
        __asm _emit 0x53
        // 0x58770DF8: push ebp
        __asm _emit 0x55
        // 0x58770DF9: push edi
        __asm _emit 0x57
        // 0x58770DFA: push ecx
        __asm _emit 0x51
        // 0x58770DFB: push esi
        __asm _emit 0x56
        // 0x58770DFC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770DFE: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x0E
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58770E03: jmp 0x58770e17
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58770E05: push ebx
        __asm _emit 0x53
        // 0x58770E06: push ebp
        __asm _emit 0x55
        // 0x58770E07: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58770E09: push edi
        __asm _emit 0x57
        // 0x58770E0A: push ecx
        __asm _emit 0x51
        // 0x58770E0B: push esi
        __asm _emit 0x56
        // 0x58770E0C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770E0E: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x0E
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58770E13: jmp 0x58770e17
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58770E15: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770E17: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770E1C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770E1E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58770E23: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58770E26: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x1E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770E2B: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58770E2D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58770E32: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58770E35: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58770E39: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58770E3E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770E40: je 0x58770e7a
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58770E42: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58770E46: cmp dword ptr [ecx + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58770E4D: jle 0x58770e6a
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x58770E4F: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770E55: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58770E57: je 0x58770e6a
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58770E59: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58770E5C: push ebx
        __asm _emit 0x53
        // 0x58770E5D: push ebp
        __asm _emit 0x55
        // 0x58770E5E: push edi
        __asm _emit 0x57
        // 0x58770E5F: push ecx
        __asm _emit 0x51
        // 0x58770E60: push esi
        __asm _emit 0x56
        // 0x58770E61: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770E63: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58770E68: jmp 0x58770e7c
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58770E6A: push ebx
        __asm _emit 0x53
        // 0x58770E6B: push ebp
        __asm _emit 0x55
        // 0x58770E6C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58770E6E: push edi
        __asm _emit 0x57
        // 0x58770E6F: push ecx
        __asm _emit 0x51
        // 0x58770E70: push esi
        __asm _emit 0x56
        // 0x58770E71: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770E73: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58770E78: jmp 0x58770e7c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58770E7A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770E7C: push 0xdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770E81: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770E83: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58770E88: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58770E8B: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x1E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770E90: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770E95: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xBD
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58770E9A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58770E9D: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58770EA1: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58770EA6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770EA8: je 0x58770eca
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58770EAA: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58770EAC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770EAE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770EB0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58770EB2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770EB4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770EB6: lea ecx, [ebp + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x19
        // 0x58770EB9: push ecx
        __asm _emit 0x51
        // 0x58770EBA: lea edx, [edi + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x19
        // 0x58770EBD: push edx
        __asm _emit 0x52
        // 0x58770EBE: push esi
        __asm _emit 0x56
        // 0x58770EBF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770EC1: call 0x587b6dd0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x5F
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58770EC6: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58770EC8: jmp 0x58770ecc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58770ECA: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58770ECC: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58770ED1: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x58770ED4: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x58770ED7: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58770EDC: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        // 0x58770EE0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58770EE2: je 0x58770eea
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58770EE4: push ebx
        __asm _emit 0x53
        // 0x58770EE5: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770EEA: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x58770EED: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58770EEF: je 0x58770ef7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58770EF1: push ebx
        __asm _emit 0x53
        // 0x58770EF2: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x1F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770EF7: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770EFC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xBD
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58770F01: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58770F04: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58770F08: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58770F0D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770F0F: je 0x58770f48
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58770F11: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770F13: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770F15: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58770F1A: lea ecx, [ebp + 0x1a9]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xA9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770F20: push ecx
        __asm _emit 0x51
        // 0x58770F21: lea edx, [edi + 0x181]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770F27: push edx
        __asm _emit 0x52
        // 0x58770F28: lea ecx, [ebp + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x19
        // 0x58770F2B: push ecx
        __asm _emit 0x51
        // 0x58770F2C: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58770F32: lea edx, [edi + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x19
        // 0x58770F35: push edx
        __asm _emit 0x52
        // 0x58770F36: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x58770F39: push ecx
        __asm _emit 0x51
        // 0x58770F3A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770F3C: push edx
        __asm _emit 0x52
        // 0x58770F3D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770F3F: call 0x587494d0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x85
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58770F44: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58770F46: jmp 0x58770f4a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58770F48: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58770F4A: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58770F4F: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x58770F52: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x58770F55: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58770F5A: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        // 0x58770F5E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58770F60: je 0x58770f68
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58770F62: push ebx
        __asm _emit 0x53
        // 0x58770F63: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770F68: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x58770F6B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58770F6D: je 0x58770f75
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58770F6F: push ebx
        __asm _emit 0x53
        // 0x58770F70: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x1F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770F75: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58770F78: mov ecx, 0x3a
        __asm _emit 0xB9
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770F7D: mov word ptr [eax + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770F84: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58770F87: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770F8C: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x7E
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58770F91: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58770F94: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770F99: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58770F9D: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58770FA0: mov dword ptr [eax + 0x74], 0x190
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770FA7: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58770FAA: lea ecx, [edi + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x19
        // 0x58770FAD: mov dword ptr [eax + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x58770FB0: lea edx, [edi + 0x187]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770FB6: lea ecx, [ebp + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770FBC: lea ebx, [ebp + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x19
        // 0x58770FBF: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770FC4: mov dword ptr [eax + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x68
        // 0x58770FC7: mov dword ptr [eax + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x6C
        // 0x58770FCA: mov dword ptr [eax + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x58770FCD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xBC
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58770FD2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58770FD5: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58770FD9: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58770FDE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770FE0: je 0x58771030
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x58770FE2: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58770FE8: cmp dword ptr [ecx + 0x160], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x58770FEF: jle 0x58771008
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58770FF1: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770FF8: je 0x58771008
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58770FFA: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771000: add ecx, 0x7c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771006: jmp 0x5877100a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771008: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877100A: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5877100E: push edx
        __asm _emit 0x52
        // 0x5877100F: push ebx
        __asm _emit 0x53
        // 0x58771010: lea edx, [edi + 0x18d]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x8D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771016: push edx
        __asm _emit 0x52
        // 0x58771017: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877101D: push ecx
        __asm _emit 0x51
        // 0x5877101E: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771024: push esi
        __asm _emit 0x56
        // 0x58771025: push ecx
        __asm _emit 0x51
        // 0x58771026: push edx
        __asm _emit 0x52
        // 0x58771027: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771029: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xCD
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877102E: jmp 0x58771032
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771030: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58771032: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771037: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771039: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5877103E: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58771041: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x1C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771046: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877104B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771050: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771053: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58771057: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5877105C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877105E: je 0x587710b4
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x58771060: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771066: cmp dword ptr [ecx + 0x160], 0x20
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x5877106D: jle 0x58771086
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5877106F: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771076: je 0x58771086
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58771078: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877107E: add edx, 0x800
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771084: jmp 0x58771088
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771086: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58771088: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5877108C: push ebx
        __asm _emit 0x53
        // 0x5877108D: lea ecx, [ebp + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771093: push ecx
        __asm _emit 0x51
        // 0x58771094: lea ecx, [edi + 0x18d]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x8D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877109A: push ecx
        __asm _emit 0x51
        // 0x5877109B: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587710A1: push edx
        __asm _emit 0x52
        // 0x587710A2: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587710A8: push esi
        __asm _emit 0x56
        // 0x587710A9: push edx
        __asm _emit 0x52
        // 0x587710AA: push ecx
        __asm _emit 0x51
        // 0x587710AB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587710AD: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587710B2: jmp 0x587710ba
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587710B4: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587710B8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587710BA: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587710BF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587710C1: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587710C6: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x587710C9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x1C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587710CE: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587710D3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587710D8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587710DB: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587710DF: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x587710E4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587710E6: je 0x5877112b
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x587710E8: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587710EC: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587710F3: jle 0x58771104
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587710F5: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587710FB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587710FD: je 0x58771104
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587710FF: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x58771102: jmp 0x58771106
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771104: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58771106: push ebx
        __asm _emit 0x53
        // 0x58771107: lea edx, [ebp + 7]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x07
        // 0x5877110A: push edx
        __asm _emit 0x52
        // 0x5877110B: lea edx, [edi + 0x189]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771111: push edx
        __asm _emit 0x52
        // 0x58771112: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771118: push ecx
        __asm _emit 0x51
        // 0x58771119: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877111F: push esi
        __asm _emit 0x56
        // 0x58771120: push ecx
        __asm _emit 0x51
        // 0x58771121: push edx
        __asm _emit 0x52
        // 0x58771122: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771124: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58771129: jmp 0x5877112d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877112B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877112D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771132: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771134: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58771139: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5877113C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x1B
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771141: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771146: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877114B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877114E: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58771152: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x58771157: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771159: je 0x587711a8
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5877115B: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771161: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58771168: jle 0x58771181
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5877116A: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771171: je 0x58771181
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58771173: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771179: add edx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877117F: jmp 0x58771183
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771181: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58771183: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771189: push ebx
        __asm _emit 0x53
        // 0x5877118A: add ebp, 0x79
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x79
        // 0x5877118D: push ebp
        __asm _emit 0x55
        // 0x5877118E: add edi, 0xb1
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771194: push edi
        __asm _emit 0x57
        // 0x58771195: push edx
        __asm _emit 0x52
        // 0x58771196: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877119C: push esi
        __asm _emit 0x56
        // 0x5877119D: push ecx
        __asm _emit 0x51
        // 0x5877119E: push edx
        __asm _emit 0x52
        // 0x5877119F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587711A1: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xCB
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587711A6: jmp 0x587711aa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587711A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587711AA: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587711AF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587711B1: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587711B6: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587711B9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x1B
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587711BE: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587711C1: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587711C6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587711CA: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587711CC: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587711D0: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587711D4: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587711D9: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587711DC: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587711E1: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587711E4: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587711E8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587711EA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587711EE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587711F5: pop ecx
        __asm _emit 0x59
        // 0x587711F6: pop edi
        __asm _emit 0x5F
        // 0x587711F7: pop esi
        __asm _emit 0x5E
        // 0x587711F8: pop ebp
        __asm _emit 0x5D
        // 0x587711F9: pop ebx
        __asm _emit 0x5B
        // 0x587711FA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587711FD: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
