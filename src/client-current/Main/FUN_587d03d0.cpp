// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1256 bytes in 11 discontiguous ranges.
// Source symbol alias: FUN_587d03d0.

// Ghidra body range 0x587D03D0..0x587D0769; 921 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_00() {
    __asm {
        // 0x587D03D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587D03D2: push 0x58981b38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x1B
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D03D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D03DD: push eax
        __asm _emit 0x50
        // 0x587D03DE: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587D03E1: push ebx
        __asm _emit 0x53
        // 0x587D03E2: push ebp
        __asm _emit 0x55
        // 0x587D03E3: push esi
        __asm _emit 0x56
        // 0x587D03E4: push edi
        __asm _emit 0x57
        // 0x587D03E5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D03EA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587D03EC: push eax
        __asm _emit 0x50
        // 0x587D03ED: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D03F1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D03F7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D03F9: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D03FD: mov dword ptr [esi], 0x5899b494
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x94
        __asm _emit 0xB4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D0403: mov ecx, dword ptr [esi + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0409: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587D040B: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587D040F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0411: je 0x587d0421
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D0413: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D0415: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0417: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D0419: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D041B: mov dword ptr [esi + 0xa00], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0421: mov ecx, dword ptr [esi + 0x50c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0427: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0429: je 0x587d0439
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D042B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D042D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D042F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D0431: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D0433: mov dword ptr [esi + 0x50c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0439: mov ecx, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D043F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0441: je 0x587d0451
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D0443: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D0445: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0447: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D0449: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D044B: mov dword ptr [esi + 0x508], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0451: mov ecx, dword ptr [esi + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0457: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0459: je 0x587d0469
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D045B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D045D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D045F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D0461: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D0463: mov dword ptr [esi + 0x504], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0469: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D046F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0471: je 0x587d0480
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587D0473: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D0475: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587D0478: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D047A: mov dword ptr [0x58a24780], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D0480: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587D0483: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0485: je 0x587d048e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587D0487: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D0489: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587D048C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D048E: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587D0491: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0493: je 0x587d04a0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D0495: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D0497: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0499: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D049B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D049D: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x587D04A0: mov ecx, dword ptr [esi + 0x9f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D04A6: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D04A8: je 0x587d04b8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D04AA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D04AC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D04AE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D04B0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D04B2: mov dword ptr [esi + 0x9f4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D04B8: mov ecx, dword ptr [esi + 0x9f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D04BE: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D04C0: je 0x587d04d0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D04C2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D04C4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D04C6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D04C8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D04CA: mov dword ptr [esi + 0x9f8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D04D0: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D04D2: cmp dword ptr [esi + 0x9e8], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D04D8: jle 0x587d04fc
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x587D04DA: lea ebx, [esi + 0x810]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D04E0: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587D04E2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D04E4: je 0x587d04f0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D04E6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D04E8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D04EA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D04EC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D04EE: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x587D04F0: inc ebp
        __asm _emit 0x45
        // 0x587D04F1: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587D04F4: cmp ebp, dword ptr [esi + 0x9e8]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D04FA: jl 0x587d04e0
        __asm _emit 0x7C
        __asm _emit 0xE4
        // 0x587D04FC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D04FE: call 0x587cfad0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0503: mov ecx, dword ptr [esi + 0x770]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0509: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D050B: je 0x587d051b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D050D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D050F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0511: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D0513: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D0515: mov dword ptr [esi + 0x770], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D051B: mov ecx, dword ptr [esi + 0x778]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0521: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0523: je 0x587d0533
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D0525: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D0527: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0529: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D052B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D052D: mov dword ptr [esi + 0x778], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0533: mov ecx, dword ptr [esi + 0x77c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0539: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D053B: je 0x587d054b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D053D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D053F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0541: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D0543: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D0545: mov dword ptr [esi + 0x77c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D054B: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0551: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0553: je 0x587d0563
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D0555: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D0557: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0559: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D055B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D055D: mov dword ptr [esi + 0x11c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0563: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0569: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D056B: je 0x587d057b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D056D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D056F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0571: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D0573: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D0575: mov dword ptr [esi + 0x118], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D057B: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0581: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0583: je 0x587d0593
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D0585: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D0587: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0589: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D058B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D058D: mov dword ptr [esi + 0x124], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0593: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0599: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D059B: je 0x587d05ab
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D059D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D059F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D05A1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D05A3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D05A5: mov dword ptr [esi + 0x120], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D05AB: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D05B1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D05B3: je 0x587d05c3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D05B5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D05B7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D05B9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D05BB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D05BD: mov dword ptr [esi + 0x12c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D05C3: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D05C9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D05CB: je 0x587d05db
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D05CD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D05CF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D05D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D05D3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D05D5: mov dword ptr [esi + 0x128], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D05DB: lea ebx, [esi + 0x580]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D05E1: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D05E6: mov ecx, dword ptr [ebx + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D05EC: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D05EE: je 0x587d05fe
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D05F0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D05F2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D05F4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D05F6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D05F8: mov dword ptr [ebx + 0x20c], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D05FE: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587D0600: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0602: je 0x587d060e
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D0604: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D0606: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0608: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D060A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D060C: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x587D060E: mov ecx, dword ptr [ebx + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0614: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0616: je 0x587d0626
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D0618: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D061A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D061C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D061E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D0620: mov dword ptr [ebx + 0x218], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0626: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587D0629: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587D062C: jne 0x587d05e6
        __asm _emit 0x75
        __asm _emit 0xB8
        // 0x587D062E: mov ecx, dword ptr [esi + 0x7a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0634: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D0636: je 0x587d0646
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D0638: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D063A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D063C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D063E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D0640: mov dword ptr [esi + 0x7a0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0646: mov dword ptr [esp + 0x14], 0x589baa94
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x94
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D064E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587D0650: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D0654: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x587D0657: je 0x587d07ba
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D065D: mov ecx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0663: cmp dword ptr [edi + ecx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587D0667: lea eax, [edi + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x587D066A: je 0x587d0689
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587D066C: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587D066E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D0670: je 0x587d067c
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D0672: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0674: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D0676: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587D0678: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D067A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D067C: mov ecx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0682: mov dword ptr [edi + ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0689: mov edx, dword ptr [esi + 0x7f8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D068F: cmp dword ptr [edi + edx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587D0693: lea eax, [edi + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D0696: je 0x587d06b5
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587D0698: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587D069A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D069C: je 0x587d06a8
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D069E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D06A0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D06A2: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587D06A4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D06A6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D06A8: mov ecx, dword ptr [esi + 0x7f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D06AE: mov dword ptr [edi + ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D06B5: mov edx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D06BB: cmp dword ptr [edi + edx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587D06BF: lea eax, [edi + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D06C2: je 0x587d06e1
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587D06C4: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587D06C6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D06C8: je 0x587d06d4
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D06CA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D06CC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D06CE: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587D06D0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D06D2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D06D4: mov ecx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D06DA: mov dword ptr [edi + ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D06E1: mov edx, dword ptr [esi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D06E7: cmp dword ptr [edi + edx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587D06EB: lea eax, [edi + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D06EE: je 0x587d070d
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587D06F0: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587D06F2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D06F4: je 0x587d0700
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D06F6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D06F8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D06FA: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587D06FC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D06FE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D0700: mov ecx, dword ptr [esi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0706: mov dword ptr [edi + ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D070D: mov edx, dword ptr [esi + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0713: cmp dword ptr [edi + edx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587D0717: lea eax, [edi + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D071A: je 0x587d0739
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587D071C: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587D071E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D0720: je 0x587d072c
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D0722: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0724: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D0726: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587D0728: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D072A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D072C: mov ecx, dword ptr [esi + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0732: mov dword ptr [edi + ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0739: mov edx, dword ptr [esi + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D073F: cmp dword ptr [edi + edx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587D0743: lea eax, [edi + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D0746: je 0x587d0765
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587D0748: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587D074A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D074C: je 0x587d0758
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D074E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D0750: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D0752: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587D0754: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D0756: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D0758: mov ecx, dword ptr [esi + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D075E: mov dword ptr [edi + ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0765: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D0767: jmp 0x587d0770
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x587D0770..0x587D07D6; 102 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_01() {
    __asm {
        // 0x587D0770: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587D0772: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0778: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D077B: mov ecx, dword ptr [eax + ebp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x28
        // 0x587D077E: cmp dword ptr [ecx + ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D0782: lea eax, [ecx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x19
        // 0x587D0785: je 0x587d07aa
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x587D0787: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587D0789: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D078B: je 0x587d0797
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D078D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D078F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D0791: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587D0793: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D0795: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D0797: mov ecx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D079D: mov edx, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0F
        // 0x587D07A0: mov eax, dword ptr [edx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x2A
        // 0x587D07A3: mov dword ptr [ebx + eax], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D07AA: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587D07AD: cmp ebx, 8
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x08
        // 0x587D07B0: jl 0x587d0772
        __asm _emit 0x7C
        __asm _emit 0xC0
        // 0x587D07B2: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587D07B5: cmp ebp, 0x10
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x10
        // 0x587D07B8: jl 0x587d0770
        __asm _emit 0x7C
        __asm _emit 0xB6
        // 0x587D07BA: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587D07BC: mov ecx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D07C2: mov edx, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0F
        // 0x587D07C5: cmp dword ptr [edx + ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D07C9: lea eax, [edx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1A
        // 0x587D07CC: je 0x587d07e9
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587D07CE: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587D07D0: push eax
        __asm _emit 0x50
        // 0x587D07D1: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xC4
        __asm _emit 0x1A
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587D07E9..0x587D0808; 31 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_02() {
    __asm {
        // 0x587D07E9: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587D07EC: cmp ebx, 0x10
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x10
        // 0x587D07EF: jl 0x587d07bc
        __asm _emit 0x7C
        __asm _emit 0xCB
        // 0x587D07F1: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D07F7: cmp dword ptr [edi + edx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587D07FB: lea eax, [edi + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D07FE: je 0x587d0818
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587D0800: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587D0802: push eax
        __asm _emit 0x50
        // 0x587D0803: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xC4
        __asm _emit 0x1A
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587D0818..0x587D0843; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_03() {
    __asm {
        // 0x587D0818: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D081C: add eax, 0xe84
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0821: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587D0824: cmp eax, 0x589c2d38
        __asm _emit 0x3D
        __asm _emit 0x38
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D0829: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D082D: jl 0x587d0650
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x1D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0833: mov eax, dword ptr [esi + 0x7f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0839: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D083B: je 0x587d0850
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587D083D: push eax
        __asm _emit 0x50
        // 0x587D083E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xC3
        __asm _emit 0x1A
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587D0850..0x587D0860; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_04() {
    __asm {
        // 0x587D0850: mov eax, dword ptr [esi + 0x7f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0856: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D0858: je 0x587d086d
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587D085A: push eax
        __asm _emit 0x50
        // 0x587D085B: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xC3
        __asm _emit 0x1A
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587D086D..0x587D087D; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_05() {
    __asm {
        // 0x587D086D: mov eax, dword ptr [esi + 0x7fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0873: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D0875: je 0x587d088a
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587D0877: push eax
        __asm _emit 0x50
        // 0x587D0878: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xC3
        __asm _emit 0x1A
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587D088A..0x587D089A; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_06() {
    __asm {
        // 0x587D088A: mov eax, dword ptr [esi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0890: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D0892: je 0x587d08a7
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587D0894: push eax
        __asm _emit 0x50
        // 0x587D0895: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xC3
        __asm _emit 0x1A
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587D08A7..0x587D08B7; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_07() {
    __asm {
        // 0x587D08A7: mov eax, dword ptr [esi + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D08AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D08AF: je 0x587d08c4
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587D08B1: push eax
        __asm _emit 0x50
        // 0x587D08B2: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xC3
        __asm _emit 0x1A
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587D08C4..0x587D08D4; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_08() {
    __asm {
        // 0x587D08C4: mov eax, dword ptr [esi + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D08CA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D08CC: je 0x587d08e1
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587D08CE: push eax
        __asm _emit 0x50
        // 0x587D08CF: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xC3
        __asm _emit 0x1A
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587D08E1..0x587D08F1; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_09() {
    __asm {
        // 0x587D08E1: mov eax, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D08E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D08E9: je 0x587d08fe
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587D08EB: push eax
        __asm _emit 0x50
        // 0x587D08EC: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xC3
        __asm _emit 0x1A
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587D08FE..0x587D093D; 63 mapped bytes.
extern "C" __declspec(naked) void FUN_587d03d0_segment_10() {
    __asm {
        // 0x587D08FE: mov ecx, dword ptr [esi + 0xadc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0904: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D0906: je 0x587d091a
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587D0908: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D090A: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587D090C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D090E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D0910: mov dword ptr [esi + 0xadc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D091A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D091C: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0924: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587D0929: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D092D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0934: pop ecx
        __asm _emit 0x59
        // 0x587D0935: pop edi
        __asm _emit 0x5F
        // 0x587D0936: pop esi
        __asm _emit 0x5E
        // 0x587D0937: pop ebp
        __asm _emit 0x5D
        // 0x587D0938: pop ebx
        __asm _emit 0x5B
        // 0x587D0939: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587D093C: ret
        __asm _emit 0xC3
    }
}
