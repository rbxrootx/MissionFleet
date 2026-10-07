// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1701 bytes in 4 exact ranges.
// Source symbol alias: FUN_587ee2c0.

// Ghidra body range 0x587EE2C0..0x587EE40A; 330 mapped bytes.
extern "C" __declspec(naked) void FUN_587ee2c0_segment_00() {
    __asm {
        // 0x587EE2C0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587EE2C3: push ebp
        __asm _emit 0x55
        // 0x587EE2C4: push esi
        __asm _emit 0x56
        // 0x587EE2C5: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EE2C9: test dword ptr [esi + 0xc], 0x2000
        __asm _emit 0xF7
        __asm _emit 0x46
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE2D0: push edi
        __asm _emit 0x57
        // 0x587EE2D1: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587EE2D3: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE2D8: je 0x587ee2ed
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587EE2DA: pop edi
        __asm _emit 0x5F
        // 0x587EE2DB: pop esi
        __asm _emit 0x5E
        // 0x587EE2DC: mov dword ptr [ebp + 0x21f3c], 0
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE2E6: pop ebp
        __asm _emit 0x5D
        // 0x587EE2E7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE2EA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE2ED: push ebx
        __asm _emit 0x53
        // 0x587EE2EE: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587EE2F0: mov dword ptr [ebp + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE2F6: mov dword ptr [ebp + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE2FC: mov dword ptr [ebp + 0x21c6c], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x6C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE302: mov dword ptr [ebp + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE308: mov dword ptr [ebp + 0xc4], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE30E: cmp dword ptr [ebp + 0x218e0], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE314: jne 0x587ee96e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE31A: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE31F: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587EE322: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EE324: je 0x587ee33b
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587EE326: test dword ptr [ebp + 0x10474], 0x20000300
        __asm _emit 0xF7
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587EE330: jne 0x587ee33b
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587EE332: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x83
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EE337: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE339: jne 0x587ee33d
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x587EE33B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587EE33D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE343: cmp dword ptr [ecx + 0x20d40], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE349: jne 0x587ee95f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE34F: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE355: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587EE359: shr al, 1
        __asm _emit 0xD0
        __asm _emit 0xE8
        // 0x587EE35B: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587EE35D: jne 0x587ee95f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE363: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587EE366: cmp eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x30
        // 0x587EE369: jbe 0x587ee554
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xE5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE36F: cmp eax, 0x39
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x39
        // 0x587EE372: jae 0x587ee554
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE378: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587EE37A: je 0x587ee554
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE380: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE386: lea esi, [eax - 0x31]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0xCF
        // 0x587EE389: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587EE38C: lea edx, [esi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE392: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587EE395: mov edi, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x587EE398: mov eax, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE39E: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587EE3A1: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587EE3A4: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EE3A8: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EE3AC: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x587EE3AF: jne 0x587ee3cd
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587EE3B1: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE3B7: mov ecx, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE3BD: cmp dword ptr [ecx + 0x118], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE3C3: jle 0x587ee3e6
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x587EE3C5: push esi
        __asm _emit 0x56
        // 0x587EE3C6: call 0x58861f40
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x3B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587EE3CB: jmp 0x587ee3e6
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x587EE3CD: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE3D2: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE3D8: cmp dword ptr [ecx + 0xf0], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE3DE: jle 0x587ee3e6
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x587EE3E0: push esi
        __asm _emit 0x56
        // 0x587EE3E1: call 0x588592c0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xAE
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587EE3E6: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587EE3E8: je 0x587ee96e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE3EE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EE3F0: cmp dword ptr [ebp + esi*4 + 0x98], ebx
        __asm _emit 0x39
        __asm _emit 0x9C
        __asm _emit 0xB5
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE3F7: mov ebx, 0x1390
        __asm _emit 0xBB
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE3FC: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x587EE3FF: mov edi, 0xd0
        __asm _emit 0xBF
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE404: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EE408: jmp 0x587ee410
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587EE410..0x587EE43D; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_587ee2c0_segment_01() {
    __asm {
        // 0x587EE410: mov dword ptr [edi + ebp - 0x38], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x2F
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE418: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE41E: mov eax, dword ptr [edx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE424: mov dword ptr [edi + eax], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE42B: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE431: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EE434: mov esi, dword ptr [ebx + edx]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x13
        // 0x587EE437: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587EE439: je 0x587ee453
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587EE43B: jmp 0x587ee440
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587EE440..0x587EE6F6; 694 mapped bytes.
extern "C" __declspec(naked) void FUN_587ee2c0_segment_02() {
    __asm {
        // 0x587EE440: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587EE443: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EE445: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EE447: call 0x5873b3b0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xCF
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EE44C: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587EE44F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587EE451: jne 0x587ee440
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587EE453: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587EE456: add ebx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x10
        // 0x587EE459: cmp edi, 0xf0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE45F: jl 0x587ee410
        __asm _emit 0x7C
        __asm _emit 0xAF
        // 0x587EE461: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EE465: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587EE468: call 0x5873a250
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xBD
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EE46D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE46F: je 0x587ee497
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587EE471: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EE475: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EE479: mov dword ptr [ebp + ecx*4 + 0x98], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE484: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587EE487: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EE489: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587EE48B: call 0x5873b3b0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xCF
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EE490: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587EE493: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587EE495: jne 0x587ee484
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587EE497: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587EE499: cmp dword ptr [esp + 0x14], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EE49D: je 0x587ee96e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCB
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE4A3: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EE4A7: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587EE4AA: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587EE4AD: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587EE4B0: mov edi, dword ptr [ebp + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EE4B6: mov eax, 0xfa000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587EE4BB: cdq
        __asm _emit 0x99
        // 0x587EE4BC: idiv dword ptr [edi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE4C2: cdq
        __asm _emit 0x99
        // 0x587EE4C3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587EE4C5: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587EE4C7: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587EE4C9: mov eax, 0xbb800
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587EE4CE: cdq
        __asm _emit 0x99
        // 0x587EE4CF: mov dword ptr [ebp + 0x1052c], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EE4D5: idiv dword ptr [edi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE4DB: cdq
        __asm _emit 0x99
        // 0x587EE4DC: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587EE4DF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EE4E1: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587EE4E4: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x587EE4E6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EE4E8: mov dword ptr [ebp + 0x10530], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EE4EE: jge 0x587ee4f8
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x587EE4F0: mov dword ptr [ebp + 0x1052c], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EE4F6: jmp 0x587ee515
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x587EE4F8: mov eax, 0xfa000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587EE4FD: cdq
        __asm _emit 0x99
        // 0x587EE4FE: idiv dword ptr [edi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE504: mov edx, 0x3200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE509: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587EE50B: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587EE50D: jle 0x587ee515
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x587EE50F: mov dword ptr [ebp + 0x1052c], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EE515: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x587EE517: jge 0x587ee529
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x587EE519: mov dword ptr [ebp + 0x10530], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EE51F: pop ebx
        __asm _emit 0x5B
        // 0x587EE520: pop edi
        __asm _emit 0x5F
        // 0x587EE521: pop esi
        __asm _emit 0x5E
        // 0x587EE522: pop ebp
        __asm _emit 0x5D
        // 0x587EE523: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE526: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE529: mov eax, 0xbb800
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587EE52E: cdq
        __asm _emit 0x99
        // 0x587EE52F: idiv dword ptr [edi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE535: mov ecx, 0x1900
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE53A: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587EE53C: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x587EE53E: jle 0x587ee96e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x2A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE544: pop ebx
        __asm _emit 0x5B
        // 0x587EE545: pop edi
        __asm _emit 0x5F
        // 0x587EE546: pop esi
        __asm _emit 0x5E
        // 0x587EE547: mov dword ptr [ebp + 0x10530], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EE54D: pop ebp
        __asm _emit 0x5D
        // 0x587EE54E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE551: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE554: mov ecx, dword ptr [0x58a2462c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x2C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE55A: push esi
        __asm _emit 0x56
        // 0x587EE55B: call 0x5889eac0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587EE560: lea ecx, [eax - 6]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0xFA
        // 0x587EE563: cmp ecx, 0x16
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x16
        // 0x587EE566: ja 0x587ee96e
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE56C: movzx ecx, byte ptr [ecx + 0x587ee990]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xE9
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587EE573: jmp dword ptr [ecx*4 + 0x587ee978]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0xE9
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587EE57A: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE580: call 0x5881e670
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587EE585: pop ebx
        __asm _emit 0x5B
        // 0x587EE586: pop edi
        __asm _emit 0x5F
        // 0x587EE587: pop esi
        __asm _emit 0x5E
        // 0x587EE588: pop ebp
        __asm _emit 0x5D
        // 0x587EE589: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE58C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE58F: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE595: mov ecx, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE59B: call 0x58896300
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x7D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587EE5A0: pop ebx
        __asm _emit 0x5B
        // 0x587EE5A1: pop edi
        __asm _emit 0x5F
        // 0x587EE5A2: pop esi
        __asm _emit 0x5E
        // 0x587EE5A3: pop ebp
        __asm _emit 0x5D
        // 0x587EE5A4: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE5A7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE5AA: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587EE5AC: je 0x587ee96e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE5B2: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE5B8: cmp dword ptr [ecx + 0x104f0], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587EE5BF: jne 0x587ee787
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE5C5: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587EE5C7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EE5C9: lea edx, [ebp + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE5CF: nop
        __asm _emit 0x90
        // 0x587EE5D0: cmp dword ptr [edx], ebx
        __asm _emit 0x39
        __asm _emit 0x1A
        // 0x587EE5D2: je 0x587ee5eb
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587EE5D4: mov esi, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE5DA: mov ebx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x587EE5DD: cmp dword ptr [ebx + ecx + 0x1398], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x0B
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE5E5: jne 0x587ee602
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587EE5E7: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587EE5E9: mov dword ptr [edx], ebx
        __asm _emit 0x89
        __asm _emit 0x1A
        // 0x587EE5EB: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x587EE5EE: inc edi
        __asm _emit 0x47
        // 0x587EE5EF: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587EE5F2: cmp ecx, 0x80
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE5F8: jl 0x587ee5d0
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x587EE5FA: mov esi, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE600: jmp 0x587ee604
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EE602: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587EE604: add eax, -0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xEC
        // 0x587EE607: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587EE60A: ja 0x587ee96e
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE610: jmp dword ptr [eax*4 + 0x587ee9a8]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0xE9
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587EE617: push ebx
        __asm _emit 0x53
        // 0x587EE618: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587EE61A: push ebx
        __asm _emit 0x53
        // 0x587EE61B: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587EE61D: call 0x587e9a10
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xB3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EE622: pop ebx
        __asm _emit 0x5B
        // 0x587EE623: pop edi
        __asm _emit 0x5F
        // 0x587EE624: pop esi
        __asm _emit 0x5E
        // 0x587EE625: pop ebp
        __asm _emit 0x5D
        // 0x587EE626: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE629: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE62C: push ebx
        __asm _emit 0x53
        // 0x587EE62D: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x587EE62F: push ebx
        __asm _emit 0x53
        // 0x587EE630: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587EE632: call 0x587e9a10
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xB3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EE637: pop ebx
        __asm _emit 0x5B
        // 0x587EE638: pop edi
        __asm _emit 0x5F
        // 0x587EE639: pop esi
        __asm _emit 0x5E
        // 0x587EE63A: pop ebp
        __asm _emit 0x5D
        // 0x587EE63B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE63E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE641: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587EE644: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE64A: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587EE64D: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587EE650: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x587EE653: jne 0x587ee670
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587EE655: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE65B: mov ecx, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE661: call 0x587e7ff0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x99
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EE666: pop ebx
        __asm _emit 0x5B
        // 0x587EE667: pop edi
        __asm _emit 0x5F
        // 0x587EE668: pop esi
        __asm _emit 0x5E
        // 0x587EE669: pop ebp
        __asm _emit 0x5D
        // 0x587EE66A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE66D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE670: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE675: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE67B: call 0x587e7f70
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x98
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EE680: pop ebx
        __asm _emit 0x5B
        // 0x587EE681: pop edi
        __asm _emit 0x5F
        // 0x587EE682: pop esi
        __asm _emit 0x5E
        // 0x587EE683: pop ebp
        __asm _emit 0x5D
        // 0x587EE684: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE687: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE68A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EE68C: cmp dword ptr [ebp + 0xc0], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE692: mov dword ptr [ebp + 0xc4], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE698: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x587EE69B: pop ebx
        __asm _emit 0x5B
        // 0x587EE69C: pop edi
        __asm _emit 0x5F
        // 0x587EE69D: pop esi
        __asm _emit 0x5E
        // 0x587EE69E: mov dword ptr [ebp + 0xc0], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE6A4: pop ebp
        __asm _emit 0x5D
        // 0x587EE6A5: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE6A8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE6AB: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x587EE6AE: je 0x587ee96e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE6B4: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587EE6B7: lea eax, [edi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE6BD: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x587EE6C0: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587EE6C3: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x587EE6C6: movzx edx, word ptr [edx + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE6CD: cmp dword ptr [ecx + 0x63bc], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xBC
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE6D3: je 0x587ee72c
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x587EE6D5: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587EE6D9: jne 0x587ee72c
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x587EE6DB: cmp byte ptr [ebp + 0x218d9], 2
        __asm _emit 0x80
        __asm _emit 0xBD
        __asm _emit 0xD9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587EE6E2: jne 0x587ee772
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE6E8: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x08
        // 0x587EE6EB: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE6F0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EE6F2: je 0x587ee772
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x587EE6F4: jmp 0x587ee700
        __asm _emit 0xEB
        __asm _emit 0x0A
    }
}

// Ghidra body range 0x587EE700..0x587EE978; 632 mapped bytes.
extern "C" __declspec(naked) void FUN_587ee2c0_segment_03() {
    __asm {
        // 0x587EE700: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EE703: mov edx, dword ptr [edx + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE709: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587EE70E: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587EE710: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587EE713: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587EE715: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587EE718: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EE71A: cmp eax, 0x12c
        __asm _emit 0x3D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE71F: jge 0x587ee723
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587EE721: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587EE723: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x587EE726: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EE728: jne 0x587ee700
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x587EE72A: jmp 0x587ee76a
        __asm _emit 0xEB
        __asm _emit 0x3E
        // 0x587EE72C: cmp dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x587EE730: jne 0x587ee772
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x587EE732: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x08
        // 0x587EE735: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE73A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EE73C: je 0x587ee772
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x587EE73E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587EE740: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EE743: mov edx, dword ptr [edx + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE749: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587EE74E: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587EE750: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587EE753: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587EE755: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587EE758: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EE75A: cmp eax, 0x12c
        __asm _emit 0x3D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE75F: jge 0x587ee763
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587EE761: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587EE763: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x587EE766: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EE768: jne 0x587ee740
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x587EE76A: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587EE76C: je 0x587ee96e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE772: push ebx
        __asm _emit 0x53
        // 0x587EE773: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x587EE775: push ebx
        __asm _emit 0x53
        // 0x587EE776: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587EE778: call 0x587e9a10
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EE77D: pop ebx
        __asm _emit 0x5B
        // 0x587EE77E: pop edi
        __asm _emit 0x5F
        // 0x587EE77F: pop esi
        __asm _emit 0x5E
        // 0x587EE780: pop ebp
        __asm _emit 0x5D
        // 0x587EE781: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE784: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE787: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EE78D: mov ecx, dword ptr [0x58a28348]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE793: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587EE795: add ecx, 0x7d0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE79B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587EE79D: jae 0x587ee7c7
        __asm _emit 0x73
        __asm _emit 0x28
        // 0x587EE79F: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE7A5: mov esi, dword ptr [edx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE7AB: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE7B0: push ebx
        __asm _emit 0x53
        // 0x587EE7B1: push 0x5899c1d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE7B6: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EE7BC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EE7BF: push eax
        __asm _emit 0x50
        // 0x587EE7C0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587EE7C2: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xC3
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587EE7C7: pop ebx
        __asm _emit 0x5B
        // 0x587EE7C8: mov dword ptr [0x58a28348], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x48
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE7CE: pop edi
        __asm _emit 0x5F
        // 0x587EE7CF: pop esi
        __asm _emit 0x5E
        // 0x587EE7D0: pop ebp
        __asm _emit 0x5D
        // 0x587EE7D1: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE7D4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE7D7: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE7DC: cmp dword ptr [eax + 0x104f0], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587EE7E3: jne 0x587ee8fc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE7E9: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE7EF: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587EE7F2: mov ecx, dword ptr [eax + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE7F8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EE7FA: jne 0x587ee861
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x587EE7FC: cmp word ptr [eax + 0x164], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE803: jbe 0x587ee861
        __asm _emit 0x76
        __asm _emit 0x5C
        // 0x587EE805: mov edx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE80B: mov dx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587EE80F: mov esi, 0x3e0
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE814: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD6
        // 0x587EE817: mov esi, 0x160
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE81C: cmp dx, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x587EE81F: je 0x587ee861
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587EE821: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE826: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EE82C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587EE82E: cmp si, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587EE832: jne 0x587ee8b0
        __asm _emit 0x75
        __asm _emit 0x7C
        // 0x587EE834: mov ecx, dword ptr [0x58a28344]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x44
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE83A: add ecx, 0x7d0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE840: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587EE842: jae 0x587ee8ec
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE848: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE84E: mov esi, dword ptr [edx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE854: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE859: push ebx
        __asm _emit 0x53
        // 0x587EE85A: push 0x5899c1ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE85F: jmp 0x587ee8db
        __asm _emit 0xEB
        __asm _emit 0x7A
        // 0x587EE861: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x587EE864: jne 0x587ee893
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x587EE866: cmp word ptr [eax + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587EE86E: jbe 0x587ee893
        __asm _emit 0x76
        __asm _emit 0x23
        // 0x587EE870: mov eax, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE876: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587EE87A: mov edx, 0x3e0
        __asm _emit 0xBA
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE87F: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587EE882: mov eax, 0x160
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE887: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587EE88A: je 0x587ee893
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587EE88C: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE891: jmp 0x587ee826
        __asm _emit 0xEB
        __asm _emit 0x93
        // 0x587EE893: cmp dword ptr [ebp + 0x20d40], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE899: jne 0x587ee96e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE89F: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587EE8A1: call 0x587eae10
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EE8A6: pop ebx
        __asm _emit 0x5B
        // 0x587EE8A7: pop edi
        __asm _emit 0x5F
        // 0x587EE8A8: pop esi
        __asm _emit 0x5E
        // 0x587EE8A9: pop ebp
        __asm _emit 0x5D
        // 0x587EE8AA: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE8AD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE8B0: cmp si, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587EE8B4: jne 0x587ee8ec
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x587EE8B6: mov eax, dword ptr [0x58a28344]
        __asm _emit 0xA1
        __asm _emit 0x44
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE8BB: add eax, 0x7d0
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE8C0: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587EE8C2: jae 0x587ee8ec
        __asm _emit 0x73
        __asm _emit 0x28
        // 0x587EE8C4: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE8CA: mov esi, dword ptr [ecx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE8D0: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE8D5: push ebx
        __asm _emit 0x53
        // 0x587EE8D6: push 0x5899c180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE8DB: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EE8E1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EE8E4: push eax
        __asm _emit 0x50
        // 0x587EE8E5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587EE8E7: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xC2
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587EE8EC: pop ebx
        __asm _emit 0x5B
        // 0x587EE8ED: mov dword ptr [0x58a28344], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x44
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE8F3: pop edi
        __asm _emit 0x5F
        // 0x587EE8F4: pop esi
        __asm _emit 0x5E
        // 0x587EE8F5: pop ebp
        __asm _emit 0x5D
        // 0x587EE8F6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE8F9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE8FC: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EE902: mov edx, dword ptr [0x58a28340]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE908: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587EE90A: add edx, 0x7d0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE910: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x587EE912: jae 0x587ee93b
        __asm _emit 0x73
        __asm _emit 0x27
        // 0x587EE914: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE919: mov esi, dword ptr [eax + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE91F: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE924: push ebx
        __asm _emit 0x53
        // 0x587EE925: push 0x5899c15c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE92A: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EE930: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EE933: push eax
        __asm _emit 0x50
        // 0x587EE934: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587EE936: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xC2
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587EE93B: pop ebx
        __asm _emit 0x5B
        // 0x587EE93C: mov dword ptr [0x58a28340], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x40
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE942: pop edi
        __asm _emit 0x5F
        // 0x587EE943: pop esi
        __asm _emit 0x5E
        // 0x587EE944: pop ebp
        __asm _emit 0x5D
        // 0x587EE945: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE948: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE94B: pop ebx
        __asm _emit 0x5B
        // 0x587EE94C: pop edi
        __asm _emit 0x5F
        // 0x587EE94D: pop esi
        __asm _emit 0x5E
        // 0x587EE94E: mov dword ptr [ebp + 0x218ec], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE958: pop ebp
        __asm _emit 0x5D
        // 0x587EE959: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE95C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE95F: mov ebp, dword ptr [ebp + 0x21d24]
        __asm _emit 0x8B
        __asm _emit 0xAD
        __asm _emit 0x24
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE965: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE96A: and word ptr [ebp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x587EE96E: pop ebx
        __asm _emit 0x5B
        // 0x587EE96F: pop edi
        __asm _emit 0x5F
        // 0x587EE970: pop esi
        __asm _emit 0x5E
        // 0x587EE971: pop ebp
        __asm _emit 0x5D
        // 0x587EE972: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EE975: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
