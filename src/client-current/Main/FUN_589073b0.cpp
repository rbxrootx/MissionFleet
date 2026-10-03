// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589073B0 .. +0x1FE bytes.
extern "C" __declspec(naked) void FUN_589073b0() {
    __asm {
        // 0x589073B0: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x589073B3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x589073B8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x589073BA: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x589073BE: push esi
        __asm _emit 0x56
        // 0x589073BF: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589073C1: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x589073C5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589073C7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589073C9: je 0x5890759c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589073CF: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x589073D3: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589073D7: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589073DB: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589073DF: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x589073E2: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589073E6: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589073EA: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589073EE: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589073F2: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589073F6: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x589073FA: mov eax, dword ptr [0x58a28534]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x589073FF: push edi
        __asm _emit 0x57
        // 0x58907400: mov dword ptr [esp + 8], 0x24
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907408: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890740C: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58907410: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907412: je 0x5890752a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907418: cmp byte ptr [0x58a2851c], 0
        __asm _emit 0x80
        __asm _emit 0x3D
        __asm _emit 0x1C
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5890741F: je 0x589074be
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907425: cmp word ptr [ecx + 2], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x01
        // 0x5890742A: jne 0x589074be
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907430: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58907434: mov edx, dword ptr [0x589a3cb8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB8
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890743A: or ecx, 0x18110
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x10
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58907440: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58907444: mov ecx, dword ptr [0x589a3cbc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890744A: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890744E: mov ecx, dword ptr [0x589a3cc4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58907454: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58907458: mov edx, dword ptr [0x589a3cc0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890745E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58907460: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58907464: lea edi, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58907467: push edi
        __asm _emit 0x57
        // 0x58907468: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890746C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5890746E: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x58907471: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58907475: push ecx
        __asm _emit 0x51
        // 0x58907476: push eax
        __asm _emit 0x50
        // 0x58907477: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58907479: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890747B: jl 0x58907599
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907481: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58907483: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907485: je 0x5890755e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890748B: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890748D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890748F: lea edi, [esi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58907492: push edi
        __asm _emit 0x57
        // 0x58907493: push 0x589a3cd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58907498: push eax
        __asm _emit 0x50
        // 0x58907499: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890749B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890749D: jge 0x5890755e
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589074A3: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589074A9: pop edi
        __asm _emit 0x5F
        // 0x589074AA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589074AC: pop esi
        __asm _emit 0x5E
        // 0x589074AD: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x589074B1: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x589074B3: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589074B8: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x589074BB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x589074BE: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x589074C2: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589074C9: mov ecx, dword ptr [0x589a2ee4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589074CF: mov edx, dword ptr [0x589a2ee8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589074D5: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589074D9: mov ecx, dword ptr [0x589a2ef0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589074DF: or eax, 0x181c0
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x589074E4: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589074E8: mov eax, dword ptr [0x589a2eec]
        __asm _emit 0xA1
        __asm _emit 0xEC
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589074ED: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x589074F1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589074F3: lea ecx, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x589074F6: push ecx
        __asm _emit 0x51
        // 0x589074F7: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x589074FB: mov eax, dword ptr [0x58a28534]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58907500: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58907504: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58907506: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x58907509: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890750D: push ecx
        __asm _emit 0x51
        // 0x5890750E: push eax
        __asm _emit 0x50
        // 0x5890750F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58907511: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907513: jge 0x5890755e
        __asm _emit 0x7D
        __asm _emit 0x49
        // 0x58907515: pop edi
        __asm _emit 0x5F
        // 0x58907516: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58907518: pop esi
        __asm _emit 0x5E
        // 0x58907519: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890751D: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5890751F: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58907524: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x58907527: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5890752A: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5890752E: or eax, 0x181c0
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58907533: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890753A: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890753E: mov eax, dword ptr [0x58a28538]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58907543: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907545: je 0x5890755e
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58907547: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58907549: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890754B: lea edx, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5890754E: push edx
        __asm _emit 0x52
        // 0x5890754F: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58907553: push edx
        __asm _emit 0x52
        // 0x58907554: push eax
        __asm _emit 0x50
        // 0x58907555: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58907558: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890755A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890755C: jl 0x58907599
        __asm _emit 0x7C
        __asm _emit 0x3B
        // 0x5890755E: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58907561: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907563: je 0x58907599
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58907565: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x58907568: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890756A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890756C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890756E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58907570: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58907572: lea edi, [esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58907575: push edi
        __asm _emit 0x57
        // 0x58907576: push edx
        __asm _emit 0x52
        // 0x58907577: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58907579: push eax
        __asm _emit 0x50
        // 0x5890757A: mov eax, dword ptr [ecx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x2C
        // 0x5890757D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890757F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907581: jl 0x58907599
        __asm _emit 0x7C
        __asm _emit 0x16
        // 0x58907583: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x58907586: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58907589: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890758B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890758D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890758F: push edx
        __asm _emit 0x52
        // 0x58907590: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58907592: push edx
        __asm _emit 0x52
        // 0x58907593: push eax
        __asm _emit 0x50
        // 0x58907594: mov eax, dword ptr [ecx + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x4C
        // 0x58907597: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58907599: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890759B: pop edi
        __asm _emit 0x5F
        // 0x5890759C: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x589075A0: pop esi
        __asm _emit 0x5E
        // 0x589075A1: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x589075A3: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589075A8: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x589075AB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
