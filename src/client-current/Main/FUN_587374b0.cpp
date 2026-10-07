// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1602 bytes in 3 exact ranges.
// Source symbol alias: FUN_587374b0.

// Ghidra body range 0x587374B0..0x587376AC; 508 mapped bytes.
extern "C" __declspec(naked) void FUN_587374b0_segment_00() {
    __asm {
        // 0x587374B0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587374B2: push 0x5898253b
        __asm _emit 0x68
        __asm _emit 0x3B
        __asm _emit 0x25
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587374B7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587374BD: push eax
        __asm _emit 0x50
        // 0x587374BE: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587374C1: push ebx
        __asm _emit 0x53
        // 0x587374C2: push ebp
        __asm _emit 0x55
        // 0x587374C3: push esi
        __asm _emit 0x56
        // 0x587374C4: push edi
        __asm _emit 0x57
        // 0x587374C5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587374CA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587374CC: push eax
        __asm _emit 0x50
        // 0x587374CD: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587374D1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587374D7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587374D9: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587374DD: mov dword ptr [esi], 0x5898cad0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587374E3: cmp eax, 0xf4241
        __asm _emit 0x3D
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587374E8: je 0x587374fb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587374EA: cmp eax, 0xf4240
        __asm _emit 0x3D
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587374EF: je 0x587374fb
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587374F1: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587374F3: mov dword ptr [esi + 0x250], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587374F9: jmp 0x58737503
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587374FB: mov dword ptr [esi + 0x250], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737501: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58737503: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58737507: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5873750A: mov ecx, dword ptr [eax + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737510: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58737513: mov ebp, dword ptr [eax + 0x120]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737519: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873751B: lea edi, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5873751E: mov dword ptr [esi + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x58737521: call 0x58736110
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737526: push 0x6654
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873752B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x57
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58737530: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58737533: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58737537: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873753B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873753D: je 0x58737556
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5873753F: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x58737542: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58737544: push ebx
        __asm _emit 0x53
        // 0x58737545: push ebx
        __asm _emit 0x53
        // 0x58737546: push ebx
        __asm _emit 0x53
        // 0x58737547: push ebx
        __asm _emit 0x53
        // 0x58737548: push ebx
        __asm _emit 0x53
        // 0x58737549: push ebx
        __asm _emit 0x53
        // 0x5873754A: push edx
        __asm _emit 0x52
        // 0x5873754B: push ebp
        __asm _emit 0x55
        // 0x5873754C: push edi
        __asm _emit 0x57
        // 0x5873754D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873754F: call 0x588e05c0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x90
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58737554: jmp 0x58737558
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58737556: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58737558: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5873755B: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58737561: push eax
        __asm _emit 0x50
        // 0x58737562: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873756A: call 0x5878a0e0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x2B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5873756F: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58737572: mov eax, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737578: mov ecx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x78
        // 0x5873757B: mov dl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873757E: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58737580: push ebx
        __asm _emit 0x53
        // 0x58737581: push ecx
        __asm _emit 0x51
        // 0x58737582: movzx ecx, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0F
        // 0x58737585: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58737588: push ebx
        __asm _emit 0x53
        // 0x58737589: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x5873758C: movzx edx, byte ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x58737590: push ebx
        __asm _emit 0x53
        // 0x58737591: push eax
        __asm _emit 0x50
        // 0x58737592: push ecx
        __asm _emit 0x51
        // 0x58737593: mov ecx, dword ptr [edx*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x95
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873759A: call 0x587899d0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5873759F: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587375A2: push esi
        __asm _emit 0x56
        // 0x587375A3: call 0x588dcd00
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587375A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587375AA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587375AC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587375AE: mov dword ptr [esi + 0x24c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587375B4: mov dword ptr [esi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x587375B7: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x587375BA: mov dword ptr [esi + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x587375BD: mov byte ptr [esi + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x587375C1: mov word ptr [esi + 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x587375C5: mov word ptr [esi + 0x2a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x2A
        // 0x587375C9: mov dword ptr [esi + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x2C
        // 0x587375CC: mov dword ptr [esi + 0xe4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587375D2: mov dword ptr [esi + 0xe8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587375D8: mov word ptr [esi + 0xec], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587375DF: mov dword ptr [esi + 0xe0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587375E5: mov dword ptr [esi + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x1C
        // 0x587375E8: mov dword ptr [esi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x20
        // 0x587375EB: mov dword ptr [esi + 0x24], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587375F2: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587375F7: mov ecx, dword ptr [eax + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587375FD: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x58737600: cmp dword ptr [edx + 0x50], 0xf4241
        __asm _emit 0x81
        __asm _emit 0x7A
        __asm _emit 0x50
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58737607: jne 0x5873765c
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x58737609: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5873760C: cmp dword ptr [eax + 0x11c], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58737613: jne 0x5873765c
        __asm _emit 0x75
        __asm _emit 0x47
        // 0x58737615: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873761B: mov edi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x5873761E: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58737620: je 0x5873765c
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x58737622: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58737628: cmp edi, dword ptr [esi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5873762B: je 0x58737649
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5873762D: cmp dword ptr [edi + 0x6070], ebx
        __asm _emit 0x39
        __asm _emit 0x9F
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737633: jne 0x58737649
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58737635: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x58737638: add edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0E
        // 0x5873763B: push edx
        __asm _emit 0x52
        // 0x5873763C: lea eax, [edi + 0x356]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737642: push eax
        __asm _emit 0x50
        // 0x58737643: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58737645: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58737647: je 0x58737652
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58737649: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x5873764C: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5873764E: jne 0x58737628
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x58737650: jmp 0x5873765c
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58737652: mov dword ptr [esi + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58737655: mov dword ptr [esi + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873765C: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737662: mov dword ptr [esi + 0xf8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737668: mov dword ptr [esi + 0xfc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873766E: mov dword ptr [esi + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x34
        // 0x58737671: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58737673: mov word ptr [esi + 0xee], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873767A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873767C: mov word ptr [esi + 0xf0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737683: mov dword ptr [esi + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x38
        // 0x58737686: mov dword ptr [esi + 0x3c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x3C
        // 0x58737689: mov dword ptr [esi + 0x40], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x40
        // 0x5873768C: mov dword ptr [esi + 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x44
        // 0x5873768F: mov dword ptr [esi + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x48
        // 0x58737692: mov dword ptr [esi + 0x4c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x4C
        // 0x58737695: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58737698: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x5873769B: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873769F: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587376A3: mov dword ptr [esp + 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587376A7: lea edi, [esi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x587376AA: jmp 0x587376b2
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587376B0..0x5873782D; 381 mapped bytes.
extern "C" __declspec(naked) void FUN_587374b0_segment_01() {
    __asm {
        // 0x587376B0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587376B2: push 0x38
        __asm _emit 0x6A
        __asm _emit 0x38
        // 0x587376B4: lea ebp, [edi - 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x6F
        __asm _emit 0xE4
        // 0x587376B7: push ebx
        __asm _emit 0x53
        // 0x587376B8: push ebp
        __asm _emit 0x55
        // 0x587376B9: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x55
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587376BE: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587376C1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587376C3: mov word ptr [ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587376C7: mov ebp, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587376CA: mov ecx, dword ptr [ebp + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587376D0: mov edx, dword ptr [ecx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587376D6: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587376DA: lea edx, [ebp + 0x2c0]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587376E0: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587376E4: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587376E9: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587376EB: shr ebx, cl
        __asm _emit 0xD3
        __asm _emit 0xEB
        // 0x587376ED: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587376F1: and ebx, 1
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x01
        // 0x587376F4: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587376F6: jne 0x58737703
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587376F8: cmp dword ptr [edx - 0x80], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x80
        __asm _emit 0x00
        // 0x587376FC: jne 0x58737712
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587376FE: cmp dword ptr [edx], 0
        __asm _emit 0x83
        __asm _emit 0x3A
        __asm _emit 0x00
        // 0x58737701: jne 0x58737729
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x58737703: inc eax
        __asm _emit 0x40
        // 0x58737704: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x58737707: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5873770A: jl 0x587376e0
        __asm _emit 0x7C
        __asm _emit 0xD4
        // 0x5873770C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58737710: jmp 0x5873773a
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x58737712: mov ebx, dword ptr [ebp + eax*4 + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737719: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873771D: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58737721: mov dword ptr [ebx + 0x17c], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737727: jmp 0x5873773e
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58737729: mov eax, dword ptr [ebp + eax*4 + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737730: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58737734: mov dword ptr [eax + 0x17c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873773A: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873773E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58737740: je 0x587378ad
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737746: lea ecx, [ebx + 0x270]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873774C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873774E: je 0x587378ad
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737754: mov al, byte ptr [ebx + 0x30b]
        __asm _emit 0x8A
        __asm _emit 0x83
        __asm _emit 0x0B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873775A: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5873775C: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5873775E: jne 0x58737775
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58737760: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737765: mov dword ptr [esi + 0xf8], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873776F: mov word ptr [edi - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0xE4
        // 0x58737773: jmp 0x58737788
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58737775: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873777A: mov dword ptr [esi + 0xf4], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737784: mov word ptr [edi - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xE4
        // 0x58737788: movzx eax, word ptr [ebx + 0x226]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873778F: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58737792: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x58737795: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x58737798: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5873779A: mov dword ptr [edi - 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0xEC
        // 0x5873779D: movzx eax, word ptr [ebx + 0x234]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587377A4: mov dword ptr [edi - 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x587377A7: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x587377A9: movzx edx, word ptr [ecx + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587377B0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587377B2: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x587377B5: mov dword ptr [edi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587377B8: movzx ebp, word ptr [ecx + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xA9
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587377BF: cdq
        __asm _emit 0x99
        // 0x587377C0: mov dword ptr [edi + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x08
        // 0x587377C3: idiv dword ptr [0x58a244c8]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587377C9: add ebp, 5
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x05
        // 0x587377CC: cdq
        __asm _emit 0x99
        // 0x587377CD: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587377CF: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587377D1: movsx eax, byte ptr [ecx + 0x99]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x81
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587377D8: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587377DD: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587377DF: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587377E2: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587377E7: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587377E9: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587377EC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587377EE: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587377F1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587377F3: mov ecx, 0x2710
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587377F8: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587377FA: mov eax, dword ptr [edi - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xEC
        // 0x587377FD: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58737800: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58737802: jle 0x587378cb
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737808: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873780A: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873780F: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58737811: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x58737814: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58737816: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58737818: push ecx
        __asm _emit 0x51
        // 0x58737819: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x9D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873781E: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58737820: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58737823: cmp dword ptr [edi - 0x14], ebp
        __asm _emit 0x39
        __asm _emit 0x6F
        __asm _emit 0xEC
        // 0x58737826: mov dword ptr [edi - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xE8
        // 0x58737829: jle 0x5873784a
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x5873782B: jmp 0x58737830
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58737830..0x58737AF9; 713 mapped bytes.
extern "C" __declspec(naked) void FUN_587374b0_segment_02() {
    __asm {
        // 0x58737830: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58737834: push eax
        __asm _emit 0x50
        // 0x58737835: push ebp
        __asm _emit 0x55
        // 0x58737836: push ebx
        __asm _emit 0x53
        // 0x58737837: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58737839: call 0x58735950
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873783E: mov ecx, dword ptr [edi - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE8
        // 0x58737841: mov dword ptr [ecx + ebp*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xA9
        // 0x58737844: inc ebp
        __asm _emit 0x45
        // 0x58737845: cmp ebp, dword ptr [edi - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x6F
        __asm _emit 0xEC
        // 0x58737848: jl 0x58737830
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x5873784A: mov ebp, dword ptr [edi - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0xEC
        // 0x5873784D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873784F: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x58737851: mov dword ptr [edi - 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0xF4
        // 0x58737854: mov dword ptr [edi - 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0xF0
        // 0x58737857: mov dword ptr [edi - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0xF8
        // 0x5873785A: jle 0x5873787a
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x5873785C: mov edx, dword ptr [edi - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0xE8
        // 0x5873785F: nop
        __asm _emit 0x90
        // 0x58737860: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58737862: cmp eax, dword ptr [edi - 0x10]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0xF0
        // 0x58737865: jbe 0x58737872
        __asm _emit 0x76
        __asm _emit 0x0B
        // 0x58737867: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58737869: imul ebx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD8
        // 0x5873786C: mov dword ptr [edi - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xF0
        // 0x5873786F: mov dword ptr [edi - 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xF8
        // 0x58737872: inc ecx
        __asm _emit 0x41
        // 0x58737873: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x58737876: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58737878: jl 0x58737860
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x5873787A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5873787C: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5873787E: jle 0x587378cb
        __asm _emit 0x7E
        __asm _emit 0x4B
        // 0x58737880: mov ebp, dword ptr [edi - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0xE8
        // 0x58737883: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58737885: mov eax, dword ptr [edi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xF0
        // 0x58737888: lea edx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC0
        // 0x5873788B: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x58737890: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58737892: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x58737895: cmp dword ptr [ecx], edx
        __asm _emit 0x39
        __asm _emit 0x11
        // 0x58737897: ja 0x587378a4
        __asm _emit 0x77
        __asm _emit 0x0B
        // 0x58737899: inc ebx
        __asm _emit 0x43
        // 0x5873789A: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5873789D: cmp ebx, dword ptr [edi - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0xEC
        // 0x587378A0: jl 0x58737885
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x587378A2: jmp 0x587378cb
        __asm _emit 0xEB
        __asm _emit 0x27
        // 0x587378A4: mov eax, dword ptr [ebp + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x9D
        __asm _emit 0x00
        // 0x587378A8: mov dword ptr [edi - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xF4
        // 0x587378AB: jmp 0x587378cb
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x587378AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587378AF: je 0x587378cb
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587378B1: add eax, 0x238
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587378B6: je 0x587378cb
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587378B8: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587378BD: mov dword ptr [esi + 0xfc], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587378C7: mov word ptr [edi - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0xE4
        // 0x587378CB: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587378CF: inc eax
        __asm _emit 0x40
        // 0x587378D0: add edi, 0x38
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x38
        // 0x587378D3: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587378D6: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587378DA: jl 0x587376b0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xD0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587378E0: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587378E3: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587378E9: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587378EC: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587378EF: cmp cl, 8
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x587378F2: jne 0x58737904
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587378F4: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587378F9: mov word ptr [esi + 0xf0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737900: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58737902: jmp 0x5873796d
        __asm _emit 0xEB
        __asm _emit 0x69
        // 0x58737904: movzx ecx, word ptr [esi + 0x94]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873790B: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x5873790F: jne 0x5873792d
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58737911: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58737914: mov eax, dword ptr [eax + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873791A: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5873791D: je 0x58737924
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5873791F: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58737922: jne 0x5873792d
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58737924: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737929: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873792B: jmp 0x58737966
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x5873792D: movzx eax, word ptr [esi + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58737931: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58737933: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58737936: jne 0x5873794b
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58737938: cmp cx, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873793B: jne 0x5873794b
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5873793D: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737942: mov word ptr [esi + 0xf0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737949: jmp 0x5873796d
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x5873794B: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5873794F: je 0x58737956
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58737951: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58737954: jne 0x5873796d
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58737956: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5873795A: je 0x58737961
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5873795C: cmp cx, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873795F: jne 0x5873796d
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58737961: mov ecx, 4
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737966: mov word ptr [esi + 0xf0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873796D: mov byte ptr [esi + 0x100], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737974: mov edx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873797A: mov al, byte ptr [edx + 0x10]
        __asm _emit 0x8A
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5873797D: mov byte ptr [esi + 0x244], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737983: mov dword ptr [esi + 0x248], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737989: push 0x140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873798E: lea eax, [esi + 0x104]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737994: push ebp
        __asm _emit 0x55
        // 0x58737995: push eax
        __asm _emit 0x50
        // 0x58737996: mov dword ptr [esi + 0xcc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873799C: mov dword ptr [esi + 0xd0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587379A2: mov dword ptr [esi + 0xd4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587379A8: mov dword ptr [esi + 0xd8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587379AE: mov dword ptr [esi + 0xdc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587379B4: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x52
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587379B9: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587379BC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587379BF: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587379C3: cmp dword ptr [ecx + 0x130], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587379C9: jbe 0x58737aad
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587379CF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587379D1: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587379D4: mov al, byte ptr [edx + edi + 2]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x3A
        __asm _emit 0x02
        // 0x587379D8: cmp al, 0xb
        __asm _emit 0x3C
        __asm _emit 0x0B
        // 0x587379DA: jb 0x58737a92
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587379E0: cmp al, 0xf
        __asm _emit 0x3C
        __asm _emit 0x0F
        // 0x587379E2: ja 0x58737a92
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587379E8: mov ebx, 0xefc
        __asm _emit 0xBB
        __asm _emit 0xFC
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587379ED: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587379F0: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587379F3: mov eax, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x03
        // 0x587379F6: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587379F8: je 0x58737a83
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587379FE: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58737A00: cmp al, 0xd
        __asm _emit 0x3C
        __asm _emit 0x0D
        // 0x58737A02: jne 0x58737a83
        __asm _emit 0x75
        __asm _emit 0x7F
        // 0x58737A04: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58737A0A: push eax
        __asm _emit 0x50
        // 0x58737A0B: call 0x58778f30
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58737A10: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58737A12: je 0x58737a83
        __asm _emit 0x74
        __asm _emit 0x6F
        // 0x58737A14: movzx eax, word ptr [eax + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737A1B: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58737A1F: je 0x58737a2d
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58737A21: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58737A25: je 0x58737a2d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58737A27: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58737A2B: jne 0x58737a83
        __asm _emit 0x75
        __asm _emit 0x56
        // 0x58737A2D: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58737A30: movzx edx, byte ptr [ecx + edi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x39
        __asm _emit 0x02
        // 0x58737A35: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x58737A38: sub edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x58737A3B: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58737A3D: jne 0x58737a83
        __asm _emit 0x75
        __asm _emit 0x44
        // 0x58737A3F: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58737A42: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737A47: xor dx, word ptr [ecx + ebx - 0x7e]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x82
        // 0x58737A4C: jbe 0x58737a83
        __asm _emit 0x76
        __asm _emit 0x35
        // 0x58737A4E: movzx eax, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737A55: add eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x58737A58: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58737A5B: mov dword ptr [esi + eax*4], 1
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737A62: movzx eax, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737A69: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58737A6C: mov dl, byte ptr [ecx + edi + 2]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x39
        __asm _emit 0x02
        // 0x58737A70: sub dl, 0xa
        __asm _emit 0x80
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x58737A73: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58737A76: mov byte ptr [esi + eax*4 + 0x108], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737A7D: inc byte ptr [esi + 0x100]
        __asm _emit 0xFE
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737A83: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58737A86: cmp ebx, 0xf0c
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737A8C: jl 0x587379f0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737A92: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58737A96: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58737A99: inc eax
        __asm _emit 0x40
        // 0x58737A9A: add edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x20
        // 0x58737A9D: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58737AA1: cmp eax, dword ptr [ecx + 0x130]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737AA7: jb 0x587379d1
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737AAD: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58737AAF: lea edx, [esi + 0x25c]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737AB5: push ebp
        __asm _emit 0x55
        // 0x58737AB6: push edx
        __asm _emit 0x52
        // 0x58737AB7: mov dword ptr [esi + 0x254], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737ABD: mov dword ptr [esi + 0x258], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737AC3: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x51
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58737AC8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58737ACB: mov dword ptr [esi + 0x29c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737AD1: mov dword ptr [esi + 0x2a0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737AD7: mov dword ptr [esi + 0x2a4], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58737AE1: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58737AE3: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58737AE7: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737AEE: pop ecx
        __asm _emit 0x59
        // 0x58737AEF: pop edi
        __asm _emit 0x5F
        // 0x58737AF0: pop esi
        __asm _emit 0x5E
        // 0x58737AF1: pop ebp
        __asm _emit 0x5D
        // 0x58737AF2: pop ebx
        __asm _emit 0x5B
        // 0x58737AF3: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58737AF6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
