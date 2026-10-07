// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 656 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cd230.

// Ghidra body range 0x587CD230..0x587CD4C0; 656 mapped bytes.
extern "C" __declspec(naked) void FUN_587cd230_segment_00() {
    __asm {
        // 0x587CD230: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CD232: push 0x589819b6
        __asm _emit 0x68
        __asm _emit 0xB6
        __asm _emit 0x19
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CD237: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD23D: push eax
        __asm _emit 0x50
        // 0x587CD23E: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x587CD241: push ebx
        __asm _emit 0x53
        // 0x587CD242: push ebp
        __asm _emit 0x55
        // 0x587CD243: push esi
        __asm _emit 0x56
        // 0x587CD244: push edi
        __asm _emit 0x57
        // 0x587CD245: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CD24A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CD24C: push eax
        __asm _emit 0x50
        // 0x587CD24D: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CD251: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD257: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CD25B: mov al, byte ptr [esp + 0x40]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587CD25F: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587CD261: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x587CD265: mov eax, 0x68
        __asm _emit 0xB8
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD26A: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD26F: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587CD271: mov word ptr [esp + 0x16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587CD276: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CD27A: mov dword ptr [esp + 0x1c], 0x140
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD282: lea ebp, [ecx + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x69
        __asm _emit 0x38
        // 0x587CD285: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CD289: cmp dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x587CD28D: jne 0x587cd35d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD293: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587CD295: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xF9
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CD29A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587CD29C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CD29F: mov dword ptr [esp + 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CD2A3: mov dword ptr [esp + 0x38], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD2AB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587CD2AD: je 0x587cd34c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD2B3: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD2B8: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587CD2BB: mov edx, dword ptr [0x58a24638]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD2C1: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x587CD2C4: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CD2C8: lea ecx, [edi + 0x23]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x23
        // 0x587CD2CB: cmp dword ptr [edx + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x8A
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD2D1: jle 0x587cd2f1
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x587CD2D3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CD2D5: jl 0x587cd2f1
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x587CD2D7: cmp dword ptr [edx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD2DE: je 0x587cd2f1
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CD2E0: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CD2E4: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD2EA: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587CD2EC: mov edi, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x11
        // 0x587CD2EF: jmp 0x587cd2f3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD2F1: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CD2F3: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CD2F7: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD2FC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CD2FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CD300: add ebx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD306: push ebx
        __asm _emit 0x53
        // 0x587CD307: add ecx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD30D: push ecx
        __asm _emit 0x51
        // 0x587CD30E: push eax
        __asm _emit 0x50
        // 0x587CD30F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CD311: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x5E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD316: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CD31C: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x587CD31F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CD321: je 0x587cd34e
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x587CD323: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x587CD326: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587CD329: mov eax, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x587CD32C: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587CD32F: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x587CD332: lea eax, [edi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587CD335: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587CD338: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CD33B: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587CD33E: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587CD341: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x587CD344: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587CD347: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x587CD34A: jmp 0x587cd34e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD34C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587CD34E: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CD352: mov dword ptr [esp + 0x38], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD35A: mov dword ptr [ebp - 8], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x587CD35D: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x587CD360: lea esi, [edi - 5]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0xFB
        // 0x587CD363: neg esi
        __asm _emit 0xF7
        __asm _emit 0xDE
        // 0x587CD365: sbb esi, esi
        __asm _emit 0x1B
        __asm _emit 0xF6
        // 0x587CD367: and esi, 0x202
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD36D: add esi, 0xfffffeff
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD373: push esi
        __asm _emit 0x56
        // 0x587CD374: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x59
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD379: cmp dword ptr [ebp], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD37D: jne 0x587cd42e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD383: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD388: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CD38D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CD390: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CD394: mov dword ptr [esp + 0x38], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD39C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CD39E: je 0x587cd3fe
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x587CD3A0: mov edi, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD3A6: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587CD3A9: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CD3AD: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x587CD3B0: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CD3B4: mov edx, dword ptr [0x58a24638]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD3BA: cmp dword ptr [edx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD3C0: jle 0x587cd3db
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x587CD3C2: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587CD3C4: jl 0x587cd3db
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x587CD3C6: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD3CD: je 0x587cd3db
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587CD3CF: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD3D5: add edx, dword ptr [esp + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CD3D9: jmp 0x587cd3dd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD3DB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CD3DD: add ecx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD3E3: push ecx
        __asm _emit 0x51
        // 0x587CD3E4: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CD3E8: add ecx, 0x276
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD3EE: push ecx
        __asm _emit 0x51
        // 0x587CD3EF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CD3F1: push edx
        __asm _emit 0x52
        // 0x587CD3F2: push edi
        __asm _emit 0x57
        // 0x587CD3F3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CD3F5: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x9D
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD3FA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587CD3FC: jmp 0x587cd400
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD3FE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CD400: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x587CD403: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587CD406: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD40B: mov dword ptr [esp + 0x38], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD413: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x587CD417: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CD419: je 0x587cd421
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CD41B: push edi
        __asm _emit 0x57
        // 0x587CD41C: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x5B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD421: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587CD424: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CD426: je 0x587cd42e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CD428: push edi
        __asm _emit 0x57
        // 0x587CD429: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x5A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD42E: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587CD431: push esi
        __asm _emit 0x56
        // 0x587CD432: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD437: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x587CD43A: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CD43E: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD443: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x587CD446: mov cx, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587CD44B: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x587CD44E: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CD452: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587CD455: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CD459: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD45E: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD6
        // 0x587CD461: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x587CD464: cmp dword ptr [esp + 0x40], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x00
        // 0x587CD469: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CD46D: je 0x587cd48d
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587CD46F: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CD473: mov al, byte ptr [eax + 0xd]
        __asm _emit 0x8A
        __asm _emit 0x40
        __asm _emit 0x0D
        // 0x587CD476: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587CD478: jne 0x587cd481
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587CD47A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD47F: jmp 0x587cd484
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587CD481: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587CD484: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587CD487: push eax
        __asm _emit 0x50
        // 0x587CD488: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x9E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD48D: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CD491: add dword ptr [esp + 0x1c], 0x40
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x40
        // 0x587CD496: inc edi
        __asm _emit 0x47
        // 0x587CD497: lea ecx, [edi - 5]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0xFB
        // 0x587CD49A: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587CD49D: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CD4A1: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587CD4A4: jne 0x587cd289
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD4AA: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CD4AE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD4B5: pop ecx
        __asm _emit 0x59
        // 0x587CD4B6: pop edi
        __asm _emit 0x5F
        // 0x587CD4B7: pop esi
        __asm _emit 0x5E
        // 0x587CD4B8: pop ebp
        __asm _emit 0x5D
        // 0x587CD4B9: pop ebx
        __asm _emit 0x5B
        // 0x587CD4BA: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x587CD4BD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
