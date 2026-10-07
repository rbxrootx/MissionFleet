// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 536 bytes in 1 exact ranges.
// Source symbol alias: FUN_587590a0.

// Ghidra body range 0x587590A0..0x587592B8; 536 mapped bytes.
extern "C" __declspec(naked) void FUN_587590a0_segment_00() {
    __asm {
        // 0x587590A0: sub esp, 0x70
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x70
        // 0x587590A3: push ebp
        __asm _emit 0x55
        // 0x587590A4: push esi
        __asm _emit 0x56
        // 0x587590A5: push edi
        __asm _emit 0x57
        // 0x587590A6: mov edi, dword ptr [esp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587590AD: push 0x38
        __asm _emit 0x6A
        __asm _emit 0x38
        // 0x587590AF: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587590B3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587590B5: push eax
        __asm _emit 0x50
        // 0x587590B6: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587590B8: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587590BE: mov dword ptr [edi + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587590C5: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x3B
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587590CA: push 0x38
        __asm _emit 0x6A
        __asm _emit 0x38
        // 0x587590CC: lea ecx, [esp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587590D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587590D2: push ecx
        __asm _emit 0x51
        // 0x587590D3: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x3B
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587590D8: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x587590DB: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587590DE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587590E0: je 0x587592ad
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587590E6: mov esi, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587590ED: mov ecx, dword ptr [eax + esi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB0
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587590F4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587590F6: je 0x587592ad
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587590FC: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x587590FF: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x58759103: jne 0x587592ad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759109: mov edi, dword ptr [eax + esi*8 + 0xbc0]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0xF0
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759110: push ebx
        __asm _emit 0x53
        // 0x58759111: mov ebx, dword ptr [eax + esi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0xB0
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759118: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875911A: je 0x587591d0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759120: mov dl, byte ptr [edi + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x97
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759126: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x58759129: movzx cx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCA
        // 0x5875912D: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58759130: jne 0x58759141
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x58759132: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759137: xor dx, word ptr [eax + esi*4 + 0xac0]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x94
        __asm _emit 0xB0
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875913F: ja 0x5875915a
        __asm _emit 0x77
        __asm _emit 0x19
        // 0x58759141: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58759145: jne 0x587591d0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875914B: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759150: xor dx, word ptr [eax + esi*4 + 0xac0]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x94
        __asm _emit 0xB0
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759158: jbe 0x587591d0
        __asm _emit 0x76
        __asm _emit 0x76
        // 0x5875915A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875915F: mov word ptr [esp + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58759164: movzx eax, word ptr [ebx + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875916B: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5875916E: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x58759171: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x58759174: movzx eax, word ptr [ebx + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875917B: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5875917D: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58759181: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58759185: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58759189: jne 0x587591a0
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x5875918B: movzx ecx, word ptr [edi + 0xa2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759192: push ecx
        __asm _emit 0x51
        // 0x58759193: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58759195: call 0x58758760
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875919A: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875919E: jmp 0x587591a4
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587591A0: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587591A4: movzx edx, word ptr [edi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587591AB: movzx eax, word ptr [edi + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587591B2: push esi
        __asm _emit 0x56
        // 0x587591B3: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587591B7: push ecx
        __asm _emit 0x51
        // 0x587591B8: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587591BA: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587591BE: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587591C2: call 0x587583e0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587591C7: mov edx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587591CE: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x587591D0: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x587591D3: mov edi, dword ptr [eax + esi*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0xF0
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587591DA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587591DC: je 0x587592a5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587591E2: mov cl, byte ptr [edi + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x8F
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587591E8: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x587591EB: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x587591EF: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587591F2: jne 0x58759203
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x587591F4: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587591F9: xor dx, word ptr [eax + esi*4 + 0xac2]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x94
        __asm _emit 0xB0
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759201: ja 0x58759220
        __asm _emit 0x77
        __asm _emit 0x1D
        // 0x58759203: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58759207: jne 0x587592a5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875920D: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759212: xor dx, word ptr [eax + esi*4 + 0xac2]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x94
        __asm _emit 0xB0
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875921A: jbe 0x587592a5
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759220: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759225: mov word ptr [esp + 0x48], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5875922A: movzx eax, word ptr [ebx + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759231: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58759234: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x58759237: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5875923A: movzx eax, word ptr [ebx + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759241: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58759243: mov dword ptr [esp + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58759247: mov dword ptr [esp + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x5875924B: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5875924F: jne 0x58759266
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58759251: movzx ecx, word ptr [edi + 0xa2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759258: push ecx
        __asm _emit 0x51
        // 0x58759259: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5875925B: call 0x58758760
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58759260: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58759264: jmp 0x5875926a
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58759266: mov dword ptr [esp + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5875926A: movzx edx, word ptr [edi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759271: movzx eax, word ptr [edi + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759278: push esi
        __asm _emit 0x56
        // 0x58759279: lea ecx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5875927D: push ecx
        __asm _emit 0x51
        // 0x5875927E: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58759280: mov dword ptr [esp + 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x58759284: mov dword ptr [esp + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x58759288: call 0x587583e0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875928D: mov edx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759294: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58759296: pop ebx
        __asm _emit 0x5B
        // 0x58759297: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5875929A: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5875929C: pop edi
        __asm _emit 0x5F
        // 0x5875929D: pop esi
        __asm _emit 0x5E
        // 0x5875929E: pop ebp
        __asm _emit 0x5D
        // 0x5875929F: add esp, 0x70
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x70
        // 0x587592A2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587592A5: mov edi, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587592AC: pop ebx
        __asm _emit 0x5B
        // 0x587592AD: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587592AF: pop edi
        __asm _emit 0x5F
        // 0x587592B0: pop esi
        __asm _emit 0x5E
        // 0x587592B1: pop ebp
        __asm _emit 0x5D
        // 0x587592B2: add esp, 0x70
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x70
        // 0x587592B5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
