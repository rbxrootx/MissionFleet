// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 821 bytes in 1 exact ranges.
// Source symbol alias: FUN_588272d0.

// Ghidra body range 0x588272D0..0x58827605; 821 mapped bytes.
extern "C" __declspec(naked) void FUN_588272d0_segment_00() {
    __asm {
        // 0x588272D0: sub esp, 0x10c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588272D6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588272DB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588272DD: mov dword ptr [esp + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588272E4: push ebx
        __asm _emit 0x53
        // 0x588272E5: push ebp
        __asm _emit 0x55
        // 0x588272E6: push esi
        __asm _emit 0x56
        // 0x588272E7: push edi
        __asm _emit 0x57
        // 0x588272E8: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588272EA: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588272F0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588272F2: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588272F4: mov edx, 0xfffff060
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588272F9: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588272FD: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58827301: lea eax, [ecx + 0xfa0]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827307: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58827309: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827310: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58827312: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58827314: je 0x5882732d
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58827316: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x58827319: jne 0x5882731e
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x5882731B: inc ebx
        __asm _emit 0x43
        // 0x5882731C: jmp 0x58827324
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5882731E: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58827321: jne 0x58827324
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58827323: inc esi
        __asm _emit 0x46
        // 0x58827324: inc eax
        __asm _emit 0x40
        // 0x58827325: lea ecx, [edx + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x58827328: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x5882732B: jl 0x58827310
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x5882732D: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827333: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58827337: add esi, ebx
        __asm _emit 0x03
        __asm _emit 0xF3
        // 0x58827339: push esi
        __asm _emit 0x56
        // 0x5882733A: push 0x5899dd34
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xDD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882733F: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58827343: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58827345: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882734B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882734E: push eax
        __asm _emit 0x50
        // 0x5882734F: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58827353: push edx
        __asm _emit 0x52
        // 0x58827354: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58827356: mov eax, dword ptr [edi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882735C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5882735F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58827362: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58827364: je 0x58827393
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x58827366: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882736A: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882736F: nop
        __asm _emit 0x90
        // 0x58827370: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58827376: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58827378: je 0x5882738b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5882737A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5882737C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5882737E: je 0x5882738b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58827380: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58827382: inc eax
        __asm _emit 0x40
        // 0x58827383: inc edx
        __asm _emit 0x42
        // 0x58827384: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58827387: jne 0x58827370
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58827389: jmp 0x5882738f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5882738B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5882738D: jne 0x58827390
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5882738F: dec eax
        __asm _emit 0x48
        // 0x58827390: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827393: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58827397: push edx
        __asm _emit 0x52
        // 0x58827398: push 0x5899dd08
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xDD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882739D: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5882739F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588273A2: push eax
        __asm _emit 0x50
        // 0x588273A3: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588273A7: push eax
        __asm _emit 0x50
        // 0x588273A8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588273AA: mov eax, dword ptr [edi + 0x230]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588273B0: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588273B3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588273B6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588273B8: je 0x588273e6
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x588273BA: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588273BE: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588273C3: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588273C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588273CB: je 0x588273de
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588273CD: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588273CF: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588273D1: je 0x588273de
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588273D3: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588273D5: inc eax
        __asm _emit 0x40
        // 0x588273D6: inc edx
        __asm _emit 0x42
        // 0x588273D7: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588273DA: jne 0x588273c3
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588273DC: jmp 0x588273e2
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588273DE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588273E0: jne 0x588273e3
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588273E2: dec eax
        __asm _emit 0x48
        // 0x588273E3: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588273E6: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588273EA: push edx
        __asm _emit 0x52
        // 0x588273EB: push 0x5899dcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588273F0: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588273F2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588273F5: push eax
        __asm _emit 0x50
        // 0x588273F6: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588273FA: push eax
        __asm _emit 0x50
        // 0x588273FB: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588273FD: mov eax, dword ptr [edi + 0x234]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827403: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58827406: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58827409: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882740B: je 0x58827439
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5882740D: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58827411: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827416: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5882741C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882741E: je 0x58827431
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58827420: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58827422: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58827424: je 0x58827431
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58827426: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58827428: inc eax
        __asm _emit 0x40
        // 0x58827429: inc edx
        __asm _emit 0x42
        // 0x5882742A: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5882742D: jne 0x58827416
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5882742F: jmp 0x58827435
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58827431: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58827433: jne 0x58827436
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58827435: dec eax
        __asm _emit 0x48
        // 0x58827436: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827439: mov al, byte ptr [edi + 0x264]
        __asm _emit 0x8A
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882743F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58827441: jbe 0x588274a0
        __asm _emit 0x76
        __asm _emit 0x5D
        // 0x58827443: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58827445: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58827447: jbe 0x58827483
        __asm _emit 0x76
        __asm _emit 0x3A
        // 0x58827449: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827450: mov edx, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827456: cmp dword ptr [edx + esi*4], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB2
        __asm _emit 0x00
        // 0x5882745A: lea eax, [edx + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB2
        // 0x5882745D: je 0x58827477
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5882745F: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58827461: push eax
        __asm _emit 0x50
        // 0x58827462: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x59
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58827467: mov ecx, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882746D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58827470: mov dword ptr [ecx + esi*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827477: movzx edx, byte ptr [edi + 0x264]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x97
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882747E: inc esi
        __asm _emit 0x46
        // 0x5882747F: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58827481: jl 0x58827450
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x58827483: mov eax, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827489: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882748B: je 0x588274a0
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5882748D: push eax
        __asm _emit 0x50
        // 0x5882748E: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x59
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58827493: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58827496: mov dword ptr [edi + 0x268], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588274A0: mov al, byte ptr [esp + 0x14]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588274A4: add al, byte ptr [esp + 0x10]
        __asm _emit 0x02
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588274A8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588274AA: mov byte ptr [edi + 0x264], al
        __asm _emit 0x88
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588274B0: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x588274B3: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588274B8: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588274BA: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588274BD: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588274BF: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588274C1: push ecx
        __asm _emit 0x51
        // 0x588274C2: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xA0
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588274C7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588274CA: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588274CC: cmp byte ptr [edi + 0x264], 0
        __asm _emit 0x80
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588274D3: mov dword ptr [edi + 0x268], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588274D9: jbe 0x588275e5
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588274DF: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588274E5: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588274E9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588274F0: mov al, byte ptr [edx + esi + 0xfa0]
        __asm _emit 0x8A
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588274F7: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588274F9: jne 0x58827572
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x588274FB: mov ebx, dword ptr [edx + esi*4 + 0xf20]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0xB2
        __asm _emit 0x20
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827502: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58827504: mov ecx, 0x589baab0
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58827509: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827510: movzx ebp, word ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x29
        // 0x58827513: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58827515: je 0x58827537
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58827517: add ecx, 0xe84
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882751D: inc eax
        __asm _emit 0x40
        // 0x5882751E: cmp ecx, 0x589c2d54
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x54
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58827524: jl 0x58827510
        __asm _emit 0x7C
        __asm _emit 0xEA
        // 0x58827526: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882752C: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827532: jmp 0x588275d0
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827537: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882753D: imul eax, eax, 0xe84
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827543: add eax, 0x589baa98
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58827548: push eax
        __asm _emit 0x50
        // 0x58827549: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882754D: lea ecx, [eax + edx + 0xfc0]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0xC0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827554: push ecx
        __asm _emit 0x51
        // 0x58827555: push 0x5899dcb0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xDC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882755A: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5882755C: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827562: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58827565: push eax
        __asm _emit 0x50
        // 0x58827566: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5882756A: push edx
        __asm _emit 0x52
        // 0x5882756B: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5882756D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58827570: jmp 0x58827597
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x58827572: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58827574: jne 0x588275d0
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x58827576: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882757A: lea ecx, [eax + edx + 0xfc0]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0xC0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827581: push ecx
        __asm _emit 0x51
        // 0x58827582: push 0x5899dc84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0xDC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58827587: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58827589: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882758C: push eax
        __asm _emit 0x50
        // 0x5882758D: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58827591: push edx
        __asm _emit 0x52
        // 0x58827592: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58827594: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58827597: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882759B: push eax
        __asm _emit 0x50
        // 0x5882759C: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588275A2: inc eax
        __asm _emit 0x40
        // 0x588275A3: push eax
        __asm _emit 0x50
        // 0x588275A4: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x9F
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588275A9: mov ecx, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588275AF: mov dword ptr [ecx + esi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xB1
        // 0x588275B2: mov eax, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588275B8: mov ecx, dword ptr [eax + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB0
        // 0x588275BB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588275BE: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588275C2: push edx
        __asm _emit 0x52
        // 0x588275C3: push ecx
        __asm _emit 0x51
        // 0x588275C4: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588275CA: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588275D0: movzx eax, byte ptr [edi + 0x264]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588275D7: add dword ptr [esp + 0x10], 0x18
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x18
        // 0x588275DC: inc esi
        __asm _emit 0x46
        // 0x588275DD: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588275DF: jl 0x588274f0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x0B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588275E5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588275E7: call 0x58826f60
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588275EC: mov ecx, dword ptr [esp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588275F3: pop edi
        __asm _emit 0x5F
        // 0x588275F4: pop esi
        __asm _emit 0x5E
        // 0x588275F5: pop ebp
        __asm _emit 0x5D
        // 0x588275F6: pop ebx
        __asm _emit 0x5B
        // 0x588275F7: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588275F9: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x55
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x588275FE: add esp, 0x10c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827604: ret
        __asm _emit 0xC3
    }
}
