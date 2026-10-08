// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1485 bytes in 2 exact ranges.
// Source symbol alias: FUN_58871290.

// Ghidra body range 0x58871290..0x588716A8; 1048 mapped bytes.
extern "C" __declspec(naked) void FUN_58871290_segment_00() {
    __asm {
        // 0x58871290: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58871293: push ebx
        __asm _emit 0x53
        // 0x58871294: push esi
        __asm _emit 0x56
        // 0x58871295: push edi
        __asm _emit 0x57
        // 0x58871296: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58871298: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887129E: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588712A2: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588712A4: lea eax, [ecx + 0x2f4]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588712AA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588712B0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588712B2: cmp dword ptr [edx + 0x94], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588712B9: jne 0x588712c9
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588712BB: inc esi
        __asm _emit 0x46
        // 0x588712BC: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588712BF: cmp esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x20
        // 0x588712C2: jl 0x588712b0
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x588712C4: jmp 0x588717ef
        __asm _emit 0xE9
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588712C9: mov eax, dword ptr [ecx + esi*4 + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588712D0: mov dword ptr [eax + 0x94], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588712DA: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588712E0: mov ebx, dword ptr [ecx + esi*4 + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0xB1
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588712E7: movzx eax, word ptr [ebx + 0xae]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588712EE: add ebx, 0xa0
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588712F4: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588712F7: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588712F9: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x588712FC: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588712FE: mov eax, dword ptr [ebx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x54
        // 0x58871301: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x58871303: lea ecx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD0
        // 0x58871306: imul ecx, ecx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887130C: mov eax, dword ptr [ecx + 0x589cfd7c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58871312: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58871318: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887131E: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58871322: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58871326: jle 0x58871340
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58871328: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887132A: jl 0x58871340
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5887132C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871333: je 0x58871340
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58871335: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x58871338: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887133E: jmp 0x58871342
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58871340: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58871342: mov ecx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x58871345: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x58871348: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887134A: je 0x58871374
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5887134C: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5887134F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58871352: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x58871355: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58871358: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5887135B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5887135D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58871360: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58871362: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58871365: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58871368: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5887136B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5887136E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58871371: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58871374: movzx eax, word ptr [ebx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x0E
        // 0x58871378: mov edx, dword ptr [ebx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x54
        // 0x5887137B: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5887137E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58871380: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58871383: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58871385: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58871387: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x5887138A: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871390: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58871396: cmp eax, 0x4b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4B
        // 0x58871399: jge 0x588713c6
        __asm _emit 0x7D
        __asm _emit 0x2B
        // 0x5887139B: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588713A1: add eax, 0x20f
        __asm _emit 0x05
        __asm _emit 0x0F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588713A6: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588713AC: jle 0x588713ef
        __asm _emit 0x7E
        __asm _emit 0x41
        // 0x588713AE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588713B0: jl 0x588713ef
        __asm _emit 0x7C
        __asm _emit 0x3D
        // 0x588713B2: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588713B9: je 0x588713ef
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588713BB: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588713C1: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588713C4: jmp 0x588713f1
        __asm _emit 0xEB
        __asm _emit 0x2B
        // 0x588713C6: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588713CC: add eax, -0x4b
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xB5
        // 0x588713CF: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588713D5: jle 0x588713ef
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588713D7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588713D9: jl 0x588713ef
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588713DB: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588713E2: je 0x588713ef
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588713E4: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588713EA: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588713ED: jmp 0x588713f1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588713EF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588713F1: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x588713F4: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588713F7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588713F9: je 0x58871424
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588713FB: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588713FE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58871401: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58871404: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58871407: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5887140A: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5887140D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58871410: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58871412: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58871415: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58871418: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5887141B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5887141E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58871421: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58871424: push ebp
        __asm _emit 0x55
        // 0x58871425: lea ecx, [ebx + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887142B: push ecx
        __asm _emit 0x51
        // 0x5887142C: mov ecx, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x7C
        // 0x5887142F: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x08
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58871434: movzx edx, word ptr [ebx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x53
        __asm _emit 0x0E
        // 0x58871438: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887143E: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x58871441: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871447: push edx
        __asm _emit 0x52
        // 0x58871448: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x5F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5887144D: movzx eax, word ptr [ebx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x0E
        // 0x58871451: mov ecx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871457: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5887145A: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887145F: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x58871461: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58871464: test dword ptr [ebx + 0x64], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x43
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x5887146B: je 0x58871542
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871471: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58871473: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58871479: push edx
        __asm _emit 0x52
        // 0x5887147A: call 0x588f4090
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887147F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58871481: call 0x58779a40
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58871486: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58871488: jne 0x5887151e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887148E: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58871493: cmp dword ptr [eax + 0x164], 0x14
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        // 0x5887149A: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887149E: jle 0x588714b4
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588714A0: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588714A7: je 0x588714b4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588714A9: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588714AF: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x588714B2: jmp 0x588714b6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588714B4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588714B6: mov ecx, dword ptr [edi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588714BC: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588714BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588714C1: je 0x588714eb
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588714C3: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588714C6: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588714C9: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588714CC: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588714CF: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588714D2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588714D4: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588714D7: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588714D9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588714DC: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588714DF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588714E2: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588714E5: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588714E8: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588714EB: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x588714EE: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588714F1: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x588714F4: push ecx
        __asm _emit 0x51
        // 0x588714F5: mov ecx, dword ptr [edi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588714FB: add edx, 0xd9
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871501: push edx
        __asm _emit 0x52
        // 0x58871502: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871507: mov eax, dword ptr [edi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887150D: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58871511: push ebx
        __asm _emit 0x53
        // 0x58871512: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58871514: call 0x58870190
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58871519: jmp 0x58871603
        __asm _emit 0xE9
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887151E: mov eax, dword ptr [edi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871524: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871529: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5887152D: push ebx
        __asm _emit 0x53
        // 0x5887152E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58871530: mov dword ptr [esp + 0x14], 0xb
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871538: call 0x588702b0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887153D: jmp 0x588715ff
        __asm _emit 0xE9
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871542: push ebx
        __asm _emit 0x53
        // 0x58871543: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58871545: mov dword ptr [esp + 0x14], 0xb
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887154D: call 0x588702b0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58871552: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58871554: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887155A: push edx
        __asm _emit 0x52
        // 0x5887155B: call 0x588f4090
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x2B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58871560: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58871562: call 0x58779b80
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58871567: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58871569: jne 0x588715f0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887156F: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58871574: cmp dword ptr [eax + 0x164], 0x15
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x5887157B: jle 0x58871591
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5887157D: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871584: je 0x58871591
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58871586: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887158C: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5887158F: jmp 0x58871593
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58871591: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58871593: mov ecx, dword ptr [edi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871599: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5887159C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887159E: je 0x588715c8
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588715A0: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588715A3: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588715A6: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588715A9: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588715AC: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588715AF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588715B1: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588715B4: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588715B6: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588715B9: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588715BC: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588715BF: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588715C2: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588715C5: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588715C8: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x588715CB: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588715CE: add ecx, 0x5c
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x5C
        // 0x588715D1: push ecx
        __asm _emit 0x51
        // 0x588715D2: mov ecx, dword ptr [edi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588715D8: add edx, 0xde
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588715DE: push edx
        __asm _emit 0x52
        // 0x588715DF: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588715E4: mov eax, dword ptr [edi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588715EA: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588715EE: jmp 0x588715ff
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x588715F0: mov eax, dword ptr [edi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588715F6: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588715FB: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588715FF: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58871603: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58871605: jle 0x588717a2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887160B: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887160F: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58871611: lea ebp, [edi + 0x110]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871617: lea ebx, [edi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887161D: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58871621: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58871624: lea ecx, [eax + esi + 0x4e]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x30
        __asm _emit 0x4E
        // 0x58871628: push ecx
        __asm _emit 0x51
        // 0x58871629: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5887162C: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871631: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x58871634: mov ecx, dword ptr [ebx - 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0xFC
        // 0x58871637: lea eax, [edx + esi + 0x4e]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x4E
        // 0x5887163B: push eax
        __asm _emit 0x50
        // 0x5887163C: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871641: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58871644: lea edx, [ecx + esi + 0x4e]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x31
        __asm _emit 0x4E
        // 0x58871648: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5887164A: push edx
        __asm _emit 0x52
        // 0x5887164B: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871650: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58871653: lea ecx, [eax + esi + 0x53]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x30
        __asm _emit 0x53
        // 0x58871657: push ecx
        __asm _emit 0x51
        // 0x58871658: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5887165B: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871660: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58871663: add ebx, 8
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x08
        // 0x58871666: add esi, 0xe
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0E
        // 0x58871669: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x5887166E: jne 0x58871621
        __asm _emit 0x75
        __asm _emit 0xB1
        // 0x58871670: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58871674: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58871678: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5887167C: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5887167E: jle 0x588717a2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871684: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58871688: lea edx, [ebx + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x2C
        // 0x5887168B: add ebx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x14
        // 0x5887168E: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58871692: lea ebp, [edi + 0x110]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871698: lea esi, [edi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887169E: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588716A2: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588716A6: jmp 0x588716b0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x588716B0..0x58871865; 437 mapped bytes.
extern "C" __declspec(naked) void FUN_58871290_segment_01() {
    __asm {
        // 0x588716B0: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588716B4: test byte ptr [ecx + 0x174], 1
        __asm _emit 0xF6
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588716BB: je 0x5887171d
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x588716BD: movzx ecx, word ptr [ebx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0B
        // 0x588716C0: imul ecx, ecx, 0xb
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x0B
        // 0x588716C3: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x588716C8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588716CA: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x588716CC: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588716CE: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x588716D1: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x588716D3: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588716D7: movsx ecx, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x0A
        // 0x588716DA: imul ecx, ecx, 0xb
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x0B
        // 0x588716DD: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x588716E2: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588716E4: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xFC
        // 0x588716E7: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x588716E9: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x588716EB: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588716EE: push edi
        __asm _emit 0x57
        // 0x588716EF: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x588716F1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x5C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588716F6: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588716F8: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588716FA: cdq
        __asm _emit 0x99
        // 0x588716FB: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588716FD: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588716FF: push eax
        __asm _emit 0x50
        // 0x58871700: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x5C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871705: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58871708: push 0x9f6
        __asm _emit 0x68
        __asm _emit 0xF6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887170D: push edi
        __asm _emit 0x57
        // 0x5887170E: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xD0
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58871713: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58871717: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5887171B: jmp 0x5887175f
        __asm _emit 0xEB
        __asm _emit 0x42
        // 0x5887171D: movzx eax, word ptr [ebx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x03
        // 0x58871720: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xFC
        // 0x58871723: push eax
        __asm _emit 0x50
        // 0x58871724: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x5C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871729: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5887172D: movsx eax, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x01
        // 0x58871730: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58871732: cdq
        __asm _emit 0x99
        // 0x58871733: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58871735: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58871737: push eax
        __asm _emit 0x50
        // 0x58871738: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x5C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5887173D: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58871741: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x58871744: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58871746: cmp byte ptr [eax], dl
        __asm _emit 0x38
        __asm _emit 0x10
        // 0x58871748: push 0x9f6
        __asm _emit 0x68
        __asm _emit 0xF6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887174D: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x58871750: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x58871753: movzx edx, word ptr [ebx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x13
        // 0x58871756: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58871759: push edx
        __asm _emit 0x52
        // 0x5887175A: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xD0
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5887175F: mov eax, dword ptr [ebp - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xD4
        // 0x58871762: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871767: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5887176B: mov eax, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xFC
        // 0x5887176E: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58871772: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58871774: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58871778: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5887177B: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5887177F: add dword ptr [esp + 0x14], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58871783: add ebx, 2
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x02
        // 0x58871786: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58871789: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x5887178C: sub dword ptr [esp + 0x24], ecx
        __asm _emit 0x29
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58871790: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58871794: jne 0x588716b0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887179A: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887179E: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588717A2: cmp ebp, 0xb
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0B
        // 0x588717A5: jge 0x588717ee
        __asm _emit 0x7D
        __asm _emit 0x47
        // 0x588717A7: mov esi, 0xb
        __asm _emit 0xBE
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588717AC: lea eax, [edi + ebp*4 + 0x110]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588717B3: lea ecx, [edi + ebp*8 + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0xEF
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588717BA: sub esi, ebp
        __asm _emit 0x2B
        __asm _emit 0xF5
        // 0x588717BC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588717C0: mov edx, dword ptr [eax - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xD4
        // 0x588717C3: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588717C8: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x588717CC: mov edx, dword ptr [ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0xFC
        // 0x588717CF: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x588717D3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588717D5: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x588717D9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588717DB: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x588717DF: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588717E2: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x588717E5: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588717E8: jne 0x588717c0
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x588717EA: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588717EE: pop ebp
        __asm _emit 0x5D
        // 0x588717EF: cmp esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x20
        // 0x588717F2: jne 0x5887185e
        __asm _emit 0x75
        __asm _emit 0x6A
        // 0x588717F4: mov eax, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x7C
        // 0x588717F7: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588717FA: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588717FC: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588717FE: je 0x58871833
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58871800: mov edx, 0x5898d61c
        __asm _emit 0xBA
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58871805: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887180A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871810: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58871816: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58871818: je 0x5887182b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5887181A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5887181C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5887181E: je 0x5887182b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58871820: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58871822: inc eax
        __asm _emit 0x40
        // 0x58871823: inc edx
        __asm _emit 0x42
        // 0x58871824: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58871827: jne 0x58871810
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58871829: jmp 0x5887182f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5887182B: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5887182D: jne 0x58871830
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5887182F: dec eax
        __asm _emit 0x48
        // 0x58871830: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871833: mov edx, dword ptr [0x58a245a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58871839: mov dword ptr [edx + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x68
        // 0x5887183C: mov eax, dword ptr [0x58a245a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58871841: mov eax, dword ptr [eax + 0x428]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871847: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5887184C: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5887184E: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58871851: mov dword ptr [edi + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x58
        // 0x58871854: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58871856: pop edi
        __asm _emit 0x5F
        // 0x58871857: pop esi
        __asm _emit 0x5E
        // 0x58871858: pop ebx
        __asm _emit 0x5B
        // 0x58871859: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5887185C: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x5887185E: pop edi
        __asm _emit 0x5F
        // 0x5887185F: pop esi
        __asm _emit 0x5E
        // 0x58871860: pop ebx
        __asm _emit 0x5B
        // 0x58871861: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58871864: ret
        __asm _emit 0xC3
    }
}
