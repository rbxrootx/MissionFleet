// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F07C0 .. +0x3E4 bytes.
// Source symbol alias: FUN_588f07c0.
extern "C" __declspec(naked) void FUN_588f07c0() {
    __asm {
        // 0x588F07C0: sub esp, 0x130
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F07C6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F07CB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F07CD: mov dword ptr [esp + 0x12c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F07D4: push ebx
        __asm _emit 0x53
        // 0x588F07D5: mov ebx, dword ptr [esp + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F07DC: push esi
        __asm _emit 0x56
        // 0x588F07DD: mov esi, dword ptr [esp + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F07E4: push edi
        __asm _emit 0x57
        // 0x588F07E5: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F07E7: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F07ED: push esi
        __asm _emit 0x56
        // 0x588F07EE: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F07F3: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588F07F5: je 0x588f0a84
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F07FB: movzx eax, byte ptr [ebx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x03
        // 0x588F07FE: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0804: push ebp
        __asm _emit 0x55
        // 0x588F0805: push esi
        __asm _emit 0x56
        // 0x588F0806: push eax
        __asm _emit 0x50
        // 0x588F0807: call 0x58908110
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F080C: movzx ecx, word ptr [ebx + 0xa2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0813: push 0x7f
        __asm _emit 0x6A
        __asm _emit 0x7F
        // 0x588F0815: lea edx, [esp + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x41
        // 0x588F0819: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F081B: push edx
        __asm _emit 0x52
        // 0x588F081C: mov dword ptr [edi + esi*4 + 0x35c], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0823: mov byte ptr [esp + 0x48], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x00
        // 0x588F0828: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F082D: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0833: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F0835: mov dword ptr [esp + 0x29], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x29
        // 0x588F0839: mov dword ptr [esp + 0x2d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2D
        // 0x588F083D: mov dword ptr [esp + 0x31], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x31
        // 0x588F0841: mov dword ptr [esp + 0x35], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x35
        // 0x588F0845: mov dword ptr [esp + 0x39], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x39
        // 0x588F0849: mov dword ptr [esp + 0x3d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3D
        // 0x588F084D: mov dword ptr [esp + 0x41], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x41
        // 0x588F0851: mov word ptr [esp + 0x45], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x45
        // 0x588F0856: mov byte ptr [esp + 0x47], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x47
        // 0x588F085A: lea eax, [ebx + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x78
        // 0x588F085D: push eax
        __asm _emit 0x50
        // 0x588F085E: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F0862: push ecx
        __asm _emit 0x51
        // 0x588F0863: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x588F0868: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588F086A: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588F086D: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F0871: push edx
        __asm _emit 0x52
        // 0x588F0872: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0878: cmp eax, 0x1c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1C
        // 0x588F087B: jle 0x588f0893
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588F087D: push 0x5898d0d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0882: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x588F0884: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F0888: push eax
        __asm _emit 0x50
        // 0x588F0889: mov byte ptr [esp + 0x44], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        // 0x588F088E: call 0x58731bd0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x13
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F0893: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F0897: push ecx
        __asm _emit 0x51
        // 0x588F0898: lea edx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588F089C: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F08A1: push edx
        __asm _emit 0x52
        // 0x588F08A2: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588F08A4: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F08AA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F08AD: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F08B2: push esi
        __asm _emit 0x56
        // 0x588F08B3: lea eax, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588F08B7: push eax
        __asm _emit 0x50
        // 0x588F08B8: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F08BD: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F08C3: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588F08C8: mul dword ptr [ebx + 0x24]
        __asm _emit 0xF7
        __asm _emit 0x63
        __asm _emit 0x24
        // 0x588F08CB: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F08D1: movzx ebx, word ptr [ebx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5B
        __asm _emit 0x1E
        // 0x588F08D5: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x588F08D7: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F08DD: movzx edx, word ptr [edx + esi*2 + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x72
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F08E5: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x588F08E7: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F08E9: shr ebp, 6
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x06
        // 0x588F08EC: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F08F0: cmp dword ptr [eax + esi*8 + 0xbc0], ebx
        __asm _emit 0x39
        __asm _emit 0x9C
        __asm _emit 0xF0
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F08F7: je 0x588f094d
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x588F08F9: mov ebx, dword ptr [eax + esi*8 + 0xbc0]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0xF0
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0900: movzx ecx, word ptr [ebx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0907: movzx edx, word ptr [ebx + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F090E: movzx eax, word ptr [eax + esi*4 + 0xac0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0916: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F091C: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x588F091F: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0924: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588F0927: movzx ebx, word ptr [ebx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5B
        __asm _emit 0x1E
        // 0x588F092B: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F092F: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588F0934: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F0936: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F093C: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588F093F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F0941: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F0944: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F0946: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x588F0948: imul ebx, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F094D: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0953: cmp dword ptr [edx + esi*8 + 0xbc4], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xF2
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F095B: je 0x588f09b7
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x588F095D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F095F: mov edx, dword ptr [eax + esi*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xF0
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0966: movzx ecx, word ptr [edx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8A
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F096D: movzx eax, word ptr [eax + esi*4 + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0975: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F0979: movzx edx, word ptr [edx + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0980: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0986: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x588F0989: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F098E: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588F0991: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F0995: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588F099A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F099C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F09A0: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588F09A3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F09A5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F09A8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F09AA: movzx edx, word ptr [ecx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x1E
        // 0x588F09AE: imul edx, dword ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F09B3: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x588F09B5: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x588F09B7: push ebp
        __asm _emit 0x55
        // 0x588F09B8: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F09BE: lea eax, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588F09C2: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F09C7: push eax
        __asm _emit 0x50
        // 0x588F09C8: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588F09CA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F09CD: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F09D2: push esi
        __asm _emit 0x56
        // 0x588F09D3: lea ecx, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588F09D7: push ecx
        __asm _emit 0x51
        // 0x588F09D8: mov ecx, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F09DE: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F09E3: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588F09E8: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x588F09EA: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588F09ED: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F09EF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F09F2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F09F4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F09F6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F09FA: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588F09FC: push eax
        __asm _emit 0x50
        // 0x588F09FD: lea edx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588F0A01: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0A06: push edx
        __asm _emit 0x52
        // 0x588F0A07: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588F0A09: mov ecx, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A0F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F0A12: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588F0A17: push esi
        __asm _emit 0x56
        // 0x588F0A18: lea eax, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588F0A1C: push eax
        __asm _emit 0x50
        // 0x588F0A1D: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0A22: push esi
        __asm _emit 0x56
        // 0x588F0A23: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F0A25: call 0x588efdb0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F0A2A: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A30: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0A35: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588F0A37: pop ebp
        __asm _emit 0x5D
        // 0x588F0A38: jl 0x588f0b8a
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A3E: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A44: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0A49: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588F0A4C: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588F0A4E: jge 0x588f0b8a
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A54: mov eax, dword ptr [edi + esi*4 + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A5B: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A60: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F0A64: mov eax, dword ptr [edi + esi*4 + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A6B: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F0A6F: mov esi, dword ptr [edi + esi*4 + 0x234]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xB7
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A76: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A7B: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588F0A7F: jmp 0x588f0b8a
        __asm _emit 0xE9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A84: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0A89: lea edx, [esp + 0x3d]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3D
        // 0x588F0A8D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F0A8F: push edx
        __asm _emit 0x52
        // 0x588F0A90: mov byte ptr [esp + 0x44], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        // 0x588F0A95: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xC1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F0A9A: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0AA0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F0AA3: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F0AA8: push esi
        __asm _emit 0x56
        // 0x588F0AA9: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0AAE: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0AB3: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0AB9: push esi
        __asm _emit 0x56
        // 0x588F0ABA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F0ABC: call 0x58908110
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0AC1: mov ecx, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0AC7: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F0ACC: push esi
        __asm _emit 0x56
        // 0x588F0ACD: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0AD2: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0AD7: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0ADC: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0AE2: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0AE8: movzx eax, word ptr [edx + esi*2 + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0AF0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F0AF3: je 0x588f0b0e
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588F0AF5: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588F0AF8: push eax
        __asm _emit 0x50
        // 0x588F0AF9: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F0AFD: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0B02: push ecx
        __asm _emit 0x51
        // 0x588F0B03: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0B09: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F0B0C: jmp 0x588f0b13
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588F0B0E: mov byte ptr [esp + 0x38], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588F0B13: mov ecx, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0B19: push 0x808080
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        // 0x588F0B1E: push esi
        __asm _emit 0x56
        // 0x588F0B1F: lea edx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588F0B23: push edx
        __asm _emit 0x52
        // 0x588F0B24: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0B29: mov ecx, dword ptr [edi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0B2F: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F0B34: push esi
        __asm _emit 0x56
        // 0x588F0B35: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0B3A: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0B3F: mov ecx, dword ptr [edi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0B45: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F0B4A: push esi
        __asm _emit 0x56
        // 0x588F0B4B: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0B50: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0B55: mov eax, dword ptr [edi + esi*4 + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0B5C: mov dword ptr [edi + esi*4 + 0x35c], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0B67: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0B6C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F0B70: mov eax, dword ptr [edi + esi*4 + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0B77: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588F0B79: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F0B7D: mov esi, dword ptr [edi + esi*4 + 0x234]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xB7
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0B84: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F0B86: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588F0B8A: mov ecx, dword ptr [esp + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0B91: pop edi
        __asm _emit 0x5F
        // 0x588F0B92: pop esi
        __asm _emit 0x5E
        // 0x588F0B93: pop ebx
        __asm _emit 0x5B
        // 0x588F0B94: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F0B96: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F0B9B: add esp, 0x130
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0BA1: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
