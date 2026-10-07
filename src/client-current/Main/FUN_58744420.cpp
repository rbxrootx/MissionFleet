// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 462 bytes in 1 exact ranges.
// Source symbol alias: FUN_58744420.

// Ghidra body range 0x58744420..0x587445EE; 462 mapped bytes.
extern "C" __declspec(naked) void FUN_58744420_segment_00() {
    __asm {
        // 0x58744420: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x58744423: push esi
        __asm _emit 0x56
        // 0x58744424: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58744426: cmp dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5874442A: push edi
        __asm _emit 0x57
        // 0x5874442B: jne 0x5874444e
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5874442D: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58744431: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58744434: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744438: push eax
        __asm _emit 0x50
        // 0x58744439: push ecx
        __asm _emit 0x51
        // 0x5874443A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5874443C: push edi
        __asm _emit 0x57
        // 0x5874443D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874443F: call 0x58743c80
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744444: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58744446: pop edi
        __asm _emit 0x5F
        // 0x58744447: pop esi
        __asm _emit 0x5E
        // 0x58744448: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5874444B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5874444E: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58744452: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x58744455: mov edi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x3A
        // 0x58744457: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58744459: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874445B: je 0x58744461
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5874445D: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5874445F: je 0x5874446a
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58744461: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744466: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874446A: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874446E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58744470: jne 0x5874449b
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58744472: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58744476: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58744478: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5874447B: jae 0x587445c9
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744481: push edi
        __asm _emit 0x57
        // 0x58744482: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58744486: push eax
        __asm _emit 0x50
        // 0x58744487: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58744489: push edi
        __asm _emit 0x57
        // 0x5874448A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874448C: call 0x58743c80
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744491: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58744493: pop edi
        __asm _emit 0x5F
        // 0x58744494: pop esi
        __asm _emit 0x5E
        // 0x58744495: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58744498: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5874449B: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5874449E: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587444A0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587444A2: je 0x587444a8
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587444A4: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587444A6: je 0x587444b5
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587444A8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x87
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587444AD: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587444B1: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587444B5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587444B7: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587444BB: jne 0x587444e8
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x587444BD: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587444C0: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587444C3: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587444C6: cmp ecx, dword ptr [edi]
        __asm _emit 0x3B
        __asm _emit 0x0F
        // 0x587444C8: jae 0x587445c9
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587444CE: push edi
        __asm _emit 0x57
        // 0x587444CF: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587444D3: push eax
        __asm _emit 0x50
        // 0x587444D4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587444D6: push edi
        __asm _emit 0x57
        // 0x587444D7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587444D9: call 0x58743c80
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587444DE: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587444E0: pop edi
        __asm _emit 0x5F
        // 0x587444E1: pop esi
        __asm _emit 0x5E
        // 0x587444E2: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587444E5: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587444E8: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587444EA: cmp dword ptr [eax + 0x10], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587444ED: jbe 0x58744550
        __asm _emit 0x76
        __asm _emit 0x61
        // 0x587444EF: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587444F3: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587444F7: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587444FB: call 0x587437d0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744500: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58744502: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58744506: cmp dword ptr [eax + 0x10], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58744509: jae 0x58744545
        __asm _emit 0x73
        __asm _emit 0x3A
        // 0x5874450B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874450E: cmp byte ptr [edx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58744512: push edi
        __asm _emit 0x57
        // 0x58744513: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58744517: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58744519: je 0x5874452e
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5874451B: push eax
        __asm _emit 0x50
        // 0x5874451C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874451E: push edi
        __asm _emit 0x57
        // 0x5874451F: call 0x58743c80
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744524: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58744526: pop edi
        __asm _emit 0x5F
        // 0x58744527: pop esi
        __asm _emit 0x5E
        // 0x58744528: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5874452B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5874452E: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58744532: push eax
        __asm _emit 0x50
        // 0x58744533: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58744535: push edi
        __asm _emit 0x57
        // 0x58744536: call 0x58743c80
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874453B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5874453D: pop edi
        __asm _emit 0x5F
        // 0x5874453E: pop esi
        __asm _emit 0x5E
        // 0x5874453F: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58744542: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58744545: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58744549: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874454D: cmp dword ptr [eax + 0x10], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58744550: jae 0x587445c9
        __asm _emit 0x73
        __asm _emit 0x77
        // 0x58744552: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58744554: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58744558: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x5874455B: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874455F: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58744563: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58744567: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874456B: call 0x587436b0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744570: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58744574: push eax
        __asm _emit 0x50
        // 0x58744575: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58744579: call 0x58743680
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874457E: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58744582: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58744584: jne 0x5874458d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58744586: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58744588: cmp edx, dword ptr [ecx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5874458B: jae 0x587445c9
        __asm _emit 0x73
        __asm _emit 0x3C
        // 0x5874458D: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58744591: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58744594: cmp byte ptr [edx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58744598: push edi
        __asm _emit 0x57
        // 0x58744599: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874459D: je 0x587445b4
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5874459F: push eax
        __asm _emit 0x50
        // 0x587445A0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587445A2: push edi
        __asm _emit 0x57
        // 0x587445A3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587445A5: call 0x58743c80
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587445AA: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587445AC: pop edi
        __asm _emit 0x5F
        // 0x587445AD: pop esi
        __asm _emit 0x5E
        // 0x587445AE: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587445B1: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587445B4: push ecx
        __asm _emit 0x51
        // 0x587445B5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587445B7: push edi
        __asm _emit 0x57
        // 0x587445B8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587445BA: call 0x58743c80
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587445BF: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587445C1: pop edi
        __asm _emit 0x5F
        // 0x587445C2: pop esi
        __asm _emit 0x5E
        // 0x587445C3: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587445C6: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587445C9: push edi
        __asm _emit 0x57
        // 0x587445CA: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587445CE: push eax
        __asm _emit 0x50
        // 0x587445CF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587445D1: call 0x58744170
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587445D6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587445D8: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587445DC: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587445DE: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587445E1: pop edi
        __asm _emit 0x5F
        // 0x587445E2: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587445E5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587445E7: pop esi
        __asm _emit 0x5E
        // 0x587445E8: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587445EB: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
