// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58896D50 .. +0x372 bytes.
// Source symbol alias: FUN_58896d50.
extern "C" __declspec(naked) void FUN_58896d50() {
    __asm {
        // 0x58896D50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58896D52: push 0x58987254
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58896D57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896D5D: push eax
        __asm _emit 0x50
        // 0x58896D5E: push ecx
        __asm _emit 0x51
        // 0x58896D5F: push ebx
        __asm _emit 0x53
        // 0x58896D60: push ebp
        __asm _emit 0x55
        // 0x58896D61: push esi
        __asm _emit 0x56
        // 0x58896D62: push edi
        __asm _emit 0x57
        // 0x58896D63: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58896D68: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58896D6A: push eax
        __asm _emit 0x50
        // 0x58896D6B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58896D6F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896D75: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58896D77: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58896D7B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58896D7F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58896D83: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58896D87: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58896D8B: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58896D8F: push eax
        __asm _emit 0x50
        // 0x58896D90: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58896D94: push ecx
        __asm _emit 0x51
        // 0x58896D95: push edx
        __asm _emit 0x52
        // 0x58896D96: push ebp
        __asm _emit 0x55
        // 0x58896D97: push edi
        __asm _emit 0x57
        // 0x58896D98: push eax
        __asm _emit 0x50
        // 0x58896D99: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58896D9B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xC4
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58896DA0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58896DA6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58896DAB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58896DAD: mov eax, 0x40
        __asm _emit 0xB8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896DB2: mov dword ptr [esi], 0x589a009c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58896DB8: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x58896DBB: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x58896DBE: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896DC5: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x58896DC8: mov dword ptr [esi + 0x578], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896DCE: mov dword ptr [esi + 0x57c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896DD4: mov dword ptr [esi + 0xd4], 0x1900
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896DDE: mov dword ptr [esi + 0x580], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896DE4: mov dword ptr [esi + 0x584], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896DEA: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58896DEF: cmp dword ptr [eax + 0x164], 0x15
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x58896DF6: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58896DFA: jle 0x58896e0f
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58896DFC: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E02: je 0x58896e0f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58896E04: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E0A: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x58896E0D: jmp 0x58896e11
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58896E0F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58896E11: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E16: lea edx, [esi + 0x4e8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E1C: push ebx
        __asm _emit 0x53
        // 0x58896E1D: push edx
        __asm _emit 0x52
        // 0x58896E1E: mov dword ptr [esi + 0x4e4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E24: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x5E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58896E29: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58896E2C: push 0xffff40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58896E31: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58896E33: push ebx
        __asm _emit 0x53
        // 0x58896E34: mov dword ptr [esi + 0x568], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E3A: call dword ptr [0x5898c07c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x7C
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58896E40: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58896E43: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x58896E46: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x58896E49: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x58896E4C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58896E4E: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E54: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E5A: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E60: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E66: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E6C: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E72: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E78: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E7E: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E84: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E8A: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E8F: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896E95: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x5D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58896E9A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58896E9D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58896EA1: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58896EA6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58896EA8: je 0x58896ef9
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x58896EAA: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58896EB0: cmp dword ptr [ecx + 0x164], 0x4ff
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896EBA: jle 0x58896ed2
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58896EBC: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896EC2: je 0x58896ed2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58896EC4: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896ECA: mov ecx, dword ptr [ecx + 0x13fc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xFC
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896ED0: jmp 0x58896ed4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58896ED2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58896ED4: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58896ED8: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896EDD: lea edx, [ebp - 0x19]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xE7
        // 0x58896EE0: push edx
        __asm _emit 0x52
        // 0x58896EE1: push -0xa
        __asm _emit 0x6A
        __asm _emit 0xF6
        // 0x58896EE3: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x58896EE5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58896EE7: add edi, -0x1e
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xE2
        // 0x58896EEA: push edi
        __asm _emit 0x57
        // 0x58896EEB: push edx
        __asm _emit 0x52
        // 0x58896EEC: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58896EEE: push ecx
        __asm _emit 0x51
        // 0x58896EEF: push esi
        __asm _emit 0x56
        // 0x58896EF0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58896EF2: call 0x5875ef70
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x80
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58896EF7: jmp 0x58896efb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58896EF9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58896EFB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58896EFD: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58896F01: mov dword ptr [esi + 0x588], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F07: call 0x5875ee30
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x7F
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58896F0C: mov ecx, dword ptr [esi + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F12: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F17: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xBD
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58896F1C: mov eax, dword ptr [esi + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F22: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F27: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58896F2B: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F30: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x5D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58896F35: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58896F38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58896F3C: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58896F41: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58896F43: je 0x58896f91
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x58896F45: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58896F4B: cmp dword ptr [ecx + 0x164], 0x500
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F55: jle 0x58896f6d
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58896F57: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F5D: je 0x58896f6d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58896F5F: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F65: mov ecx, dword ptr [ecx + 0x1400]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F6B: jmp 0x58896f6f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58896F6D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58896F6F: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58896F73: push 0xdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F78: lea edx, [ebp - 0x19]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xE7
        // 0x58896F7B: push edx
        __asm _emit 0x52
        // 0x58896F7C: push -5
        __asm _emit 0x6A
        __asm _emit 0xFB
        // 0x58896F7E: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x58896F80: push 0x11
        __asm _emit 0x6A
        __asm _emit 0x11
        // 0x58896F82: push edi
        __asm _emit 0x57
        // 0x58896F83: push edx
        __asm _emit 0x52
        // 0x58896F84: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58896F86: push ecx
        __asm _emit 0x51
        // 0x58896F87: push esi
        __asm _emit 0x56
        // 0x58896F88: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58896F8A: call 0x5875ef70
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x7F
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58896F8F: jmp 0x58896f93
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58896F91: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58896F93: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58896F95: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58896F99: mov dword ptr [esi + 0x58c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896F9F: call 0x5875ee30
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x7E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58896FA4: mov eax, dword ptr [esi + 0x58c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896FAA: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896FAF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58896FB3: lea ebp, [esi + 0x5b8]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896FB9: mov dword ptr [esp + 0x38], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896FC1: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58896FC3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58896FC8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58896FCA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58896FCD: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58896FD1: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58896FD6: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58896FD8: je 0x58896ffb
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x58896FDA: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58896FDE: add eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58896FE1: push eax
        __asm _emit 0x50
        // 0x58896FE2: push ebx
        __asm _emit 0x53
        // 0x58896FE3: push ebx
        __asm _emit 0x53
        // 0x58896FE4: push ebx
        __asm _emit 0x53
        // 0x58896FE5: push ebx
        __asm _emit 0x53
        // 0x58896FE6: push esi
        __asm _emit 0x56
        // 0x58896FE7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58896FE9: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xC1
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58896FEE: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58896FF4: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58896FF7: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58896FF9: jmp 0x58896ffd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58896FFB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58896FFD: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x58897000: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897005: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58897009: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5889700C: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897011: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58897015: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58897017: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5889701B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x5C
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58897020: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58897022: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58897025: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58897029: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5889702E: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58897030: je 0x58897051
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58897032: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897036: add eax, 0x66
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x66
        // 0x58897039: push eax
        __asm _emit 0x50
        // 0x5889703A: push ebx
        __asm _emit 0x53
        // 0x5889703B: push ebx
        __asm _emit 0x53
        // 0x5889703C: push ebx
        __asm _emit 0x53
        // 0x5889703D: push ebx
        __asm _emit 0x53
        // 0x5889703E: push esi
        __asm _emit 0x56
        // 0x5889703F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58897041: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xC1
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897046: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889704C: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5889704F: jmp 0x58897053
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897051: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58897053: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x58897056: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889705B: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5889705F: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58897062: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897067: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889706B: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5889706E: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x58897073: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58897077: jne 0x58896fc1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889707D: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897082: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58897086: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5889708A: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889708F: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897094: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58897097: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5889709A: mov dword ptr [esi + 0x590], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588970A0: mov dword ptr [esi + 0x594], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588970A6: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588970AA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588970AC: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588970B0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588970B7: pop ecx
        __asm _emit 0x59
        // 0x588970B8: pop edi
        __asm _emit 0x5F
        // 0x588970B9: pop esi
        __asm _emit 0x5E
        // 0x588970BA: pop ebp
        __asm _emit 0x5D
        // 0x588970BB: pop ebx
        __asm _emit 0x5B
        // 0x588970BC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588970BF: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
