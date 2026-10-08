// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 752 bytes in 1 exact ranges.
// Source symbol alias: FUN_5873c4a0.

// Ghidra body range 0x5873C4A0..0x5873C790; 752 mapped bytes.
extern "C" __declspec(naked) void FUN_5873c4a0_segment_00() {
    __asm {
        // 0x5873C4A0: sub esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C4A6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873C4AB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873C4AD: mov dword ptr [esp + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C4B4: push esi
        __asm _emit 0x56
        // 0x5873C4B5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873C4B7: cmp dword ptr [esi + 0x460], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C4BE: je 0x5873c4da
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5873C4C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873C4C2: pop esi
        __asm _emit 0x5E
        // 0x5873C4C3: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C4CA: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5873C4CC: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x07
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873C4D1: add esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C4D7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873C4DA: movzx ecx, word ptr [esi + 0x2d8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C4E1: mov eax, dword ptr [esp + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C4E8: push ebp
        __asm _emit 0x55
        // 0x5873C4E9: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5873C4EB: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5873C4EE: push edi
        __asm _emit 0x57
        // 0x5873C4EF: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C4F4: jl 0x5873c4f8
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x5873C4F6: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5873C4F8: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C4FE: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873C504: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873C50A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873C50C: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C512: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C517: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x5873C51A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873C51C: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x5873C51E: movzx eax, word ptr [esi + 0x2dc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C525: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x5873C528: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x5873C52A: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x5873C52C: jl 0x5873c6a3
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C532: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873C534: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873C536: call 0x5873c2e0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C53B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873C53D: cmp dword ptr [esi + 0x348], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C543: mov word ptr [esi + 0x2dc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C54A: mov dword ptr [esi + 0x460], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C554: mov dword ptr [esi + 0x31c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C55A: mov dword ptr [esi + 0x4c8], 0xa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C564: mov dword ptr [esi + 0x324], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C56A: jl 0x5873c576
        __asm _emit 0x7C
        __asm _emit 0x0A
        // 0x5873C56C: mov dword ptr [esi + 0x348], 0xffffff6a
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C576: mov ecx, dword ptr [esi + 0x520]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C57C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873C57E: je 0x5873c587
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5873C580: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5873C582: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873C585: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873C587: mov eax, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C58D: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5873C592: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5873C595: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873C597: je 0x5873c609
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x5873C599: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C59E: movzx eax, word ptr [eax + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C5A5: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5873C5A9: je 0x5873c5e4
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5873C5AB: cmp ax, 0x13
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x13
        // 0x5873C5AF: je 0x5873c5e4
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5873C5B1: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C5B7: movzx eax, word ptr [edx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873C5BE: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5873C5C2: je 0x5873c5e4
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x5873C5C4: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5873C5C8: je 0x5873c5e4
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5873C5CA: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5873C5CE: je 0x5873c5e4
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5873C5D0: cmp byte ptr [0x58a2485f], 0
        __asm _emit 0x80
        __asm _emit 0x3D
        __asm _emit 0x5F
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5873C5D7: jne 0x5873c5e4
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5873C5D9: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873C5DC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873C5DE: push eax
        __asm _emit 0x50
        // 0x5873C5DF: call 0x588dc380
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xFD
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873C5E4: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873C5E7: mov ecx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C5ED: mov edx, dword ptr [eax + 0x1274]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C5F3: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5873C5F5: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5873C5FB: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873C5FD: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5873C603: mov dword ptr [eax + 0x1274], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C609: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C60E: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C615: jne 0x5873c6ac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C61B: cmp dword ptr [esi + 0x78], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x78
        __asm _emit 0x00
        // 0x5873C61F: jne 0x5873c6ac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C625: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5873C628: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C62E: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5873C631: jne 0x5873c6ac
        __asm _emit 0x75
        __asm _emit 0x79
        // 0x5873C633: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C638: mov edi, 0x23
        __asm _emit 0xBF
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C63D: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C643: jle 0x5873c65c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5873C645: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C64C: je 0x5873c65c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873C64E: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C654: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C65A: jmp 0x5873c65e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873C65C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873C65E: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C664: push edx
        __asm _emit 0x52
        // 0x5873C665: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xB3
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873C66A: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C66F: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C675: jle 0x5873c697
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5873C677: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C67E: je 0x5873c697
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5873C680: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C686: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C68C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873C68E: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873C691: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873C693: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873C695: jmp 0x5873c6ac
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5873C697: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873C699: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873C69B: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873C69E: push ecx
        __asm _emit 0x51
        // 0x5873C69F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873C6A1: jmp 0x5873c6ac
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5873C6A3: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5873C6A5: mov word ptr [esi + 0x2dc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C6AC: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873C6B1: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x5873C6B3: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x5873C6B5: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873C6B7: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873C6BA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873C6BC: cmp dword ptr [esi + 0x220], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C6C2: pop edi
        __asm _emit 0x5F
        // 0x5873C6C3: pop ebp
        __asm _emit 0x5D
        // 0x5873C6C4: jge 0x5873c6cc
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5873C6C6: mov dword ptr [esi + 0x220], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C6CC: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5873C6D3: je 0x5873c772
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C6D9: mov ecx, dword ptr [esi + 0x4d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C6DF: movzx eax, word ptr [esi + 0x2dc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C6E6: mov edx, dword ptr [esp + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C6ED: push ecx
        __asm _emit 0x51
        // 0x5873C6EE: movzx ecx, word ptr [esi + 0x2d8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C6F5: push edx
        __asm _emit 0x52
        // 0x5873C6F6: mov edx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C6FC: push eax
        __asm _emit 0x50
        // 0x5873C6FD: mov eax, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C703: push ecx
        __asm _emit 0x51
        // 0x5873C704: mov ecx, dword ptr [esi + 0x4ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C70A: push edx
        __asm _emit 0x52
        // 0x5873C70B: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5873C70E: push eax
        __asm _emit 0x50
        // 0x5873C70F: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873C712: push ecx
        __asm _emit 0x51
        // 0x5873C713: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5873C716: push edx
        __asm _emit 0x52
        // 0x5873C717: mov edx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x5873C71A: push eax
        __asm _emit 0x50
        // 0x5873C71B: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873C71E: add ecx, 0x3a0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C724: push ecx
        __asm _emit 0x51
        // 0x5873C725: push edx
        __asm _emit 0x52
        // 0x5873C726: push eax
        __asm _emit 0x50
        // 0x5873C727: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C72C: mov ecx, dword ptr [eax + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873C732: mov edx, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873C738: push ecx
        __asm _emit 0x51
        // 0x5873C739: push edx
        __asm _emit 0x52
        // 0x5873C73A: lea eax, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5873C73E: push 0x5898cb48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873C743: push eax
        __asm _emit 0x50
        // 0x5873C744: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873C74A: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x5873C74D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873C74F: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5873C753: push ecx
        __asm _emit 0x51
        // 0x5873C754: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873C758: push edx
        __asm _emit 0x52
        // 0x5873C759: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873C75F: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873C765: push eax
        __asm _emit 0x50
        // 0x5873C766: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873C76A: push eax
        __asm _emit 0x50
        // 0x5873C76B: push ecx
        __asm _emit 0x51
        // 0x5873C76C: call dword ptr [0x5898c1a0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873C772: mov eax, dword ptr [esi + 0x460]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C778: mov ecx, dword ptr [esp + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C77F: pop esi
        __asm _emit 0x5E
        // 0x5873C780: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5873C782: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873C787: add esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C78D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
