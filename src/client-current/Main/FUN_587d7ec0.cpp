// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 583 bytes across one range.

// Ghidra range: 0x587D7EC0 .. +0x247 bytes.
extern "C" __declspec(naked) void FUN_587D7EC0_segment_00() {
    __asm {
        // 0x587D7EC0: push ecx
        __asm _emit 0x51
        // 0x587D7EC1: push edi
        __asm _emit 0x57
        // 0x587D7EC2: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587D7EC4: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x587D7EC8: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587D7ECA: je 0x587d8102
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7ED0: push ebx
        __asm _emit 0x53
        // 0x587D7ED1: push ebp
        __asm _emit 0x55
        // 0x587D7ED2: push esi
        __asm _emit 0x56
        // 0x587D7ED3: mov esi, dword ptr [edi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x4C
        // 0x587D7ED6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587D7ED8: je 0x587d7f19
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x587D7EDA: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D7EDE: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D7EE2: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x587D7EE7: jge 0x587d7f02
        __asm _emit 0x7D
        __asm _emit 0x19
        // 0x587D7EE9: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587D7EEB: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D7EEF: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x587D7EF2: push ebx
        __asm _emit 0x53
        // 0x587D7EF3: push ebp
        __asm _emit 0x55
        // 0x587D7EF4: push eax
        __asm _emit 0x50
        // 0x587D7EF5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D7EF7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7EF9: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x48
        // 0x587D7EFC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587D7EFE: jne 0x587d7ee2
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x587D7F00: jmp 0x587d7f19
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587D7F02: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D7F06: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587D7F08: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587D7F0B: push ebx
        __asm _emit 0x53
        // 0x587D7F0C: push ebp
        __asm _emit 0x55
        // 0x587D7F0D: push ecx
        __asm _emit 0x51
        // 0x587D7F0E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D7F10: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7F12: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x48
        // 0x587D7F15: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587D7F17: jne 0x587d7f02
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x587D7F19: mov eax, dword ptr [edi + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7F1F: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D7F23: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x587D7F27: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587D7F2A: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587D7F2D: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x587D7F30: je 0x587d7f38
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D7F32: mov dword ptr [edi + 0xd14], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7F38: mov edx, dword ptr [edi + 0xdb8]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7F3E: mov ecx, dword ptr [edx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7F44: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D7F48: shr dl, 1
        __asm _emit 0xD0
        __asm _emit 0xEA
        // 0x587D7F4A: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x587D7F4D: jne 0x587d80ff
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7F53: cmp dword ptr [edi + 0xd14], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7F59: je 0x587d80ff
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7F5F: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D7F63: mov eax, dword ptr [ebx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x50
        // 0x587D7F66: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D7F68: je 0x587d7f6f
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587D7F6A: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587D7F6D: jmp 0x587d7f71
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7F6F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D7F71: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587D7F73: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D7F77: push edx
        __asm _emit 0x52
        // 0x587D7F78: push eax
        __asm _emit 0x50
        // 0x587D7F79: mov eax, dword ptr [ecx + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x44
        // 0x587D7F7C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D7F7E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D7F80: jne 0x587d80ff
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7F86: mov ecx, dword ptr [edi + 0x600]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7F8C: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D7F90: mov esi, dword ptr [0x5898c074]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x74
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D7F96: push ecx
        __asm _emit 0x51
        // 0x587D7F97: push edx
        __asm _emit 0x52
        // 0x587D7F98: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587D7F9A: mov eax, dword ptr [edi + 0x5fc]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7FA0: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D7FA4: push eax
        __asm _emit 0x50
        // 0x587D7FA5: push ecx
        __asm _emit 0x51
        // 0x587D7FA6: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587D7FA8: mov eax, dword ptr [edi + 0xd14]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7FAE: mov ecx, dword ptr [edi + eax*4 + 0xc94]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7FB5: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x587D7FB8: jge 0x587d8018
        __asm _emit 0x7D
        __asm _emit 0x5E
        // 0x587D7FBA: lea esi, [eax + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x41
        // 0x587D7FBD: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587D7FBF: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x587D7FC2: lea ecx, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3A
        // 0x587D7FC5: shl esi, 5
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x05
        // 0x587D7FC8: mov esi, dword ptr [esi + edi]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x3E
        // 0x587D7FCB: push esi
        __asm _emit 0x56
        // 0x587D7FCC: mov esi, dword ptr [ecx + 0x81c]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7FD2: push esi
        __asm _emit 0x56
        // 0x587D7FD3: mov esi, dword ptr [ecx + 0x818]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7FD9: mov ecx, dword ptr [ecx + 0x814]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7FDF: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587D7FE1: push esi
        __asm _emit 0x56
        // 0x587D7FE2: push ecx
        __asm _emit 0x51
        // 0x587D7FE3: add eax, 0x62
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x62
        // 0x587D7FE6: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587D7FE9: mov ecx, dword ptr [edx + edi + 0x61c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x3A
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7FF0: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587D7FF2: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x587D7FF5: mov eax, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x38
        // 0x587D7FF8: push eax
        __asm _emit 0x50
        // 0x587D7FF9: mov eax, dword ptr [edx + 0x618]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7FFF: push ecx
        __asm _emit 0x51
        // 0x587D8000: mov ecx, dword ptr [edx + 0x614]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8006: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D800A: push eax
        __asm _emit 0x50
        // 0x587D800B: push ecx
        __asm _emit 0x51
        // 0x587D800C: push edx
        __asm _emit 0x52
        // 0x587D800D: call dword ptr [0x5898c078]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D8013: jmp 0x587d80d1
        __asm _emit 0xE9
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8018: jne 0x587d80d1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D801E: lea esi, [eax + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x41
        // 0x587D8021: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D8023: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x587D8026: shl esi, 5
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x05
        // 0x587D8029: mov esi, dword ptr [esi + edi]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x3E
        // 0x587D802C: push esi
        __asm _emit 0x56
        // 0x587D802D: mov esi, dword ptr [ecx + edi + 0x81c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x39
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8034: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x587D8036: push esi
        __asm _emit 0x56
        // 0x587D8037: mov esi, dword ptr [ecx + 0x818]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D803D: mov ecx, dword ptr [ecx + 0x814]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8043: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587D8045: push esi
        __asm _emit 0x56
        // 0x587D8046: mov esi, dword ptr [0x5898c078]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x78
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D804C: push ecx
        __asm _emit 0x51
        // 0x587D804D: add eax, 0x62
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x62
        // 0x587D8050: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587D8053: mov ecx, dword ptr [edx + edi + 0x61c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x3A
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D805A: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587D805C: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x587D805F: mov eax, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x38
        // 0x587D8062: push eax
        __asm _emit 0x50
        // 0x587D8063: mov eax, dword ptr [edx + 0x618]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8069: push ecx
        __asm _emit 0x51
        // 0x587D806A: mov ecx, dword ptr [edx + 0x614]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8070: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D8074: push eax
        __asm _emit 0x50
        // 0x587D8075: push ecx
        __asm _emit 0x51
        // 0x587D8076: push edx
        __asm _emit 0x52
        // 0x587D8077: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587D8079: mov ecx, dword ptr [edi + 0xd14]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D807F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D8081: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x587D8084: mov ebp, dword ptr [eax + edi + 0x830]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x38
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D808B: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587D808D: push ebp
        __asm _emit 0x55
        // 0x587D808E: mov ebp, dword ptr [eax + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8094: push ebp
        __asm _emit 0x55
        // 0x587D8095: mov ebp, dword ptr [eax + 0x828]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D809B: mov eax, dword ptr [eax + 0x824]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D80A1: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587D80A3: push ebp
        __asm _emit 0x55
        // 0x587D80A4: push eax
        __asm _emit 0x50
        // 0x587D80A5: add ecx, 0x62
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x62
        // 0x587D80A8: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587D80AB: mov eax, dword ptr [edx + edi + 0x61c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D80B2: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587D80B5: mov ecx, dword ptr [ecx + edi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x39
        // 0x587D80B8: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587D80BA: push ecx
        __asm _emit 0x51
        // 0x587D80BB: mov ecx, dword ptr [edx + 0x618]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D80C1: mov edx, dword ptr [edx + 0x614]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D80C7: push eax
        __asm _emit 0x50
        // 0x587D80C8: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D80CC: push ecx
        __asm _emit 0x51
        // 0x587D80CD: push edx
        __asm _emit 0x52
        // 0x587D80CE: push eax
        __asm _emit 0x50
        // 0x587D80CF: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587D80D1: mov eax, dword ptr [ebx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x50
        // 0x587D80D4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D80D6: je 0x587d80f0
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587D80D8: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587D80DB: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D80DF: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587D80E1: push edx
        __asm _emit 0x52
        // 0x587D80E2: push eax
        __asm _emit 0x50
        // 0x587D80E3: mov eax, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x587D80E6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D80E8: pop esi
        __asm _emit 0x5E
        // 0x587D80E9: pop ebp
        __asm _emit 0x5D
        // 0x587D80EA: pop ebx
        __asm _emit 0x5B
        // 0x587D80EB: pop edi
        __asm _emit 0x5F
        // 0x587D80EC: pop ecx
        __asm _emit 0x59
        // 0x587D80ED: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587D80F0: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D80F4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D80F6: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587D80F8: push edx
        __asm _emit 0x52
        // 0x587D80F9: push eax
        __asm _emit 0x50
        // 0x587D80FA: mov eax, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x587D80FD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D80FF: pop esi
        __asm _emit 0x5E
        // 0x587D8100: pop ebp
        __asm _emit 0x5D
        // 0x587D8101: pop ebx
        __asm _emit 0x5B
        // 0x587D8102: pop edi
        __asm _emit 0x5F
        // 0x587D8103: pop ecx
        __asm _emit 0x59
        // 0x587D8104: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
