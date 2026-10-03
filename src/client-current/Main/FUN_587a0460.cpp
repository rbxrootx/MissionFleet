// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A0460 .. +0x2DC bytes.
extern "C" __declspec(naked) void FUN_587a0460() {
    __asm {
        // 0x587A0460: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A0462: push 0x589807b1
        __asm _emit 0x68
        __asm _emit 0xB1
        __asm _emit 0x07
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A0467: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A046D: push eax
        __asm _emit 0x50
        // 0x587A046E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587A0471: push ebx
        __asm _emit 0x53
        // 0x587A0472: push ebp
        __asm _emit 0x55
        // 0x587A0473: push esi
        __asm _emit 0x56
        // 0x587A0474: push edi
        __asm _emit 0x57
        // 0x587A0475: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A047A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A047C: push eax
        __asm _emit 0x50
        // 0x587A047D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A0481: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0487: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587A0489: mov dword ptr [ebx], 0x589984a8
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0xA8
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A048F: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A0494: cmp dword ptr [eax + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x587A049B: jle 0x587a0724
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A04A1: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A04A8: je 0x587a0724
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A04AE: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A04B4: add edi, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A04BA: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A04BE: je 0x587a0724
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A04C4: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A04C8: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587A04CC: add eax, 0x221
        __asm _emit 0x05
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A04D1: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587A04D4: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A04DA: mov eax, 0xffffffe8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A04DF: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587A04E1: mov dword ptr [ebx + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x587A04E4: lea ebp, [ebx + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x18
        // 0x587A04E7: mov dword ptr [esp + 0x30], 0xa1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A04EF: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587A04F3: jmp 0x587a04f9
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587A04F5: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A04F9: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587A04FB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xC7
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A0500: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A0502: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A0505: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A0509: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0511: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A0513: je 0x587a0572
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x587A0515: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x587A0518: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587A051B: sub eax, dword ptr [esp + 0x30]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A051F: mov edx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x587A0522: add edx, dword ptr [esp + 0x34]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587A0526: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A0528: mov edi, dword ptr [edx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x2A
        // 0x587A052B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A052D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A052F: push ecx
        __asm _emit 0x51
        // 0x587A0530: push eax
        __asm _emit 0x50
        // 0x587A0531: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587A0535: push eax
        __asm _emit 0x50
        // 0x587A0536: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A0538: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x2C
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A053D: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A0543: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x587A0546: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A0548: je 0x587a0574
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587A054A: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x587A054D: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587A0550: mov edx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x587A0553: lea eax, [edi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587A0556: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x587A0559: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587A055B: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587A055E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587A0561: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587A0564: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A0567: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x587A056A: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587A056D: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x587A0570: jmp 0x587a0574
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A0572: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A0574: mov dword ptr [ebp], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x587A0577: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587A057A: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x587A057D: mov eax, 0x22e
        __asm _emit 0xB8
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0582: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A0586: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x587A058A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A058C: je 0x587a0594
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A058E: push esi
        __asm _emit 0x56
        // 0x587A058F: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x29
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A0594: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587A0597: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A0599: je 0x587a05a1
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A059B: push esi
        __asm _emit 0x56
        // 0x587A059C: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x29
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A05A1: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587A05A4: push 0x1e
        __asm _emit 0x6A
        __asm _emit 0x1E
        // 0x587A05A6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A05AB: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587A05AE: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A05B3: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A05B8: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587A05BA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xC6
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A05BF: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A05C1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A05C4: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A05C8: mov dword ptr [esp + 0x24], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A05D0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A05D2: je 0x587a0605
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x587A05D4: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587A05D7: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x587A05DA: sub eax, dword ptr [esp + 0x30]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A05DE: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A05E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A05E2: dec ecx
        __asm _emit 0x49
        // 0x587A05E3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A05E5: push ecx
        __asm _emit 0x51
        // 0x587A05E6: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587A05EA: sub eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x0B
        // 0x587A05ED: push eax
        __asm _emit 0x50
        // 0x587A05EE: push ecx
        __asm _emit 0x51
        // 0x587A05EF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A05F1: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x2B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A05F6: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A05FC: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0603: jmp 0x587a0607
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A0605: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A0607: mov dword ptr [ebp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x587A060A: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587A060D: mov edx, 0x22c
        __asm _emit 0xBA
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0612: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A0616: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x587A061A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A061C: je 0x587a0624
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A061E: push esi
        __asm _emit 0x56
        // 0x587A061F: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x29
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A0624: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587A0627: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A0629: je 0x587a0631
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A062B: push esi
        __asm _emit 0x56
        // 0x587A062C: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x28
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A0631: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587A0633: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xC6
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A0638: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A063A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A063D: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A0641: mov dword ptr [esp + 0x24], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0649: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A064B: je 0x587a06d5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0651: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A0656: cmp dword ptr [eax + 0x164], 0x75
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x75
        // 0x587A065D: jle 0x587a0676
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587A065F: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0666: je 0x587a0676
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587A0668: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A066E: mov edi, dword ptr [eax + 0x1d4]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0674: jmp 0x587a0678
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A0676: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A0678: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587A067B: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x587A067E: sub eax, dword ptr [esp + 0x30]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A0682: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A0684: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A0686: sub ecx, 5
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x587A0689: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A068B: push ecx
        __asm _emit 0x51
        // 0x587A068C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587A0690: sub eax, 5
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x587A0693: push eax
        __asm _emit 0x50
        // 0x587A0694: push ecx
        __asm _emit 0x51
        // 0x587A0695: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A0697: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x2B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A069C: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A06A2: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x587A06A5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A06A7: je 0x587a06d0
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587A06A9: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x587A06AC: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587A06AF: mov eax, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x587A06B2: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587A06B5: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x587A06B8: lea eax, [edi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587A06BB: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587A06BE: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587A06C1: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587A06C4: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A06C7: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x587A06CA: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587A06CD: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x587A06D0: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x587A06D3: jmp 0x587a06d7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A06D5: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A06D7: mov dword ptr [ebp + 0x40], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x587A06DA: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587A06DD: mov eax, 0x321
        __asm _emit 0xB8
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A06E2: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A06E6: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x587A06EA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A06EC: je 0x587a06f4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A06EE: push esi
        __asm _emit 0x56
        // 0x587A06EF: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x28
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A06F4: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587A06F7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A06F9: je 0x587a0701
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A06FB: push esi
        __asm _emit 0x56
        // 0x587A06FC: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A0701: mov eax, dword ptr [ebp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x40
        // 0x587A0704: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0709: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587A070D: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A0711: sub eax, 0x17
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x17
        // 0x587A0714: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587A0717: cmp eax, -0x17
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xE9
        // 0x587A071A: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A071E: jg 0x587a04f5
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xD1
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A0724: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587A0726: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A072A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0731: pop ecx
        __asm _emit 0x59
        // 0x587A0732: pop edi
        __asm _emit 0x5F
        // 0x587A0733: pop esi
        __asm _emit 0x5E
        // 0x587A0734: pop ebp
        __asm _emit 0x5D
        // 0x587A0735: pop ebx
        __asm _emit 0x5B
        // 0x587A0736: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587A0739: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
