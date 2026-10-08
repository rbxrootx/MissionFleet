// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 617 bytes in 1 exact ranges.
// Source symbol alias: FUN_58732710.

// Ghidra body range 0x58732710..0x58732979; 617 mapped bytes.
extern "C" __declspec(naked) void FUN_58732710_segment_00() {
    __asm {
        // 0x58732710: sub esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x24
        // 0x58732713: push ebx
        __asm _emit 0x53
        // 0x58732714: push ebp
        __asm _emit 0x55
        // 0x58732715: push esi
        __asm _emit 0x56
        // 0x58732716: push edi
        __asm _emit 0x57
        // 0x58732717: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58732719: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873271B: call 0x58731d30
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732720: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58732725: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58732727: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873272D: jle 0x58732741
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5873272F: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732735: je 0x58732741
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58732737: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873273D: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5873273F: jmp 0x58732743
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732741: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58732743: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732749: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5873274C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5873274E: je 0x58732778
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732750: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58732753: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58732756: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732759: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5873275C: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5873275F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732761: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58732764: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58732766: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732769: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5873276C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873276F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732772: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58732775: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58732778: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873277E: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732783: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732788: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873278D: cmp dword ptr [eax + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58732794: jle 0x587327a9
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58732796: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873279C: je 0x587327a9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873279E: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587327A4: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587327A7: jmp 0x587327ab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587327A9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587327AB: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587327B1: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587327B4: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587327B6: je 0x587327e0
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587327B8: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587327BB: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587327BE: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587327C1: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587327C4: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587327C7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587327C9: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587327CC: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587327CE: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587327D1: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587327D4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587327D7: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587327DA: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587327DD: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587327E0: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587327E6: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587327EB: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587327EF: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587327F5: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587327FA: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x04
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587327FF: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732805: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x58732808: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873280E: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x58732811: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732817: push 0x5898c770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xC7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873281C: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5873281E: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58732821: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58732824: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58732826: push ebx
        __asm _emit 0x53
        // 0x58732827: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873282C: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5873282F: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732832: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x58732834: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58732838: push edx
        __asm _emit 0x52
        // 0x58732839: push ebx
        __asm _emit 0x53
        // 0x5873283A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873283E: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58732841: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732847: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873284B: push eax
        __asm _emit 0x50
        // 0x5873284C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5873284F: push ebx
        __asm _emit 0x53
        // 0x58732850: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58732852: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58732856: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58732859: cdq
        __asm _emit 0x99
        // 0x5873285A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873285C: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5873285E: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58732860: add ecx, 0xf5
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732866: push ecx
        __asm _emit 0x51
        // 0x58732867: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5873286A: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x0A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x5873286F: push 0x5898c748
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xC7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732874: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58732876: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58732879: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873287C: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5873287E: push ebx
        __asm _emit 0x53
        // 0x5873287F: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732884: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x58732887: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5873288A: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x5873288C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58732890: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58732894: push eax
        __asm _emit 0x50
        // 0x58732895: push ebx
        __asm _emit 0x53
        // 0x58732896: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58732899: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873289F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587328A3: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587328A6: push eax
        __asm _emit 0x50
        // 0x587328A7: push ebx
        __asm _emit 0x53
        // 0x587328A8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587328AA: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587328AE: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587328B1: cdq
        __asm _emit 0x99
        // 0x587328B2: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587328B4: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587328B6: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587328B8: add ecx, 0xf5
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587328BE: push ecx
        __asm _emit 0x51
        // 0x587328BF: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587328C2: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x0A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587328C7: push 0x5898c720
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xC7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587328CC: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587328CE: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587328D1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587328D4: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587328D6: push ebx
        __asm _emit 0x53
        // 0x587328D7: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587328DC: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x587328DF: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587328E2: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x587328E4: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587328E8: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587328EC: push eax
        __asm _emit 0x50
        // 0x587328ED: push ebx
        __asm _emit 0x53
        // 0x587328EE: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587328F1: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587328F7: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587328FB: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587328FE: push eax
        __asm _emit 0x50
        // 0x587328FF: push ebx
        __asm _emit 0x53
        // 0x58732900: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58732902: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58732906: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58732909: cdq
        __asm _emit 0x99
        // 0x5873290A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873290C: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5873290E: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58732910: add ecx, 0xf5
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732916: push ecx
        __asm _emit 0x51
        // 0x58732917: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5873291A: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x09
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x5873291F: push 0x5898c6f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xC6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732924: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58732926: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58732929: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873292C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5873292E: push edi
        __asm _emit 0x57
        // 0x5873292F: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732934: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x58732937: mov ebp, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x5873293A: mov ebx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x5873293D: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58732941: push eax
        __asm _emit 0x50
        // 0x58732942: push edi
        __asm _emit 0x57
        // 0x58732943: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58732946: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873294C: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x5873294E: push eax
        __asm _emit 0x50
        // 0x5873294F: push edi
        __asm _emit 0x57
        // 0x58732950: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58732952: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58732954: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58732958: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873295B: cdq
        __asm _emit 0x99
        // 0x5873295C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873295E: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58732960: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58732962: add ecx, 0xf5
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732968: push ecx
        __asm _emit 0x51
        // 0x58732969: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5873296C: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x09
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732971: pop edi
        __asm _emit 0x5F
        // 0x58732972: pop esi
        __asm _emit 0x5E
        // 0x58732973: pop ebp
        __asm _emit 0x5D
        // 0x58732974: pop ebx
        __asm _emit 0x5B
        // 0x58732975: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x58732978: ret
        __asm _emit 0xC3
    }
}
