// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 474 bytes in 1 exact ranges.
// Source symbol alias: FUN_587db820.

// Ghidra body range 0x587DB820..0x587DB9FA; 474 mapped bytes.
extern "C" __declspec(naked) void FUN_587db820_segment_00() {
    __asm {
        // 0x587DB820: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587DB823: push ebx
        __asm _emit 0x53
        // 0x587DB824: push ebp
        __asm _emit 0x55
        // 0x587DB825: push esi
        __asm _emit 0x56
        // 0x587DB826: push edi
        __asm _emit 0x57
        // 0x587DB827: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587DB829: mov eax, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB82F: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB835: mov ecx, dword ptr [eax + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB83B: mov edx, dword ptr [eax + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB841: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587DB843: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DB847: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587DB849: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DB84D: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DB851: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DB855: movzx esi, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF3
        // 0x587DB858: push esi
        __asm _emit 0x56
        // 0x587DB859: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587DB85B: call 0x587da650
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB860: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB862: je 0x587db9f0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB868: mov edx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB86E: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB874: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587DB878: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x587DB87C: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587DB880: cmp bx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587DB883: jae 0x587db8d9
        __asm _emit 0x73
        __asm _emit 0x54
        // 0x587DB885: test dword ptr [esp + 0x10], 0x80000000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587DB88D: je 0x587db8d9
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x587DB88F: mov eax, dword ptr [edx + esi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB896: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB898: je 0x587db8d9
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x587DB89A: mov ebx, dword ptr [edx + esi*8 + 0xbc0]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0xF2
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB8A1: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587DB8A3: je 0x587db8d9
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x587DB8A5: cmp byte ptr [eax], 6
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x06
        // 0x587DB8A8: jne 0x587db8d9
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x587DB8AA: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587DB8AC: movzx eax, word ptr [ecx + esi*4 + 0xac0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB8B4: mov ecx, dword ptr [ecx + esi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB1
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB8BB: movzx ecx, word ptr [ecx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB8C2: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB8C7: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x587DB8CA: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587DB8CC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB8CE: jle 0x587db8d9
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x587DB8D0: movzx ecx, word ptr [ebx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x1E
        // 0x587DB8D4: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587DB8D7: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x587DB8D9: test dword ptr [esp + 0x14], 0x80000000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587DB8E1: je 0x587db982
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB8E7: cmp dword ptr [edx + esi*4 + 0xb40], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xB2
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB8EF: je 0x587db913
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587DB8F1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587DB8F3: movzx ecx, word ptr [eax + esi*4 + 0xac0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0xB0
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB8FB: mov eax, dword ptr [eax + esi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB902: movzx eax, word ptr [eax + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x1E
        // 0x587DB906: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB90C: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587DB90F: add dword ptr [esp + 0x18], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DB913: mov eax, dword ptr [edx + esi*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xF2
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB91A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB91C: je 0x587db982
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x587DB91E: cmp byte ptr [eax], 0xb
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x0B
        // 0x587DB921: jne 0x587db962
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x587DB923: mov cl, byte ptr [eax + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB929: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x587DB92C: movzx ax, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x587DB930: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587DB934: je 0x587db982
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x587DB936: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587DB93A: je 0x587db982
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587DB93C: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587DB93E: movzx eax, word ptr [ecx + esi*4 + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB946: mov edx, dword ptr [ecx + esi*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xF1
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB94D: movzx ecx, word ptr [edx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4A
        __asm _emit 0x1E
        // 0x587DB951: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB956: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587DB959: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x587DB95C: lea ebp, [ebp + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587DB960: jmp 0x587db982
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x587DB962: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587DB964: movzx ecx, word ptr [eax + esi*4 + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0xB0
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB96C: mov edx, dword ptr [eax + esi*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xF0
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB973: movzx eax, word ptr [edx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x1E
        // 0x587DB977: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB97D: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587DB980: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x587DB982: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DB986: shl dword ptr [esp + 0x10], 1
        __asm _emit 0xD1
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DB98A: shl dword ptr [esp + 0x14], 1
        __asm _emit 0xD1
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DB98E: inc ebx
        __asm _emit 0x43
        // 0x587DB98F: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DB993: cmp bx, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x20
        // 0x587DB997: jb 0x587db855
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB99D: mov ecx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB9A3: mov ecx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB9A9: movzx esi, word ptr [ecx + 0x11a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB1
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB9B0: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587DB9B5: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x587DB9B7: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587DB9BA: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587DB9BC: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587DB9BF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587DB9C1: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587DB9C3: jl 0x587db9f0
        __asm _emit 0x7C
        __asm _emit 0x2B
        // 0x587DB9C5: movzx ecx, word ptr [ecx + 0x11c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB9CC: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587DB9D1: imul dword ptr [esp + 0x18]
        __asm _emit 0xF7
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DB9D5: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587DB9D8: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587DB9DA: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587DB9DD: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587DB9DF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587DB9E1: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587DB9E3: setge dl
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC2
        // 0x587DB9E6: pop edi
        __asm _emit 0x5F
        // 0x587DB9E7: pop esi
        __asm _emit 0x5E
        // 0x587DB9E8: pop ebp
        __asm _emit 0x5D
        // 0x587DB9E9: pop ebx
        __asm _emit 0x5B
        // 0x587DB9EA: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587DB9EC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587DB9EF: ret
        __asm _emit 0xC3
        // 0x587DB9F0: pop edi
        __asm _emit 0x5F
        // 0x587DB9F1: pop esi
        __asm _emit 0x5E
        // 0x587DB9F2: pop ebp
        __asm _emit 0x5D
        // 0x587DB9F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB9F5: pop ebx
        __asm _emit 0x5B
        // 0x587DB9F6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587DB9F9: ret
        __asm _emit 0xC3
    }
}
