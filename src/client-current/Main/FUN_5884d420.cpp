// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884D420 .. +0x1B9 bytes.
// Source symbol alias: FUN_5884d420.
extern "C" __declspec(naked) void FUN_5884d420() {
    __asm {
        // 0x5884D420: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884D422: push 0x58984f96
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x4F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884D427: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D42D: push eax
        __asm _emit 0x50
        // 0x5884D42E: push ebx
        __asm _emit 0x53
        // 0x5884D42F: push ebp
        __asm _emit 0x55
        // 0x5884D430: push esi
        __asm _emit 0x56
        // 0x5884D431: push edi
        __asm _emit 0x57
        // 0x5884D432: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884D437: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884D439: push eax
        __asm _emit 0x50
        // 0x5884D43A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884D43E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D444: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5884D446: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884D44A: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884D44E: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5884D451: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5884D456: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x5884D458: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x5884D45A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5884D45C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5884D45F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5884D461: cmp dword ptr [esi + 0x5c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x5C
        __asm _emit 0x00
        // 0x5884D465: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x5884D468: lea edx, [eax + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5884D46B: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5884D46E: mov dword ptr [esi + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5884D471: mov dword ptr [esi + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5884D474: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5884D477: jne 0x5884d51c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D47D: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x5884D47F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xF7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884D484: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884D486: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884D489: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884D48D: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D495: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884D497: je 0x5884d4eb
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x5884D499: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x5884D49C: mov ebx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884D4A2: cmp dword ptr [ebx + 0x164], 0x207
        __asm _emit 0x81
        __asm _emit 0xBB
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D4AC: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5884D4AF: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x5884D4B2: jle 0x5884d4cb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884D4B4: cmp dword ptr [ebx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D4BB: je 0x5884d4cb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884D4BD: mov ebx, dword ptr [ebx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D4C3: mov ebx, dword ptr [ebx + 0x81c]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D4C9: jmp 0x5884d4cd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884D4CB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884D4CD: movzx ebp, word ptr [esi + 0x70]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x6E
        __asm _emit 0x70
        // 0x5884D4D1: push ebp
        __asm _emit 0x55
        // 0x5884D4D2: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5884D4D5: push eax
        __asm _emit 0x50
        // 0x5884D4D6: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884D4DA: add edx, 0x11
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x11
        // 0x5884D4DD: push edx
        __asm _emit 0x52
        // 0x5884D4DE: push ebx
        __asm _emit 0x53
        // 0x5884D4DF: push esi
        __asm _emit 0x56
        // 0x5884D4E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884D4E2: push edi
        __asm _emit 0x57
        // 0x5884D4E3: push eax
        __asm _emit 0x50
        // 0x5884D4E4: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x13
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5884D4E9: jmp 0x5884d4ed
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884D4EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884D4ED: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D4F2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884D4F4: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884D4FC: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5884D4FF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x58
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884D504: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5884D507: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D50C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884D510: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5884D513: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D518: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5884D51C: cmp dword ptr [esi + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5884D520: jne 0x5884d5b6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D526: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x5884D528: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xF7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884D52D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884D52F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884D532: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884D536: mov dword ptr [esp + 0x1c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D53E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884D540: je 0x5884d594
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x5884D542: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x5884D545: mov ebx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884D54B: cmp dword ptr [ebx + 0x164], 0x9aa
        __asm _emit 0x81
        __asm _emit 0xBB
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D555: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5884D558: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x5884D55B: jle 0x5884d574
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884D55D: cmp dword ptr [ebx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D564: je 0x5884d574
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884D566: mov ebx, dword ptr [ebx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D56C: mov ebx, dword ptr [ebx + 0x26a8]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0xA8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D572: jmp 0x5884d576
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884D574: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884D576: movzx ebp, word ptr [esi + 0x70]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x6E
        __asm _emit 0x70
        // 0x5884D57A: push ebp
        __asm _emit 0x55
        // 0x5884D57B: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5884D57E: push eax
        __asm _emit 0x50
        // 0x5884D57F: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884D583: add edx, 0x11
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x11
        // 0x5884D586: push edx
        __asm _emit 0x52
        // 0x5884D587: push ebx
        __asm _emit 0x53
        // 0x5884D588: push esi
        __asm _emit 0x56
        // 0x5884D589: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884D58B: push edi
        __asm _emit 0x57
        // 0x5884D58C: push eax
        __asm _emit 0x50
        // 0x5884D58D: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x12
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5884D592: jmp 0x5884d596
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884D594: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884D596: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5884D599: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D59E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884D5A2: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5884D5A5: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D5AA: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5884D5AE: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884D5B6: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884D5BA: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5884D5BD: push eax
        __asm _emit 0x50
        // 0x5884D5BE: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x9D
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884D5C3: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884D5C7: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884D5CE: pop ecx
        __asm _emit 0x59
        // 0x5884D5CF: pop edi
        __asm _emit 0x5F
        // 0x5884D5D0: pop esi
        __asm _emit 0x5E
        // 0x5884D5D1: pop ebp
        __asm _emit 0x5D
        // 0x5884D5D2: pop ebx
        __asm _emit 0x5B
        // 0x5884D5D3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5884D5D6: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
