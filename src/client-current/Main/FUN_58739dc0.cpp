// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1075 bytes in 1 exact ranges.
// Source symbol alias: FUN_58739dc0.

// Ghidra body range 0x58739DC0..0x5873A1F3; 1075 mapped bytes.
extern "C" __declspec(naked) void FUN_58739dc0_segment_00() {
    __asm {
        // 0x58739DC0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58739DC3: push esi
        __asm _emit 0x56
        // 0x58739DC4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58739DC6: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58739DC9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58739DCB: je 0x5873a1ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739DD1: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xC9
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58739DD6: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58739DDB: jne 0x5873a1e8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739DE1: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739DE7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58739DE9: mov ecx, 0x19
        __asm _emit 0xB9
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739DEE: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58739DF0: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58739DF2: je 0x58739e25
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58739DF4: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58739DF7: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58739DFA: cmp eax, -0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xE7
        // 0x58739DFD: jl 0x58739e15
        __asm _emit 0x7C
        __asm _emit 0x16
        // 0x58739DFF: cmp eax, 0x3219
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E04: jg 0x58739e15
        __asm _emit 0x7F
        __asm _emit 0x0F
        // 0x58739E06: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58739E09: cmp eax, -0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xE7
        // 0x58739E0C: jl 0x58739e15
        __asm _emit 0x7C
        __asm _emit 0x07
        // 0x58739E0E: cmp eax, 0x1919
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E13: jle 0x58739e25
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58739E15: cmp word ptr [esi + 0x28], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x28
        __asm _emit 0x06
        // 0x58739E1A: jne 0x58739e25
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58739E1C: pop esi
        __asm _emit 0x5E
        // 0x58739E1D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58739E20: jmp 0x588df450
        __asm _emit 0xE9
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58739E25: cmp word ptr [esi + 0xf0], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58739E2D: push ebx
        __asm _emit 0x53
        // 0x58739E2E: push ebp
        __asm _emit 0x55
        // 0x58739E2F: push edi
        __asm _emit 0x57
        // 0x58739E30: jne 0x58739f20
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E36: cmp word ptr [esi + 0x28], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x28
        __asm _emit 0x06
        // 0x58739E3B: je 0x58739f20
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E41: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58739E44: mov eax, 0x1e
        __asm _emit 0xB8
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E49: lea ecx, [edi + 0xe86]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x86
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E4F: nop
        __asm _emit 0x90
        // 0x58739E50: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E55: xor dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x11
        // 0x58739E58: jne 0x58739f20
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E5E: inc eax
        __asm _emit 0x40
        // 0x58739E5F: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58739E62: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x58739E65: jl 0x58739e50
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x58739E67: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58739E69: cmp byte ptr [esi + 0x100], dl
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E6F: jbe 0x58739e9c
        __asm _emit 0x76
        __asm _emit 0x2B
        // 0x58739E71: lea eax, [esi + 0x108]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E77: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58739E79: cmp cl, 3
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x58739E7C: je 0x58739e83
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58739E7E: cmp cl, 4
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x58739E81: jne 0x58739e8d
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58739E83: cmp byte ptr [eax + 1], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58739E87: ja 0x58739f20
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E8D: movzx ecx, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739E94: inc edx
        __asm _emit 0x42
        // 0x58739E95: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x58739E98: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58739E9A: jl 0x58739e77
        __asm _emit 0x7C
        __asm _emit 0xDB
        // 0x58739E9C: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739EA1: mov word ptr [esi + 0x28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x58739EA5: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58739EA8: mov ecx, 0x3200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739EAD: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58739EAF: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58739EB1: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58739EB3: jge 0x58739ebb
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58739EB5: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x58739EB7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58739EB9: jmp 0x58739ec7
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58739EBB: mov ebx, 0x3200
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739EC0: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x58739EC2: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739EC7: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58739ECA: mov edx, 0x1900
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739ECF: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58739ED1: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58739ED3: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58739ED5: jge 0x58739edd
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58739ED7: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58739ED9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58739EDB: jmp 0x58739ee9
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58739EDD: mov edi, 0x3200
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739EE2: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x58739EE4: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739EE9: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58739EEB: jle 0x58739eff
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58739EED: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58739EEF: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58739EF1: and eax, 0x1a90
        __asm _emit 0x25
        __asm _emit 0x90
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739EF6: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58739EF8: add eax, 0xffffff38
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739EFD: jmp 0x58739f11
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58739EFF: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58739F01: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x58739F03: and ecx, 0x3390
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x90
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739F09: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58739F0B: add ecx, 0xffffff38
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739F11: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58739F13: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58739F15: push eax
        __asm _emit 0x50
        // 0x58739F16: push ecx
        __asm _emit 0x51
        // 0x58739F17: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58739F19: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58739F1B: call 0x587366f0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xC7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739F20: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58739F23: cmp dword ptr [eax + 0x11c], 6
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x58739F2A: jne 0x58739f4c
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x58739F2C: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58739F2F: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739F35: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58739F38: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58739F3D: jle 0x58739fb0
        __asm _emit 0x7E
        __asm _emit 0x71
        // 0x58739F3F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58739F41: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58739F43: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58739F45: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xA3
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58739F4A: jmp 0x58739fb0
        __asm _emit 0xEB
        __asm _emit 0x64
        // 0x58739F4C: mov eax, dword ptr [esi + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739F52: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58739F55: jne 0x58739f68
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58739F57: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58739F5A: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739F60: mov eax, dword ptr [edx + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x44
        // 0x58739F63: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58739F68: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58739F6B: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739F71: mov edx, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x50
        // 0x58739F74: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58739F7A: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58739F7C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58739F7E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58739F80: jge 0x58739f86
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x58739F82: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58739F84: jmp 0x58739f98
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58739F86: jg 0x58739f96
        __asm _emit 0x7F
        __asm _emit 0x0E
        // 0x58739F88: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58739F8A: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xA2
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58739F8F: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58739F92: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58739F94: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58739F96: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58739F98: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xA2
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58739F9D: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58739FA0: cmp dword ptr [eax + 0x11c], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58739FA7: jne 0x58739fb0
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58739FA9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58739FAB: call 0x58737170
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xD1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739FB0: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58739FB3: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739FB8: cmp dword ptr [ecx + 0x11c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739FBE: je 0x58739fca
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58739FC0: cmp word ptr [esi + 0xf0], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58739FC8: jne 0x58739fe4
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58739FCA: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739FD0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58739FD2: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739FD7: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58739FD9: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58739FDB: jne 0x58739fe4
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58739FDD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58739FDF: call 0x58739740
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739FE4: cmp byte ptr [esi + 0x100], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739FEB: jbe 0x58739ff4
        __asm _emit 0x76
        __asm _emit 0x07
        // 0x58739FED: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58739FEF: call 0x58738940
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739FF4: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58739FF6: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58739FFA: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58739FFE: cmp dword ptr [esi + 0xf8], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A004: je 0x5873a02f
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5873A006: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A00C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873A00E: cmp word ptr [esi + 0xf0], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5873A016: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x5873A019: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873A01B: dec ecx
        __asm _emit 0x49
        // 0x5873A01C: and ecx, 0xfffffff3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0xF3
        // 0x5873A01F: add ecx, 0x19
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x19
        // 0x5873A022: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5873A024: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5873A026: jne 0x5873a02f
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5873A028: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873A02A: call 0x58736e20
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A02F: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873A033: mov dword ptr [esp + 0x10], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A03B: cmp word ptr [esi + 0xee], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A042: jne 0x5873a080
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5873A044: mov al, byte ptr [esi + 0x30]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x5873A047: cmp al, 0x32
        __asm _emit 0x3C
        __asm _emit 0x32
        // 0x5873A049: jae 0x5873a052
        __asm _emit 0x73
        __asm _emit 0x07
        // 0x5873A04B: inc al
        __asm _emit 0xFE
        __asm _emit 0xC0
        // 0x5873A04D: mov byte ptr [esi + 0x30], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x5873A050: jmp 0x5873a0be
        __asm _emit 0xEB
        __asm _emit 0x6C
        // 0x5873A052: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873A056: push edx
        __asm _emit 0x52
        // 0x5873A057: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873A05B: push eax
        __asm _emit 0x50
        // 0x5873A05C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873A05E: call 0x58738d00
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A063: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873A067: push ecx
        __asm _emit 0x51
        // 0x5873A068: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873A06C: push edx
        __asm _emit 0x52
        // 0x5873A06D: push ebp
        __asm _emit 0x55
        // 0x5873A06E: movzx ebx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD8
        // 0x5873A071: push ebp
        __asm _emit 0x55
        // 0x5873A072: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873A076: push eax
        __asm _emit 0x50
        // 0x5873A077: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873A079: call 0x58736a20
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A07E: jmp 0x5873a0b5
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x5873A080: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873A084: push ecx
        __asm _emit 0x51
        // 0x5873A085: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873A089: push edx
        __asm _emit 0x52
        // 0x5873A08A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873A08C: call 0x58738d00
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A091: movzx ebx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD8
        // 0x5873A094: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873A098: push eax
        __asm _emit 0x50
        // 0x5873A099: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873A09D: push ecx
        __asm _emit 0x51
        // 0x5873A09E: push ebp
        __asm _emit 0x55
        // 0x5873A09F: push ebp
        __asm _emit 0x55
        // 0x5873A0A0: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873A0A4: push edx
        __asm _emit 0x52
        // 0x5873A0A5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873A0A7: call 0x58736a20
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A0AC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873A0AE: mov word ptr [esi + 0xee], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A0B5: mov byte ptr [esi + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5873A0B9: cmp bx, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x5873A0BC: jne 0x5873a12b
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x5873A0BE: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A0C3: lea edi, [esi + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x5873A0C6: lea ebp, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x01
        // 0x5873A0C9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A0D0: movzx eax, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x07
        // 0x5873A0D3: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5873A0D7: jne 0x5873a0ec
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5873A0D9: mov ecx, dword ptr [edi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x2C
        // 0x5873A0DC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873A0DE: je 0x5873a120
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5873A0E0: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xC5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873A0E5: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5873A0EA: jmp 0x5873a119
        __asm _emit 0xEB
        __asm _emit 0x2D
        // 0x5873A0EC: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5873A0F0: jne 0x5873a120
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x5873A0F2: mov eax, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x30
        // 0x5873A0F5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873A0F7: je 0x5873a120
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5873A0F9: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873A0FF: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873A105: push eax
        __asm _emit 0x50
        // 0x5873A106: call 0x58738c60
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A10B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873A10D: je 0x5873a120
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5873A10F: mov edx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x30
        // 0x5873A112: cmp dword ptr [edx + 0x460], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A119: jne 0x5873a120
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5873A11B: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A120: add edi, 0x38
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x38
        // 0x5873A123: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5873A126: jne 0x5873a0d0
        __asm _emit 0x75
        __asm _emit 0xA8
        // 0x5873A128: lea edi, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5873A12B: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873A12F: cmp bx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x5873A133: jne 0x5873a195
        __asm _emit 0x75
        __asm _emit 0x60
        // 0x5873A135: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873A137: je 0x5873a156
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5873A139: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873A13D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873A13F: je 0x5873a156
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5873A141: cmp byte ptr [esi + 0x30], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5873A145: jne 0x5873a156
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5873A147: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873A149: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873A14B: push eax
        __asm _emit 0x50
        // 0x5873A14C: push ecx
        __asm _emit 0x51
        // 0x5873A14D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873A14F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873A151: call 0x587366f0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A156: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5873A159: cmp dword ptr [eax + 0x11c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A15F: jne 0x5873a167
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5873A161: cmp dword ptr [esi + 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873A165: je 0x5873a16e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5873A167: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873A169: call 0x58739cd0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A16E: movzx eax, word ptr [esi + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5873A172: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5873A176: je 0x5873a1e5
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x5873A178: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5873A17C: je 0x5873a1e5
        __asm _emit 0x74
        __asm _emit 0x67
        // 0x5873A17E: inc dword ptr [esi + 0x24c]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A184: pop edi
        __asm _emit 0x5F
        // 0x5873A185: pop ebp
        __asm _emit 0x5D
        // 0x5873A186: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A18B: pop ebx
        __asm _emit 0x5B
        // 0x5873A18C: mov word ptr [esi + 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x5873A190: pop esi
        __asm _emit 0x5E
        // 0x5873A191: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873A194: ret
        __asm _emit 0xC3
        // 0x5873A195: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873A197: je 0x5873a1bb
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5873A199: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873A19D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873A19F: je 0x5873a1bb
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5873A1A1: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x5873A1A4: cmp dword ptr [edx + 0x11c], edi
        __asm _emit 0x39
        __asm _emit 0xBA
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A1AA: jne 0x5873a1bb
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5873A1AC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873A1AE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873A1B0: push eax
        __asm _emit 0x50
        // 0x5873A1B1: push ecx
        __asm _emit 0x51
        // 0x5873A1B2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873A1B4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873A1B6: call 0x587366f0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A1BB: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A1C0: cmp word ptr [esi + 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x5873A1C4: jne 0x5873a1e5
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5873A1C6: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A1CB: mov word ptr [esi + 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5873A1CF: lea eax, [esi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A1D5: mov edx, 0xffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A1DA: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5873A1DD: add eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x38
        // 0x5873A1E0: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5873A1E3: jne 0x5873a1d5
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5873A1E5: pop edi
        __asm _emit 0x5F
        // 0x5873A1E6: pop ebp
        __asm _emit 0x5D
        // 0x5873A1E7: pop ebx
        __asm _emit 0x5B
        // 0x5873A1E8: inc dword ptr [esi + 0x24c]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A1EE: pop esi
        __asm _emit 0x5E
        // 0x5873A1EF: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873A1F2: ret
        __asm _emit 0xC3
    }
}
