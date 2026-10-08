// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 579 bytes in 1 exact ranges.
// Source symbol alias: FUN_58756750.

// Ghidra body range 0x58756750..0x58756993; 579 mapped bytes.
extern "C" __declspec(naked) void FUN_58756750_segment_00() {
    __asm {
        // 0x58756750: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58756752: push 0x5897e91e
        __asm _emit 0x68
        __asm _emit 0x1E
        __asm _emit 0xE9
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58756757: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875675D: push eax
        __asm _emit 0x50
        // 0x5875675E: push ecx
        __asm _emit 0x51
        // 0x5875675F: push ebx
        __asm _emit 0x53
        // 0x58756760: push ebp
        __asm _emit 0x55
        // 0x58756761: push esi
        __asm _emit 0x56
        // 0x58756762: push edi
        __asm _emit 0x57
        // 0x58756763: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58756768: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875676A: push eax
        __asm _emit 0x50
        // 0x5875676B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875676F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756775: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58756777: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875677B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5875677F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58756783: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58756787: push eax
        __asm _emit 0x50
        // 0x58756788: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875678C: push ecx
        __asm _emit 0x51
        // 0x5875678D: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58756791: push edx
        __asm _emit 0x52
        // 0x58756792: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58756796: push eax
        __asm _emit 0x50
        // 0x58756797: push ecx
        __asm _emit 0x51
        // 0x58756798: push edx
        __asm _emit 0x52
        // 0x58756799: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875679B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xCA
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587567A0: mov dword ptr [esi], 0x5898d6f8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF8
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587567A6: mov eax, 0x7fff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587567AB: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587567AF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587567B1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587567B3: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587567B6: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x587567B9: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587567BC: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587567BF: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587567C2: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587567C5: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587567C8: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587567CB: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x587567CE: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587567D1: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587567D7: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587567DD: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587567E0: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587567E6: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587567EC: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587567F0: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587567F6: lea ebx, [esi + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587567FC: mov dword ptr [esp + 0x3c], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756804: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58756806: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x64
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875680B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5875680D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58756810: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58756814: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58756819: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x5875681B: je 0x5875688b
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x5875681D: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58756822: cmp dword ptr [eax + 0x164], 0x15
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x58756829: jle 0x5875683c
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5875682B: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756831: je 0x5875683c
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58756833: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756839: mov ebp, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x54
        // 0x5875683C: push 0x190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756841: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58756843: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58756845: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58756847: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58756849: push esi
        __asm _emit 0x56
        // 0x5875684A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5875684C: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xC9
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58756851: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58756857: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5875685A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5875685C: je 0x58756885
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5875685E: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58756861: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58756864: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58756867: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5875686A: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5875686D: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58756870: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58756873: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58756876: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58756879: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5875687C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5875687F: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58756882: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58756885: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58756887: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58756889: jmp 0x5875688d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875688B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875688D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756892: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58756897: mov dword ptr [ebx], ecx
        __asm _emit 0x89
        __asm _emit 0x0B
        // 0x58756899: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xC4
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875689E: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587568A0: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587568A5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587568A9: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587568AC: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587568B1: jne 0x58756804
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587568B7: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587568BC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x63
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587568C1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587568C4: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587568C8: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587568CD: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587568CF: je 0x58756915
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x587568D1: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587568D7: cmp dword ptr [edx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587568DE: jle 0x587568f3
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x587568E0: cmp dword ptr [edx + 0x190], ebp
        __asm _emit 0x39
        __asm _emit 0xAA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587568E6: je 0x587568f3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587568E8: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587568EE: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x40
        // 0x587568F1: jmp 0x587568f5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587568F3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587568F5: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587568FB: mov edi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58756901: push 0x7d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756906: push ebp
        __asm _emit 0x55
        // 0x58756907: push ebp
        __asm _emit 0x55
        // 0x58756908: push edx
        __asm _emit 0x52
        // 0x58756909: push edi
        __asm _emit 0x57
        // 0x5875690A: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5875690C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875690E: call 0x5876e510
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58756913: jmp 0x58756917
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58756915: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58756917: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875691C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875691E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58756923: mov dword ptr [esi + 0x3b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756929: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xC3
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875692E: mov edx, dword ptr [esi + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756934: mov dword ptr [edx + 0x80], 0x101
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875693E: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58756941: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58756944: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875694A: imul ecx, ecx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756950: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58756953: mov dword ptr [esi + 0xa8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756959: mov dword ptr [esi + 0xa4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875695F: mov dword ptr [esi + 0x98], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756965: mov dword ptr [esi + 0x94], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875696B: mov dword ptr [esi + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5875696E: mov dword ptr [esi + 0x3b0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xB0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756974: mov dword ptr [esi + 0x50], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875697B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875697D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58756981: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756988: pop ecx
        __asm _emit 0x59
        // 0x58756989: pop edi
        __asm _emit 0x5F
        // 0x5875698A: pop esi
        __asm _emit 0x5E
        // 0x5875698B: pop ebp
        __asm _emit 0x5D
        // 0x5875698C: pop ebx
        __asm _emit 0x5B
        // 0x5875698D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58756990: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
