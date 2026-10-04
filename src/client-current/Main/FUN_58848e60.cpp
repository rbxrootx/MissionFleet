// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58848E60 .. +0x28C bytes.
// Source symbol alias: FUN_58848e60.
extern "C" __declspec(naked) void FUN_58848e60() {
    __asm {
        // 0x58848E60: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58848E65: cmp byte ptr [eax + 0xd0], 0xf
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58848E6C: push esi
        __asm _emit 0x56
        // 0x58848E6D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58848E6F: jne 0x58848e97
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x58848E71: movzx eax, word ptr [esi + 0x106]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848E78: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848E7D: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58848E80: jge 0x58848e85
        __asm _emit 0x7D
        __asm _emit 0x03
        // 0x58848E82: inc eax
        __asm _emit 0x40
        // 0x58848E83: jmp 0x58848e99
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58848E85: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58848E87: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848E89: mov word ptr [esi + 0x106], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848E90: call 0x58848870
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848E95: jmp 0x58848ea0
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58848E97: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848E99: mov word ptr [esi + 0x106], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848EA0: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58848EA4: test cl, 4
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58848EA7: je 0x588490e6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848EAD: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58848EB1: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848EB6: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58848EB9: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848EBE: push edi
        __asm _emit 0x57
        // 0x58848EBF: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58848EC2: je 0x58848ef7
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58848EC4: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58848EC8: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58848ECB: mov ecx, 0x400
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848ED0: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58848ED3: je 0x58848ef7
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58848ED5: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58848ED9: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58848EDC: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848EE1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58848EE4: jne 0x588490c9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848EEA: cmp dword ptr [esi + 0xc8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848EF1: je 0x588490c9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848EF7: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58848EFA: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58848EFD: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58848EFF: jne 0x58848f09
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58848F01: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58848F04: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58848F07: je 0x58848f88
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x58848F09: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58848F0B: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58848F0E: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58848F11: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x58848F14: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x58848F17: ja 0x58848f3e
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x58848F19: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58848F1C: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58848F1F: ja 0x58848f35
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x58848F21: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848F23: jge 0x58848f2a
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58848F25: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x58848F28: jmp 0x58848f49
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58848F2A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58848F2C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848F2E: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x58848F31: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58848F33: jmp 0x58848f49
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58848F35: cdq
        __asm _emit 0x99
        // 0x58848F36: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58848F38: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58848F3A: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x58848F3C: jmp 0x58848f49
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58848F3E: cdq
        __asm _emit 0x99
        // 0x58848F3F: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58848F42: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58848F44: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58848F46: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58848F49: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x58848F4C: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x58848F4F: ja 0x58848f74
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x58848F51: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x58848F54: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58848F57: ja 0x58848f6b
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x58848F59: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58848F5B: jge 0x58848f62
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58848F5D: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58848F60: jmp 0x58848f7f
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x58848F62: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848F64: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58848F66: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x58848F69: jmp 0x58848f7f
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58848F6B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58848F6D: cdq
        __asm _emit 0x99
        // 0x58848F6E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58848F70: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58848F72: jmp 0x58848f7f
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58848F74: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58848F76: cdq
        __asm _emit 0x99
        // 0x58848F77: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58848F7A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58848F7C: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58848F7F: push eax
        __asm _emit 0x50
        // 0x58848F80: push edi
        __asm _emit 0x57
        // 0x58848F81: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848F83: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58848F88: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58848F8B: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x58848F8E: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58848F90: je 0x58848fbc
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58848F92: jle 0x58848fa5
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58848F94: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58848F96: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58848F98: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58848F9B: jg 0x58848fa0
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58848F9D: push eax
        __asm _emit 0x50
        // 0x58848F9E: jmp 0x58848fb5
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58848FA0: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x58848FA3: jmp 0x58848fb4
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58848FA5: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58848FA7: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58848FA9: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58848FAC: jg 0x58848fb1
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58848FAE: push eax
        __asm _emit 0x50
        // 0x58848FAF: jmp 0x58848fb5
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58848FB1: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x58848FB4: push ecx
        __asm _emit 0x51
        // 0x58848FB5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848FB7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x9D
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58848FBC: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58848FBF: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x58848FC2: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58848FC4: je 0x58848ff0
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58848FC6: jle 0x58848fd9
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58848FC8: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58848FCA: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58848FCC: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58848FCF: jg 0x58848fd4
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58848FD1: push eax
        __asm _emit 0x50
        // 0x58848FD2: jmp 0x58848fe9
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58848FD4: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x58848FD7: jmp 0x58848fe8
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58848FD9: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58848FDB: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58848FDD: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58848FE0: jg 0x58848fe5
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58848FE2: push eax
        __asm _emit 0x50
        // 0x58848FE3: jmp 0x58848fe9
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58848FE5: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x58848FE8: push ecx
        __asm _emit 0x51
        // 0x58848FE9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848FEB: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x9C
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58848FF0: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58848FF3: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58848FF6: jne 0x588490c9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848FFC: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58848FFF: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58849002: jne 0x588490c9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849008: mov edx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x5884900B: cmp edx, dword ptr [esi + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x5884900E: jne 0x588490c9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849014: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58849017: cmp eax, dword ptr [esi + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x5884901A: jne 0x588490c9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849020: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58849024: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849029: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5884902C: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849031: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58849034: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58849038: jne 0x5884905e
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5884903A: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884903F: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58849042: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849047: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5884904A: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5884904E: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58849053: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58849055: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58849057: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884905C: jmp 0x588490c9
        __asm _emit 0xEB
        __asm _emit 0x6B
        // 0x5884905E: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58849061: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849066: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58849069: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5884906D: jne 0x588490a0
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x5884906F: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849074: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58849077: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884907C: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5884907F: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58849083: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849088: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5884908C: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849091: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58849095: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884909A: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5884909E: jmp 0x588490c9
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x588490A0: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588490A3: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588490A8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588490AB: jne 0x588490c9
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x588490AD: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x588490B0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588490B2: mov dword ptr [esi + 0xc8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588490BC: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588490BE: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588490C1: push 0xee4a
        __asm _emit 0x68
        __asm _emit 0x4A
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588490C6: push esi
        __asm _emit 0x56
        // 0x588490C7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588490C9: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588490CC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588490CE: je 0x588490e5
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588490D0: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588490D3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588490D5: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588490D8: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588490DB: je 0x588490e8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588490DD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588490DF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588490E1: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588490E3: jne 0x588490d0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588490E5: pop edi
        __asm _emit 0x5F
        // 0x588490E6: pop esi
        __asm _emit 0x5E
        // 0x588490E7: ret
        __asm _emit 0xC3
        // 0x588490E8: pop edi
        __asm _emit 0x5F
        // 0x588490E9: pop esi
        __asm _emit 0x5E
        // 0x588490EA: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
