// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1202 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d6ea0.

// Ghidra body range 0x588D6EA0..0x588D7352; 1202 mapped bytes.
extern "C" __declspec(naked) void FUN_588d6ea0_segment_00() {
    __asm {
        // 0x588D6EA0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588D6EA3: push ebx
        __asm _emit 0x53
        // 0x588D6EA4: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D6EA8: push ebp
        __asm _emit 0x55
        // 0x588D6EA9: push esi
        __asm _emit 0x56
        // 0x588D6EAA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D6EAC: mov eax, dword ptr [esi + 0x652c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6EB2: lea ebp, [esi + 0x652c]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x2C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6EB8: push edi
        __asm _emit 0x57
        // 0x588D6EB9: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588D6EBC: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588D6EBF: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588D6EC2: and ebx, 0xfff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6EC8: sub edi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x588D6ECB: add eax, 0x43
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x43
        // 0x588D6ECE: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6ED2: mov dword ptr [esp + 0x1c], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6EDA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6EE0: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x588D6EE3: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6EEA: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588D6EED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D6EEF: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D6EF4: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588D6EF7: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x588D6EFC: jne 0x588d6ee0
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x588D6EFE: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588D6F00: jne 0x588d6f8d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6F06: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6F0A: add ecx, -3
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFD
        // 0x588D6F0D: push ecx
        __asm _emit 0x51
        // 0x588D6F0E: mov ecx, dword ptr [esi + 0x6528]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6F14: push edi
        __asm _emit 0x57
        // 0x588D6F15: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xC3
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D6F1A: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D6F1F: cmp dword ptr [eax + 0x164], 0x9f1
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6F29: jle 0x588d6f41
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588D6F2B: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6F31: je 0x588d6f41
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D6F33: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6F39: mov eax, dword ptr [edx + 0x27c4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC4
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6F3F: jmp 0x588d6f43
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D6F41: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D6F43: mov ecx, dword ptr [esi + 0x6528]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6F49: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588D6F4C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D6F4E: je 0x588d6f78
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588D6F50: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588D6F53: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588D6F56: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588D6F59: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588D6F5C: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588D6F5F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D6F61: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588D6F64: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588D6F66: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D6F69: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D6F6C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D6F6F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588D6F72: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D6F75: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588D6F78: mov esi, dword ptr [esi + 0x6528]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x28
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6F7E: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588D6F83: pop edi
        __asm _emit 0x5F
        // 0x588D6F84: pop esi
        __asm _emit 0x5E
        // 0x588D6F85: pop ebp
        __asm _emit 0x5D
        // 0x588D6F86: pop ebx
        __asm _emit 0x5B
        // 0x588D6F87: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588D6F8A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D6F8D: cmp ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0A
        // 0x588D6F90: jg 0x588d704e
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6F96: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588D6F98: jle 0x588d704e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6F9E: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6FA2: lea ecx, [ebp - 3]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFD
        // 0x588D6FA5: push ecx
        __asm _emit 0x51
        // 0x588D6FA6: mov ecx, dword ptr [esi + 0x6514]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6FAC: push edi
        __asm _emit 0x57
        // 0x588D6FAD: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xC2
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D6FB2: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D6FB7: cmp dword ptr [eax + 0x164], 0x9f6
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6FC1: jle 0x588d6fda
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588D6FC3: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6FCA: je 0x588d6fda
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D6FCC: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6FD2: mov eax, dword ptr [edx + 0x27d8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xD8
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6FD8: jmp 0x588d6fdc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D6FDA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D6FDC: mov ecx, dword ptr [esi + 0x6514]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6FE2: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588D6FE5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D6FE7: je 0x588d7011
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588D6FE9: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588D6FEC: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588D6FEF: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588D6FF2: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588D6FF5: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588D6FF8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D6FFA: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588D6FFD: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588D6FFF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D7002: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D7005: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D7008: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588D700B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D700E: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588D7011: lea ecx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588D7014: push ecx
        __asm _emit 0x51
        // 0x588D7015: mov ecx, dword ptr [esi + 0x652c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D701B: add edi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1C
        // 0x588D701E: push edi
        __asm _emit 0x57
        // 0x588D701F: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xC2
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D7024: mov ecx, dword ptr [esi + 0x652c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D702A: push ebx
        __asm _emit 0x53
        // 0x588D702B: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D7030: mov eax, dword ptr [esi + 0x652c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7036: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D703B: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588D703F: mov eax, dword ptr [esi + 0x6514]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7045: add edi, 0x19
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x19
        // 0x588D7048: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588D704C: jmp 0x588d7052
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588D704E: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D7052: cmp ebx, 0x64
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x64
        // 0x588D7055: jg 0x588d710e
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D705B: cmp ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0A
        // 0x588D705E: jle 0x588d710e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7064: mov ecx, dword ptr [esi + 0x6518]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D706A: lea edx, [ebp - 3]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xFD
        // 0x588D706D: push edx
        __asm _emit 0x52
        // 0x588D706E: push edi
        __asm _emit 0x57
        // 0x588D706F: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xC2
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D7074: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D7079: cmp dword ptr [eax + 0x164], 0x9f5
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7083: jle 0x588d709c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588D7085: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D708C: je 0x588d709c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D708E: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7094: mov eax, dword ptr [eax + 0x27d4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xD4
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D709A: jmp 0x588d709e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D709C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D709E: mov ecx, dword ptr [esi + 0x6518]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D70A4: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588D70A7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D70A9: je 0x588d70d3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588D70AB: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588D70AE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588D70B1: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588D70B4: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588D70B7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588D70BA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D70BC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588D70BF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588D70C1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D70C4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D70C7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D70CA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588D70CD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D70D0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588D70D3: lea ecx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588D70D6: push ecx
        __asm _emit 0x51
        // 0x588D70D7: mov ecx, dword ptr [esi + 0x6530]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D70DD: add edi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1C
        // 0x588D70E0: push edi
        __asm _emit 0x57
        // 0x588D70E1: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xC1
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D70E6: mov ecx, dword ptr [esi + 0x6530]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D70EC: push ebx
        __asm _emit 0x53
        // 0x588D70ED: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D70F2: mov eax, dword ptr [esi + 0x6530]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D70F8: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D70FD: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588D7101: mov eax, dword ptr [esi + 0x6518]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7107: add edi, 0x19
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x19
        // 0x588D710A: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588D710E: cmp ebx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7114: jg 0x588d71ca
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D711A: cmp ebx, 0x64
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x64
        // 0x588D711D: jle 0x588d71ca
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7123: mov ecx, dword ptr [esi + 0x651c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7129: lea edx, [ebp - 3]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xFD
        // 0x588D712C: push edx
        __asm _emit 0x52
        // 0x588D712D: push edi
        __asm _emit 0x57
        // 0x588D712E: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xC1
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D7133: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D7138: cmp dword ptr [eax + 0x164], 0x9f4
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7142: jle 0x588d715b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588D7144: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D714B: je 0x588d715b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D714D: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7153: mov eax, dword ptr [eax + 0x27d0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xD0
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7159: jmp 0x588d715d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D715B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D715D: mov ecx, dword ptr [esi + 0x651c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7163: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588D7166: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D7168: je 0x588d7192
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588D716A: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588D716D: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588D7170: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588D7173: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588D7176: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588D7179: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D717B: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588D717E: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588D7180: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D7183: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D7186: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D7189: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588D718C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D718F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588D7192: lea ecx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588D7195: push ecx
        __asm _emit 0x51
        // 0x588D7196: mov ecx, dword ptr [esi + 0x6534]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D719C: add edi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1C
        // 0x588D719F: push edi
        __asm _emit 0x57
        // 0x588D71A0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D71A5: mov ecx, dword ptr [esi + 0x6534]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D71AB: push ebx
        __asm _emit 0x53
        // 0x588D71AC: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D71B1: mov eax, dword ptr [esi + 0x6534]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D71B7: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D71BC: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588D71C0: mov eax, dword ptr [esi + 0x651c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D71C6: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588D71CA: cmp ebx, 0x1f4
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D71D0: jg 0x588d7289
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D71D6: cmp ebx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D71DC: jle 0x588d7289
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D71E2: mov ecx, dword ptr [esi + 0x6520]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D71E8: lea edx, [ebp - 3]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xFD
        // 0x588D71EB: push edx
        __asm _emit 0x52
        // 0x588D71EC: push edi
        __asm _emit 0x57
        // 0x588D71ED: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D71F2: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D71F7: cmp dword ptr [eax + 0x164], 0x9f3
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7201: jle 0x588d721a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588D7203: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D720A: je 0x588d721a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D720C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7212: mov eax, dword ptr [eax + 0x27cc]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xCC
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7218: jmp 0x588d721c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D721A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D721C: mov ecx, dword ptr [esi + 0x6520]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7222: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588D7225: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D7227: je 0x588d7251
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588D7229: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588D722C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588D722F: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588D7232: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588D7235: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588D7238: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D723A: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588D723D: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588D723F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D7242: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D7245: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D7248: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588D724B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D724E: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588D7251: lea ecx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588D7254: push ecx
        __asm _emit 0x51
        // 0x588D7255: mov ecx, dword ptr [esi + 0x6538]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D725B: add edi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1C
        // 0x588D725E: push edi
        __asm _emit 0x57
        // 0x588D725F: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D7264: mov ecx, dword ptr [esi + 0x6538]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D726A: push ebx
        __asm _emit 0x53
        // 0x588D726B: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D7270: mov eax, dword ptr [esi + 0x6538]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7276: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D727B: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588D727F: mov eax, dword ptr [esi + 0x6520]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7285: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588D7289: cmp ebx, 0x258
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D728F: jg 0x588d7348
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7295: cmp ebx, 0x1f4
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D729B: jle 0x588d7348
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D72A1: mov ecx, dword ptr [esi + 0x6524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D72A7: lea edx, [ebp - 3]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xFD
        // 0x588D72AA: push edx
        __asm _emit 0x52
        // 0x588D72AB: push edi
        __asm _emit 0x57
        // 0x588D72AC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D72B1: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D72B6: cmp dword ptr [eax + 0x164], 0x9f2
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D72C0: jle 0x588d72d9
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588D72C2: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D72C9: je 0x588d72d9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D72CB: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D72D1: mov eax, dword ptr [eax + 0x27c8]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC8
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D72D7: jmp 0x588d72db
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D72D9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D72DB: mov ecx, dword ptr [esi + 0x6524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D72E1: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588D72E4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D72E6: je 0x588d7310
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588D72E8: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588D72EB: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588D72EE: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588D72F1: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588D72F4: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588D72F7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D72F9: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588D72FC: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588D72FE: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D7301: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D7304: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D7307: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588D730A: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D730D: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588D7310: mov ecx, dword ptr [esi + 0x653c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7316: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588D7319: push ebp
        __asm _emit 0x55
        // 0x588D731A: add edi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1C
        // 0x588D731D: push edi
        __asm _emit 0x57
        // 0x588D731E: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D7323: mov ecx, dword ptr [esi + 0x653c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7329: push ebx
        __asm _emit 0x53
        // 0x588D732A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D732F: mov eax, dword ptr [esi + 0x653c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7335: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D733A: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588D733E: mov esi, dword ptr [esi + 0x6524]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x24
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7344: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588D7348: pop edi
        __asm _emit 0x5F
        // 0x588D7349: pop esi
        __asm _emit 0x5E
        // 0x588D734A: pop ebp
        __asm _emit 0x5D
        // 0x588D734B: pop ebx
        __asm _emit 0x5B
        // 0x588D734C: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588D734F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
