// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58859DD0 .. +0x44B bytes.
// Source symbol alias: FUN_58859dd0.
extern "C" __declspec(naked) void FUN_58859dd0() {
    __asm {
        // 0x58859DD0: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58859DD3: push ebx
        __asm _emit 0x53
        // 0x58859DD4: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58859DD6: cmp dword ptr [ebx + 0xf0], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859DDD: mov dword ptr [esp + 8], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859DE5: jle 0x5885a216
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x2B
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859DEB: push ebp
        __asm _emit 0x55
        // 0x58859DEC: push esi
        __asm _emit 0x56
        // 0x58859DED: lea ebp, [ebx + 0x270]
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859DF3: push edi
        __asm _emit 0x57
        // 0x58859DF4: lea esi, [ebx + 0x930]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859DFA: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58859DFE: lea edi, [ebx + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E04: cmp dword ptr [edi + 0x40], 2
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x40
        __asm _emit 0x02
        // 0x58859E08: jne 0x5885a11c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E0E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58859E10: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859E16: push eax
        __asm _emit 0x50
        // 0x58859E17: push edi
        __asm _emit 0x57
        // 0x58859E18: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x78
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58859E1D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58859E1F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58859E21: jle 0x5885a01f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E27: cmp dword ptr [0x58a24508], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x08
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58859E2E: je 0x58859e37
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58859E30: mov dword ptr [edi + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E37: mov ecx, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x20
        // 0x58859E3A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58859E3C: jle 0x58859e47
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x58859E3E: dec ecx
        __asm _emit 0x49
        // 0x58859E3F: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x20
        // 0x58859E42: jmp 0x58859fa4
        __asm _emit 0xE9
        __asm _emit 0x5D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E47: dec eax
        __asm _emit 0x48
        // 0x58859E48: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58859E4A: movzx ecx, word ptr [ebp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58859E4E: push eax
        __asm _emit 0x50
        // 0x58859E4F: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x20
        // 0x58859E52: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859E58: push edi
        __asm _emit 0x57
        // 0x58859E59: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x77
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58859E5E: movzx ebp, word ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x6D
        __asm _emit 0x00
        // 0x58859E62: mov eax, dword ptr [esi - 0x7d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859E68: sub eax, dword ptr [esi - 0x7d4]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859E6E: dec ebp
        __asm _emit 0x4D
        // 0x58859E6F: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58859E73: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58859E75: jle 0x58859f27
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E7B: mov edx, dword ptr [ebx + ebp*4 + 0x898]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xAB
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E82: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859E88: lea ebp, [ebx + ebp*4 + 0x898]
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0xAB
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E8F: push edx
        __asm _emit 0x52
        // 0x58859E90: push ebp
        __asm _emit 0x55
        // 0x58859E91: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x77
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58859E96: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58859E9A: mov ecx, dword ptr [ebx + eax*4 + 0x8b8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859EA1: lea eax, [ebx + eax*4 + 0x8b8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859EA8: push ecx
        __asm _emit 0x51
        // 0x58859EA9: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859EAF: push eax
        __asm _emit 0x50
        // 0x58859EB0: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58859EB5: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58859EB8: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58859EBC: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859EC1: inc eax
        __asm _emit 0x40
        // 0x58859EC2: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859EC7: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58859EC9: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859ECF: inc edx
        __asm _emit 0x42
        // 0x58859ED0: lea ecx, [ebx + ecx*4 + 0x8b8]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859ED7: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859EDD: push eax
        __asm _emit 0x50
        // 0x58859EDE: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58859EE1: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58859EE3: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859EE9: push ebp
        __asm _emit 0x55
        // 0x58859EEA: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x76
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58859EEF: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58859EF3: mov ecx, dword ptr [ebx + edx*4 + 0x8b8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x93
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859EFA: lea eax, [ebx + edx*4 + 0x8b8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F01: push ecx
        __asm _emit 0x51
        // 0x58859F02: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859F08: push eax
        __asm _emit 0x50
        // 0x58859F09: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x76
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58859F0E: mov edx, dword ptr [esi - 0x798]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859F14: dec dword ptr [esi - 0x7d8]
        __asm _emit 0xFF
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859F1A: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58859F1E: xor edx, 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x58859F24: dec edx
        __asm _emit 0x4A
        // 0x58859F25: jmp 0x58859f7f
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x58859F27: jge 0x58859f8b
        __asm _emit 0x7D
        __asm _emit 0x62
        // 0x58859F29: mov ecx, dword ptr [ebx + ebp*4 + 0x898]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAB
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F30: lea eax, [ebx + ebp*4 + 0x898]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F37: push ecx
        __asm _emit 0x51
        // 0x58859F38: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859F3E: push eax
        __asm _emit 0x50
        // 0x58859F3F: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x76
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58859F44: mov eax, dword ptr [ebx + ebp*4 + 0x898]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F4B: lea ecx, [ebx + ebp*4 + 0x898]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0xAB
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F52: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F57: dec eax
        __asm _emit 0x48
        // 0x58859F58: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F5D: push eax
        __asm _emit 0x50
        // 0x58859F5E: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58859F60: push ecx
        __asm _emit 0x51
        // 0x58859F61: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859F67: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x76
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58859F6C: mov edx, dword ptr [esi - 0x798]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859F72: inc dword ptr [esi - 0x7d8]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859F78: xor edx, 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x58859F7E: inc edx
        __asm _emit 0x42
        // 0x58859F7F: xor edx, 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x58859F85: mov dword ptr [esi - 0x798], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859F8B: mov eax, dword ptr [ebx + ebp*4 + 0x898]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F92: mov ecx, dword ptr [ebx + ebp*4 + 0xa50]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAB
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F99: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F9E: push eax
        __asm _emit 0x50
        // 0x58859F9F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xD3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58859FA4: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58859FA6: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xFC
        // 0x58859FA9: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58859FAB: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x58859FAD: mov eax, dword ptr [ebx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859FB3: mov eax, dword ptr [ebx + eax*4 + 0x9e0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859FBA: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x58859FBD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58859FBF: je 0x58859fc7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58859FC1: movzx ebp, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x0C
        // 0x58859FC5: jmp 0x58859fc9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58859FC7: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58859FC9: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58859FCE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58859FD0: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58859FD3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58859FD5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58859FD8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58859FDA: cdq
        __asm _emit 0x99
        // 0x58859FDB: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58859FDD: mov ecx, dword ptr [edi + 0x8e8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859FE3: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x58859FE6: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58859FEA: cmp edx, dword ptr [ebx + 0xf4]
        __asm _emit 0x3B
        __asm _emit 0x93
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859FF0: jne 0x5885a09e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859FF6: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58859FF8: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58859FFD: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58859FFF: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5885A002: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5885A004: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5885A007: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5885A009: cdq
        __asm _emit 0x99
        // 0x5885A00A: mov ecx, 0x3c
        __asm _emit 0xB9
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A00F: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5885A011: mov ecx, dword ptr [ebx + 0xab0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A017: push edx
        __asm _emit 0x52
        // 0x5885A018: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x47
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5885A01D: jmp 0x5885a09e
        __asm _emit 0xEB
        __asm _emit 0x7F
        // 0x5885A01F: mov eax, dword ptr [esi - 0x7d4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A025: mov ecx, dword ptr [esi - 0x794]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A02B: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A031: mov dword ptr [esi - 0x7d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A037: mov dword ptr [esi - 0x798], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A03D: mov dword ptr [esi - 0x794], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A043: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A045: je 0x5885a07f
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5885A047: mov eax, dword ptr [edi + 0x8e8]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A04D: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A052: mov dword ptr [edi + 0x8a8], 1
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A05C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5885A060: mov ecx, dword ptr [edi + 0x8c8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xC8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A066: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885A068: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x9D
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5885A06D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885A06F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5885A071: mov dword ptr [edi + 0x40], 4
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A078: call 0x58858bd0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A07D: jmp 0x5885a09e
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5885A07F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885A081: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5885A083: mov dword ptr [edi + 0x40], 1
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A08A: call 0x58858bd0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A08F: mov eax, dword ptr [edi + 0x880]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A095: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A09A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885A09E: mov edx, dword ptr [ebx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A0A4: mov ecx, dword ptr [ebx + edx*8 + 0x930]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xD3
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A0AB: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5885A0B0: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5885A0B2: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5885A0B5: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5885A0B7: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5885A0BA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5885A0BC: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5885A0BF: jle 0x5885a11c
        __asm _emit 0x7E
        __asm _emit 0x5B
        // 0x5885A0C1: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A0C6: cmp dword ptr [eax + 0x160], 0x16
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x5885A0CD: jle 0x5885a0e5
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5885A0CF: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A0D6: je 0x5885a0e5
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5885A0D8: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A0DE: add eax, 0x580
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A0E3: jmp 0x5885a0e7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A0E5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A0E7: mov ecx, dword ptr [ebx + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A0ED: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5885A0F0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A0F2: je 0x5885a11c
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5885A0F4: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5885A0F7: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5885A0FA: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5885A0FD: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5885A100: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5885A103: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885A105: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5885A108: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5885A10A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5885A10D: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5885A110: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5885A113: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5885A116: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885A119: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5885A11C: cmp dword ptr [edi + 0x8a8], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A123: je 0x5885a1ea
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A129: mov ecx, dword ptr [edi + 0x8c8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xC8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A12F: call 0x58793e10
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x9C
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5885A134: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A136: jne 0x5885a1ea
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A13C: cmp dword ptr [edi + 0x40], 4
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5885A140: mov dword ptr [edi + 0x8a8], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A146: jne 0x5885a1df
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A14C: mov eax, dword ptr [edi + 0x880]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A152: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5885A157: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885A159: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5885A15B: call 0x58858bd0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A160: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A166: push 0x57
        __asm _emit 0x6A
        __asm _emit 0x57
        // 0x5885A168: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5885A16A: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x5885A16C: call 0x588ebeb0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5885A171: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A173: jne 0x5885a1ea
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x5885A175: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A17A: mov ebp, 0x1a
        __asm _emit 0xBD
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A17F: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A185: jle 0x5885a19b
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5885A187: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A18E: je 0x5885a19b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885A190: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A196: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x5885A199: jmp 0x5885a19d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A19B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885A19D: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A1A3: push edx
        __asm _emit 0x52
        // 0x5885A1A4: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xD7
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885A1A9: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A1AE: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A1B4: jle 0x5885a1d3
        __asm _emit 0x7E
        __asm _emit 0x1D
        // 0x5885A1B6: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A1BD: je 0x5885a1d3
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5885A1BF: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A1C5: mov ecx, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x68
        // 0x5885A1C8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885A1CA: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885A1CD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885A1CF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5885A1D1: jmp 0x5885a1ea
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x5885A1D3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885A1D5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885A1D7: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885A1DA: push ecx
        __asm _emit 0x51
        // 0x5885A1DB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5885A1DD: jmp 0x5885a1ea
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5885A1DF: mov eax, dword ptr [edi + 0x8e8]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A1E5: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5885A1EA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885A1EE: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5885A1F2: inc eax
        __asm _emit 0x40
        // 0x5885A1F3: add ebp, 0xd4
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A1F9: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5885A1FC: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x5885A1FF: cmp eax, dword ptr [ebx + 0xf0]
        __asm _emit 0x3B
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A205: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885A209: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5885A20D: jl 0x58859e04
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF1
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A213: pop edi
        __asm _emit 0x5F
        // 0x5885A214: pop esi
        __asm _emit 0x5E
        // 0x5885A215: pop ebp
        __asm _emit 0x5D
        // 0x5885A216: pop ebx
        __asm _emit 0x5B
        // 0x5885A217: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885A21A: ret
        __asm _emit 0xC3
    }
}
