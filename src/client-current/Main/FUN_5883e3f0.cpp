// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5883E3F0 .. +0x3B5 bytes.
// Source symbol alias: FUN_5883e3f0.
extern "C" __declspec(naked) void FUN_5883e3f0() {
    __asm {
        // 0x5883E3F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5883E3F2: push 0x589847bf
        __asm _emit 0x68
        __asm _emit 0xBF
        __asm _emit 0x47
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883E3F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E3FD: push eax
        __asm _emit 0x50
        // 0x5883E3FE: push ecx
        __asm _emit 0x51
        // 0x5883E3FF: push ebx
        __asm _emit 0x53
        // 0x5883E400: push ebp
        __asm _emit 0x55
        // 0x5883E401: push esi
        __asm _emit 0x56
        // 0x5883E402: push edi
        __asm _emit 0x57
        // 0x5883E403: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5883E408: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5883E40A: push eax
        __asm _emit 0x50
        // 0x5883E40B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883E40F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E415: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883E417: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883E41B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883E41F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5883E423: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5883E427: push eax
        __asm _emit 0x50
        // 0x5883E428: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5883E42C: push ecx
        __asm _emit 0x51
        // 0x5883E42D: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5883E431: push edx
        __asm _emit 0x52
        // 0x5883E432: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5883E436: push eax
        __asm _emit 0x50
        // 0x5883E437: push ecx
        __asm _emit 0x51
        // 0x5883E438: push edx
        __asm _emit 0x52
        // 0x5883E439: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883E43B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x4D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883E440: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883E446: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5883E44B: mov dword ptr [esi], 0x5899e358
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x58
        __asm _emit 0xE3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883E451: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883E456: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5883E459: mov ebp, 0x78
        __asm _emit 0xBD
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E45E: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E466: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5883E469: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883E46D: mov ebx, 0x1e0
        __asm _emit 0xBB
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E472: mov dword ptr [esp + 0x38], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E47A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E480: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5883E482: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xE7
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883E487: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5883E489: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883E48C: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5883E490: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5883E495: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883E497: je 0x5883e50a
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x5883E499: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5883E49C: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E4A2: jle 0x5883e4b7
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5883E4A4: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5883E4A6: jl 0x5883e4b7
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x5883E4A8: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E4AE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883E4B0: je 0x5883e4b7
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5883E4B2: mov ebp, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x03
        // 0x5883E4B5: jmp 0x5883e4b9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883E4B7: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5883E4B9: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5883E4BD: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883E4C1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5883E4C3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883E4C5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883E4C7: push ecx
        __asm _emit 0x51
        // 0x5883E4C8: push edx
        __asm _emit 0x52
        // 0x5883E4C9: push esi
        __asm _emit 0x56
        // 0x5883E4CA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5883E4CC: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x4C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883E4D1: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883E4D7: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5883E4DA: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5883E4DC: je 0x5883e504
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5883E4DE: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5883E4E1: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5883E4E4: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5883E4E7: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5883E4EA: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5883E4ED: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883E4EF: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5883E4F2: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5883E4F5: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5883E4F8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5883E4FB: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5883E4FE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5883E501: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5883E504: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883E508: jmp 0x5883e50c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883E50A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883E50C: mov dword ptr [esi + ebx - 0x18c], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x1E
        __asm _emit 0x74
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883E513: inc ebp
        __asm _emit 0x45
        // 0x5883E514: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5883E517: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x5883E51C: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5883E521: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883E525: jne 0x5883e480
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883E52B: mov ebp, 0x7a
        __asm _emit 0xBD
        __asm _emit 0x7A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E530: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883E534: mov ebx, 0x1e8
        __asm _emit 0xBB
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E539: mov dword ptr [esp + 0x38], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E541: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5883E543: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xE7
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883E548: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5883E54A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883E54D: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5883E551: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5883E556: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883E558: je 0x5883e5cb
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x5883E55A: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5883E55D: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E563: jle 0x5883e578
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5883E565: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5883E567: jl 0x5883e578
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x5883E569: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E56F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883E571: je 0x5883e578
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5883E573: mov ebp, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x03
        // 0x5883E576: jmp 0x5883e57a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883E578: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5883E57A: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5883E57E: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883E582: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5883E584: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883E586: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883E588: push ecx
        __asm _emit 0x51
        // 0x5883E589: push edx
        __asm _emit 0x52
        // 0x5883E58A: push esi
        __asm _emit 0x56
        // 0x5883E58B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5883E58D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x4C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883E592: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883E598: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5883E59B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5883E59D: je 0x5883e5c5
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5883E59F: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5883E5A2: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5883E5A5: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5883E5A8: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5883E5AB: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5883E5AE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883E5B0: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5883E5B3: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5883E5B6: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5883E5B9: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5883E5BC: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5883E5BF: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5883E5C2: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5883E5C5: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883E5C9: jmp 0x5883e5cd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883E5CB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883E5CD: mov dword ptr [ebx + esi - 0x18c], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x33
        __asm _emit 0x74
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883E5D4: inc ebp
        __asm _emit 0x45
        // 0x5883E5D5: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5883E5D8: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x5883E5DD: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5883E5E2: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883E5E6: jne 0x5883e541
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883E5EC: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E5F1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xE6
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883E5F6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883E5F9: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883E5FD: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5883E601: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883E605: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5883E60A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883E60C: je 0x5883e63b
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5883E60E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883E610: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883E615: lea ecx, [edi + 0x47]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x47
        // 0x5883E618: push ecx
        __asm _emit 0x51
        // 0x5883E619: lea edx, [ebx + 0xae]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E61F: push edx
        __asm _emit 0x52
        // 0x5883E620: lea ecx, [edi + 0x35]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x35
        // 0x5883E623: push ecx
        __asm _emit 0x51
        // 0x5883E624: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883E62A: lea edx, [ebx + 0x23]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x23
        // 0x5883E62D: push edx
        __asm _emit 0x52
        // 0x5883E62E: push ecx
        __asm _emit 0x51
        // 0x5883E62F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883E631: push esi
        __asm _emit 0x56
        // 0x5883E632: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883E634: call 0x5890a5b0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xBF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883E639: jmp 0x5883e63d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883E63B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883E63D: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E642: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5883E647: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5883E64A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883E64F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883E652: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883E656: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5883E65B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883E65D: je 0x5883e6a5
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5883E65F: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5883E662: cmp dword ptr [ecx + 0x160], 0x18
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        // 0x5883E669: jle 0x5883e67d
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883E66B: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E671: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883E673: je 0x5883e67d
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5883E675: add ecx, 0x600
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E67B: jmp 0x5883e67f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883E67D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5883E67F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5883E681: lea edx, [edi + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x50
        // 0x5883E684: push edx
        __asm _emit 0x52
        // 0x5883E685: lea edx, [ebx + 0x82]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E68B: push edx
        __asm _emit 0x52
        // 0x5883E68C: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883E692: push ecx
        __asm _emit 0x51
        // 0x5883E693: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883E699: push esi
        __asm _emit 0x56
        // 0x5883E69A: push ecx
        __asm _emit 0x51
        // 0x5883E69B: push edx
        __asm _emit 0x52
        // 0x5883E69C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883E69E: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xF6
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5883E6A3: jmp 0x5883e6a7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883E6A5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883E6A7: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E6AC: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5883E6B1: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5883E6B4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xE5
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883E6B9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883E6BC: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883E6C0: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5883E6C5: mov ebp, 0x17
        __asm _emit 0xBD
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E6CA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883E6CC: je 0x5883e713
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x5883E6CE: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5883E6D1: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E6D7: jle 0x5883e6eb
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883E6D9: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E6DF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883E6E1: je 0x5883e6eb
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5883E6E3: add ecx, 0x5c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E6E9: jmp 0x5883e6ed
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883E6EB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5883E6ED: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883E6F3: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5883E6F5: add edi, 0x50
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x50
        // 0x5883E6F8: push edi
        __asm _emit 0x57
        // 0x5883E6F9: add ebx, 0xaf
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E6FF: push ebx
        __asm _emit 0x53
        // 0x5883E700: push ecx
        __asm _emit 0x51
        // 0x5883E701: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883E707: push esi
        __asm _emit 0x56
        // 0x5883E708: push ecx
        __asm _emit 0x51
        // 0x5883E709: push edx
        __asm _emit 0x52
        // 0x5883E70A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883E70C: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xF6
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5883E711: jmp 0x5883e715
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883E713: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883E715: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5883E718: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883E71D: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5883E722: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5883E725: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883E72A: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5883E72D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883E732: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883E737: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5883E73A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883E73C: push edi
        __asm _emit 0x57
        // 0x5883E73D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883E742: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5883E745: push edi
        __asm _emit 0x57
        // 0x5883E746: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883E74B: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5883E74E: push edi
        __asm _emit 0x57
        // 0x5883E74F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883E754: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5883E757: push edi
        __asm _emit 0x57
        // 0x5883E758: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883E75D: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5883E760: mov dword ptr [eax + 0x8c], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E766: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5883E76A: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E76F: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5883E772: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E777: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5883E77A: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x5883E77D: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5883E780: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5883E784: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E789: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5883E78D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5883E78F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883E793: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883E79A: pop ecx
        __asm _emit 0x59
        // 0x5883E79B: pop edi
        __asm _emit 0x5F
        // 0x5883E79C: pop esi
        __asm _emit 0x5E
        // 0x5883E79D: pop ebp
        __asm _emit 0x5D
        // 0x5883E79E: pop ebx
        __asm _emit 0x5B
        // 0x5883E79F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5883E7A2: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
