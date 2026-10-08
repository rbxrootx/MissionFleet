// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1961 bytes in 3 exact ranges.
// Source symbol alias: FUN_5883a4d0.

// Ghidra body range 0x5883A4D0..0x5883A70D; 573 mapped bytes.
extern "C" __declspec(naked) void FUN_5883a4d0_segment_00() {
    __asm {
        // 0x5883A4D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5883A4D2: push 0x589844b6
        __asm _emit 0x68
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883A4D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A4DD: push eax
        __asm _emit 0x50
        // 0x5883A4DE: push ecx
        __asm _emit 0x51
        // 0x5883A4DF: push ebx
        __asm _emit 0x53
        // 0x5883A4E0: push ebp
        __asm _emit 0x55
        // 0x5883A4E1: push esi
        __asm _emit 0x56
        // 0x5883A4E2: push edi
        __asm _emit 0x57
        // 0x5883A4E3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5883A4E8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5883A4EA: push eax
        __asm _emit 0x50
        // 0x5883A4EB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883A4EF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A4F5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883A4F7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883A4FB: mov dword ptr [esi], 0x5899e328
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x28
        __asm _emit 0xE3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883A501: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A509: lea edi, [esi + 0x94]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A50F: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A514: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5883A516: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A518: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A51A: je 0x5883a526
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883A51C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A51E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A520: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A522: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A524: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x5883A526: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A529: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A52C: jne 0x5883a516
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5883A52E: lea edi, [esi + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A534: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A539: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A540: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A542: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A544: je 0x5883a550
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883A546: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A548: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A54A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A54C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A54E: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x5883A550: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A553: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A556: jne 0x5883a540
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5883A558: lea edi, [esi + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A55E: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A563: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A565: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A567: je 0x5883a573
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883A569: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A56B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A56D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A56F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A571: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x5883A573: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A576: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A579: jne 0x5883a563
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5883A57B: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A581: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A583: je 0x5883a593
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A585: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A587: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A589: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A58B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A58D: mov dword ptr [esi + 0xac], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A593: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A599: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A59B: je 0x5883a5ab
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A59D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A59F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A5A1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A5A3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A5A5: mov dword ptr [esi + 0xb0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A5AB: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A5B1: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A5B3: je 0x5883a5c3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A5B5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A5B7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A5B9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A5BB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A5BD: mov dword ptr [esi + 0xb4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A5C3: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A5C9: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A5CB: je 0x5883a5db
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A5CD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A5CF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A5D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A5D3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A5D5: mov dword ptr [esi + 0xb8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A5DB: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A5E1: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A5E3: je 0x5883a5f3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A5E5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A5E7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A5E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A5EB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A5ED: mov dword ptr [esi + 0xc0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A5F3: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A5F9: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A5FB: je 0x5883a60b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A5FD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A5FF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A601: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A603: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A605: mov dword ptr [esi + 0xc4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A60B: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A611: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A613: je 0x5883a623
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A615: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A617: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A619: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A61B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A61D: mov dword ptr [esi + 0xc8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A623: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A629: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A62B: je 0x5883a63b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A62D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A62F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A631: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A633: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A635: mov dword ptr [esi + 0xcc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A63B: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A641: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A643: je 0x5883a653
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A645: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A647: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A649: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A64B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A64D: mov dword ptr [esi + 0xd0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A653: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A659: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A65B: je 0x5883a66b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A65D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A65F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A661: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A663: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A665: mov dword ptr [esi + 0xd4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A66B: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A671: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A673: je 0x5883a683
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A675: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A677: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A679: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A67B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A67D: mov dword ptr [esi + 0xd8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A683: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A689: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A68B: je 0x5883a69b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A68D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A68F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A691: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A693: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A695: mov dword ptr [esi + 0xdc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A69B: lea edi, [esi + 0xe0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A6A1: mov ebx, 0xa
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A6A6: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A6A8: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A6AA: je 0x5883a6b6
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883A6AC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A6AE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A6B0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A6B2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A6B4: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x5883A6B6: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A6B9: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A6BC: jne 0x5883a6a6
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5883A6BE: lea edi, [esi + 0x108]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A6C4: mov ebx, 0xa
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A6C9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A6D0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A6D2: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A6D4: je 0x5883a6e0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883A6D6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A6D8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A6DA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A6DC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A6DE: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x5883A6E0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A6E3: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A6E6: jne 0x5883a6d0
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5883A6E8: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A6EE: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A6F0: je 0x5883a700
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A6F2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A6F4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A6F6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A6F8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A6FA: mov dword ptr [esi + 0x140], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A700: lea edi, [esi + 0x144]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A706: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A70B: jmp 0x5883a710
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5883A710..0x5883AC5C; 1356 mapped bytes.
extern "C" __declspec(naked) void FUN_5883a4d0_segment_01() {
    __asm {
        // 0x5883A710: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A712: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A714: je 0x5883a720
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883A716: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A718: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A71A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A71C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A71E: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x5883A720: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A723: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A726: jne 0x5883a710
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5883A728: mov ecx, dword ptr [esi + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A72E: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A730: je 0x5883a740
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A732: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A734: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A736: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A738: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A73A: mov dword ptr [esi + 0x14c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A740: mov ecx, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A746: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A748: je 0x5883a758
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A74A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A74C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A74E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A750: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A752: mov dword ptr [esi + 0x150], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A758: mov ecx, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A75E: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A760: je 0x5883a770
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A762: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A764: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A766: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A768: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A76A: mov dword ptr [esi + 0x154], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A770: mov ecx, dword ptr [esi + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A776: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A778: je 0x5883a788
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A77A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A77C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A77E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A780: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A782: mov dword ptr [esi + 0x158], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A788: lea edi, [esi + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A78E: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A793: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A795: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A797: je 0x5883a7a3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883A799: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A79B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A79D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A79F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A7A1: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x5883A7A3: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A7A6: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A7A9: jne 0x5883a793
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5883A7AB: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A7B1: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A7B3: je 0x5883a7c3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A7B5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A7B7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A7B9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A7BB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A7BD: mov dword ptr [esi + 0x170], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A7C3: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A7C9: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A7CB: je 0x5883a7db
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A7CD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A7CF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A7D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A7D3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A7D5: mov dword ptr [esi + 0x174], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A7DB: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A7E1: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883A7E3: je 0x5883a7f3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A7E5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A7E7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A7E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A7EB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A7ED: mov dword ptr [esi + 0x178], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A7F3: lea edi, [esi + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A7F9: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A7FE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5883A800: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A805: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A807: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A809: je 0x5883a819
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A80B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A80D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A80F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A811: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A813: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A819: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A81C: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A81F: jne 0x5883a805
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883A821: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5883A824: jne 0x5883a800
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x5883A826: lea edi, [esi + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A82C: lea ebx, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x05
        // 0x5883A82F: nop
        __asm _emit 0x90
        // 0x5883A830: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A832: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A834: je 0x5883a844
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A836: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A838: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A83A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A83C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A83E: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A844: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A847: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A84A: jne 0x5883a830
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883A84C: lea edi, [esi + 0x1b8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A852: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A857: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A859: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A85B: je 0x5883a86b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A85D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A85F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A861: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A863: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A865: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A86B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A86E: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A871: jne 0x5883a857
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883A873: lea edi, [esi + 0x1c0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A879: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A87E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5883A880: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A882: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A884: je 0x5883a894
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A886: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A888: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A88A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A88C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A88E: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A894: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A897: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A89A: jne 0x5883a880
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883A89C: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A8A2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A8A4: je 0x5883a8b4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A8A6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A8A8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A8AA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A8AC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A8AE: mov dword ptr [esi + 0x1c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A8B4: mov ecx, dword ptr [esi + 0x1cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A8BA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A8BC: je 0x5883a8d0
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883A8BE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A8C0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A8C2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A8C4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A8C6: mov dword ptr [esi + 0x1cc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A8D0: mov ecx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A8D6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A8D8: je 0x5883a8ec
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883A8DA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A8DC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A8DE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A8E0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A8E2: mov dword ptr [esi + 0x1d0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A8EC: mov ecx, dword ptr [esi + 0x1d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A8F2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A8F4: je 0x5883a908
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883A8F6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A8F8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A8FA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A8FC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A8FE: mov dword ptr [esi + 0x1d4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A908: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A90E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A910: je 0x5883a924
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883A912: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A914: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A916: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A918: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A91A: mov dword ptr [esi + 0x1d8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A924: lea edi, [esi + 0x1dc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A92A: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A92F: nop
        __asm _emit 0x90
        // 0x5883A930: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A932: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A934: je 0x5883a944
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A936: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A938: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A93A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A93C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A93E: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A944: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A947: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A94A: jne 0x5883a930
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883A94C: lea edi, [esi + 0x1e8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A952: lea ebp, [ebx + 5]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x05
        // 0x5883A955: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A95A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A960: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883A962: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A964: je 0x5883a974
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A966: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A968: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A96A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A96C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A96E: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A974: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883A977: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883A97A: jne 0x5883a960
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883A97C: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5883A97F: jne 0x5883a955
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x5883A981: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A987: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A989: je 0x5883a999
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883A98B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A98D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A98F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A991: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A993: mov dword ptr [esi + 0x210], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A999: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A99F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A9A1: je 0x5883a9b5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883A9A3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A9A5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A9A7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A9A9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A9AB: mov dword ptr [esi + 0x214], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A9B5: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A9BB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A9BD: je 0x5883a9d1
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883A9BF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A9C1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A9C3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A9C5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A9C7: mov dword ptr [esi + 0x218], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A9D1: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A9D7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A9D9: je 0x5883a9ed
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883A9DB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A9DD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A9DF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A9E1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A9E3: mov dword ptr [esi + 0x240], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A9ED: mov ecx, dword ptr [esi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883A9F3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883A9F5: je 0x5883aa09
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883A9F7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883A9F9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883A9FB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883A9FD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883A9FF: mov dword ptr [esi + 0x244], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA09: mov ecx, dword ptr [esi + 0x248]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA0F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AA11: je 0x5883aa25
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AA13: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AA15: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AA17: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AA19: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AA1B: mov dword ptr [esi + 0x248], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA25: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA2B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AA2D: je 0x5883aa41
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AA2F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AA31: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AA33: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AA35: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AA37: mov dword ptr [esi + 0x24c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA41: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA47: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AA49: je 0x5883aa5d
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AA4B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AA4D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AA4F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AA51: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AA53: mov dword ptr [esi + 0x258], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA5D: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA63: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AA65: je 0x5883aa79
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AA67: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AA69: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AA6B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AA6D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AA6F: mov dword ptr [esi + 0x25c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA79: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA7F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AA81: je 0x5883aa95
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AA83: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AA85: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AA87: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AA89: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AA8B: mov dword ptr [esi + 0x260], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA95: mov ecx, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AA9B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AA9D: je 0x5883aab1
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AA9F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AAA1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AAA3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AAA5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AAA7: mov dword ptr [esi + 0x26c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AAB1: mov ecx, dword ptr [esi + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AAB7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AAB9: je 0x5883aacd
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AABB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AABD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AABF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AAC1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AAC3: mov dword ptr [esi + 0x270], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AACD: mov ecx, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AAD3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AAD5: je 0x5883aae9
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AAD7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AAD9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AADB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AADD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AADF: mov dword ptr [esi + 0x274], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AAE9: mov ecx, dword ptr [esi + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AAEF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AAF1: je 0x5883ab05
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AAF3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AAF5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AAF7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AAF9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AAFB: mov dword ptr [esi + 0x278], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB05: mov ecx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB0B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AB0D: je 0x5883ab21
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AB0F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AB11: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AB13: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AB15: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AB17: mov dword ptr [esi + 0x27c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB21: mov ecx, dword ptr [esi + 0x280]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB27: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AB29: je 0x5883ab3d
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AB2B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AB2D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AB2F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AB31: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AB33: mov dword ptr [esi + 0x280], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB3D: mov ecx, dword ptr [esi + 0x284]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB43: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AB45: je 0x5883ab59
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AB47: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AB49: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AB4B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AB4D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AB4F: mov dword ptr [esi + 0x284], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB59: mov ecx, dword ptr [esi + 0x288]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB5F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AB61: je 0x5883ab75
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AB63: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AB65: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AB67: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AB69: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AB6B: mov dword ptr [esi + 0x288], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB75: mov ecx, dword ptr [esi + 0x28c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB7B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AB7D: je 0x5883ab91
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AB7F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AB81: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AB83: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AB85: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AB87: mov dword ptr [esi + 0x28c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB91: mov ecx, dword ptr [esi + 0x290]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AB97: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AB99: je 0x5883abad
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883AB9B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AB9D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AB9F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883ABA1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883ABA3: mov dword ptr [esi + 0x290], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ABAD: lea edi, [esi + 0x294]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ABB3: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ABB8: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883ABBA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883ABBC: je 0x5883abcc
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883ABBE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883ABC0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883ABC2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883ABC4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883ABC6: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ABCC: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883ABCF: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883ABD2: jne 0x5883abb8
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883ABD4: lea edi, [esi + 0x2a8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ABDA: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ABDF: nop
        __asm _emit 0x90
        // 0x5883ABE0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883ABE2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883ABE4: je 0x5883abf4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883ABE6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883ABE8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883ABEA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883ABEC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883ABEE: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ABF4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883ABF7: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883ABFA: jne 0x5883abe0
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883ABFC: lea edi, [esi + 0x2bc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC02: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC07: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883AC09: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AC0B: je 0x5883ac1b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883AC0D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AC0F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AC11: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AC13: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AC15: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC1B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883AC1E: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883AC21: jne 0x5883ac07
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883AC23: lea edi, [esi + 0x2d0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC29: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC2E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5883AC30: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5883AC32: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AC34: je 0x5883ac44
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883AC36: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883AC38: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AC3A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883AC3C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883AC3E: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC44: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883AC47: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883AC4A: jne 0x5883ac30
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883AC4C: mov eax, dword ptr [esi + 0x228]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC52: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883AC54: je 0x5883ac5f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5883AC56: push eax
        __asm _emit 0x50
        // 0x5883AC57: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x1F
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5883AC5F..0x5883AC7F; 32 mapped bytes.
extern "C" __declspec(naked) void FUN_5883a4d0_segment_02() {
    __asm {
        // 0x5883AC5F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883AC61: mov dword ptr [esi + 0x228], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC67: mov dword ptr [esi + 0x22c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC6D: mov dword ptr [esi + 0x230], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC73: mov eax, dword ptr [esi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AC79: push eax
        __asm _emit 0x50
        // 0x5883AC7A: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x1F
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
