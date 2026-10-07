// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 663 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d02e0.

// Ghidra body range 0x588D02E0..0x588D0577; 663 mapped bytes.
extern "C" __declspec(naked) void FUN_588d02e0_segment_00() {
    __asm {
        // 0x588D02E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D02E2: push 0x589890ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D02E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D02ED: push eax
        __asm _emit 0x50
        // 0x588D02EE: push ecx
        __asm _emit 0x51
        // 0x588D02EF: push ebx
        __asm _emit 0x53
        // 0x588D02F0: push ebp
        __asm _emit 0x55
        // 0x588D02F1: push esi
        __asm _emit 0x56
        // 0x588D02F2: push edi
        __asm _emit 0x57
        // 0x588D02F3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D02F8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D02FA: push eax
        __asm _emit 0x50
        // 0x588D02FB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D02FF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0305: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D0307: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D030B: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D030F: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D0313: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D0317: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D0319: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588D031B: push edi
        __asm _emit 0x57
        // 0x588D031C: push edi
        __asm _emit 0x57
        // 0x588D031D: push ebx
        __asm _emit 0x53
        // 0x588D031E: push ebp
        __asm _emit 0x55
        // 0x588D031F: push eax
        __asm _emit 0x50
        // 0x588D0320: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x2E
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D0325: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D032B: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D0330: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D0334: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D0338: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D033D: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D0341: mov dword ptr [esi], 0x589a0e48
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x48
        __asm _emit 0x0E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D0347: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588D034A: mov dword ptr [esi + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588D034D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xC8
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D0352: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D0355: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D0359: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588D035E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588D0360: je 0x588d037f
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588D0362: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588D0364: push edi
        __asm _emit 0x57
        // 0x588D0365: push edi
        __asm _emit 0x57
        // 0x588D0366: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D0368: push edi
        __asm _emit 0x57
        // 0x588D0369: push edi
        __asm _emit 0x57
        // 0x588D036A: lea ecx, [ebx + 0xc7]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0370: push ecx
        __asm _emit 0x51
        // 0x588D0371: lea edx, [ebp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x2C
        // 0x588D0374: push edx
        __asm _emit 0x52
        // 0x588D0375: push esi
        __asm _emit 0x56
        // 0x588D0376: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D0378: call 0x587b6dd0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x6A
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588D037D: jmp 0x588d0381
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D037F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D0381: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588D0383: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D0388: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588D038B: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x588D038E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xC8
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D0393: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588D0395: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D0398: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D039C: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588D03A1: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588D03A3: je 0x588d03d0
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588D03A5: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588D03A8: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D03AA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D03AC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D03AE: lea ecx, [ebx + 0xc7]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D03B4: push ecx
        __asm _emit 0x51
        // 0x588D03B5: lea edx, [ebp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x2C
        // 0x588D03B8: push edx
        __asm _emit 0x52
        // 0x588D03B9: push eax
        __asm _emit 0x50
        // 0x588D03BA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588D03BC: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x2D
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D03C1: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D03C7: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D03CE: jmp 0x588d03d2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D03D0: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588D03D2: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x588D03D5: or word ptr [edi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588D03DA: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588D03DD: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D03E2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D03E7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D03EC: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588D03EE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xC8
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D03F3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588D03F5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D03F8: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D03FC: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588D0401: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588D0403: je 0x588d0430
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588D0405: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588D0408: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D040A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D040C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D040E: lea ecx, [ebx + 0xc7]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0414: push ecx
        __asm _emit 0x51
        // 0x588D0415: lea edx, [ebp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x2C
        // 0x588D0418: push edx
        __asm _emit 0x52
        // 0x588D0419: push eax
        __asm _emit 0x50
        // 0x588D041A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588D041C: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x2D
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D0421: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D0427: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D042E: jmp 0x588d0432
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D0430: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588D0432: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x588D0435: or word ptr [edi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588D043A: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588D043D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0442: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D0447: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D044C: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588D044F: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0454: mov dword ptr [eax + 0x74], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D045B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xC7
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D0460: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D0463: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D0467: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588D046C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D046E: je 0x588d04c1
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x588D0470: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D0476: cmp dword ptr [ecx + 0x160], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x588D047D: jle 0x588d0496
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588D047F: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0486: je 0x588d0496
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D0488: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D048E: add ecx, 0x7c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0494: jmp 0x588d0498
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D0496: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D0498: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D049A: lea edx, [ebx + 0xe1]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D04A0: push edx
        __asm _emit 0x52
        // 0x588D04A1: lea edx, [ebp + 0x263]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D04A7: push edx
        __asm _emit 0x52
        // 0x588D04A8: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D04AE: push ecx
        __asm _emit 0x51
        // 0x588D04AF: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D04B5: push esi
        __asm _emit 0x56
        // 0x588D04B6: push ecx
        __asm _emit 0x51
        // 0x588D04B7: push edx
        __asm _emit 0x52
        // 0x588D04B8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D04BA: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xD8
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588D04BF: jmp 0x588d04c3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D04C1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D04C3: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D04C8: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D04CD: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588D04D0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xC7
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D04D5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D04D8: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D04DC: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588D04E1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D04E3: je 0x588d0536
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x588D04E5: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D04EB: cmp dword ptr [ecx + 0x160], 0x20
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x588D04F2: jle 0x588d050b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588D04F4: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D04FB: je 0x588d050b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D04FD: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0503: add edx, 0x800
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0509: jmp 0x588d050d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D050B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D050D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D050F: lea ecx, [ebx + 0x19f]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0515: push ecx
        __asm _emit 0x51
        // 0x588D0516: lea ecx, [ebp + 0x263]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D051C: push ecx
        __asm _emit 0x51
        // 0x588D051D: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D0523: push edx
        __asm _emit 0x52
        // 0x588D0524: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D052A: push esi
        __asm _emit 0x56
        // 0x588D052B: push edx
        __asm _emit 0x52
        // 0x588D052C: push ecx
        __asm _emit 0x51
        // 0x588D052D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D052F: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xD8
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588D0534: jmp 0x588d0538
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D0536: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D0538: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588D053B: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588D053E: lea edx, [ebp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x2C
        // 0x588D0541: add ebx, 0xe5
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0547: lea ecx, [ebp + 0x1e4]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D054D: add ebp, 0x18f
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x8F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D0553: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x588D0556: mov dword ptr [eax + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x68
        // 0x588D0559: mov dword ptr [eax + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x588D055C: mov dword ptr [eax + 0x70], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x70
        // 0x588D055F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588D0561: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D0565: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D056C: pop ecx
        __asm _emit 0x59
        // 0x588D056D: pop edi
        __asm _emit 0x5F
        // 0x588D056E: pop esi
        __asm _emit 0x5E
        // 0x588D056F: pop ebp
        __asm _emit 0x5D
        // 0x588D0570: pop ebx
        __asm _emit 0x5B
        // 0x588D0571: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588D0574: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
