// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 617 bytes in 5 exact ranges.
// Source symbol alias: FUN_58792730.

// Ghidra body range 0x58792730..0x5879282A; 250 mapped bytes.
extern "C" __declspec(naked) void FUN_58792730_segment_00() {
    __asm {
        // 0x58792730: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58792732: push 0x58980440
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58792737: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879273D: push eax
        __asm _emit 0x50
        // 0x5879273E: sub esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x74
        // 0x58792741: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58792746: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58792748: mov dword ptr [esp + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x5879274C: push ebx
        __asm _emit 0x53
        // 0x5879274D: push ebp
        __asm _emit 0x55
        // 0x5879274E: push esi
        __asm _emit 0x56
        // 0x5879274F: push edi
        __asm _emit 0x57
        // 0x58792750: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58792755: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58792757: push eax
        __asm _emit 0x50
        // 0x58792758: lea eax, [esp + 0x88]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879275F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792765: mov esi, dword ptr [esp + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879276C: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5879276E: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58792772: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xD6
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58792777: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58792779: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5879277B: mov dword ptr [esp + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792782: mov dword ptr [esp + 0x48], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879278A: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5879278E: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x58792793: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58792796: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58792798: inc eax
        __asm _emit 0x40
        // 0x58792799: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5879279B: jne 0x58792796
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5879279D: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5879279F: push eax
        __asm _emit 0x50
        // 0x587927A0: push esi
        __asm _emit 0x56
        // 0x587927A1: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587927A5: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x28
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587927AA: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587927AF: push ebx
        __asm _emit 0x53
        // 0x587927B0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587927B2: push 0x589977d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x77
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587927B7: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587927BB: mov byte ptr [esp + 0x9c], 1
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587927C3: call 0x5878d4d0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xAD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587927C8: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587927CA: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587927CD: je 0x58792832
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x587927CF: nop
        __asm _emit 0x90
        // 0x587927D0: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587927D2: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587927D4: push eax
        __asm _emit 0x50
        // 0x587927D5: push edi
        __asm _emit 0x57
        // 0x587927D6: lea ecx, [esp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587927DA: push ecx
        __asm _emit 0x51
        // 0x587927DB: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587927DF: call 0x58791de0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587927E4: lea edx, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587927E8: push edx
        __asm _emit 0x52
        // 0x587927E9: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587927ED: mov byte ptr [esp + 0x94], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587927F4: call 0x58792680
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587927F9: push ebx
        __asm _emit 0x53
        // 0x587927FA: lea edi, [esi + 2]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587927FD: push edi
        __asm _emit 0x57
        // 0x587927FE: push 0x589977d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x77
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58792803: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58792807: call 0x5878d4d0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xAC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879280C: cmp dword ptr [esp + 0x80], 0x10
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x58792814: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58792816: mov byte ptr [esp + 0x90], 1
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5879281E: jb 0x5879282d
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x58792820: mov eax, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58792824: push eax
        __asm _emit 0x50
        // 0x58792825: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xA4
        __asm _emit 0x1E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5879282D..0x58792926; 249 mapped bytes.
extern "C" __declspec(naked) void FUN_58792730_segment_01() {
    __asm {
        // 0x5879282D: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58792830: jne 0x587927d0
        __asm _emit 0x75
        __asm _emit 0x9E
        // 0x58792832: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58792834: push edi
        __asm _emit 0x57
        // 0x58792835: lea ecx, [esp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58792839: push ecx
        __asm _emit 0x51
        // 0x5879283A: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5879283E: call 0x58791de0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792843: cmp dword ptr [esp + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x58792848: mov byte ptr [esp + 0x90], 3
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58792850: je 0x58792860
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58792852: lea edx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58792856: push edx
        __asm _emit 0x52
        // 0x58792857: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879285B: call 0x58792680
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792860: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58792864: cmp esi, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58792868: jbe 0x5879286f
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5879286A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xA4
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5879286F: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58792873: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58792877: cmp dword ptr [esp + 0x20], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5879287B: jbe 0x58792882
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5879287D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xA3
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792882: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58792884: je 0x5879288c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58792886: cmp edi, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879288A: je 0x58792891
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5879288C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xA3
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792891: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58792893: je 0x58792911
        __asm _emit 0x74
        __asm _emit 0x7C
        // 0x58792895: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58792897: jne 0x587928b5
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58792899: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xA3
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5879289E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587928A0: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587928A3: jb 0x587928aa
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587928A5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xA3
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x587928AA: cmp dword ptr [esi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x587928AE: jb 0x587928b9
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x587928B0: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587928B3: jmp 0x587928bc
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587928B5: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587928B7: jmp 0x587928a0
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x587928B9: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587928BC: mov ecx, dword ptr [esp + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587928C3: push ecx
        __asm _emit 0x51
        // 0x587928C4: mov ecx, dword ptr [ebp + 0x12140]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587928CA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587928CC: push eax
        __asm _emit 0x50
        // 0x587928CD: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x5F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587928D2: mov ecx, dword ptr [ebp + 0x12140]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587928D8: call 0x58908870
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x5F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587928DD: mov ecx, dword ptr [ebp + 0x12140]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587928E3: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587928E9: dec edx
        __asm _emit 0x4A
        // 0x587928EA: push edx
        __asm _emit 0x52
        // 0x587928EB: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x5F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587928F0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587928F2: jne 0x5879290d
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x587928F4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xA3
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x587928F9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587928FB: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587928FE: jb 0x58792905
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58792900: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xA3
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792905: add esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x1C
        // 0x58792908: jmp 0x58792873
        __asm _emit 0xE9
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879290D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5879290F: jmp 0x587928fb
        __asm _emit 0xEB
        __asm _emit 0xEA
        // 0x58792911: mov edi, 0x10
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792916: cmp dword ptr [esp + 0x64], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5879291A: jb 0x58792929
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x5879291C: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58792920: push eax
        __asm _emit 0x50
        // 0x58792921: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xA3
        __asm _emit 0x1E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58792929..0x5879294F; 38 mapped bytes.
extern "C" __declspec(naked) void FUN_58792730_segment_02() {
    __asm {
        // 0x58792929: mov esi, 0xf
        __asm _emit 0xBE
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879292E: mov dword ptr [esp + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58792932: mov dword ptr [esp + 0x60], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879293A: mov byte ptr [esp + 0x50], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5879293F: cmp dword ptr [esp + 0x48], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58792943: jb 0x58792952
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x58792945: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58792949: push ecx
        __asm _emit 0x51
        // 0x5879294A: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xA2
        __asm _emit 0x1E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58792952..0x5879298A; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_58792730_segment_03() {
    __asm {
        // 0x58792952: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58792956: mov dword ptr [esp + 0x48], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5879295A: mov dword ptr [esp + 0x44], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792962: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x58792967: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58792969: je 0x5879298d
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5879296B: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879296F: push edx
        __asm _emit 0x52
        // 0x58792970: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58792974: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58792978: push ecx
        __asm _emit 0x51
        // 0x58792979: push edx
        __asm _emit 0x52
        // 0x5879297A: push eax
        __asm _emit 0x50
        // 0x5879297B: call 0x58902180
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xF8
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58792980: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58792984: push eax
        __asm _emit 0x50
        // 0x58792985: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xA2
        __asm _emit 0x1E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5879298D..0x587929A5; 24 mapped bytes.
extern "C" __declspec(naked) void FUN_58792730_segment_04() {
    __asm {
        // 0x5879298D: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58792991: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58792993: push ecx
        __asm _emit 0x51
        // 0x58792994: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58792998: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5879299C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587929A0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xA2
        __asm _emit 0x1E
        __asm _emit 0x00
    }
}
