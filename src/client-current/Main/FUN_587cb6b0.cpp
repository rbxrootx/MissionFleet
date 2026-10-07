// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 768 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cb6b0.

// Ghidra body range 0x587CB6B0..0x587CB9B0; 768 mapped bytes.
extern "C" __declspec(naked) void FUN_587cb6b0_segment_00() {
    __asm {
        // 0x587CB6B0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CB6B2: push 0x58981899
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x18
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CB6B7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB6BD: push eax
        __asm _emit 0x50
        // 0x587CB6BE: push ecx
        __asm _emit 0x51
        // 0x587CB6BF: push ebx
        __asm _emit 0x53
        // 0x587CB6C0: push ebp
        __asm _emit 0x55
        // 0x587CB6C1: push esi
        __asm _emit 0x56
        // 0x587CB6C2: push edi
        __asm _emit 0x57
        // 0x587CB6C3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CB6C8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CB6CA: push eax
        __asm _emit 0x50
        // 0x587CB6CB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CB6CF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB6D5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CB6D7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CB6DB: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587CB6DF: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CB6E3: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CB6E7: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CB6EB: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CB6EF: push eax
        __asm _emit 0x50
        // 0x587CB6F0: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CB6F4: push ecx
        __asm _emit 0x51
        // 0x587CB6F5: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CB6F9: push edx
        __asm _emit 0x52
        // 0x587CB6FA: push eax
        __asm _emit 0x50
        // 0x587CB6FB: push ebp
        __asm _emit 0x55
        // 0x587CB6FC: push edi
        __asm _emit 0x57
        // 0x587CB6FD: push ecx
        __asm _emit 0x51
        // 0x587CB6FE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CB700: call 0x587c3c60
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CB705: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587CB707: imul edx, edx, 0x5dc
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB70D: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587CB70F: imul eax, eax, 0xbb8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB715: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587CB717: mov dword ptr [esi + 0x1e4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB71D: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587CB71F: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CB721: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587CB723: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CB727: mov dword ptr [esi], 0x5899b258
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x58
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CB72D: mov dword ptr [esi + 0x1e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB733: mov dword ptr [esi + 0x1dc], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB739: mov dword ptr [esi + 0x1e0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB73F: mov dword ptr [esi + 0x74], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB746: mov dword ptr [esi + 0x78], 5
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB74D: mov dword ptr [esi + 0x1d4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB753: mov dword ptr [esi + 0x1d8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB759: mov dword ptr [esi + 0xc4], 0x55730
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587CB763: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x14
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CB768: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587CB76A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CB76D: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587CB771: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587CB776: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CB778: je 0x587cb79a
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587CB77A: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CB77E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587CB780: push ebx
        __asm _emit 0x53
        // 0x587CB781: push ebx
        __asm _emit 0x53
        // 0x587CB782: push ebp
        __asm _emit 0x55
        // 0x587CB783: push eax
        __asm _emit 0x50
        // 0x587CB784: push esi
        __asm _emit 0x56
        // 0x587CB785: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CB787: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x7A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CB78C: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CB792: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x587CB795: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x587CB798: jmp 0x587cb79c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CB79A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CB79C: mov dword ptr [esi + 0x20c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB7A2: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CB7A8: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CB7AE: push edi
        __asm _emit 0x57
        // 0x587CB7AF: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CB7B3: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x77
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CB7B8: mov edi, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB7BE: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587CB7C1: mov edx, 0x2706
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB7C6: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x587CB7CA: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CB7CC: je 0x587cb7d4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CB7CE: push edi
        __asm _emit 0x57
        // 0x587CB7CF: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x77
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CB7D4: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587CB7D7: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CB7D9: je 0x587cb7e1
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CB7DB: push edi
        __asm _emit 0x57
        // 0x587CB7DC: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CB7E1: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB7E7: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CB7EC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x75
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CB7F1: mov eax, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB7F7: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB7FC: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CB800: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587CB802: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x14
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CB807: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587CB809: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CB80C: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587CB810: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587CB815: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CB817: je 0x587cb839
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587CB819: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CB81D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587CB81F: push ebx
        __asm _emit 0x53
        // 0x587CB820: push ebx
        __asm _emit 0x53
        // 0x587CB821: push ebp
        __asm _emit 0x55
        // 0x587CB822: push edx
        __asm _emit 0x52
        // 0x587CB823: push esi
        __asm _emit 0x56
        // 0x587CB824: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CB826: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x79
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CB82B: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CB831: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x587CB834: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x587CB837: jmp 0x587cb83b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CB839: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CB83B: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB840: lea ecx, [esi + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB846: mov eax, 0xfffb
        __asm _emit 0xB8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB84B: push ebx
        __asm _emit 0x53
        // 0x587CB84C: mov dword ptr [esi + 0x208], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB852: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x587CB856: push ecx
        __asm _emit 0x51
        // 0x587CB857: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CB85B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CB860: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB865: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587CB867: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB86D: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB873: mov dword ptr [esi + 0x1ec], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB879: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x13
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CB87E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CB881: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587CB885: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x587CB88A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587CB88C: je 0x587cb8c2
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x587CB88E: mov ecx, dword ptr [0x58a246e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CB894: cmp dword ptr [ecx + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB89A: jle 0x587cb8b6
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x587CB89C: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB8A2: je 0x587cb8b6
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587CB8A4: mov edx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB8AA: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x587CB8AC: push ecx
        __asm _emit 0x51
        // 0x587CB8AD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CB8AF: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587CB8B4: jmp 0x587cb8c4
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587CB8B6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CB8B8: push ecx
        __asm _emit 0x51
        // 0x587CB8B9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CB8BB: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587CB8C0: jmp 0x587cb8c4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CB8C2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CB8C4: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587CB8C7: mov dword ptr [esi + 0x210], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB8CD: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CB8D3: push ecx
        __asm _emit 0x51
        // 0x587CB8D4: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CB8D7: push edx
        __asm _emit 0x52
        // 0x587CB8D8: push ecx
        __asm _emit 0x51
        // 0x587CB8D9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CB8DB: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CB8DF: call 0x587b7500
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xBC
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587CB8E4: mov eax, 0x32
        __asm _emit 0xB8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB8E9: mov dword ptr [esi + 0x1f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB8EF: mov dword ptr [esi + 0x1f0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB8F5: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CB8F9: push 0xa0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB8FE: mov edx, 0x1860
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB903: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587CB906: mov eax, 0x186a0
        __asm _emit 0xB8
        __asm _emit 0xA0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CB90B: lea ecx, [esi + 0x218]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB911: push ebx
        __asm _emit 0x53
        // 0x587CB912: push ecx
        __asm _emit 0x51
        // 0x587CB913: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB919: mov dword ptr [esi + 0xc0], 0xa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB923: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB929: mov dword ptr [esi + 0x7c], 0x64
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x7C
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB930: mov dword ptr [esi + 0x80], 0xc8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB93A: mov dword ptr [esi + 0x214], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB940: mov dword ptr [esi + 0xcc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB946: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB94C: mov word ptr [esi + 0x9c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB953: mov dword ptr [esi + 0x98], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB959: mov dword ptr [esi + 0xd0], 0x384
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB963: mov dword ptr [esi + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x587CB966: mov dword ptr [esi + 0x204], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB96C: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB972: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB978: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB97E: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB984: mov dword ptr [esi + 0x1f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB98A: mov dword ptr [esi + 0x1fc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB990: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x12
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CB995: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587CB998: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587CB99A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CB99E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB9A5: pop ecx
        __asm _emit 0x59
        // 0x587CB9A6: pop edi
        __asm _emit 0x5F
        // 0x587CB9A7: pop esi
        __asm _emit 0x5E
        // 0x587CB9A8: pop ebp
        __asm _emit 0x5D
        // 0x587CB9A9: pop ebx
        __asm _emit 0x5B
        // 0x587CB9AA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CB9AD: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
