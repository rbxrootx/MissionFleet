// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 960 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d0710.

// Ghidra body range 0x588D0710..0x588D0AD0; 960 mapped bytes.
extern "C" __declspec(naked) void FUN_588d0710_segment_00() {
    __asm {
        // 0x588D0710: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D0712: push 0x58989184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D0717: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D071D: push eax
        __asm _emit 0x50
        // 0x588D071E: push ecx
        __asm _emit 0x51
        // 0x588D071F: push ebx
        __asm _emit 0x53
        // 0x588D0720: push ebp
        __asm _emit 0x55
        // 0x588D0721: push esi
        __asm _emit 0x56
        // 0x588D0722: push edi
        __asm _emit 0x57
        // 0x588D0723: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D0728: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D072A: push eax
        __asm _emit 0x50
        // 0x588D072B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D072F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0735: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588D0737: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D073B: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D073F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D0743: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D0747: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D074B: push eax
        __asm _emit 0x50
        // 0x588D074C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D0750: push ecx
        __asm _emit 0x51
        // 0x588D0751: push edx
        __asm _emit 0x52
        // 0x588D0752: push edi
        __asm _emit 0x57
        // 0x588D0753: push eax
        __asm _emit 0x50
        // 0x588D0754: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588D0756: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D075B: mov dword ptr [ebp], 0x589a0e70
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x70
        __asm _emit 0x0E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D0762: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D0767: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D076C: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0772: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D077A: jle 0x588d0790
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588D077C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0783: je 0x588d0790
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D0785: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D078B: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588D078E: jmp 0x588d0792
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D0790: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D0792: mov ecx, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x60
        // 0x588D0795: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588D0798: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D079A: je 0x588d07c4
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588D079C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588D079F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588D07A2: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588D07A5: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588D07A8: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588D07AB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D07AD: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588D07B0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588D07B2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D07B5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D07B8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D07BB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588D07BE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D07C1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588D07C4: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D07C9: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D07D0: jle 0x588d07e5
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588D07D2: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D07D9: je 0x588d07e5
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588D07DB: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D07E1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588D07E3: jmp 0x588d07e7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D07E5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D07E7: mov ecx, dword ptr [ebp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x64
        // 0x588D07EA: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588D07ED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D07EF: je 0x588d0819
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588D07F1: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588D07F4: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588D07F7: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588D07FA: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588D07FD: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588D0800: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D0802: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588D0805: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588D0807: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D080A: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D080D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D0810: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588D0813: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D0816: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588D0819: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D081E: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0824: jle 0x588d083a
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588D0826: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D082D: je 0x588d083a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D082F: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0835: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588D0838: jmp 0x588d083c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D083A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D083C: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588D083F: mov ecx, dword ptr [ebp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x5C
        // 0x588D0842: mov dword ptr [ecx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x588D0845: mov dword ptr [esp + 0x38], 0x40
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D084D: lea esi, [ebp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x7C
        // 0x588D0850: add edi, 0x204
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0856: mov dword ptr [esp + 0x34], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D085E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588D0860: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0865: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xC3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D086A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D086D: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D0871: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588D0876: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D0878: je 0x588d08d1
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x588D087A: mov edx, dword ptr [0x58a24640]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D0880: lea ecx, [ebx + 0xb]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x0B
        // 0x588D0883: cmp dword ptr [edx + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x8A
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0889: jle 0x588d08ab
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x588D088B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D088D: jl 0x588d08ab
        __asm _emit 0x7C
        __asm _emit 0x1C
        // 0x588D088F: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0896: je 0x588d08ab
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588D0898: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D089E: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D08A2: lea edx, [ecx + edx + 0x2c0]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D08A9: jmp 0x588d08ad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D08AB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D08AD: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D08B1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D08B3: add ecx, 0x49
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x49
        // 0x588D08B6: push ecx
        __asm _emit 0x51
        // 0x588D08B7: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D08BD: push edi
        __asm _emit 0x57
        // 0x588D08BE: push edx
        __asm _emit 0x52
        // 0x588D08BF: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D08C5: push ebp
        __asm _emit 0x55
        // 0x588D08C6: push edx
        __asm _emit 0x52
        // 0x588D08C7: push ecx
        __asm _emit 0x51
        // 0x588D08C8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D08CA: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xD4
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588D08CF: jmp 0x588d08d3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D08D1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D08D3: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D08D8: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D08DD: mov dword ptr [esi - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0xF4
        // 0x588D08E0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xC3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D08E5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D08E8: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D08EC: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588D08F1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D08F3: je 0x588d0942
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x588D08F5: mov ecx, dword ptr [0x58a24640]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D08FB: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0901: jle 0x588d091c
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x588D0903: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588D0905: jl 0x588d091c
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x588D0907: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D090E: je 0x588d091c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D0910: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0916: add edx, dword ptr [esp + 0x38]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D091A: jmp 0x588d091e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D091C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D091E: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D0922: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D0924: add ecx, 0x5c
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x5C
        // 0x588D0927: push ecx
        __asm _emit 0x51
        // 0x588D0928: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D092E: push edi
        __asm _emit 0x57
        // 0x588D092F: push edx
        __asm _emit 0x52
        // 0x588D0930: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D0936: push ebp
        __asm _emit 0x55
        // 0x588D0937: push edx
        __asm _emit 0x52
        // 0x588D0938: push ecx
        __asm _emit 0x51
        // 0x588D0939: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D093B: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xD4
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588D0940: jmp 0x588d0944
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D0942: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D0944: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0949: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D094E: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588D0950: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D0955: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D0958: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D095C: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588D0961: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D0963: je 0x588d09b2
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x588D0965: mov ecx, dword ptr [0x58a24640]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D096B: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0971: jle 0x588d098c
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x588D0973: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588D0975: jl 0x588d098c
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x588D0977: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D097E: je 0x588d098c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D0980: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0986: add edx, dword ptr [esp + 0x38]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D098A: jmp 0x588d098e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D098C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D098E: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D0992: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D0994: add ecx, 0x70
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x70
        // 0x588D0997: push ecx
        __asm _emit 0x51
        // 0x588D0998: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D099E: push edi
        __asm _emit 0x57
        // 0x588D099F: push edx
        __asm _emit 0x52
        // 0x588D09A0: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D09A6: push ebp
        __asm _emit 0x55
        // 0x588D09A7: push edx
        __asm _emit 0x52
        // 0x588D09A8: push ecx
        __asm _emit 0x51
        // 0x588D09A9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D09AB: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xD3
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588D09B0: jmp 0x588d09b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D09B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D09B4: mov ecx, dword ptr [esi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xF4
        // 0x588D09B7: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D09BC: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D09C1: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588D09C4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D09C9: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D09CB: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D09D0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D09D5: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588D09D8: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D09DD: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D09E2: add dword ptr [esp + 0x38], 0x40
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x40
        // 0x588D09E7: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D09EA: inc ebx
        __asm _emit 0x43
        // 0x588D09EB: add edi, 0x28
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x28
        // 0x588D09EE: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x588D09F3: jne 0x588d0860
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D09F9: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D09FD: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D0A01: add esi, 0x94
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A07: mov ebp, 0xf
        __asm _emit 0xBD
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A0C: mov ebx, 0x3c0
        __asm _emit 0xBB
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A11: add edi, 0x1c7
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A17: mov dword ptr [esp + 0x2c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A1F: nop
        __asm _emit 0x90
        // 0x588D0A20: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A25: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D0A2A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D0A2D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D0A31: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588D0A36: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D0A38: je 0x588d0a8c
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x588D0A3A: mov ecx, dword ptr [0x58a24640]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D0A40: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A46: jle 0x588d0a5f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588D0A48: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588D0A4A: jl 0x588d0a5f
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588D0A4C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A53: je 0x588d0a5f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588D0A55: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A5B: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x588D0A5D: jmp 0x588d0a61
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D0A5F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D0A61: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D0A65: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D0A67: add ecx, 0x8f
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A6D: push ecx
        __asm _emit 0x51
        // 0x588D0A6E: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D0A74: push edi
        __asm _emit 0x57
        // 0x588D0A75: push edx
        __asm _emit 0x52
        // 0x588D0A76: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D0A7A: push edx
        __asm _emit 0x52
        // 0x588D0A7B: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D0A81: push ecx
        __asm _emit 0x51
        // 0x588D0A82: push edx
        __asm _emit 0x52
        // 0x588D0A83: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D0A85: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xD3
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588D0A8A: jmp 0x588d0a8e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D0A8C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D0A8E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0A93: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D0A95: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D0A9A: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588D0A9C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D0AA1: add ebx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x40
        // 0x588D0AA4: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D0AA7: inc ebp
        __asm _emit 0x45
        // 0x588D0AA8: add edi, 0x50
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x50
        // 0x588D0AAB: sub dword ptr [esp + 0x2c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x588D0AB0: jne 0x588d0a20
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D0AB6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D0ABA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D0ABE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0AC5: pop ecx
        __asm _emit 0x59
        // 0x588D0AC6: pop edi
        __asm _emit 0x5F
        // 0x588D0AC7: pop esi
        __asm _emit 0x5E
        // 0x588D0AC8: pop ebp
        __asm _emit 0x5D
        // 0x588D0AC9: pop ebx
        __asm _emit 0x5B
        // 0x588D0ACA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588D0ACD: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
