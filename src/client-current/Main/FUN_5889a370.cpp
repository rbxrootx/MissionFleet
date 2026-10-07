// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 821 bytes in 7 exact ranges.
// Source symbol alias: FUN_5889a370.

// Ghidra body range 0x5889A370..0x5889A50C; 412 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a370_segment_00() {
    __asm {
        // 0x5889A370: push ebp
        __asm _emit 0x55
        // 0x5889A371: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5889A373: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5889A375: push 0x58987460
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x74
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889A37A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A380: push eax
        __asm _emit 0x50
        // 0x5889A381: sub esp, 0x48
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x48
        // 0x5889A384: push ebx
        __asm _emit 0x53
        // 0x5889A385: push esi
        __asm _emit 0x56
        // 0x5889A386: push edi
        __asm _emit 0x57
        // 0x5889A387: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889A38C: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5889A38E: push eax
        __asm _emit 0x50
        // 0x5889A38F: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5889A392: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A398: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x5889A39B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889A39D: mov dword ptr [ebp - 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5889A3A0: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5889A3A3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889A3A5: jne 0x5889a3ac
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5889A3A7: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5889A3AA: jmp 0x5889a3c5
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x5889A3AC: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5889A3AF: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5889A3B1: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889A3B6: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5889A3B8: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889A3BB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5889A3BD: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5889A3C0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889A3C2: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5889A3C5: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x5889A3C8: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5889A3CA: je 0x5889a716
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A3D0: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5889A3D3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5889A3D5: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5889A3D8: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889A3DD: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5889A3DF: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889A3E2: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5889A3E4: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5889A3E7: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889A3E9: mov ecx, 0xaaaaaaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x0A
        // 0x5889A3EE: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5889A3F0: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889A3F2: jae 0x5889a3f9
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5889A3F4: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xC2
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5889A3F9: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5889A3FC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889A3FE: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5889A400: jae 0x5889a58e
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A406: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5889A408: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x5889A40A: mov ebx, 0xaaaaaaa
        __asm _emit 0xBB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x0A
        // 0x5889A40F: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x5889A411: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x5889A413: jae 0x5889a421
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x5889A415: mov dword ptr [ebp - 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A41C: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5889A41F: jmp 0x5889a426
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5889A421: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5889A423: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5889A426: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5889A428: jae 0x5889a42f
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5889A42A: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5889A42D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889A42F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889A431: push ecx
        __asm _emit 0x51
        // 0x5889A432: call 0x58898610
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A437: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5889A43A: sub edx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5889A43D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889A43F: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889A444: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5889A446: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889A449: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5889A44B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889A44D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5889A450: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5889A453: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x5889A455: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5889A458: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5889A45B: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5889A45E: push edx
        __asm _emit 0x52
        // 0x5889A45F: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5889A462: lea eax, [ebx + ebx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x5B
        // 0x5889A465: lea ecx, [ecx + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC1
        // 0x5889A468: push edi
        __asm _emit 0x57
        // 0x5889A469: push ecx
        __asm _emit 0x51
        // 0x5889A46A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889A46C: mov dword ptr [ebp - 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xDC
        // 0x5889A46F: call 0x5889a0d0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A474: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5889A477: mov byte ptr [ebp + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5889A47B: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5889A47E: push edx
        __asm _emit 0x52
        // 0x5889A47F: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5889A482: push edx
        __asm _emit 0x52
        // 0x5889A483: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5889A486: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5889A489: push ecx
        __asm _emit 0x51
        // 0x5889A48A: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5889A48D: push ecx
        __asm _emit 0x51
        // 0x5889A48E: push edx
        __asm _emit 0x52
        // 0x5889A48F: push eax
        __asm _emit 0x50
        // 0x5889A490: mov dword ptr [ebp - 0x1c], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A497: call 0x58899bb0
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A49C: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x5889A49F: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5889A4A2: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5889A4A5: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xDF
        // 0x5889A4A7: lea ecx, [ebx + ebx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x5B
        // 0x5889A4AA: lea ecx, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xCA
        // 0x5889A4AD: mov byte ptr [ebp + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5889A4B1: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5889A4B4: push edx
        __asm _emit 0x52
        // 0x5889A4B5: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5889A4B8: push edx
        __asm _emit 0x52
        // 0x5889A4B9: lea edx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5889A4BC: push edx
        __asm _emit 0x52
        // 0x5889A4BD: push ecx
        __asm _emit 0x51
        // 0x5889A4BE: push eax
        __asm _emit 0x50
        // 0x5889A4BF: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5889A4C2: push eax
        __asm _emit 0x50
        // 0x5889A4C3: mov dword ptr [ebp - 0x1c], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A4CA: call 0x58899bb0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A4CF: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5889A4D2: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5889A4D5: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x5889A4D7: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889A4DC: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5889A4DE: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889A4E1: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5889A4E3: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5889A4E6: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5889A4E8: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5889A4EB: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x5889A4ED: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5889A4EF: je 0x5889a50f
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5889A4F1: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5889A4F4: push edx
        __asm _emit 0x52
        // 0x5889A4F5: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5889A4F8: push eax
        __asm _emit 0x50
        // 0x5889A4F9: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5889A4FC: push eax
        __asm _emit 0x50
        // 0x5889A4FD: push ebx
        __asm _emit 0x53
        // 0x5889A4FE: call 0x58899c80
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A503: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5889A506: push ecx
        __asm _emit 0x51
        // 0x5889A507: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x27
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889A50F..0x5889A53E; 47 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a370_segment_01() {
    __asm {
        // 0x5889A50F: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5889A512: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x5889A515: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5889A518: lea ecx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD0
        // 0x5889A51B: lea edx, [edi + edi*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x7F
        // 0x5889A51E: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5889A521: lea ecx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD0
        // 0x5889A524: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5889A527: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5889A52A: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5889A52D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A534: pop ecx
        __asm _emit 0x59
        // 0x5889A535: pop edi
        __asm _emit 0x5F
        // 0x5889A536: pop esi
        __asm _emit 0x5E
        // 0x5889A537: pop ebx
        __asm _emit 0x5B
        // 0x5889A538: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5889A53A: pop ebp
        __asm _emit 0x5D
        // 0x5889A53B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889A58E..0x5889A649; 187 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a370_segment_02() {
    __asm {
        // 0x5889A58E: sub ebx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x5889A591: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889A596: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x5889A598: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889A59B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5889A59D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5889A5A0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889A5A2: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5889A5A4: jae 0x5889a686
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A5AA: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5889A5AD: push ecx
        __asm _emit 0x51
        // 0x5889A5AE: lea ecx, [ebp - 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xC4
        // 0x5889A5B1: call 0x58899700
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A5B6: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5889A5B9: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5889A5BC: lea ebx, [edi + edi*2]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x7F
        // 0x5889A5BF: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x5889A5C1: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x5889A5C3: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x5889A5C5: lea edx, [ebx + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x03
        // 0x5889A5C8: push edx
        __asm _emit 0x52
        // 0x5889A5C9: push ecx
        __asm _emit 0x51
        // 0x5889A5CA: push eax
        __asm _emit 0x50
        // 0x5889A5CB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889A5CD: mov dword ptr [ebp - 4], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A5D4: call 0x5889a210
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A5D9: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5889A5DC: lea edx, [ebp - 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xC4
        // 0x5889A5DF: push edx
        __asm _emit 0x52
        // 0x5889A5E0: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5889A5E2: sub edx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5889A5E5: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889A5EA: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5889A5EC: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889A5EF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5889A5F1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5889A5F4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889A5F6: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5889A5F8: push edi
        __asm _emit 0x57
        // 0x5889A5F9: push ecx
        __asm _emit 0x51
        // 0x5889A5FA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889A5FC: mov byte ptr [ebp - 4], 3
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x03
        // 0x5889A600: call 0x5889a0d0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A605: add dword ptr [esi + 0x10], ebx
        __asm _emit 0x01
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5889A608: mov esi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x5889A60B: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5889A60E: lea ecx, [ebp - 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xC4
        // 0x5889A611: push ecx
        __asm _emit 0x51
        // 0x5889A612: sub esi, ebx
        __asm _emit 0x2B
        __asm _emit 0xF3
        // 0x5889A614: push esi
        __asm _emit 0x56
        // 0x5889A615: push edx
        __asm _emit 0x52
        // 0x5889A616: mov dword ptr [ebp - 4], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A61D: call 0x58899c50
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A622: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5889A625: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5889A627: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5889A62A: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5889A62C: je 0x5889a64c
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5889A62E: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5889A631: push ecx
        __asm _emit 0x51
        // 0x5889A632: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5889A635: lea edx, [ebp - 0x34]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xCC
        // 0x5889A638: push edx
        __asm _emit 0x52
        // 0x5889A639: push ecx
        __asm _emit 0x51
        // 0x5889A63A: push eax
        __asm _emit 0x50
        // 0x5889A63B: call 0x58902180
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x7B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889A640: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xD0
        // 0x5889A643: push edx
        __asm _emit 0x52
        // 0x5889A644: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x25
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889A64C..0x5889A65D; 17 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a370_segment_03() {
    __asm {
        // 0x5889A64C: mov eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xC4
        // 0x5889A64F: mov dword ptr [ebp - 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x5889A652: mov dword ptr [ebp - 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x5889A655: mov dword ptr [ebp - 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x5889A658: jmp 0x5889a70d
        __asm _emit 0xE9
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889A686..0x5889A6FE; 120 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a370_segment_04() {
    __asm {
        // 0x5889A686: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5889A689: push eax
        __asm _emit 0x50
        // 0x5889A68A: lea ecx, [ebp - 0x54]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xAC
        // 0x5889A68D: call 0x58899700
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A692: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5889A695: lea edi, [edi + edi*2]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x7F
        // 0x5889A698: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xFF
        // 0x5889A69A: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xFF
        // 0x5889A69C: push ebx
        __asm _emit 0x53
        // 0x5889A69D: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xFF
        // 0x5889A69F: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5889A6A1: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5889A6A3: push ebx
        __asm _emit 0x53
        // 0x5889A6A4: push eax
        __asm _emit 0x50
        // 0x5889A6A5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889A6A7: mov dword ptr [ebp - 4], 5
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A6AE: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5889A6B1: call 0x5889a210
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A6B6: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5889A6B9: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5889A6BC: push ebx
        __asm _emit 0x53
        // 0x5889A6BD: push ecx
        __asm _emit 0x51
        // 0x5889A6BE: push edx
        __asm _emit 0x52
        // 0x5889A6BF: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5889A6C2: call 0x5889a050
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A6C7: lea eax, [ebp - 0x54]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xAC
        // 0x5889A6CA: push eax
        __asm _emit 0x50
        // 0x5889A6CB: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5889A6CE: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5889A6D0: push edi
        __asm _emit 0x57
        // 0x5889A6D1: push eax
        __asm _emit 0x50
        // 0x5889A6D2: call 0x58899c50
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A6D7: mov eax, dword ptr [ebp - 0x48]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xB8
        // 0x5889A6DA: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5889A6DC: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5889A6DF: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5889A6E1: je 0x5889a701
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5889A6E3: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5889A6E6: push ecx
        __asm _emit 0x51
        // 0x5889A6E7: mov ecx, dword ptr [ebp - 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xBC
        // 0x5889A6EA: lea edx, [ebp - 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xB4
        // 0x5889A6ED: push edx
        __asm _emit 0x52
        // 0x5889A6EE: push ecx
        __asm _emit 0x51
        // 0x5889A6EF: push eax
        __asm _emit 0x50
        // 0x5889A6F0: call 0x58902180
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889A6F5: mov edx, dword ptr [ebp - 0x48]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xB8
        // 0x5889A6F8: push edx
        __asm _emit 0x52
        // 0x5889A6F9: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x25
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889A701..0x5889A713; 18 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a370_segment_05() {
    __asm {
        // 0x5889A701: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xAC
        // 0x5889A704: mov dword ptr [ebp - 0x48], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xB8
        // 0x5889A707: mov dword ptr [ebp - 0x44], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xBC
        // 0x5889A70A: mov dword ptr [ebp - 0x40], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xC0
        // 0x5889A70D: push eax
        __asm _emit 0x50
        // 0x5889A70E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x25
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889A716..0x5889A72A; 20 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a370_segment_06() {
    __asm {
        // 0x5889A716: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5889A719: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A720: pop ecx
        __asm _emit 0x59
        // 0x5889A721: pop edi
        __asm _emit 0x5F
        // 0x5889A722: pop esi
        __asm _emit 0x5E
        // 0x5889A723: pop ebx
        __asm _emit 0x5B
        // 0x5889A724: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5889A726: pop ebp
        __asm _emit 0x5D
        // 0x5889A727: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
