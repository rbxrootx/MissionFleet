// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1307 bytes in 2 exact ranges.
// Source symbol alias: FUN_588592c0.

// Ghidra body range 0x588592C0..0x58859549; 649 mapped bytes.
extern "C" __declspec(naked) void FUN_588592c0_segment_00() {
    __asm {
        // 0x588592C0: push ecx
        __asm _emit 0x51
        // 0x588592C1: push ebx
        __asm _emit 0x53
        // 0x588592C2: push ebp
        __asm _emit 0x55
        // 0x588592C3: push esi
        __asm _emit 0x56
        // 0x588592C4: push edi
        __asm _emit 0x57
        // 0x588592C5: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588592C9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588592CB: mov ecx, dword ptr [esi + 0xa44]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588592D1: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x588592D4: push eax
        __asm _emit 0x50
        // 0x588592D5: mov dword ptr [esi + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588592DB: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xE0
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588592E0: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588592E6: mov edx, dword ptr [esi + ecx*4 + 0x8e8]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588592ED: mov ecx, dword ptr [esi + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588592F3: push edx
        __asm _emit 0x52
        // 0x588592F4: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xE0
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588592F9: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588592FF: add eax, dword ptr [esi + 0x18c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859305: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885930B: add eax, dword ptr [esi + 0x184]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859311: mov edx, dword ptr [esi + ecx*4 + 0x8e8]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859318: add eax, dword ptr [esi + 0x17c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885931E: mov ecx, dword ptr [esi + 0xa60]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859324: add eax, dword ptr [esi + 0x174]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885932A: add eax, dword ptr [esi + 0x16c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859330: add eax, dword ptr [esi + 0x164]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859336: add eax, dword ptr [esi + 0x15c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885933C: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5885933E: push edx
        __asm _emit 0x52
        // 0x5885933F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xE0
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58859344: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58859346: imul eax, eax, 0xd4
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885934C: movzx ecx, word ptr [eax + esi + 0x272]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x30
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859354: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x58859356: push ecx
        __asm _emit 0x51
        // 0x58859357: mov ecx, dword ptr [esi + 0xa68]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885935D: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58859361: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xDF
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58859366: mov ecx, dword ptr [esi + 0xa6c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885936C: lea edx, [edi + 3]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x03
        // 0x5885936F: imul edx, edx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859375: movzx eax, word ptr [edx + esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x32
        // 0x58859379: push eax
        __asm _emit 0x50
        // 0x5885937A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xDF
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885937F: mov ecx, dword ptr [esi + edi*8 + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xFE
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859386: push ecx
        __asm _emit 0x51
        // 0x58859387: mov ecx, dword ptr [esi + 0xa48]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885938D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xDF
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58859392: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58859394: lea edi, [esi + 0x270]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885939A: lea ecx, [esi + 0xa20]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588593A0: mov eax, dword ptr [ecx - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0xE0
        // 0x588593A3: mov edx, 0xf
        __asm _emit 0xBA
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588593A8: cmp ebx, dword ptr [esi + 0xf4]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588593AE: jne 0x5885944a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588593B4: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588593B8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588593BA: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588593BF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588593C3: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588593C8: cmp dword ptr [eax + 0x160], 0x13
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        // 0x588593CF: jle 0x588593e7
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588593D1: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588593D8: je 0x588593e7
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588593DA: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588593E0: add eax, 0x4c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588593E5: jmp 0x588593e9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588593E7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588593E9: mov edx, dword ptr [ecx - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0xC0
        // 0x588593EC: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x588593EF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588593F1: je 0x5885941b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588593F3: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x588593F6: mov dword ptr [edx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x588593F9: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x588593FC: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588593FF: mov dword ptr [edx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x58859402: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x58859404: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x58859407: mov dword ptr [edx], ebp
        __asm _emit 0x89
        __asm _emit 0x2A
        // 0x58859409: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x5885940C: mov dword ptr [edx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885940F: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58859412: mov dword ptr [edx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58859415: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58859418: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5885941B: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859420: cmp dword ptr [eax + 0x160], 0x11
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        // 0x58859427: jle 0x588594e5
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885942D: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859434: je 0x588594e5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885943A: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859440: add eax, 0x440
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859445: jmp 0x588594e7
        __asm _emit 0xE9
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885944A: mov ebp, 0xfff0
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885944F: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58859453: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58859455: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58859459: movzx eax, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x07
        // 0x5885945C: mov edx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859462: add eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x37
        // 0x58859465: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885946B: jle 0x58859485
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5885946D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885946F: jl 0x58859485
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58859471: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859478: je 0x58859485
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885947A: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5885947D: add eax, dword ptr [edx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859483: jmp 0x58859487
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58859485: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58859487: mov edx, dword ptr [ecx - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0xC0
        // 0x5885948A: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x5885948D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885948F: je 0x588594b9
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58859491: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x58859494: mov dword ptr [edx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58859497: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x5885949A: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5885949D: mov dword ptr [edx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588594A0: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x588594A2: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x588594A5: mov dword ptr [edx], ebp
        __asm _emit 0x89
        __asm _emit 0x2A
        // 0x588594A7: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x588594AA: mov dword ptr [edx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588594AD: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x588594B0: mov dword ptr [edx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588594B3: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588594B6: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588594B9: movzx eax, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x07
        // 0x588594BC: mov edx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588594C2: add eax, 0x3b
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x3B
        // 0x588594C5: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588594CB: jle 0x588594e5
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588594CD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588594CF: jl 0x588594e5
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588594D1: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588594D8: je 0x588594e5
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588594DA: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588594DD: add eax, dword ptr [edx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588594E3: jmp 0x588594e7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588594E5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588594E7: mov edx, dword ptr [ecx - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0xA0
        // 0x588594EA: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x588594ED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588594EF: je 0x5885951a
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588594F1: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x588594F4: mov dword ptr [edx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x588594F7: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x588594FA: mov dword ptr [edx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588594FD: mov ebp, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x20
        // 0x58859500: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58859503: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x58859506: mov dword ptr [edx], ebp
        __asm _emit 0x89
        __asm _emit 0x2A
        // 0x58859508: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x5885950B: mov dword ptr [edx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885950E: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58859511: mov dword ptr [edx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58859514: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58859517: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5885951A: inc ebx
        __asm _emit 0x43
        // 0x5885951B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5885951E: add edi, 0xd4
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859524: cmp ebx, 8
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x08
        // 0x58859527: jl 0x588593a0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x73
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885952D: mov eax, dword ptr [esi + 0xa78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859533: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859538: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885953C: lea ecx, [esi + 0xa50]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859542: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859547: jmp 0x58859550
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58859550..0x588597E2; 658 mapped bytes.
extern "C" __declspec(naked) void FUN_588592c0_segment_01() {
    __asm {
        // 0x58859550: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58859552: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859557: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5885955B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5885955E: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58859561: jne 0x58859550
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x58859563: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58859567: movzx eax, word ptr [edx + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885956E: mov eax, dword ptr [esi + eax*4 + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859575: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5885957A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5885957E: cmp dword ptr [esi + ecx*4 + 0x138], 0x10
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x58859586: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885958B: jne 0x588595f0
        __asm _emit 0x75
        __asm _emit 0x63
        // 0x5885958D: cmp dword ptr [eax + 0x160], 0x1a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1A
        // 0x58859594: jle 0x588595ac
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58859596: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885959D: je 0x588595ac
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5885959F: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588595A5: add eax, 0x680
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588595AA: jmp 0x588595ae
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588595AC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588595AE: mov ecx, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588595B4: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588595B7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588595B9: je 0x588595e3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588595BB: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x588595BE: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x588595C1: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x588595C4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588595C7: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x588595CA: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588595CC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588595CF: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x588595D1: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588595D4: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x588595D7: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588595DA: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x588595DD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588595E0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588595E3: mov eax, dword ptr [esi + 0xa78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588595E9: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588595EE: jmp 0x58859646
        __asm _emit 0xEB
        __asm _emit 0x56
        // 0x588595F0: cmp dword ptr [eax + 0x160], 0x17
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        // 0x588595F7: jle 0x5885960f
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588595F9: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859600: je 0x5885960f
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58859602: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859608: add eax, 0x5c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885960D: jmp 0x58859611
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885960F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58859611: mov ecx, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859617: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5885961A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885961C: je 0x58859646
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5885961E: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58859621: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x58859624: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x58859627: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5885962A: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x5885962D: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x5885962F: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58859632: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x58859634: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58859637: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x5885963A: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5885963D: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x58859640: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58859643: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58859646: movzx eax, word ptr [edx + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885964D: mov ecx, dword ptr [esi + 0xa88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859653: add eax, 0x262
        __asm _emit 0x05
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859658: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885965E: jle 0x58859673
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58859660: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58859662: jl 0x58859673
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x58859664: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885966A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885966C: je 0x58859673
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5885966E: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x58859671: jmp 0x58859675
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58859673: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58859675: mov ecx, dword ptr [esi + 0xa9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885967B: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5885967E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58859680: je 0x588596aa
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58859682: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58859685: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x58859688: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x5885968B: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5885968E: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x58859691: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x58859693: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58859696: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x58859698: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5885969B: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x5885969E: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588596A1: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x588596A4: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588596A7: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588596AA: movzx eax, word ptr [edx + 0x1da]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0xDA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588596B1: mov ecx, dword ptr [esi + 0xa88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588596B7: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588596BD: jle 0x588596d2
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588596BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588596C1: jl 0x588596d2
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588596C3: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588596C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588596CB: je 0x588596d2
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588596CD: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588596D0: jmp 0x588596d4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588596D2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588596D4: mov ecx, dword ptr [esi + 0xa98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588596DA: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588596DD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588596DF: je 0x58859709
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588596E1: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588596E4: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x588596E7: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x588596EA: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588596ED: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x588596F0: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588596F2: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588596F5: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x588596F7: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588596FA: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x588596FD: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58859700: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x58859703: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58859706: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58859709: movzx eax, word ptr [edx + 0x1da]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0xDA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859710: mov ecx, dword ptr [esi + 0xa88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859716: add eax, 0xc8
        __asm _emit 0x05
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885971B: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859721: jle 0x58859736
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58859723: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58859725: jl 0x58859736
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x58859727: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885972D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885972F: je 0x58859736
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58859731: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x58859734: jmp 0x58859738
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58859736: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58859738: mov ecx, dword ptr [esi + 0xaa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885973E: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58859741: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58859743: je 0x5885976d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58859745: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58859748: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x5885974B: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x5885974E: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58859751: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x58859754: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x58859756: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58859759: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x5885975B: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5885975E: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x58859761: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58859764: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x58859767: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885976A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5885976D: movzx eax, word ptr [edx + 0x1da]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0xDA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859774: mov ecx, dword ptr [esi + 0xa88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885977A: add eax, 0x190
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885977F: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859785: jle 0x5885979a
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58859787: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58859789: jl 0x5885979a
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x5885978B: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859791: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58859793: je 0x5885979a
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58859795: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x58859798: jmp 0x5885979c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885979A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885979C: mov ecx, dword ptr [esi + 0xaa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588597A2: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588597A5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588597A7: je 0x588597d1
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588597A9: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588597AC: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588597AF: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588597B2: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588597B5: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588597B8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588597BA: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588597BD: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588597BF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588597C2: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588597C5: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588597C8: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588597CB: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588597CE: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588597D1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588597D3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588597D5: call 0x58858bd0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588597DA: pop edi
        __asm _emit 0x5F
        // 0x588597DB: pop esi
        __asm _emit 0x5E
        // 0x588597DC: pop ebp
        __asm _emit 0x5D
        // 0x588597DD: pop ebx
        __asm _emit 0x5B
        // 0x588597DE: pop ecx
        __asm _emit 0x59
        // 0x588597DF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
