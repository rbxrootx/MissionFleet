// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 585 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a3680.

// Ghidra body range 0x587A3680..0x587A38C9; 585 mapped bytes.
extern "C" __declspec(naked) void FUN_587a3680_segment_00() {
    __asm {
        // 0x587A3680: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A3682: push 0x58980911
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x09
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A3687: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A368D: push eax
        __asm _emit 0x50
        // 0x587A368E: push ecx
        __asm _emit 0x51
        // 0x587A368F: push ebx
        __asm _emit 0x53
        // 0x587A3690: push ebp
        __asm _emit 0x55
        // 0x587A3691: push esi
        __asm _emit 0x56
        // 0x587A3692: push edi
        __asm _emit 0x57
        // 0x587A3693: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A3698: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A369A: push eax
        __asm _emit 0x50
        // 0x587A369B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A369F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A36A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A36A7: mov eax, dword ptr [esi + 0x3e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A36AD: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587A36AF: mov dword ptr [esi + 0x134], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A36B9: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587A36BB: je 0x587a36c6
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587A36BD: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A36C2: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587A36C6: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587A36C8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x95
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A36CD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A36D0: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A36D4: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A36D8: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587A36DA: je 0x587a3720
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x587A36DC: mov edx, dword ptr [0x58a246f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A36E2: cmp dword ptr [edx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A36E8: jle 0x587a36fa
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587A36EA: cmp dword ptr [edx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A36F0: je 0x587a36fa
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587A36F2: mov edi, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A36F8: jmp 0x587a36fc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A36FA: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A36FC: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587A36FF: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3705: mov edx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A370B: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3710: push ecx
        __asm _emit 0x51
        // 0x587A3711: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A3714: push ecx
        __asm _emit 0x51
        // 0x587A3715: push edi
        __asm _emit 0x57
        // 0x587A3716: push edx
        __asm _emit 0x52
        // 0x587A3717: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A3719: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x45
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A371E: jmp 0x587a3722
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A3720: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A3722: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x587A3725: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A372A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A372C: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A3730: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xF5
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A3735: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x587A3737: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x95
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A373C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A373F: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A3743: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A374B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587A374D: je 0x587a37a8
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x587A374F: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3755: cmp dword ptr [ecx + 0x160], 0x1c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        // 0x587A375C: jle 0x587a3774
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587A375E: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3764: je 0x587a3774
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587A3766: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A376C: add edx, 0x700
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3772: jmp 0x587a3776
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A3774: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A3776: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A377C: mov edi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3782: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587A3785: push ebp
        __asm _emit 0x55
        // 0x587A3786: push 0x1b58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A378B: push ecx
        __asm _emit 0x51
        // 0x587A378C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A378F: push ecx
        __asm _emit 0x51
        // 0x587A3790: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3796: push edx
        __asm _emit 0x52
        // 0x587A3797: mov edx, dword ptr [esi + 0x3f8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A379D: push edi
        __asm _emit 0x57
        // 0x587A379E: push edx
        __asm _emit 0x52
        // 0x587A379F: push ecx
        __asm _emit 0x51
        // 0x587A37A0: push ebx
        __asm _emit 0x53
        // 0x587A37A1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A37A3: call 0x587b7260
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A37A8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A37AA: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A37AE: mov dword ptr [esi + 0x3ec], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A37B4: call 0x587a3370
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A37B9: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587A37BB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A37C0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A37C3: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A37C7: mov dword ptr [esp + 0x20], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A37CF: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587A37D1: je 0x587a3827
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x587A37D3: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587A37D6: and edx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587A37DC: jns 0x587a37e3
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587A37DE: dec edx
        __asm _emit 0x4A
        // 0x587A37DF: or edx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFC
        // 0x587A37E2: inc edx
        __asm _emit 0x42
        // 0x587A37E3: mov edi, dword ptr [0x58a246dc]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A37E9: add edx, 7
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x07
        // 0x587A37EC: cmp dword ptr [edi + 0x170], edx
        __asm _emit 0x39
        __asm _emit 0x97
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A37F2: jle 0x587a3817
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x587A37F4: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587A37F6: jl 0x587a3817
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x587A37F8: cmp dword ptr [edi + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x9F
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A37FE: je 0x587a3817
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587A3800: mov ecx, dword ptr [edi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3806: mov edx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x91
        // 0x587A3809: push edx
        __asm _emit 0x52
        // 0x587A380A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A380C: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3811: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A3815: jmp 0x587a382b
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x587A3817: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A3819: push edx
        __asm _emit 0x52
        // 0x587A381A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A381C: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3821: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A3825: jmp 0x587a382b
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587A3827: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A382B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A382F: mov dword ptr [esi + 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x587A3832: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3838: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A383D: mov ebx, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3843: mov eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x1C
        // 0x587A3846: sub eax, dword ptr [ecx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x587A3849: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A384D: mov ebp, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xAB
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3853: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587A3855: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A385B: cdq
        __asm _emit 0x99
        // 0x587A385C: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587A385E: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587A3861: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587A3863: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x587A3866: sub eax, dword ptr [ecx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x587A3869: sub edi, dword ptr [ebx + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x7B
        __asm _emit 0x50
        // 0x587A386C: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587A386E: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3874: cdq
        __asm _emit 0x99
        // 0x587A3875: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587A3877: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A387B: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587A387E: add eax, dword ptr [ebx + 0x54]
        __asm _emit 0x03
        __asm _emit 0x43
        __asm _emit 0x54
        // 0x587A3881: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587A3883: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587A3885: je 0x587a3895
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587A3887: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A388D: push edx
        __asm _emit 0x52
        // 0x587A388E: push eax
        __asm _emit 0x50
        // 0x587A388F: push edi
        __asm _emit 0x57
        // 0x587A3890: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3895: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A389A: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x587A389D: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587A389F: je 0x587a38af
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587A38A1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A38A3: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x2E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587A38A8: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x587A38AB: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587A38AD: jne 0x587a38a1
        __asm _emit 0x75
        __asm _emit 0xF2
        // 0x587A38AF: mov dword ptr [esi + 0x13c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A38B5: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A38B9: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A38C0: pop ecx
        __asm _emit 0x59
        // 0x587A38C1: pop edi
        __asm _emit 0x5F
        // 0x587A38C2: pop esi
        __asm _emit 0x5E
        // 0x587A38C3: pop ebp
        __asm _emit 0x5D
        // 0x587A38C4: pop ebx
        __asm _emit 0x5B
        // 0x587A38C5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A38C8: ret
        __asm _emit 0xC3
    }
}
