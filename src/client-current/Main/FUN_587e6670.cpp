// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2046 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_587e6670.

// Ghidra body range 0x587E6670..0x587E6C18; 1448 mapped bytes.
extern "C" __declspec(naked) void FUN_587e6670_segment_00() {
    __asm {
        // 0x587E6670: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587E6673: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6678: push ebx
        __asm _emit 0x53
        // 0x587E6679: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587E667C: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E6680: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587E6682: je 0x587e6e13
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6688: push ebp
        __asm _emit 0x55
        // 0x587E6689: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E668B: push edi
        __asm _emit 0x57
        // 0x587E668C: mov edi, 0x7530
        __asm _emit 0xBF
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6691: mov ebp, 0x4e20
        __asm _emit 0xBD
        __asm _emit 0x20
        __asm _emit 0x4E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6696: lea ecx, [eax + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x587E6699: cmp dword ptr [0x58a242f8], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xF8
        __asm _emit 0x42
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E669F: je 0x587e66a9
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587E66A1: lea eax, [ecx - 0x1f]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0xE1
        // 0x587E66A4: jmp 0x587e6786
        __asm _emit 0xE9
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66A9: cmp dword ptr [0x58a242fc], 0xa
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xFC
        __asm _emit 0x42
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x0A
        // 0x587E66B0: je 0x587e66bc
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E66B2: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66B7: jmp 0x587e6786
        __asm _emit 0xE9
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66BC: cmp dword ptr [0x58a24300], 0x28
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x28
        // 0x587E66C3: je 0x587e66cf
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E66C5: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66CA: jmp 0x587e6786
        __asm _emit 0xE9
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66CF: cmp dword ptr [0x58a24304], 0x1770
        __asm _emit 0x81
        __asm _emit 0x3D
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66D9: je 0x587e66e5
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E66DB: mov eax, 4
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66E0: jmp 0x587e6786
        __asm _emit 0xE9
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66E5: mov edx, 0x12c0
        __asm _emit 0xBA
        __asm _emit 0xC0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66EA: cmp dword ptr [0x58a24308], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E66F0: je 0x587e66fc
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E66F2: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66F7: jmp 0x587e6786
        __asm _emit 0xE9
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E66FC: cmp dword ptr [0x58a2430c], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x0C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6702: je 0x587e670b
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6704: mov eax, 6
        __asm _emit 0xB8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6709: jmp 0x587e6786
        __asm _emit 0xEB
        __asm _emit 0x7B
        // 0x587E670B: cmp dword ptr [0x58a24310], 0x24
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587E6712: je 0x587e671b
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6714: mov eax, 7
        __asm _emit 0xB8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6719: jmp 0x587e6786
        __asm _emit 0xEB
        __asm _emit 0x6B
        // 0x587E671B: cmp dword ptr [0x58a24314], ecx
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6721: je 0x587e672a
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6723: mov eax, 8
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6728: jmp 0x587e6786
        __asm _emit 0xEB
        __asm _emit 0x5C
        // 0x587E672A: cmp dword ptr [0x58a24318], ecx
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x18
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6730: je 0x587e6739
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6732: mov eax, 9
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6737: jmp 0x587e6786
        __asm _emit 0xEB
        __asm _emit 0x4D
        // 0x587E6739: cmp dword ptr [0x58a2431c], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x1C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E673F: je 0x587e6748
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6741: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6746: jmp 0x587e6786
        __asm _emit 0xEB
        __asm _emit 0x3E
        // 0x587E6748: cmp dword ptr [0x58a24320], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E674E: je 0x587e6757
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6750: mov eax, 0xb
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6755: jmp 0x587e6786
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x587E6757: cmp dword ptr [0x58a24324], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0x24
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E675D: je 0x587e6766
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E675F: mov eax, 0xc
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6764: jmp 0x587e6786
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x587E6766: cmp dword ptr [0x58a24328], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x28
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E676C: je 0x587e6775
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E676E: mov eax, 0xd
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6773: jmp 0x587e6786
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587E6775: cmp dword ptr [0x58a2432c], 0x186a0
        __asm _emit 0x81
        __asm _emit 0x3D
        __asm _emit 0x2C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0xA0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E677F: je 0x587e6786
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587E6781: mov eax, 0xe
        __asm _emit 0xB8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6786: mov edx, 0x5dc0
        __asm _emit 0xBA
        __asm _emit 0xC0
        __asm _emit 0x5D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E678B: push esi
        __asm _emit 0x56
        // 0x587E678C: cmp dword ptr [0x58a24330], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6792: je 0x587e679e
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6794: mov eax, 0xf
        __asm _emit 0xB8
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6799: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xFB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E679E: cmp dword ptr [0x58a24334], 0x13880
        __asm _emit 0x81
        __asm _emit 0x3D
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E67A8: je 0x587e67b4
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E67AA: mov eax, 0x10
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E67AF: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E67B4: cmp dword ptr [0x58a24338], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E67BA: je 0x587e67c6
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E67BC: mov eax, 0x11
        __asm _emit 0xB8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E67C1: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xD3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E67C6: cmp dword ptr [0x58a2433c], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x3C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587E67CD: je 0x587e67d9
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E67CF: mov eax, 0x12
        __asm _emit 0xB8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E67D4: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E67D9: mov esi, 0x8ca0
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E67DE: cmp dword ptr [0x58a24340], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E67E4: je 0x587e67f0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E67E6: mov eax, 0x13
        __asm _emit 0xB8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E67EB: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xA9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E67F0: cmp dword ptr [0x58a24344], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E67F6: je 0x587e6802
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E67F8: mov eax, 0x14
        __asm _emit 0xB8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E67FD: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6802: cmp dword ptr [0x58a24348], 0x2ee0
        __asm _emit 0x81
        __asm _emit 0x3D
        __asm _emit 0x48
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0xE0
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E680C: je 0x587e6818
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E680E: mov eax, 0x15
        __asm _emit 0xB8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6813: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6818: cmp dword ptr [0x58a2434c], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x4C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E681E: je 0x587e682a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6820: mov eax, 0x16
        __asm _emit 0xB8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6825: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x6F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E682A: cmp dword ptr [0x58a24350], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x50
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6830: je 0x587e683c
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6832: mov eax, 0x17
        __asm _emit 0xB8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6837: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x5D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E683C: cmp dword ptr [0x58a24354], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x54
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6842: je 0x587e684e
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6844: mov eax, 0x18
        __asm _emit 0xB8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6849: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x4B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E684E: cmp dword ptr [0x58a24358], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6854: je 0x587e6860
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6856: mov eax, 0x19
        __asm _emit 0xB8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E685B: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6860: cmp dword ptr [0x58a2435c], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x5C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6866: je 0x587e6872
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6868: mov eax, 0x1a
        __asm _emit 0xB8
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E686D: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6872: cmp dword ptr [0x58a24360], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6878: je 0x587e6884
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E687A: mov eax, 0x1b
        __asm _emit 0xB8
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E687F: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6884: cmp dword ptr [0x58a24364], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E688A: je 0x587e6896
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E688C: mov eax, 0x1c
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6891: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6896: cmp dword ptr [0x58a24368], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E689C: je 0x587e68a8
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E689E: mov eax, 0x1d
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68A3: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68A8: cmp dword ptr [0x58a2436c], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x6C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E68AE: je 0x587e68ba
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E68B0: mov eax, 0x1e
        __asm _emit 0xB8
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68B5: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68BA: cmp dword ptr [0x58a24388], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E68C0: je 0x587e68cc
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E68C2: mov eax, 0x1f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68C7: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xCD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68CC: cmp dword ptr [0x58a2438c], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E68D2: je 0x587e68db
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E68D4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587E68D6: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68DB: cmp dword ptr [0x58a24390], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E68E1: je 0x587e68ed
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E68E3: mov eax, 0x21
        __asm _emit 0xB8
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68E8: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68ED: cmp dword ptr [0x58a24394], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E68F3: je 0x587e68ff
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E68F5: mov eax, 0x22
        __asm _emit 0xB8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68FA: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x9A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E68FF: cmp dword ptr [0x58a24398], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6905: je 0x587e6911
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6907: mov eax, 0x23
        __asm _emit 0xB8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E690C: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6911: cmp dword ptr [0x58a2439c], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6917: je 0x587e6923
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6919: mov eax, 0x24
        __asm _emit 0xB8
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E691E: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6923: mov edx, 0x7d00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6928: cmp dword ptr [0x58a243a0], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E692E: je 0x587e693a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6930: mov eax, 0x25
        __asm _emit 0xB8
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6935: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x5F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E693A: cmp dword ptr [0x58a243a4], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6940: je 0x587e694c
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6942: mov eax, 0x26
        __asm _emit 0xB8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6947: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x4D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E694C: cmp dword ptr [0x58a243a8], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6952: je 0x587e695e
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6954: mov eax, 0x27
        __asm _emit 0xB8
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6959: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E695E: cmp dword ptr [0x58a243ac], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xAC
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6964: je 0x587e6970
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6966: mov eax, 0x36
        __asm _emit 0xB8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E696B: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6970: cmp dword ptr [0x58a243b0], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xB0
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6976: je 0x587e6982
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6978: mov eax, 0x37
        __asm _emit 0xB8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E697D: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6982: cmp dword ptr [0x58a243b4], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xB4
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6988: je 0x587e6994
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E698A: mov eax, 0x38
        __asm _emit 0xB8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E698F: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6994: cmp dword ptr [0x58a2449c], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x9C
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587E699B: je 0x587e69a7
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E699D: mov eax, 0x28
        __asm _emit 0xB8
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E69A2: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E69A7: cmp dword ptr [0x58a244a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587E69AE: je 0x587e69ba
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E69B0: mov eax, 0x29
        __asm _emit 0xB8
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E69B5: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E69BA: cmp dword ptr [0x58a244a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587E69C1: je 0x587e69cd
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E69C3: mov eax, 0x2a
        __asm _emit 0xB8
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E69C8: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E69CD: cmp dword ptr [0x58a244a8], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587E69D4: je 0x587e69e0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E69D6: mov eax, 0x2b
        __asm _emit 0xB8
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E69DB: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E69E0: cmp dword ptr [0x58a244ac], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xAC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587E69E7: je 0x587e69f3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E69E9: mov eax, 0x2c
        __asm _emit 0xB8
        __asm _emit 0x2C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E69EE: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E69F3: cmp dword ptr [0x58a244b0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xB0
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587E69FA: je 0x587e6a06
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E69FC: mov eax, 0x2d
        __asm _emit 0xB8
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A01: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A06: cmp dword ptr [0x58a244b4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xB4
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587E6A0D: je 0x587e6a19
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E6A0F: mov eax, 0x2e
        __asm _emit 0xB8
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A14: jmp 0x587e6a99
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A19: cmp dword ptr [0x58a244b8], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xB8
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587E6A20: je 0x587e6a29
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6A22: mov eax, 0x2f
        __asm _emit 0xB8
        __asm _emit 0x2F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A27: jmp 0x587e6a99
        __asm _emit 0xEB
        __asm _emit 0x70
        // 0x587E6A29: cmp dword ptr [0x58a244bc], 0x118
        __asm _emit 0x81
        __asm _emit 0x3D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A33: je 0x587e6a3c
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6A35: mov eax, 0x30
        __asm _emit 0xB8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A3A: jmp 0x587e6a99
        __asm _emit 0xEB
        __asm _emit 0x5D
        // 0x587E6A3C: cmp dword ptr [0x58a244c0], 0xffffff4c
        __asm _emit 0x81
        __asm _emit 0x3D
        __asm _emit 0xC0
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E6A46: je 0x587e6a4f
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6A48: mov eax, 0x31
        __asm _emit 0xB8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A4D: jmp 0x587e6a99
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x587E6A4F: cmp dword ptr [0x58a244c4], 0xa
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xC4
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x0A
        // 0x587E6A56: je 0x587e6a5f
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6A58: mov eax, 0x32
        __asm _emit 0xB8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A5D: jmp 0x587e6a99
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x587E6A5F: cmp dword ptr [0x58a244c8], 0x32
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x32
        // 0x587E6A66: je 0x587e6a6f
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6A68: mov eax, 0x33
        __asm _emit 0xB8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A6D: jmp 0x587e6a99
        __asm _emit 0xEB
        __asm _emit 0x2A
        // 0x587E6A6F: cmp dword ptr [0x58a244cc], 0xf0
        __asm _emit 0x81
        __asm _emit 0x3D
        __asm _emit 0xCC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A79: je 0x587e6a82
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6A7B: mov eax, 0x34
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A80: jmp 0x587e6a99
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587E6A82: cmp dword ptr [0x58a244d0], 0x1e0
        __asm _emit 0x81
        __asm _emit 0x3D
        __asm _emit 0xD0
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A8C: je 0x587e6a95
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E6A8E: mov eax, 0x35
        __asm _emit 0xB8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6A93: jmp 0x587e6a99
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587E6A95: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E6A97: je 0x587e6abb
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587E6A99: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6A9F: push eax
        __asm _emit 0x50
        // 0x587E6AA0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E6AA2: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587E6AA4: call 0x587b9b30
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587E6AA9: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6AAF: pop esi
        __asm _emit 0x5E
        // 0x587E6AB0: pop edi
        __asm _emit 0x5F
        // 0x587E6AB1: pop ebp
        __asm _emit 0x5D
        // 0x587E6AB2: pop ebx
        __asm _emit 0x5B
        // 0x587E6AB3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E6AB6: jmp 0x58970ae0
        __asm _emit 0xE9
        __asm _emit 0x25
        __asm _emit 0xA0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587E6ABB: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E6ABF: cmp word ptr [ecx + 0x105f0], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x587E6AC7: mov ecx, dword ptr [ebx + 0x1018]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6ACD: jne 0x587e6af5
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x587E6ACF: movzx eax, word ptr [ecx + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6AD6: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6ADD: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587E6ADF: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587E6AE4: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E6AE6: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587E6AE9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E6AEB: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E6AEE: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E6AF0: movzx esi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF0
        // 0x587E6AF3: jmp 0x587e6afc
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587E6AF5: movzx esi, word ptr [ecx + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB1
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6AFC: movzx eax, word ptr [ebx + 0x478]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6B03: imul eax, dword ptr [ebx + 0xc70]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x83
        __asm _emit 0x70
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6B0A: cdq
        __asm _emit 0x99
        // 0x587E6B0B: idiv dword ptr [0x58a24320]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6B11: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x587E6B14: movzx eax, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC6
        // 0x587E6B17: lea eax, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x50
        // 0x587E6B1A: mov edx, dword ptr [ebx + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6B20: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587E6B22: je 0x587e6b45
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587E6B24: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6B2A: push eax
        __asm _emit 0x50
        // 0x587E6B2B: push edx
        __asm _emit 0x52
        // 0x587E6B2C: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587E6B2E: call 0x587b9b60
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587E6B33: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6B39: pop esi
        __asm _emit 0x5E
        // 0x587E6B3A: pop edi
        __asm _emit 0x5F
        // 0x587E6B3B: pop ebp
        __asm _emit 0x5D
        // 0x587E6B3C: pop ebx
        __asm _emit 0x5B
        // 0x587E6B3D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E6B40: jmp 0x58970ae0
        __asm _emit 0xE9
        __asm _emit 0x9B
        __asm _emit 0x9F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587E6B45: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6B4B: movzx dx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x10
        // 0x587E6B4F: movzx esi, byte ptr [eax + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x587E6B53: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587E6B56: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD6
        // 0x587E6B59: movzx esi, word ptr [eax + 0xd8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB0
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6B60: shl dx, 0xb
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x0B
        // 0x587E6B64: or dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0x50
        __asm _emit 0x02
        // 0x587E6B68: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587E6B6B: cmp si, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x1E
        // 0x587E6B6F: jae 0x587e6bac
        __asm _emit 0x73
        __asm _emit 0x3B
        // 0x587E6B71: movzx ax, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x01
        // 0x587E6B75: movzx si, byte ptr [ecx + 1]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x71
        __asm _emit 0x01
        // 0x587E6B7A: add ax, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587E6B7D: or ax, si
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC6
        // 0x587E6B80: shl ax, 0xb
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x0B
        // 0x587E6B84: or ax, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0x41
        __asm _emit 0x02
        // 0x587E6B88: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x587E6B8B: push ecx
        __asm _emit 0x51
        // 0x587E6B8C: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6B92: push edx
        __asm _emit 0x52
        // 0x587E6B93: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x587E6B95: call 0x587b9b30
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x2F
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587E6B9A: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6BA0: pop esi
        __asm _emit 0x5E
        // 0x587E6BA1: pop edi
        __asm _emit 0x5F
        // 0x587E6BA2: pop ebp
        __asm _emit 0x5D
        // 0x587E6BA3: pop ebx
        __asm _emit 0x5B
        // 0x587E6BA4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E6BA7: jmp 0x58970ae0
        __asm _emit 0xE9
        __asm _emit 0x34
        __asm _emit 0x9F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587E6BAC: mov ecx, dword ptr [ebx + 0x1014]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6BB2: mov ax, word ptr [eax + 0xd6]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6BB9: cmp ax, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x1E
        // 0x587E6BBD: jae 0x587e6bfc
        __asm _emit 0x73
        __asm _emit 0x3D
        // 0x587E6BBF: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587E6BC1: movzx ax, byte ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x03
        // 0x587E6BC5: movzx cx, byte ptr [ebx + 1]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4B
        __asm _emit 0x01
        // 0x587E6BCA: add ax, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587E6BCD: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587E6BD0: shl cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x0B
        // 0x587E6BD4: or cx, word ptr [ebx + 2]
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0x4B
        __asm _emit 0x02
        // 0x587E6BD8: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x587E6BDB: push ecx
        __asm _emit 0x51
        // 0x587E6BDC: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6BE2: push edx
        __asm _emit 0x52
        // 0x587E6BE3: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587E6BE5: call 0x587b9b30
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x2F
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587E6BEA: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6BF0: pop esi
        __asm _emit 0x5E
        // 0x587E6BF1: pop edi
        __asm _emit 0x5F
        // 0x587E6BF2: pop ebp
        __asm _emit 0x5D
        // 0x587E6BF3: pop ebx
        __asm _emit 0x5B
        // 0x587E6BF4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E6BF7: jmp 0x58970ae0
        __asm _emit 0xE9
        __asm _emit 0xE4
        __asm _emit 0x9E
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587E6BFC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E6BFE: test dword ptr [ebx + 0x394], 0x3e
        __asm _emit 0xF7
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6C08: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E6C0C: jbe 0x587e6e10
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6C12: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E6C16: jmp 0x587e6c20
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x587E6C20..0x587E6E76; 598 mapped bytes.
extern "C" __declspec(naked) void FUN_587e6670_segment_01() {
    __asm {
        // 0x587E6C20: mov esi, dword ptr [ebx + 0x464]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6C26: add esi, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E6C2A: movzx eax, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x06
        // 0x587E6C2D: sub eax, 5
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x587E6C30: je 0x587e6c40
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587E6C32: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587E6C35: je 0x587e6c40
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587E6C37: sub eax, 7
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x07
        // 0x587E6C3A: jne 0x587e6def
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6C40: movzx eax, byte ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x0E
        // 0x587E6C44: mov edi, dword ptr [ebx + eax*4 + 0xe8c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6C4B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587E6C4D: je 0x587e6def
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6C53: movzx ecx, byte ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587E6C57: sub ecx, 0xb
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x0B
        // 0x587E6C5A: je 0x587e6ce1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6C60: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x587E6C63: jne 0x587e6d2a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6C69: mov edx, dword ptr [ebx + eax*8 + 0xf0c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xC3
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6C70: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587E6C72: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6C78: push eax
        __asm _emit 0x50
        // 0x587E6C79: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E6C7D: call 0x58778d60
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x20
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E6C82: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E6C86: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E6C88: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6C8E: push edx
        __asm _emit 0x52
        // 0x587E6C8F: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587E6C91: call 0x58778e20
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x21
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E6C96: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587E6C98: je 0x587e6d2a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6C9E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E6CA0: je 0x587e6d2a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6CA6: mov cx, word ptr [ebp + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6CAD: cmp cx, word ptr [eax + 0xb0]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6CB4: je 0x587e6d2a
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x587E6CB6: movzx eax, word ptr [eax + 0xb0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6CBD: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x587E6CC0: push eax
        __asm _emit 0x50
        // 0x587E6CC1: push ecx
        __asm _emit 0x51
        // 0x587E6CC2: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6CC8: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587E6CCA: call 0x587b9b30
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x2E
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587E6CCF: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6CD5: pop esi
        __asm _emit 0x5E
        // 0x587E6CD6: pop edi
        __asm _emit 0x5F
        // 0x587E6CD7: pop ebp
        __asm _emit 0x5D
        // 0x587E6CD8: pop ebx
        __asm _emit 0x5B
        // 0x587E6CD9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E6CDC: jmp 0x58970ae0
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0x9D
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587E6CE1: mov edx, dword ptr [ebx + eax*8 + 0xf0c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xC3
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6CE8: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587E6CEA: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6CF0: push eax
        __asm _emit 0x50
        // 0x587E6CF1: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E6CF5: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E6CFA: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E6CFE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E6D00: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6D06: push edx
        __asm _emit 0x52
        // 0x587E6D07: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587E6D09: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x20
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E6D0E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587E6D10: je 0x587e6d2a
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587E6D12: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E6D14: je 0x587e6d2a
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587E6D16: mov cx, word ptr [ebp + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6D1D: cmp cx, word ptr [eax + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x88
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6D24: jne 0x587e6e18
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6D2A: movzx eax, byte ptr [esi + 8]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587E6D2E: sub eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x0B
        // 0x587E6D31: je 0x587e6dad
        __asm _emit 0x74
        __asm _emit 0x7A
        // 0x587E6D33: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587E6D36: jne 0x587e6def
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6D3C: movzx edx, byte ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x0E
        // 0x587E6D40: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587E6D42: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6D48: mov ebp, dword ptr [ebx + edx*8 + 0xf10]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0xD3
        __asm _emit 0x10
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6D4F: push eax
        __asm _emit 0x50
        // 0x587E6D50: call 0x58778d60
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x20
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E6D55: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587E6D58: push ecx
        __asm _emit 0x51
        // 0x587E6D59: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6D5F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587E6D61: call 0x58778e20
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x20
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E6D66: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587E6D68: je 0x587e6def
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6D6E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E6D70: je 0x587e6def
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x587E6D72: mov dx, word ptr [esi + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6D79: cmp dx, word ptr [eax + 0xb0]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6D80: je 0x587e6def
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x587E6D82: movzx ecx, word ptr [eax + 0xb0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6D89: push ecx
        __asm _emit 0x51
        // 0x587E6D8A: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6D90: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587E6D93: push edx
        __asm _emit 0x52
        // 0x587E6D94: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587E6D96: call 0x587b9b30
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x2D
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587E6D9B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6DA1: pop esi
        __asm _emit 0x5E
        // 0x587E6DA2: pop edi
        __asm _emit 0x5F
        // 0x587E6DA3: pop ebp
        __asm _emit 0x5D
        // 0x587E6DA4: pop ebx
        __asm _emit 0x5B
        // 0x587E6DA5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E6DA8: jmp 0x58970ae0
        __asm _emit 0xE9
        __asm _emit 0x33
        __asm _emit 0x9D
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587E6DAD: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587E6DAF: movzx eax, byte ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x0E
        // 0x587E6DB3: mov ebp, dword ptr [ebx + eax*8 + 0xf10]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0xC3
        __asm _emit 0x10
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6DBA: push ecx
        __asm _emit 0x51
        // 0x587E6DBB: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6DC1: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x1F
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E6DC6: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587E6DC9: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6DCF: push edx
        __asm _emit 0x52
        // 0x587E6DD0: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587E6DD2: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x1F
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E6DD7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587E6DD9: je 0x587e6def
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587E6DDB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E6DDD: je 0x587e6def
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587E6DDF: mov cx, word ptr [esi + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6DE6: cmp cx, word ptr [eax + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x88
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6DED: jne 0x587e6e47
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x587E6DEF: mov edx, dword ptr [ebx + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6DF5: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E6DF9: add dword ptr [esp + 0x14], 0x18
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x18
        // 0x587E6DFE: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x587E6E00: inc eax
        __asm _emit 0x40
        // 0x587E6E01: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587E6E04: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E6E08: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587E6E0A: jb 0x587e6c20
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E6E10: pop esi
        __asm _emit 0x5E
        // 0x587E6E11: pop edi
        __asm _emit 0x5F
        // 0x587E6E12: pop ebp
        __asm _emit 0x5D
        // 0x587E6E13: pop ebx
        __asm _emit 0x5B
        // 0x587E6E14: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E6E17: ret
        __asm _emit 0xC3
        // 0x587E6E18: movzx edx, word ptr [eax + 0xa2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6E1F: movzx eax, word ptr [ebp + 0xa2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6E26: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6E2C: push edx
        __asm _emit 0x52
        // 0x587E6E2D: push eax
        __asm _emit 0x50
        // 0x587E6E2E: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587E6E30: call 0x587b9b30
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x2C
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587E6E35: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6E3B: pop esi
        __asm _emit 0x5E
        // 0x587E6E3C: pop edi
        __asm _emit 0x5F
        // 0x587E6E3D: pop ebp
        __asm _emit 0x5D
        // 0x587E6E3E: pop ebx
        __asm _emit 0x5B
        // 0x587E6E3F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E6E42: jmp 0x58970ae0
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x9C
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587E6E47: movzx eax, word ptr [eax + 0xa2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6E4E: movzx ecx, word ptr [esi + 0xa2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6E55: push eax
        __asm _emit 0x50
        // 0x587E6E56: push ecx
        __asm _emit 0x51
        // 0x587E6E57: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6E5D: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587E6E5F: call 0x587b9b30
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x2C
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587E6E64: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6E6A: pop esi
        __asm _emit 0x5E
        // 0x587E6E6B: pop edi
        __asm _emit 0x5F
        // 0x587E6E6C: pop ebp
        __asm _emit 0x5D
        // 0x587E6E6D: pop ebx
        __asm _emit 0x5B
        // 0x587E6E6E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E6E71: jmp 0x58970ae0
        __asm _emit 0xE9
        __asm _emit 0x6A
        __asm _emit 0x9C
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
