// Complete Ghidra body ranges; excluded gaps are not emitted.
// Total body size: 2807 bytes across three ranges.

// Ghidra range: 0x588AEFB0 .. +0x2C9 bytes.
extern "C" __declspec(naked) void FUN_588aefb0_segment_00() {
    __asm {
        // 0x588AEFB0: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x588AEFB3: push ebx
        __asm _emit 0x53
        // 0x588AEFB4: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AEFB8: push ebp
        __asm _emit 0x55
        // 0x588AEFB9: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588AEFBB: mov eax, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x70
        // 0x588AEFBE: push esi
        __asm _emit 0x56
        // 0x588AEFBF: push edi
        __asm _emit 0x57
        // 0x588AEFC0: lea edi, [ebp + 0xac]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEFC6: mov ecx, 0x60
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEFCB: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x588AEFCD: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588AEFCF: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEFD4: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588AEFD8: movzx dx, byte ptr [ebx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x53
        __asm _emit 0x10
        // 0x588AEFDD: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x588AEFE0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AEFE3: je 0x588af657
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6E
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEFE9: movzx ecx, word ptr [ebx + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x12
        // 0x588AEFED: dec eax
        __asm _emit 0x48
        // 0x588AEFEE: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588AEFF1: movzx esi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF0
        // 0x588AEFF4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588AEFF6: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AEFFA: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588AEFFE: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AF002: cmp esi, 7
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x07
        // 0x588AF005: ja 0x588af048
        __asm _emit 0x77
        __asm _emit 0x41
        // 0x588AF007: jmp dword ptr [esi*4 + 0x588afabc]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0xB5
        __asm _emit 0xBC
        __asm _emit 0xFA
        __asm _emit 0x8A
        __asm _emit 0x58
        // 0x588AF00E: mov edi, 0xfffffc18
        __asm _emit 0xBF
        __asm _emit 0x18
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF013: jmp 0x588af044
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x588AF015: mov edi, 0xfffff830
        __asm _emit 0xBF
        __asm _emit 0x30
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF01A: jmp 0x588af044
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x588AF01C: mov edi, 0xfffff448
        __asm _emit 0xBF
        __asm _emit 0x48
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF021: jmp 0x588af044
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x588AF023: mov edi, 0xfffff060
        __asm _emit 0xBF
        __asm _emit 0x60
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF028: jmp 0x588af044
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x588AF02A: mov edi, 0xffffec78
        __asm _emit 0xBF
        __asm _emit 0x78
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF02F: jmp 0x588af044
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588AF031: mov edi, 0xffffe890
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF036: jmp 0x588af044
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588AF038: mov edi, 0xffffe4a8
        __asm _emit 0xBF
        __asm _emit 0xA8
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF03D: jmp 0x588af044
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588AF03F: mov edi, 0xffffe0c0
        __asm _emit 0xBF
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF044: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588AF048: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x588AF04C: je 0x588af0f9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF052: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF058: lea eax, [esi + 5]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x05
        // 0x588AF05B: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF061: jle 0x588af07b
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588AF063: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF065: jl 0x588af07b
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588AF067: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF06E: je 0x588af07b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AF070: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF076: mov eax, dword ptr [edx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x82
        // 0x588AF079: jmp 0x588af07d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF07B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF07D: mov ecx, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x68
        // 0x588AF080: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588AF083: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF085: je 0x588af0af
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588AF087: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588AF08A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588AF08D: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588AF090: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588AF093: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588AF096: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AF098: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588AF09B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588AF09D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF0A0: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588AF0A3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588AF0A6: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588AF0A9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF0AC: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588AF0AF: mov ecx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF0B5: add ecx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588AF0B8: push ecx
        __asm _emit 0x51
        // 0x588AF0B9: mov ecx, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x68
        // 0x588AF0BC: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF0C1: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF0C7: lea eax, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588AF0CA: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF0D0: jle 0x588af18f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF0D6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF0D8: jl 0x588af18f
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF0DE: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF0E5: je 0x588af18f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF0EB: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF0F1: mov eax, dword ptr [edx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x82
        // 0x588AF0F4: jmp 0x588af191
        __asm _emit 0xE9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF0F9: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF0FE: cmp dword ptr [eax + 0x164], 0x132
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF108: jle 0x588af121
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588AF10A: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF111: je 0x588af121
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588AF113: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF119: mov eax, dword ptr [edx + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF11F: jmp 0x588af123
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF121: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF123: mov ecx, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x68
        // 0x588AF126: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588AF129: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF12B: je 0x588af155
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588AF12D: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588AF130: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588AF133: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588AF136: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588AF139: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588AF13C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AF13E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588AF141: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588AF143: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF146: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588AF149: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588AF14C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588AF14F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF152: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588AF155: mov ecx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF15B: add ecx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588AF15E: push ecx
        __asm _emit 0x51
        // 0x588AF15F: mov ecx, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x68
        // 0x588AF162: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF167: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF16C: cmp dword ptr [eax + 0x164], 0x133
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF176: jle 0x588af18f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588AF178: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF17F: je 0x588af18f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588AF181: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF187: mov eax, dword ptr [edx + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF18D: jmp 0x588af191
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF18F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF191: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x588AF194: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588AF197: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF199: je 0x588af1c4
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588AF19B: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588AF19E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588AF1A1: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588AF1A4: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588AF1A7: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588AF1AA: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588AF1AD: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588AF1B0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588AF1B2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF1B5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588AF1B8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588AF1BB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588AF1BE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF1C1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588AF1C4: mov ecx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF1CA: add ecx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588AF1CD: push ecx
        __asm _emit 0x51
        // 0x588AF1CE: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x588AF1D1: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF1D6: movzx edx, word ptr [esp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AF1DB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588AF1DD: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x588AF1E0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588AF1E2: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588AF1E6: lea eax, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3A
        // 0x588AF1E9: mov ecx, dword ptr [ebp + eax*8 + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC5
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF1F0: add ecx, dword ptr [ebp + 0x1e74]
        __asm _emit 0x03
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF1F6: mov edx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF1FC: add ecx, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x588AF1FF: add edx, dword ptr [ebp + eax*8 + 0x250]
        __asm _emit 0x03
        __asm _emit 0x94
        __asm _emit 0xC5
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF206: push ecx
        __asm _emit 0x51
        // 0x588AF207: add edx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x588AF20A: mov ecx, dword ptr [ebp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF210: push edx
        __asm _emit 0x52
        // 0x588AF211: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AF215: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF21A: imul esi, esi, 0x1d
        __asm _emit 0x6B
        __asm _emit 0xF6
        __asm _emit 0x1D
        // 0x588AF21D: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588AF220: lea ecx, [esi + eax + 0x1e1]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x06
        __asm _emit 0xE1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF227: push ecx
        __asm _emit 0x51
        // 0x588AF228: mov ecx, dword ptr [ebp + 0x2470]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF22E: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF233: mov edx, dword ptr [ebp + 0x2470]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF239: mov dword ptr [edx + 0x50], 6
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF240: mov eax, dword ptr [ebp + 0x2470]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF246: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588AF24B: movzx eax, word ptr [ebx + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x12
        // 0x588AF24F: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF255: push eax
        __asm _emit 0x50
        // 0x588AF256: call 0x58778ad0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x98
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588AF25B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF25D: je 0x588af338
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF263: lea esi, [ebp + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF269: lea edi, [eax + 0x362]
        __asm _emit 0x8D
        __asm _emit 0xB8
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF26F: mov dword ptr [esp + 0x20], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF277: jmp 0x588af280
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra range: 0x588AF280 .. +0x4E5 bytes.
extern "C" __declspec(naked) void FUN_588aefb0_segment_01() {
    __asm {
        // 0x588AF280: cmp word ptr [edi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x588AF284: je 0x588af30f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF28A: mov ecx, dword ptr [edi - 2]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFE
        // 0x588AF28D: mov dword ptr [esi + 0x1f80], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF293: movzx eax, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x07
        // 0x588AF296: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF29C: push eax
        __asm _emit 0x50
        // 0x588AF29D: movzx ebx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD8
        // 0x588AF2A0: call 0x58778ad0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x98
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588AF2A5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588AF2A9: movzx edx, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD3
        // 0x588AF2AC: add edx, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588AF2B0: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588AF2B2: cmp byte ptr [ecx + 0x589c8bb8], 1
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0xB8
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x588AF2B9: jne 0x588af319
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x588AF2BB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF2BD: je 0x588af319
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x588AF2BF: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AF2C3: mov dx, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0E
        // 0x588AF2C7: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0E
        // 0x588AF2CB: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x588AF2CF: mov ebx, 0xffaa
        __asm _emit 0xBB
        __asm _emit 0xAA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF2D4: xor dx, bx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xD3
        // 0x588AF2D7: mov ebx, 0xff
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF2DC: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588AF2E0: and dx, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD3
        // 0x588AF2E3: and ax, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC3
        // 0x588AF2E6: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588AF2E9: jb 0x588af319
        __asm _emit 0x72
        __asm _emit 0x2E
        // 0x588AF2EB: mov edx, dword ptr [ebp + ecx*8 + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xCD
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF2F2: add edx, dword ptr [ebp + 0x1e74]
        __asm _emit 0x03
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF2F8: mov eax, dword ptr [ebp + ecx*8 + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xCD
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF2FF: add edx, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x588AF302: add eax, dword ptr [ebp + 0x1e70]
        __asm _emit 0x03
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF308: push edx
        __asm _emit 0x52
        // 0x588AF309: add eax, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588AF30C: push eax
        __asm _emit 0x50
        // 0x588AF30D: jmp 0x588af320
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x588AF30F: mov dword ptr [esi + 0x1f80], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF319: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF31E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AF320: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF322: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x3F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF327: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588AF32A: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588AF32D: sub dword ptr [esp + 0x20], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588AF332: jne 0x588af280
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF338: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588AF33C: lea ecx, [ebp + 0x202c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF342: lea eax, [ebp + edx*8 + 0x254]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF349: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588AF34B: lea esi, [ebp + 0x20f8]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF351: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588AF355: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588AF359: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF360: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588AF364: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588AF366: sub ecx, dword ptr [esp + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588AF36A: movzx edi, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF9
        // 0x588AF36D: mov word ptr [edx], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x588AF370: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF376: push edi
        __asm _emit 0x57
        // 0x588AF377: call 0x58778ad0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x97
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588AF37C: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AF380: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588AF384: cmp byte ptr [eax + ebx + 0x589c8bb8], 1
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x18
        __asm _emit 0xB8
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x588AF38C: jne 0x588af5bd
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF392: cmp dword ptr [esp + 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588AF397: je 0x588af5bd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF39D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588AF39F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF3A1: lea ecx, [ebp + 0x16c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF3A7: cmp di, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x39
        // 0x588AF3AA: je 0x588af3c0
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588AF3AC: cmp di, word ptr [ebp + 0xbe]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xBD
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF3B3: je 0x588af3c0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AF3B5: inc eax
        __asm _emit 0x40
        // 0x588AF3B6: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x588AF3B9: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x588AF3BC: jl 0x588af3a7
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x588AF3BE: jmp 0x588af42b
        __asm _emit 0xEB
        __asm _emit 0x6B
        // 0x588AF3C0: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF3C6: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AF3CA: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF3D0: jle 0x588af3ea
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588AF3D2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF3D4: jl 0x588af3ea
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588AF3D6: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF3DD: je 0x588af3ea
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AF3DF: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588AF3E2: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF3E8: jmp 0x588af3ec
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF3EA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF3EC: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF3EE: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588AF3F1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF3F3: je 0x588af41d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588AF3F5: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588AF3F8: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588AF3FB: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588AF3FE: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588AF401: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588AF404: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AF406: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588AF409: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588AF40B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF40E: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588AF411: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588AF414: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588AF417: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF41A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588AF41D: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF41F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AF421: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF426: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF42B: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AF42F: mov ax, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0E
        // 0x588AF433: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588AF437: mov ecx, 0xffaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF43C: xor ax, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC1
        // 0x588AF43F: mov ecx, 0xff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF444: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588AF447: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AF44B: mov cx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0E
        // 0x588AF44F: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x588AF453: mov edi, 0xff
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF458: and cx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCF
        // 0x588AF45B: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588AF45E: jae 0x588af4c4
        __asm _emit 0x73
        __asm _emit 0x64
        // 0x588AF460: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF466: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AF46A: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF470: jle 0x588af48a
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588AF472: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF474: jl 0x588af48a
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588AF476: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF47D: je 0x588af48a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AF47F: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588AF482: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF488: jmp 0x588af48c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF48A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF48C: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF48E: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588AF491: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF493: je 0x588af4bd
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588AF495: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588AF498: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588AF49B: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588AF49E: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588AF4A1: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588AF4A4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AF4A6: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588AF4A9: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588AF4AB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF4AE: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588AF4B1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588AF4B4: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588AF4B7: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF4BA: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588AF4BD: push 0xffffff4c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF4C2: jmp 0x588af528
        __asm _emit 0xEB
        __asm _emit 0x64
        // 0x588AF4C4: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588AF4C7: je 0x588af52f
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x588AF4C9: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF4CF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AF4D3: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF4D9: jle 0x588af4f3
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588AF4DB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF4DD: jl 0x588af4f3
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588AF4DF: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF4E6: je 0x588af4f3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AF4E8: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588AF4EB: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF4F1: jmp 0x588af4f5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF4F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF4F5: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF4F7: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588AF4FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF4FC: je 0x588af526
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588AF4FE: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588AF501: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588AF504: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588AF507: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588AF50A: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588AF50D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AF50F: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588AF512: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588AF514: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF517: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588AF51A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588AF51D: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588AF520: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF523: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588AF526: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x588AF528: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF52A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF52F: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF531: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588AF535: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588AF538: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588AF53A: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588AF53E: add eax, dword ptr [ebp + 0x1e74]
        __asm _emit 0x03
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF544: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x588AF546: mov edx, dword ptr [ebp + ecx*8 + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xCD
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF54D: add edx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x03
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF553: add eax, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588AF556: add edx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x588AF559: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF55B: push eax
        __asm _emit 0x50
        // 0x588AF55C: push edx
        __asm _emit 0x52
        // 0x588AF55D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x3D
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF562: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF567: cmp dword ptr [eax + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588AF56E: jle 0x588af584
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588AF570: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF577: je 0x588af584
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AF579: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF57F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF582: jmp 0x588af586
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF584: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF586: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF58C: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588AF58F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF591: je 0x588af5cb
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588AF593: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588AF596: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588AF599: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588AF59C: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588AF59F: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588AF5A2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AF5A4: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588AF5A7: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588AF5A9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF5AC: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588AF5AF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588AF5B2: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588AF5B5: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF5B8: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588AF5BB: jmp 0x588af5cb
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x588AF5BD: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF5BF: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF5C4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AF5C6: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x3C
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF5CB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588AF5CD: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588AF5D0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF5D3: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588AF5D6: push ecx
        __asm _emit 0x51
        // 0x588AF5D7: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF5DD: push edx
        __asm _emit 0x52
        // 0x588AF5DE: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x3C
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF5E3: add dword ptr [esp + 0x1c], 2
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        // 0x588AF5E8: add dword ptr [esp + 0x20], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588AF5ED: inc ebx
        __asm _emit 0x43
        // 0x588AF5EE: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588AF5F1: cmp ebx, 0x64
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x64
        // 0x588AF5F4: jl 0x588af360
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x66
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF5FA: mov esi, dword ptr [ebp + 0x238]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF600: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588AF604: sub esi, dword ptr [ebp + eax*8 + 0x250]
        __asm _emit 0x2B
        __asm _emit 0xB4
        __asm _emit 0xC5
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF60B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588AF60D: push edi
        __asm _emit 0x57
        // 0x588AF60E: push esi
        __asm _emit 0x56
        // 0x588AF60F: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588AF611: call 0x588aeef0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF616: mov eax, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x68
        // 0x588AF619: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588AF61C: sub ecx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588AF61F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588AF621: imul eax, eax, 0xf0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF627: cdq
        __asm _emit 0x99
        // 0x588AF628: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588AF62A: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x588AF62D: mov ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF633: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588AF635: add edx, 0x12e
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF63B: push edx
        __asm _emit 0x52
        // 0x588AF63C: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x3C
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF641: mov dword ptr [ebp + 0x22c], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF647: mov dword ptr [ebp + 0x1e78], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x78
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF64D: pop edi
        __asm _emit 0x5F
        // 0x588AF64E: pop esi
        __asm _emit 0x5E
        // 0x588AF64F: pop ebp
        __asm _emit 0x5D
        // 0x588AF650: pop ebx
        __asm _emit 0x5B
        // 0x588AF651: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588AF654: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588AF657: movzx eax, word ptr [ebx + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x12
        // 0x588AF65B: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AF65F: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF664: cmp dword ptr [eax + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588AF66B: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF673: jle 0x588af689
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588AF675: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF67C: je 0x588af689
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AF67E: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF684: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588AF687: jmp 0x588af68b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF689: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF68B: mov ecx, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x68
        // 0x588AF68E: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588AF691: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF693: je 0x588af6bd
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588AF695: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588AF698: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588AF69B: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588AF69E: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588AF6A1: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588AF6A4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AF6A6: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588AF6A9: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588AF6AB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF6AE: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588AF6B1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588AF6B4: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588AF6B7: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF6BA: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588AF6BD: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF6C2: cmp dword ptr [eax + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588AF6C9: jle 0x588af6df
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588AF6CB: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF6D2: je 0x588af6df
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AF6D4: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF6DA: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588AF6DD: jmp 0x588af6e1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF6DF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF6E1: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x588AF6E4: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588AF6E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF6E9: je 0x588af713
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588AF6EB: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588AF6EE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588AF6F1: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588AF6F4: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588AF6F7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588AF6FA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AF6FC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588AF6FF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588AF701: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF704: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588AF707: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588AF70A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588AF70D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF710: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588AF713: mov ecx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF719: add ecx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588AF71C: push ecx
        __asm _emit 0x51
        // 0x588AF71D: mov ecx, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x68
        // 0x588AF720: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF725: mov edx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF72B: add edx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x588AF72E: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x588AF731: push edx
        __asm _emit 0x52
        // 0x588AF732: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF737: movzx eax, word ptr [ebx + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x12
        // 0x588AF73B: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF741: push eax
        __asm _emit 0x50
        // 0x588AF742: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF74A: call 0x58778ad0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x93
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588AF74F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF751: je 0x588af9c1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF757: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF759: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588AF75D: lea esi, [ebp + 0x20f8]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF763: jmp 0x588af774
        __asm _emit 0xEB
        __asm _emit 0x0F
    }
}

// Ghidra range: 0x588AF770 .. +0x349 bytes.
extern "C" __declspec(naked) void FUN_588aefb0_segment_02() {
    __asm {
        // 0x588AF770: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AF774: lea ecx, [eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF77B: cmp byte ptr [ecx + ebx + 0x6d], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x19
        __asm _emit 0x6D
        __asm _emit 0x00
        // 0x588AF780: je 0x588af942
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF786: mov edx, dword ptr [ecx + ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x6C
        // 0x588AF78A: inc dword ptr [esp + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588AF78E: mov dword ptr [esi - 0xec], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF794: movzx ax, byte ptr [ecx + ebx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x19
        __asm _emit 0x6C
        // 0x588AF79A: movzx ecx, word ptr [ecx + ebx + 0x6e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x19
        __asm _emit 0x6E
        // 0x588AF79F: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588AF7A2: movzx edi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF8
        // 0x588AF7A5: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588AF7A9: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x588AF7AC: ja 0x588af80d
        __asm _emit 0x77
        __asm _emit 0x5F
        // 0x588AF7AE: jmp dword ptr [edi*4 + 0x588afadc]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0xBD
        __asm _emit 0xDC
        __asm _emit 0xFA
        __asm _emit 0x8A
        __asm _emit 0x58
        // 0x588AF7B5: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF7BD: jmp 0x588af80d
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x588AF7BF: mov dword ptr [esp + 0x10], 0xfffffc18
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF7C7: jmp 0x588af80d
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x588AF7C9: mov dword ptr [esp + 0x10], 0xfffff830
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x30
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF7D1: jmp 0x588af80d
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x588AF7D3: mov dword ptr [esp + 0x10], 0xfffff448
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF7DB: jmp 0x588af80d
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x588AF7DD: mov dword ptr [esp + 0x10], 0xfffff060
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x60
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF7E5: jmp 0x588af80d
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x588AF7E7: mov dword ptr [esp + 0x10], 0xffffec78
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x78
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF7EF: jmp 0x588af80d
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x588AF7F1: mov dword ptr [esp + 0x10], 0xffffe890
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF7F9: jmp 0x588af80d
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588AF7FB: mov dword ptr [esp + 0x10], 0xffffe4a8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0xA8
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF803: jmp 0x588af80d
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588AF805: mov dword ptr [esp + 0x10], 0xffffe0c0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF80D: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF810: je 0x588af914
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF816: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588AF81A: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x588AF81C: imul ebx, ebx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xDB
        __asm _emit 0x64
        // 0x588AF81F: cmp byte ptr [ebx + ecx + 0x589c8b54], 1
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x0B
        __asm _emit 0x54
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x588AF827: jne 0x588af95e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF82D: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF833: lea eax, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFF
        // 0x588AF836: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF83C: jle 0x588af856
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588AF83E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF840: jl 0x588af856
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588AF842: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF849: je 0x588af856
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AF84B: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588AF84E: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF854: jmp 0x588af858
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF856: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF858: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF85A: push eax
        __asm _emit 0x50
        // 0x588AF85B: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x50
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AF860: imul edi, edi, 0x320
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF866: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588AF868: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF86F: mov ecx, dword ptr [edi + ebp - 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x2F
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF876: add ecx, dword ptr [ebp + 0x1e74]
        __asm _emit 0x03
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF87C: mov edx, dword ptr [edi + ebp - 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x2F
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF883: add ecx, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x588AF886: add edx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x03
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF88C: lea eax, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2F
        // 0x588AF88F: add edx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x588AF892: push ecx
        __asm _emit 0x51
        // 0x588AF893: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588AF895: push edx
        __asm _emit 0x52
        // 0x588AF896: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF89B: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AF8A0: cmp dword ptr [eax + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588AF8A7: jle 0x588af8bd
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588AF8A9: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF8B0: je 0x588af8bd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AF8B2: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF8B8: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588AF8BB: jmp 0x588af8bf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AF8BD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AF8BF: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF8C5: push eax
        __asm _emit 0x50
        // 0x588AF8C6: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x1D
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AF8CB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588AF8CD: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588AF8D0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588AF8D3: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588AF8D6: push ecx
        __asm _emit 0x51
        // 0x588AF8D7: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF8DD: push edx
        __asm _emit 0x52
        // 0x588AF8DE: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF8E3: movzx eax, word ptr [esp + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588AF8E8: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588AF8EC: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588AF8EE: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588AF8F0: mov edx, dword ptr [ebp + eax*8 - 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xC5
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF8F7: add edx, dword ptr [ebp + 0x1e74]
        __asm _emit 0x03
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF8FD: mov eax, dword ptr [ebp + eax*8 - 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF904: add edx, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x588AF907: add eax, dword ptr [ebp + 0x1e70]
        __asm _emit 0x03
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF90D: push edx
        __asm _emit 0x52
        // 0x588AF90E: add eax, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588AF911: push eax
        __asm _emit 0x50
        // 0x588AF912: jmp 0x588af953
        __asm _emit 0xEB
        __asm _emit 0x3F
        // 0x588AF914: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588AF918: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588AF91B: lea eax, [ecx + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x11
        // 0x588AF91E: mov ecx, dword ptr [ebp + eax*8 + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC5
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF925: add ecx, dword ptr [ebp + 0x1e74]
        __asm _emit 0x03
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF92B: mov edx, dword ptr [ebp + eax*8 + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xC5
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF932: add ecx, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x588AF935: add edx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x03
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF93B: push ecx
        __asm _emit 0x51
        // 0x588AF93C: add edx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x588AF93F: push edx
        __asm _emit 0x52
        // 0x588AF940: jmp 0x588af953
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x588AF942: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF947: mov dword ptr [esi - 0xec], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF951: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AF953: mov ecx, dword ptr [esi - 0x206c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF959: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF95E: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588AF962: inc eax
        __asm _emit 0x40
        // 0x588AF963: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588AF966: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588AF969: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588AF96D: jl 0x588af770
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xFD
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AF973: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF978: lea eax, [ebp + 0x202c]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF97E: push 0x1869f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588AF983: push eax
        __asm _emit 0x50
        // 0x588AF984: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xD2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588AF989: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AF98D: mov ax, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0E
        // 0x588AF991: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588AF994: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588AF998: je 0x588af9ba
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588AF99A: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588AF99E: ja 0x588af9ba
        __asm _emit 0x77
        __asm _emit 0x1A
        // 0x588AF9A0: movzx eax, word ptr [ecx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x0E
        // 0x588AF9A4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AF9A6: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x588AF9A9: imul ecx, ecx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF9AF: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588AF9B2: mov word ptr [ebp + eax*2 + 0x202a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0x2A
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF9BA: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x588AF9BF: jne 0x588af9f6
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x588AF9C1: mov edx, dword ptr [ebp + 0x1e74]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF9C7: add edx, dword ptr [ebp + 0x23c]
        __asm _emit 0x03
        __asm _emit 0x95
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF9CD: mov eax, dword ptr [ebp + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF9D3: add eax, dword ptr [ebp + 0x1e70]
        __asm _emit 0x03
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF9D9: add edx, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x588AF9DC: add eax, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588AF9DF: mov ecx, dword ptr [ebp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF9E5: push edx
        __asm _emit 0x52
        // 0x588AF9E6: push eax
        __asm _emit 0x50
        // 0x588AF9E7: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AF9EC: mov dword ptr [ebp + 0x200c], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AF9F6: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AF9FA: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AF9FD: je 0x588afa2f
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588AF9FF: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588AFA02: mov ecx, dword ptr [ebp + eax*8 + 0x234]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC5
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA09: add ecx, dword ptr [ebp + 0x1e74]
        __asm _emit 0x03
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA0F: mov edx, dword ptr [ebp + eax*8 + 0x230]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xC5
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA16: add ecx, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x588AFA19: add edx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x03
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA1F: push ecx
        __asm _emit 0x51
        // 0x588AFA20: add edx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x588AFA23: mov ecx, dword ptr [ebp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA29: push edx
        __asm _emit 0x52
        // 0x588AFA2A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AFA2F: lea edi, [ebp + 0x2418]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA35: lea esi, [ebp + 0x238]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA3B: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA40: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588AFA43: add eax, dword ptr [ebp + 0x1e74]
        __asm _emit 0x03
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA49: mov ecx, dword ptr [ebp + 0x1e70]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA4F: add ecx, dword ptr [esi]
        __asm _emit 0x03
        __asm _emit 0x0E
        // 0x588AFA51: add eax, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588AFA54: add ecx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588AFA57: push eax
        __asm _emit 0x50
        // 0x588AFA58: push ecx
        __asm _emit 0x51
        // 0x588AFA59: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588AFA5B: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AFA60: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588AFA63: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x588AFA66: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588AFA69: jne 0x588afa40
        __asm _emit 0x75
        __asm _emit 0xD5
        // 0x588AFA6B: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AFA6F: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588AFA71: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588AFA74: je 0x588afa7b
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588AFA76: add eax, 0xffff
        __asm _emit 0x05
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA7B: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x588AFA7E: mov eax, dword ptr [ebp + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA84: sub eax, dword ptr [ebp + edx*8 + 0x238]
        __asm _emit 0x2B
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA8B: push esi
        __asm _emit 0x56
        // 0x588AFA8C: push eax
        __asm _emit 0x50
        // 0x588AFA8D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588AFA8F: call 0x588aeef0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AFA94: mov eax, dword ptr [ebp + 0x2470]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA9A: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFA9F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588AFAA3: pop edi
        __asm _emit 0x5F
        // 0x588AFAA4: mov dword ptr [ebp + 0x22c], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFAAA: mov dword ptr [ebp + 0x1e78], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x78
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AFAB0: pop esi
        __asm _emit 0x5E
        // 0x588AFAB1: pop ebp
        __asm _emit 0x5D
        // 0x588AFAB2: pop ebx
        __asm _emit 0x5B
        // 0x588AFAB3: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588AFAB6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
