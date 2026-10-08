// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 822 bytes in 1 exact ranges.
// Source symbol alias: FUN_58811e30.

// Ghidra body range 0x58811E30..0x58812166; 822 mapped bytes.
extern "C" __declspec(naked) void FUN_58811e30_segment_00() {
    __asm {
        // 0x58811E30: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58811E33: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811E38: mov eax, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E3E: push ebx
        __asm _emit 0x53
        // 0x58811E3F: mov ebx, dword ptr [eax + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E45: push ebp
        __asm _emit 0x55
        // 0x58811E46: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x58811E48: imul ebp, ebp, 0xd4
        __asm _emit 0x69
        __asm _emit 0xED
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E4E: push esi
        __asm _emit 0x56
        // 0x58811E4F: push edi
        __asm _emit 0x57
        // 0x58811E50: movzx edi, word ptr [eax + ebp + 0x244]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBC
        __asm _emit 0x28
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E58: dec edi
        __asm _emit 0x4F
        // 0x58811E59: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58811E5B: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58811E5F: cmp dword ptr [0x589cc340], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0x40
        __asm _emit 0xC3
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58811E65: jne 0x58811e74
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58811E67: cmp byte ptr [esi + 0x114], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E6E: je 0x58811faa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E74: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E7A: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x58811E7C: imul edi, edi, 0x16
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x16
        // 0x58811E7F: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x58811E81: push ecx
        __asm _emit 0x51
        // 0x58811E82: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E88: mov dword ptr [0x589cc340], ebx
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0x40
        __asm _emit 0xC3
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58811E8E: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x14
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811E93: mov edx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E99: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E9F: lea eax, [edi + edx + 0xdf]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811EA6: push eax
        __asm _emit 0x50
        // 0x58811EA7: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811EAC: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811EB2: mov edx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811EB8: movzx eax, word ptr [edx + ebp + 0x1ae]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x2A
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811EC0: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811EC6: add eax, 0x212
        __asm _emit 0x05
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811ECB: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811ED1: jle 0x58811eeb
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58811ED3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58811ED5: jl 0x58811eeb
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58811ED7: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811EDE: je 0x58811eeb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58811EE0: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811EE6: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x58811EE9: jmp 0x58811eed
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58811EEB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58811EED: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811EF3: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58811EF6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58811EF8: je 0x58811f22
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58811EFA: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58811EFD: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58811F00: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58811F03: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58811F06: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58811F09: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58811F0B: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58811F0E: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58811F10: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58811F13: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58811F16: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58811F19: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58811F1C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58811F1F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58811F22: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F28: lea edx, [edi + ecx + 0x143]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x0F
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F2F: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F35: push edx
        __asm _emit 0x52
        // 0x58811F36: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811F3B: mov eax, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F41: lea ecx, [edi + eax + 0x16a]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x07
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F48: push ecx
        __asm _emit 0x51
        // 0x58811F49: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F4F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811F54: mov edx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F5A: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F60: lea eax, [edi + edx + 0xe6]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F67: push eax
        __asm _emit 0x50
        // 0x58811F68: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x13
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811F6D: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F73: lea edx, [edi + ecx + 0x119]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x0F
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F7A: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F80: push edx
        __asm _emit 0x52
        // 0x58811F81: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x13
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811F86: mov eax, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F8C: lea ecx, [edi + eax + 0x13a]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x07
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F93: push ecx
        __asm _emit 0x51
        // 0x58811F94: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811F9A: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x13
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811F9F: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58811FA3: mov byte ptr [esi + 0x114], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811FAA: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811FB0: mov eax, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811FB6: mov ecx, dword ptr [eax + 0x760]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811FBC: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58811FBF: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811FC5: push edx
        __asm _emit 0x52
        // 0x58811FC6: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x53
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811FCB: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811FD0: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811FD6: mov edx, dword ptr [ecx + 0x75c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x5C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811FDC: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x58811FDF: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811FE5: push eax
        __asm _emit 0x50
        // 0x58811FE6: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x53
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811FEB: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811FF1: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58811FF4: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811FF9: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811FFF: mov eax, dword ptr [ecx + 0x180]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812005: add eax, dword ptr [ecx + 0x178]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881200B: mov edx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812011: add eax, dword ptr [ecx + 0x170]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812017: add eax, dword ptr [ecx + 0x168]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881201D: add eax, dword ptr [ecx + 0x160]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812023: movzx ecx, word ptr [edx + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4A
        __asm _emit 0x10
        // 0x58812027: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881202D: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5881202F: push ecx
        __asm _emit 0x51
        // 0x58812030: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812036: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x53
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5881203B: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58812041: mov eax, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812047: mov ecx, dword ptr [eax + edi*4 + 0x70c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881204E: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58812051: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812057: push edx
        __asm _emit 0x52
        // 0x58812058: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x53
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5881205D: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58812062: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812068: mov edx, dword ptr [ecx + ebx*8 + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xD9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881206F: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812075: push edx
        __asm _emit 0x52
        // 0x58812076: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x52
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5881207B: mov eax, 0xffffffd8
        __asm _emit 0xB8
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58812080: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x58812082: mov ebx, 0xffffffec
        __asm _emit 0xBB
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58812087: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x58812089: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812091: mov ebp, 0x160
        __asm _emit 0xBD
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812096: lea edi, [esi + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881209C: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588120A0: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588120A4: mov eax, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xE0
        // 0x588120A7: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588120AB: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588120AE: je 0x58812144
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588120B4: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588120BA: mov ecx, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588120C0: lea eax, [edi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1F
        // 0x588120C3: cmp dword ptr [ecx + eax], 2
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x02
        // 0x588120C7: jne 0x58812127
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x588120C9: mov eax, dword ptr [ecx + ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x29
        __asm _emit 0xFC
        // 0x588120CD: cmp eax, dword ptr [ecx + ebp]
        __asm _emit 0x3B
        __asm _emit 0x04
        __asm _emit 0x29
        // 0x588120D0: jge 0x58812103
        __asm _emit 0x7D
        __asm _emit 0x31
        // 0x588120D2: mov esi, dword ptr [ecx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x29
        // 0x588120D5: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588120D9: movzx edx, word ptr [edx + ecx + 0x25c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x0A
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588120E1: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588120E5: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588120E7: imul esi, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF2
        // 0x588120EA: sub eax, dword ptr [ecx + ebp - 4]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x29
        __asm _emit 0xFC
        // 0x588120EE: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xDF
        // 0x588120F0: dec eax
        __asm _emit 0x48
        // 0x588120F1: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588120F4: add eax, dword ptr [ebx + ecx]
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x0B
        // 0x588120F7: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588120FB: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x588120FE: cdq
        __asm _emit 0x99
        // 0x588120FF: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x58812101: jmp 0x58812105
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58812103: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58812105: imul eax, eax, 0x1d
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x1D
        // 0x58812108: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881210A: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5881210F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58812111: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58812114: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58812116: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58812119: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5881211B: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5881211D: mov ecx, 0x1d
        __asm _emit 0xB9
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812122: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58812124: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x58812127: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881212C: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812132: lea eax, [edi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1F
        // 0x58812135: cmp dword ptr [eax + ecx], 1
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x58812139: jne 0x58812144
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5881213B: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5881213D: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812144: add dword ptr [esp + 0x10], 0xd4
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881214C: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x5881214F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58812152: cmp ebp, 0x188
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58812158: jl 0x588120a4
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x46
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881215E: pop edi
        __asm _emit 0x5F
        // 0x5881215F: pop esi
        __asm _emit 0x5E
        // 0x58812160: pop ebp
        __asm _emit 0x5D
        // 0x58812161: pop ebx
        __asm _emit 0x5B
        // 0x58812162: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58812165: ret
        __asm _emit 0xC3
    }
}
