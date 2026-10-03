// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588752D0 .. +0x2B7 bytes.
extern "C" __declspec(naked) void FUN_588752d0() {
    __asm {
        // 0x588752D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588752D2: push 0x5898646f
        __asm _emit 0x68
        __asm _emit 0x6F
        __asm _emit 0x64
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588752D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588752DD: push eax
        __asm _emit 0x50
        // 0x588752DE: push ecx
        __asm _emit 0x51
        // 0x588752DF: push ebx
        __asm _emit 0x53
        // 0x588752E0: push ebp
        __asm _emit 0x55
        // 0x588752E1: push esi
        __asm _emit 0x56
        // 0x588752E2: push edi
        __asm _emit 0x57
        // 0x588752E3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588752E8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588752EA: push eax
        __asm _emit 0x50
        // 0x588752EB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588752EF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588752F5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588752F7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588752FB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588752FF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58875303: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58875307: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5887530B: push eax
        __asm _emit 0x50
        // 0x5887530C: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58875310: push ecx
        __asm _emit 0x51
        // 0x58875311: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58875315: push edx
        __asm _emit 0x52
        // 0x58875316: push ebp
        __asm _emit 0x55
        // 0x58875317: push eax
        __asm _emit 0x50
        // 0x58875318: push ecx
        __asm _emit 0x51
        // 0x58875319: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887531B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xDE
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875320: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58875326: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5887532B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5887532D: lea eax, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58875330: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58875334: mov dword ptr [esi], 0x5899ef40
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x40
        __asm _emit 0xEF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5887533A: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5887533E: mov dword ptr [esp + 0x38], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875346: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58875348: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x79
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887534D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887534F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58875352: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58875356: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5887535B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5887535D: je 0x5887537c
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5887535F: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58875363: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58875365: push ebx
        __asm _emit 0x53
        // 0x58875366: push ebx
        __asm _emit 0x53
        // 0x58875367: push ebp
        __asm _emit 0x55
        // 0x58875368: push edx
        __asm _emit 0x52
        // 0x58875369: push esi
        __asm _emit 0x56
        // 0x5887536A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5887536C: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xDE
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875371: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58875377: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5887537A: jmp 0x5887537e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887537C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5887537E: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58875382: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58875384: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58875388: mov dword ptr [eax - 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0xF8
        // 0x5887538B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58875390: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58875392: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58875395: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58875399: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5887539E: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588753A0: je 0x588753bf
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588753A2: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588753A6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588753A8: push ebx
        __asm _emit 0x53
        // 0x588753A9: push ebx
        __asm _emit 0x53
        // 0x588753AA: push ebp
        __asm _emit 0x55
        // 0x588753AB: push ecx
        __asm _emit 0x51
        // 0x588753AC: push esi
        __asm _emit 0x56
        // 0x588753AD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588753AF: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xDD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588753B4: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588753BA: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588753BD: jmp 0x588753c1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588753BF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588753C1: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588753C5: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588753CA: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588753CE: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x588753D0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588753D5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588753D8: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588753DC: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588753E1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588753E3: je 0x58875428
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x588753E5: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588753EB: cmp dword ptr [ecx + 0x160], 0x29
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x29
        // 0x588753F2: jle 0x5887540a
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588753F4: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588753FA: je 0x5887540a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588753FC: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875402: add edx, 0xa40
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875408: jmp 0x5887540c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887540A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5887540C: lea ecx, [ebp + 0x43]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x43
        // 0x5887540F: push ecx
        __asm _emit 0x51
        // 0x58875410: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58875414: add ecx, 0xcf
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887541A: push ecx
        __asm _emit 0x51
        // 0x5887541B: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5887541D: push edx
        __asm _emit 0x52
        // 0x5887541E: push esi
        __asm _emit 0x56
        // 0x5887541F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58875421: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58875426: jmp 0x5887542a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58875428: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887542A: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5887542F: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x58875434: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58875438: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5887543B: jne 0x58875346
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58875441: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x58875444: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58875449: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xD8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887544E: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x58875451: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58875456: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xD8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887545B: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5887545E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875463: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xD8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875468: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887546D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x77
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58875472: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58875475: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58875479: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5887547E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58875480: je 0x588754d6
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x58875482: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58875488: cmp dword ptr [ecx + 0x160], 9
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x5887548F: jle 0x588754a7
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58875491: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875497: je 0x588754a7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58875499: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887549F: add ecx, 0x240
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588754A5: jmp 0x588754a9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588754A7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588754A9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588754AB: lea edx, [ebp + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588754B1: push edx
        __asm _emit 0x52
        // 0x588754B2: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588754B6: add edx, 0xa0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588754BC: push edx
        __asm _emit 0x52
        // 0x588754BD: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588754C3: push ecx
        __asm _emit 0x51
        // 0x588754C4: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588754CA: push esi
        __asm _emit 0x56
        // 0x588754CB: push ecx
        __asm _emit 0x51
        // 0x588754CC: push edx
        __asm _emit 0x52
        // 0x588754CD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588754CF: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x88
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588754D4: jmp 0x588754d8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588754D6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588754D8: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588754DD: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588754E1: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588754E4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x77
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588754E9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588754EC: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588754F0: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588754F5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588754F7: je 0x58875549
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x588754F9: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588754FF: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x58875506: jle 0x5887551c
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58875508: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887550E: je 0x5887551c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58875510: mov ebx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875516: add ebx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887551C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58875520: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58875526: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58875528: add ebp, 0xdc
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887552E: push ebp
        __asm _emit 0x55
        // 0x5887552F: add ecx, 0xf4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875535: push ecx
        __asm _emit 0x51
        // 0x58875536: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887553C: push ebx
        __asm _emit 0x53
        // 0x5887553D: push esi
        __asm _emit 0x56
        // 0x5887553E: push edx
        __asm _emit 0x52
        // 0x5887553F: push ecx
        __asm _emit 0x51
        // 0x58875540: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58875542: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x88
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58875547: jmp 0x5887554b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58875549: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887554B: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5887554F: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58875552: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875557: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5887555A: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887555F: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x58875562: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58875566: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887556B: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5887556F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58875571: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58875575: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887557C: pop ecx
        __asm _emit 0x59
        // 0x5887557D: pop edi
        __asm _emit 0x5F
        // 0x5887557E: pop esi
        __asm _emit 0x5E
        // 0x5887557F: pop ebp
        __asm _emit 0x5D
        // 0x58875580: pop ebx
        __asm _emit 0x5B
        // 0x58875581: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58875584: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
