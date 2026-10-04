// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E6E80 .. +0x2D7 bytes.
// Source symbol alias: FUN_587e6e80.
extern "C" __declspec(naked) void FUN_587e6e80() {
    __asm {
        // 0x587E6E80: sub esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x34
        // 0x587E6E83: push ebx
        __asm _emit 0x53
        // 0x587E6E84: push ebp
        __asm _emit 0x55
        // 0x587E6E85: push esi
        __asm _emit 0x56
        // 0x587E6E86: push edi
        __asm _emit 0x57
        // 0x587E6E87: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587E6E8B: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6E92: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587E6E94: lea eax, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD1
        // 0x587E6E97: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587E6E9B: mov ebp, dword ptr [eax + 0x21e98]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x98
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E6EA1: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587E6EA5: mov ecx, dword ptr [eax*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587E6EAC: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x587E6EAF: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E6EB4: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587E6EB6: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587E6EBA: mov ecx, dword ptr [ecx*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587E6EC1: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x587E6EC4: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E6EC7: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587E6EC9: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x587E6ECC: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587E6ECE: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587E6ED3: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587E6ED5: mov ecx, dword ptr [0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587E6EDB: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587E6EDE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E6EE0: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E6EE3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E6EE5: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587E6EE8: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E6EED: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587E6EEF: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E6EF2: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587E6EF4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587E6EF6: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587E6EF9: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587E6EFB: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587E6EFF: mov eax, dword ptr [edx + 0x21ea8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xA8
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E6F05: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587E6F09: mov edi, 0xc8
        __asm _emit 0xBF
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6F0E: lea ebp, [esi + esi]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x36
        // 0x587E6F11: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E6F15: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E6F19: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6F20: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E6F25: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587E6F27: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x587E6F2A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E6F2C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E6F2F: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587E6F31: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587E6F34: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E6F38: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E6F3D: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E6F3F: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x587E6F42: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E6F44: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E6F47: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587E6F49: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6F4E: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587E6F50: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587E6F53: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E6F57: mov eax, 0x447a7a9
        __asm _emit 0xB8
        __asm _emit 0xA9
        __asm _emit 0xA7
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587E6F5C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E6F5E: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x587E6F61: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E6F63: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E6F66: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E6F68: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x587E6F6A: cmp esi, 0x2710
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6F70: jle 0x587e6f77
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x587E6F72: mov esi, 0x2710
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6F77: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587E6F79: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587E6F7C: mov eax, 0x68db8bad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x8B
        __asm _emit 0xDB
        __asm _emit 0x68
        // 0x587E6F81: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E6F83: sar edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x587E6F86: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587E6F88: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587E6F8B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587E6F8D: add ebp, dword ptr [0x58a244c0]
        __asm _emit 0x03
        __asm _emit 0x2D
        __asm _emit 0xC0
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6F93: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587E6F97: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587E6F9B: js 0x587e6fbf
        __asm _emit 0x78
        __asm _emit 0x22
        // 0x587E6F9D: lea edx, [esi - 0x1388]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E6FA3: imul edx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD5
        // 0x587E6FA6: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587E6FA8: mov eax, 0x68db8bad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x8B
        __asm _emit 0xDB
        __asm _emit 0x68
        // 0x587E6FAD: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E6FAF: sar edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x587E6FB2: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E6FB4: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E6FB7: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E6FB9: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587E6FBB: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587E6FBF: cmp edi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6FC5: jle 0x587e6fd0
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x587E6FC7: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x587E6FC9: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x587E6FCB: jmp 0x587e710f
        __asm _emit 0xE9
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6FD0: lea esi, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x2F
        // 0x587E6FD3: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E6FD7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587E6FD9: jge 0x587e7004
        __asm _emit 0x7D
        __asm _emit 0x29
        // 0x587E6FDB: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587E6FDD: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x587E6FE0: cdq
        __asm _emit 0x99
        // 0x587E6FE1: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587E6FE3: cdq
        __asm _emit 0x99
        // 0x587E6FE4: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587E6FE6: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587E6FE8: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587E6FEB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E6FED: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E6FF2: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587E6FF4: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E6FF7: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587E6FF9: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587E6FFC: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587E6FFE: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x587E7000: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587E7002: jmp 0x587e703b
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x587E7004: cmp esi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E700A: jle 0x587e7039
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x587E700C: mov eax, 0xfa0
        __asm _emit 0xB8
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7011: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587E7013: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x587E7016: cdq
        __asm _emit 0x99
        // 0x587E7017: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587E7019: mov esi, 0xfa0
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E701E: cdq
        __asm _emit 0x99
        // 0x587E701F: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587E7021: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587E7023: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587E7026: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E7028: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E702D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587E702F: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E7032: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587E7034: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587E7037: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587E7039: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x587E703B: mov ebp, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7041: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x587E7043: imul edx, edx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x75
        // 0x587E7046: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587E7048: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587E704A: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587E704E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587E7050: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587E7052: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E7056: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E705B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E705D: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E7060: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587E7062: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587E7065: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x587E7067: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x587E7069: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x587E706C: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E7071: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E7073: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587E7077: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E707A: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587E707C: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x587E707F: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x587E7081: cdq
        __asm _emit 0x99
        // 0x587E7082: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587E7084: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587E7086: cdq
        __asm _emit 0x99
        // 0x587E7087: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587E7089: mov dword ptr [esp + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587E708D: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587E708F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E7091: cdq
        __asm _emit 0x99
        // 0x587E7092: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587E7094: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587E7096: cdq
        __asm _emit 0x99
        // 0x587E7097: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587E7099: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587E709B: jle 0x587e70a8
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x587E709D: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587E70A1: cdq
        __asm _emit 0x99
        // 0x587E70A2: idiv dword ptr [esp + 0x50]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587E70A6: jmp 0x587e70ad
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587E70A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E70AA: cdq
        __asm _emit 0x99
        // 0x587E70AB: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587E70AD: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587E70B1: cdq
        __asm _emit 0x99
        // 0x587E70B2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587E70B4: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587E70B6: cdq
        __asm _emit 0x99
        // 0x587E70B7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587E70B9: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587E70BB: sar ebp, 1
        __asm _emit 0xD1
        __asm _emit 0xFD
        // 0x587E70BD: inc ebp
        __asm _emit 0x45
        // 0x587E70BE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E70C0: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587E70C2: jle 0x587e70fd
        __asm _emit 0x7E
        __asm _emit 0x39
        // 0x587E70C4: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E70C8: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587E70CC: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E70D0: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587E70D4: cdq
        __asm _emit 0x99
        // 0x587E70D5: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587E70D7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E70D9: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E70DD: cdq
        __asm _emit 0x99
        // 0x587E70DE: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587E70E0: mov edx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587E70E4: add dword ptr [esp + 0x50], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587E70E8: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x587E70EA: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587E70EC: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E70F0: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E70F4: add esi, edi
        __asm _emit 0x03
        __asm _emit 0xF7
        // 0x587E70F6: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x587E70FB: jne 0x587e70d0
        __asm _emit 0x75
        __asm _emit 0xD3
        // 0x587E70FD: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587E70FF: jle 0x587e712d
        __asm _emit 0x7E
        __asm _emit 0x2C
        // 0x587E7101: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587E7105: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E7109: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587E710D: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x587E710F: cmp dword ptr [esp + 0x14], 0x3e8
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7117: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587E711B: jl 0x587e6f20
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xFF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E7121: pop edi
        __asm _emit 0x5F
        // 0x587E7122: pop esi
        __asm _emit 0x5E
        // 0x587E7123: pop ebp
        __asm _emit 0x5D
        // 0x587E7124: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E7126: pop ebx
        __asm _emit 0x5B
        // 0x587E7127: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x587E712A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587E712D: mov eax, dword ptr [0x58a244bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7132: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x587E7135: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587E7137: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E713C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E713E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E7141: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587E7143: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x587E7146: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587E7148: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587E714A: cdq
        __asm _emit 0x99
        // 0x587E714B: pop edi
        __asm _emit 0x5F
        // 0x587E714C: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587E714E: pop esi
        __asm _emit 0x5E
        // 0x587E714F: pop ebp
        __asm _emit 0x5D
        // 0x587E7150: pop ebx
        __asm _emit 0x5B
        // 0x587E7151: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x587E7154: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
