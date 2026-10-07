// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 732 bytes in 1 exact ranges.
// Source symbol alias: FUN_588c7110.

// Ghidra body range 0x588C7110..0x588C73EC; 732 mapped bytes.
extern "C" __declspec(naked) void FUN_588c7110_segment_00() {
    __asm {
        // 0x588C7110: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588C7114: push ebx
        __asm _emit 0x53
        // 0x588C7115: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588C7117: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7119: je 0x588c73de
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C711F: push esi
        __asm _emit 0x56
        // 0x588C7120: push edi
        __asm _emit 0x57
        // 0x588C7121: lea esi, [eax + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x50
        // 0x588C7124: mov eax, dword ptr [ebx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x50
        // 0x588C7127: mov dword ptr [ebx + 0x90], 1
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7131: lea edi, [ebx + 0x220]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7137: mov ecx, 0x60
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C713C: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588C713E: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7145: mov ecx, dword ptr [ebx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x54
        // 0x588C7148: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C714F: mov edx, dword ptr [ebx + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7155: mov eax, dword ptr [ebx + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C715B: mov ecx, dword ptr [ebx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7161: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588C7167: push edx
        __asm _emit 0x52
        // 0x588C7168: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588C716D: push eax
        __asm _emit 0x50
        // 0x588C716E: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x76
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588C7173: movzx ecx, word ptr [ebx + 0x22e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C717A: shr ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x588C717D: xor ecx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF1
        __asm _emit 0xAA
        // 0x588C7180: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7186: push ecx
        __asm _emit 0x51
        // 0x588C7187: mov ecx, dword ptr [ebx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x58
        // 0x588C718A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C718F: movzx eax, word ptr [ebx + 0x22e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7196: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588C7199: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588C719B: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x588C719E: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588C71A0: mov eax, dword ptr [ebx + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C71A6: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x588C71A8: lea ecx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD0
        // 0x588C71AB: imul ecx, ecx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C71B1: mov eax, dword ptr [ecx + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588C71B7: cmp eax, 0x4b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4B
        // 0x588C71BA: pop edi
        __asm _emit 0x5F
        // 0x588C71BB: pop esi
        __asm _emit 0x5E
        // 0x588C71BC: jge 0x588c7283
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C71C2: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C71C8: add eax, 0x12d
        __asm _emit 0x05
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C71CD: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C71D3: jle 0x588c71ed
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588C71D5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C71D7: jl 0x588c71ed
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588C71D9: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C71E0: je 0x588c71ed
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C71E2: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C71E8: mov eax, dword ptr [edx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x82
        // 0x588C71EB: jmp 0x588c71ef
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C71ED: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C71EF: mov ecx, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x60
        // 0x588C71F2: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C71F5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C71F7: je 0x588c7221
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C71F9: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588C71FC: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C71FF: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588C7202: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C7205: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C7208: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C720A: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C720D: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C720F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C7212: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C7215: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C7218: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C721B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C721E: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C7221: movzx eax, word ptr [ebx + 0x22e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7228: mov edx, dword ptr [ebx + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C722E: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588C7231: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C7233: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588C7236: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588C7238: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x588C723A: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588C723D: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7243: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7249: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588C724F: add eax, 0xc6
        __asm _emit 0x05
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7254: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C725A: jle 0x588c7335
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7260: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7262: jl 0x588c7335
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7268: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C726F: je 0x588c7335
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7275: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C727B: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588C727E: jmp 0x588c7337
        __asm _emit 0xE9
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7283: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7289: add eax, 0xe1
        __asm _emit 0x05
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C728E: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7294: jle 0x588c72ae
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588C7296: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C7298: jl 0x588c72ae
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588C729A: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C72A1: je 0x588c72ae
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C72A3: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C72A9: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588C72AC: jmp 0x588c72b0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C72AE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C72B0: mov ecx, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x60
        // 0x588C72B3: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C72B6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C72B8: je 0x588c72e2
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C72BA: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588C72BD: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C72C0: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588C72C3: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C72C6: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C72C9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C72CB: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C72CE: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C72D0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C72D3: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C72D6: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C72D9: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C72DC: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C72DF: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C72E2: movzx eax, word ptr [ebx + 0x22e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C72E9: mov edx, dword ptr [ebx + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C72EF: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588C72F2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C72F4: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588C72F7: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588C72F9: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x588C72FB: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588C72FE: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7304: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C730A: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588C7310: add eax, 0xaf
        __asm _emit 0x05
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7315: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C731B: jle 0x588c7335
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588C731D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C731F: jl 0x588c7335
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588C7321: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7328: je 0x588c7335
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C732A: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7330: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588C7333: jmp 0x588c7337
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7335: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C7337: mov ecx, dword ptr [ebx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x64
        // 0x588C733A: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C733D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C733F: je 0x588c736a
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588C7341: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588C7344: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C7347: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588C734A: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C734D: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588C7350: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C7353: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C7356: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C7358: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C735B: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C735E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C7361: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C7364: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C7367: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C736A: mov ecx, dword ptr [ebx + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7370: mov edx, dword ptr [ebx + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7376: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588C737C: push ecx
        __asm _emit 0x51
        // 0x588C737D: mov ecx, dword ptr [ebx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7383: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588C7389: push edx
        __asm _emit 0x52
        // 0x588C738A: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x74
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588C738F: mov eax, dword ptr [ebx + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7395: mov ecx, dword ptr [ebx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x7C
        // 0x588C7398: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588C739D: push eax
        __asm _emit 0x50
        // 0x588C739E: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C73A3: mov ecx, dword ptr [ebx + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C73A9: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588C73AF: push ecx
        __asm _emit 0x51
        // 0x588C73B0: mov ecx, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C73B6: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C73BB: movzx edx, word ptr [ebx + 0x22e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C73C2: mov eax, dword ptr [ebx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x74
        // 0x588C73C5: shr edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0C
        // 0x588C73C8: lea ecx, [ebx + 0x2ac]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C73CE: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588C73D1: push ecx
        __asm _emit 0x51
        // 0x588C73D2: mov ecx, dword ptr [ebx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x68
        // 0x588C73D5: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xA9
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C73DA: pop ebx
        __asm _emit 0x5B
        // 0x588C73DB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C73DE: mov dword ptr [ebx + 0x90], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C73E8: pop ebx
        __asm _emit 0x5B
        // 0x588C73E9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
