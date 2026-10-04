// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588B1FE0 .. +0x5FD bytes.
// Source symbol alias: FUN_588b1fe0.
extern "C" __declspec(naked) void FUN_588b1fe0() {
    __asm {
        // 0x588B1FE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588B1FE2: push 0x589880fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B1FE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1FED: push eax
        __asm _emit 0x50
        // 0x588B1FEE: push ecx
        __asm _emit 0x51
        // 0x588B1FEF: push ebx
        __asm _emit 0x53
        // 0x588B1FF0: push ebp
        __asm _emit 0x55
        // 0x588B1FF1: push esi
        __asm _emit 0x56
        // 0x588B1FF2: push edi
        __asm _emit 0x57
        // 0x588B1FF3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588B1FF8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588B1FFA: push eax
        __asm _emit 0x50
        // 0x588B1FFB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B1FFF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2005: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B2007: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B200B: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B200F: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B2013: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B2017: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B2019: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B201B: push ebx
        __asm _emit 0x53
        // 0x588B201C: push ebx
        __asm _emit 0x53
        // 0x588B201D: push edi
        __asm _emit 0x57
        // 0x588B201E: push ebp
        __asm _emit 0x55
        // 0x588B201F: push eax
        __asm _emit 0x50
        // 0x588B2020: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x11
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B2025: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B202B: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B2030: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588B2033: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588B2036: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B203D: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588B2040: mov dword ptr [esi], 0x589a08a0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA0
        __asm _emit 0x08
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B2046: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B204B: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B204F: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2054: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588B2058: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B205A: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B205E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xAB
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2063: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2066: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B206A: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588B206F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B2071: je 0x588b20b9
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x588B2073: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2079: cmp dword ptr [ecx + 0x164], 0x96
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2083: jle 0x588b20a8
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588B2085: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B208B: je 0x588b20a8
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588B208D: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2093: mov ecx, dword ptr [ecx + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2099: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B209B: push edi
        __asm _emit 0x57
        // 0x588B209C: push ebp
        __asm _emit 0x55
        // 0x588B209D: push ecx
        __asm _emit 0x51
        // 0x588B209E: push esi
        __asm _emit 0x56
        // 0x588B209F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B20A1: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B20A6: jmp 0x588b20bb
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588B20A8: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B20AA: push edi
        __asm _emit 0x57
        // 0x588B20AB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B20AD: push ebp
        __asm _emit 0x55
        // 0x588B20AE: push ecx
        __asm _emit 0x51
        // 0x588B20AF: push esi
        __asm _emit 0x56
        // 0x588B20B0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B20B2: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xFB
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B20B7: jmp 0x588b20bb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B20B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B20BB: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B20C0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B20C2: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B20C6: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588B20C9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B20CE: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B20D0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xAB
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B20D5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B20D8: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B20DC: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588B20E1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B20E3: je 0x588b212b
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x588B20E5: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B20EB: cmp dword ptr [ecx + 0x164], 0x92
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B20F5: jle 0x588b211a
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588B20F7: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B20FD: je 0x588b211a
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588B20FF: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2105: mov ecx, dword ptr [edx + 0x248]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B210B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B210D: push edi
        __asm _emit 0x57
        // 0x588B210E: push ebp
        __asm _emit 0x55
        // 0x588B210F: push ecx
        __asm _emit 0x51
        // 0x588B2110: push esi
        __asm _emit 0x56
        // 0x588B2111: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2113: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xFB
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B2118: jmp 0x588b212d
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588B211A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B211C: push edi
        __asm _emit 0x57
        // 0x588B211D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B211F: push ebp
        __asm _emit 0x55
        // 0x588B2120: push ecx
        __asm _emit 0x51
        // 0x588B2121: push esi
        __asm _emit 0x56
        // 0x588B2122: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2124: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xFB
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B2129: jmp 0x588b212d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B212B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B212D: push 0xe6
        __asm _emit 0x68
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2132: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2134: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B2138: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588B213B: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x0B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B2140: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B2142: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xAB
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2147: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B214A: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B214E: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588B2153: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B2155: je 0x588b219d
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x588B2157: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B215D: cmp dword ptr [ecx + 0x164], 0x92
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2167: jle 0x588b218c
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588B2169: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B216F: je 0x588b218c
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588B2171: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2177: mov ecx, dword ptr [ecx + 0x248]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B217D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B217F: push edi
        __asm _emit 0x57
        // 0x588B2180: push ebp
        __asm _emit 0x55
        // 0x588B2181: push ecx
        __asm _emit 0x51
        // 0x588B2182: push esi
        __asm _emit 0x56
        // 0x588B2183: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2185: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xFA
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B218A: jmp 0x588b219f
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588B218C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B218E: push edi
        __asm _emit 0x57
        // 0x588B218F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B2191: push ebp
        __asm _emit 0x55
        // 0x588B2192: push ecx
        __asm _emit 0x51
        // 0x588B2193: push esi
        __asm _emit 0x56
        // 0x588B2194: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2196: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xFA
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B219B: jmp 0x588b219f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B219D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B219F: push 0xe6
        __asm _emit 0x68
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B21A4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B21A6: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B21AA: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588B21AD: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x0B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B21B2: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588B21B4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xAA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B21B9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B21BB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B21BE: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B21C2: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588B21C7: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B21C9: je 0x588b21f3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588B21CB: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B21CF: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B21D1: push ebx
        __asm _emit 0x53
        // 0x588B21D2: push ebx
        __asm _emit 0x53
        // 0x588B21D3: add edx, 0x37
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x37
        // 0x588B21D6: push edx
        __asm _emit 0x52
        // 0x588B21D7: lea eax, [ebp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x588B21DA: push eax
        __asm _emit 0x50
        // 0x588B21DB: push esi
        __asm _emit 0x56
        // 0x588B21DC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B21DE: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x0F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B21E3: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B21E9: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B21EC: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x588B21EF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B21F1: jmp 0x588b21f5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B21F3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B21F5: push 0xdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B21FA: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B21FE: mov dword ptr [esi + 0xc4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2204: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x0A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B2209: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B220B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xAA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2210: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2213: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B2217: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588B221C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B221E: je 0x588b225d
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588B2220: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2226: cmp dword ptr [ecx + 0x164], 0x91
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2230: jle 0x588b2248
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B2232: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2238: je 0x588b2248
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B223A: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2240: mov ecx, dword ptr [ecx + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2246: jmp 0x588b224a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2248: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B224A: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B224E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B2250: push edi
        __asm _emit 0x57
        // 0x588B2251: push ebp
        __asm _emit 0x55
        // 0x588B2252: push ecx
        __asm _emit 0x51
        // 0x588B2253: push esi
        __asm _emit 0x56
        // 0x588B2254: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2256: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xFA
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B225B: jmp 0x588b2263
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588B225D: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B2261: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2263: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2268: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B226A: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B226E: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588B2271: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x0A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B2276: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B2278: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xA9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B227D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2280: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B2284: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588B2289: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B228B: je 0x588b22d3
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x588B228D: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2293: cmp dword ptr [ecx + 0x164], 0x95
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B229D: jle 0x588b22c2
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588B229F: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B22A5: je 0x588b22c2
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588B22A7: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B22AD: mov ecx, dword ptr [edx + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B22B3: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B22B5: push edi
        __asm _emit 0x57
        // 0x588B22B6: push ebp
        __asm _emit 0x55
        // 0x588B22B7: push ecx
        __asm _emit 0x51
        // 0x588B22B8: push esi
        __asm _emit 0x56
        // 0x588B22B9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B22BB: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xF9
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B22C0: jmp 0x588b22d5
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588B22C2: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B22C4: push edi
        __asm _emit 0x57
        // 0x588B22C5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B22C7: push ebp
        __asm _emit 0x55
        // 0x588B22C8: push ecx
        __asm _emit 0x51
        // 0x588B22C9: push esi
        __asm _emit 0x56
        // 0x588B22CA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B22CC: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xF9
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B22D1: jmp 0x588b22d5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B22D3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B22D5: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B22DA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B22DC: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B22E0: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588B22E3: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x0A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B22E8: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B22ED: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xA9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B22F2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B22F5: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B22F9: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588B22FE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B2300: je 0x588b2341
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x588B2302: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2308: cmp dword ptr [ecx + 0x160], 0x26
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        // 0x588B230F: jle 0x588b2327
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B2311: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2317: je 0x588b2327
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B2319: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B231F: add ecx, 0x980
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2325: jmp 0x588b2329
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2327: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B2329: lea edx, [edi + 0xb]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x0B
        // 0x588B232C: push edx
        __asm _emit 0x52
        // 0x588B232D: lea edx, [ebp + 0x102]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2333: push edx
        __asm _emit 0x52
        // 0x588B2334: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588B2336: push ecx
        __asm _emit 0x51
        // 0x588B2337: push esi
        __asm _emit 0x56
        // 0x588B2338: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B233A: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x4D
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B233F: jmp 0x588b2343
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2341: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2343: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2348: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B234A: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B234E: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588B2351: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B2356: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B235B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xA8
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2360: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2363: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B2367: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588B236C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B236E: je 0x588b23af
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x588B2370: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2376: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2380: jle 0x588b2398
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B2382: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2388: je 0x588b2398
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B238A: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2390: add ecx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2396: jmp 0x588b239a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2398: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B239A: lea edx, [edi + 0x26]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588B239D: push edx
        __asm _emit 0x52
        // 0x588B239E: lea edx, [ebp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x3C
        // 0x588B23A1: push edx
        __asm _emit 0x52
        // 0x588B23A2: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588B23A4: push ecx
        __asm _emit 0x51
        // 0x588B23A5: push esi
        __asm _emit 0x56
        // 0x588B23A6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B23A8: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x4D
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B23AD: jmp 0x588b23b1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B23AF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B23B1: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B23B6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B23B8: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B23BC: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588B23BF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B23C4: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B23C9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xA8
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B23CE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B23D1: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B23D5: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588B23DA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B23DC: je 0x588b2420
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588B23DE: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B23E4: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B23EE: jle 0x588b2406
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B23F0: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B23F6: je 0x588b2406
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B23F8: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B23FE: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2404: jmp 0x588b2408
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2406: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B2408: lea ecx, [edi + 0x71]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x71
        // 0x588B240B: push ecx
        __asm _emit 0x51
        // 0x588B240C: lea ecx, [ebp + 0x96]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2412: push ecx
        __asm _emit 0x51
        // 0x588B2413: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588B2415: push edx
        __asm _emit 0x52
        // 0x588B2416: push esi
        __asm _emit 0x56
        // 0x588B2417: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2419: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B241E: jmp 0x588b2422
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2420: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2422: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2427: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2429: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B242D: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588B2430: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B2435: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B243A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xA8
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B243F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2442: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B2446: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588B244B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B244D: je 0x588b2491
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588B244F: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2455: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B245F: jle 0x588b2477
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B2461: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2467: je 0x588b2477
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B2469: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B246F: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2475: jmp 0x588b2479
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2477: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B2479: add edi, 0x71
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x71
        // 0x588B247C: push edi
        __asm _emit 0x57
        // 0x588B247D: lea ecx, [ebp + 0xe6]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2483: push ecx
        __asm _emit 0x51
        // 0x588B2484: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588B2486: push edx
        __asm _emit 0x52
        // 0x588B2487: push esi
        __asm _emit 0x56
        // 0x588B2488: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B248A: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B248F: jmp 0x588b2493
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2491: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2493: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2498: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B249A: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B249E: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B24A4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B24A9: lea edi, [esi + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B24AF: add ebp, 0x42
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x42
        // 0x588B24B2: mov dword ptr [esp + 0x2c], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B24BA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B24C0: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B24C5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xA7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B24CA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B24CD: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B24D1: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x588B24D6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B24D8: je 0x588b251a
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588B24DA: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B24E0: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x588B24E7: jle 0x588b24ff
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B24E9: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B24EF: je 0x588b24ff
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B24F1: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B24F7: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B24FD: jmp 0x588b2501
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B24FF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B2501: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B2505: add ecx, 0x8e
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B250B: push ecx
        __asm _emit 0x51
        // 0x588B250C: push ebp
        __asm _emit 0x55
        // 0x588B250D: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588B250F: push edx
        __asm _emit 0x52
        // 0x588B2510: push esi
        __asm _emit 0x56
        // 0x588B2511: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2513: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B2518: jmp 0x588b251c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B251A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B251C: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2521: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2523: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B2527: mov dword ptr [edi - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xE0
        // 0x588B252A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B252F: mov eax, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xE0
        // 0x588B2532: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2537: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B253B: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2540: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xA7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2545: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2548: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B254C: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x588B2551: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B2553: je 0x588b2595
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588B2555: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B255B: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x588B2562: jle 0x588b257a
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B2564: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B256A: je 0x588b257a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B256C: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2572: add ecx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2578: jmp 0x588b257c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B257A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B257C: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B2580: add edx, 0x9e
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2586: push edx
        __asm _emit 0x52
        // 0x588B2587: push ebp
        __asm _emit 0x55
        // 0x588B2588: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588B258A: push ecx
        __asm _emit 0x51
        // 0x588B258B: push esi
        __asm _emit 0x56
        // 0x588B258C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B258E: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x4B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B2593: jmp 0x588b2597
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2595: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2597: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B259C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B259E: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B25A2: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x588B25A4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B25A9: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588B25AB: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B25B0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B25B4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B25B7: add ebp, 0x1b
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x1B
        // 0x588B25BA: sub dword ptr [esp + 0x2c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x588B25BF: jne 0x588b24c0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B25C5: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588B25C7: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B25CB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B25D2: pop ecx
        __asm _emit 0x59
        // 0x588B25D3: pop edi
        __asm _emit 0x5F
        // 0x588B25D4: pop esi
        __asm _emit 0x5E
        // 0x588B25D5: pop ebp
        __asm _emit 0x5D
        // 0x588B25D6: pop ebx
        __asm _emit 0x5B
        // 0x588B25D7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588B25DA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
