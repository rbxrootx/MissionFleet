// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 509 bytes in 2 exact ranges.
// Source symbol alias: FUN_58829460.

// Ghidra body range 0x58829460..0x5882963A; 474 mapped bytes.
extern "C" __declspec(naked) void FUN_58829460_segment_00() {
    __asm {
        // 0x58829460: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58829462: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58829467: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882946D: push eax
        __asm _emit 0x50
        // 0x5882946E: push ecx
        __asm _emit 0x51
        // 0x5882946F: push ebx
        __asm _emit 0x53
        // 0x58829470: push ebp
        __asm _emit 0x55
        // 0x58829471: push esi
        __asm _emit 0x56
        // 0x58829472: push edi
        __asm _emit 0x57
        // 0x58829473: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58829478: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882947A: push eax
        __asm _emit 0x50
        // 0x5882947B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882947F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829485: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58829487: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882948B: mov dword ptr [esi], 0x5899ded8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD8
        __asm _emit 0xDE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58829491: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58829494: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58829496: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5882949A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5882949C: je 0x588294a9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5882949E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588294A0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588294A2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588294A4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588294A6: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x588294A9: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588294AC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588294AE: je 0x588294bb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588294B0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588294B2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588294B4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588294B6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588294B8: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x588294BB: lea edi, [esi + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x588294BE: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588294C3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588294C5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588294C7: je 0x588294d3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588294C9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588294CB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588294CD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588294CF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588294D1: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588294D3: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588294D6: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588294D9: jne 0x588294c3
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x588294DB: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588294DE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588294E0: je 0x588294ed
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588294E2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588294E4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588294E6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588294E8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588294EA: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x588294ED: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588294F0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588294F2: je 0x588294ff
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588294F4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588294F6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588294F8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588294FA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588294FC: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x588294FF: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829505: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58829507: je 0x58829517
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58829509: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882950B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882950D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882950F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58829511: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829517: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882951D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5882951F: je 0x5882952f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58829521: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58829523: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58829525: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829527: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58829529: mov dword ptr [esi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882952F: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829535: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58829537: je 0x58829547
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58829539: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882953B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882953D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882953F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58829541: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829547: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882954D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5882954F: je 0x5882955f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58829551: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58829553: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58829555: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829557: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58829559: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882955F: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829565: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58829567: je 0x58829577
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58829569: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882956B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882956D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882956F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58829571: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829577: lea edi, [esi + 0x94]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882957D: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829582: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58829584: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58829586: je 0x58829592
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58829588: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882958A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882958C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882958E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58829590: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58829592: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58829595: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58829598: jne 0x58829582
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5882959A: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588295A0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588295A2: je 0x588295b2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588295A4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588295A6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588295A8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588295AA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588295AC: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588295B2: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588295B8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588295BA: je 0x588295ca
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588295BC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588295BE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588295C0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588295C2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588295C4: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588295CA: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588295D0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588295D2: je 0x588295e2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588295D4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588295D6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588295D8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588295DA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588295DC: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588295E2: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588295E8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588295EA: je 0x588295fa
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588295EC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588295EE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588295F0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588295F2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588295F4: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588295FA: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829600: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58829602: je 0x58829612
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58829604: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58829606: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58829608: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882960A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882960C: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829612: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829618: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5882961A: je 0x5882962a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882961C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882961E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58829620: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829622: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58829624: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882962A: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829630: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58829632: je 0x58829643
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58829634: push eax
        __asm _emit 0x50
        // 0x58829635: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x36
        __asm _emit 0x15
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58829643..0x58829666; 35 mapped bytes.
extern "C" __declspec(naked) void FUN_58829460_segment_01() {
    __asm {
        // 0x58829643: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58829645: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882964D: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x95
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58829652: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58829656: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882965D: pop ecx
        __asm _emit 0x59
        // 0x5882965E: pop edi
        __asm _emit 0x5F
        // 0x5882965F: pop esi
        __asm _emit 0x5E
        // 0x58829660: pop ebp
        __asm _emit 0x5D
        // 0x58829661: pop ebx
        __asm _emit 0x5B
        // 0x58829662: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58829665: ret
        __asm _emit 0xC3
    }
}
