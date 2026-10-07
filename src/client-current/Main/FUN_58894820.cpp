// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58894820 .. +0x14B bytes.
// Source symbol alias: FUN_58894820.
extern "C" __declspec(naked) void FUN_58894820() {
    __asm {
        // 0x58894820: push esi
        __asm _emit 0x56
        // 0x58894821: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58894823: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58894826: mov ecx, dword ptr [esi + 0x498]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889482C: add eax, 0x370
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894831: push eax
        __asm _emit 0x50
        // 0x58894832: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xEA
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58894837: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5889483A: add ecx, 0x3a2
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894840: push ecx
        __asm _emit 0x51
        // 0x58894841: mov ecx, dword ptr [esi + 0x49c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894847: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xEA
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889484C: mov eax, dword ptr [esi + 0x4a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894852: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894857: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889485B: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58894860: cmp eax, dword ptr [0x58a24598]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58894866: je 0x58894870
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58894868: cmp eax, dword ptr [0x58a245a0]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889486E: jne 0x5889487d
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58894870: mov ecx, dword ptr [esi + 0x49c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894876: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58894878: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x2A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5889487D: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894883: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58894886: je 0x5889488d
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58894888: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5889488B: jne 0x588948f3
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x5889488D: mov eax, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894893: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894898: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889489C: mov eax, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588948A2: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588948A4: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588948A8: mov eax, dword ptr [esi + 0x4d0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588948AE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588948B2: mov eax, dword ptr [esi + 0x4d4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588948B8: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588948BC: mov eax, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588948C2: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588948C6: mov eax, dword ptr [esi + 0x4dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588948CC: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588948D0: mov eax, dword ptr [esi + 0x4e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588948D6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588948DA: mov eax, dword ptr [esi + 0x4e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588948E0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588948E4: mov eax, dword ptr [esi + 0x498]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588948EA: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588948EF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588948F3: push 0x120000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x588948F8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588948FA: mov dword ptr [esi + 0xac], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58894904: call 0x58893860
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58894909: mov eax, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889490F: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894914: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58894918: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889491A: mov dword ptr [esi + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894920: mov dword ptr [esi + 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894926: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889492C: mov dword ptr [esi + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894932: mov dword ptr [esi + 0xb4], 0x20000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5889493C: mov dword ptr [esi + 0xb8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894942: mov dword ptr [esi + 0x4ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894948: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889494D: cmp eax, dword ptr [0x58a2459c]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58894953: je 0x58894969
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58894955: cmp eax, dword ptr [0x58a245a8]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889495B: je 0x58894969
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5889495D: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894963: pop esi
        __asm _emit 0x5E
        // 0x58894964: jmp 0x588d27f0
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0xDE
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58894969: pop esi
        __asm _emit 0x5E
        // 0x5889496A: ret
        __asm _emit 0xC3
    }
}
