// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 567 bytes in 2 exact ranges.
// Source symbol alias: FUN_58747d70.

// Ghidra body range 0x58747D70..0x58747F8F; 543 mapped bytes.
extern "C" __declspec(naked) void FUN_58747d70_segment_00() {
    __asm {
        // 0x58747D70: push ebp
        __asm _emit 0x55
        // 0x58747D71: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58747D73: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58747D76: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58747D78: push 0x5897e280
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58747D7D: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747D83: push eax
        __asm _emit 0x50
        // 0x58747D84: sub esp, 0x58
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x58
        // 0x58747D87: push ebx
        __asm _emit 0x53
        // 0x58747D88: push esi
        __asm _emit 0x56
        // 0x58747D89: push edi
        __asm _emit 0x57
        // 0x58747D8A: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58747D8F: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58747D91: push eax
        __asm _emit 0x50
        // 0x58747D92: lea eax, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58747D96: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747D9C: lea eax, [esp + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x58747DA0: push eax
        __asm _emit 0x50
        // 0x58747DA1: lea ecx, [esp + 0x17]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x58747DA5: push ecx
        __asm _emit 0x51
        // 0x58747DA6: lea ecx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58747DAA: call 0x587a0c30
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x8E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58747DAF: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58747DB3: mov dword ptr [esp + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747DBB: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x7F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58747DC0: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58747DC6: mov edi, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x58747DC9: mov byte ptr [esp + 0x70], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x58747DCE: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58747DD2: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58747DD4: je 0x58747ecc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747DDA: mov al, byte ptr [edi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747DE0: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58747DE3: cmp al, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747DE9: je 0x58747ebd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747DEF: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58747DF5: mov esi, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x58747DF8: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58747DFC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58747DFE: je 0x58747ebd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747E04: mov al, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747E0A: cmp al, byte ptr [edi + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747E10: jne 0x58747eae
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747E16: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x58747E19: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58747E1C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58747E1F: sub ecx, dword ptr [edi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58747E22: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58747E24: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58747E26: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x58747E29: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58747E2B: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58747E2E: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58747E30: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58747E34: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58747E38: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x4E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747E3D: fcomp qword ptr [ebp + 0xc]
        __asm _emit 0xDC
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x58747E40: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x58747E42: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x58747E45: jp 0x58747eae
        __asm _emit 0x7A
        __asm _emit 0x67
        // 0x58747E47: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58747E4B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58747E4D: jne 0x58747e53
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58747E4F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58747E51: jmp 0x58747e5c
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58747E53: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58747E57: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58747E59: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58747E5C: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58747E60: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58747E62: sub edx, dword ptr [esp + 0x38]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58747E66: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58747E69: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58747E6B: jae 0x58747e78
        __asm _emit 0x73
        __asm _emit 0x0B
        // 0x58747E6D: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58747E6F: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58747E72: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58747E76: jmp 0x58747e9e
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x58747E78: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58747E7A: cmp dword ptr [esp + 0x38], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58747E7E: jbe 0x58747e85
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58747E80: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x4D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747E85: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58747E89: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58747E8D: push ecx
        __asm _emit 0x51
        // 0x58747E8E: push ebx
        __asm _emit 0x53
        // 0x58747E8F: push eax
        __asm _emit 0x50
        // 0x58747E90: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58747E94: push edx
        __asm _emit 0x52
        // 0x58747E95: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58747E99: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xE9
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58747E9E: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58747EA2: push eax
        __asm _emit 0x50
        // 0x58747EA3: lea ecx, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58747EA7: call 0x58747ba0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747EAC: inc dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58747EAE: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58747EB1: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58747EB5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58747EB7: jne 0x58747e04
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747EBD: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x58747EC0: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58747EC4: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58747EC6: jne 0x58747dda
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747ECC: mov ecx, dword ptr [esp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58747ED0: mov edi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x39
        // 0x58747ED2: mov esi, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58747ED6: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747EDE: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747EE6: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58747EEA: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58747EEE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58747EF0: mov ebx, dword ptr [esp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58747EF4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58747EF6: je 0x58747efe
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58747EF8: cmp esi, dword ptr [esp + 0x44]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58747EFC: je 0x58747f03
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58747EFE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x4D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747F03: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58747F05: je 0x58747f81
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747F0B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58747F0D: jne 0x58747f75
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x58747F0F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x4D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747F14: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58747F16: cmp edi, dword ptr [eax + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58747F19: jne 0x58747f20
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58747F1B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x4D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747F20: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58747F24: cmp dword ptr [edi + 0x10], edx
        __asm _emit 0x39
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58747F27: jle 0x58747f5f
        __asm _emit 0x7E
        __asm _emit 0x36
        // 0x58747F29: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58747F2B: jne 0x58747f79
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x58747F2D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x4D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747F32: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58747F34: cmp edi, dword ptr [eax + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58747F37: jne 0x58747f3e
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58747F39: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x4D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747F3E: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58747F41: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58747F45: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58747F47: jne 0x58747f7d
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x58747F49: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x4D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747F4E: cmp edi, dword ptr [esi + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58747F51: jne 0x58747f58
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58747F53: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x4D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747F58: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58747F5B: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58747F5F: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58747F63: call 0x587a09e0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x8A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58747F68: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58747F6C: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58747F70: jmp 0x58747ef0
        __asm _emit 0xE9
        __asm _emit 0x7B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747F75: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58747F77: jmp 0x58747f16
        __asm _emit 0xEB
        __asm _emit 0x9D
        // 0x58747F79: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58747F7B: jmp 0x58747f34
        __asm _emit 0xEB
        __asm _emit 0xB7
        // 0x58747F7D: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58747F7F: jmp 0x58747f4e
        __asm _emit 0xEB
        __asm _emit 0xCD
        // 0x58747F81: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58747F85: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58747F87: je 0x58747f92
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58747F89: push eax
        __asm _emit 0x50
        // 0x58747F8A: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x4C
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58747F92..0x58747FAA; 24 mapped bytes.
extern "C" __declspec(naked) void FUN_58747d70_segment_01() {
    __asm {
        // 0x58747F92: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58747F96: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58747F98: push edx
        __asm _emit 0x52
        // 0x58747F99: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58747F9D: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58747FA1: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58747FA5: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x4C
        __asm _emit 0x23
        __asm _emit 0x00
    }
}
