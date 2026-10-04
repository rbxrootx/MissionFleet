// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875B3F0 .. +0x1B4 bytes.
// Source symbol alias: FUN_5875b3f0.
extern "C" __declspec(naked) void FUN_5875b3f0() {
    __asm {
        // 0x5875B3F0: push ecx
        __asm _emit 0x51
        // 0x5875B3F1: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B3F5: push ebx
        __asm _emit 0x53
        // 0x5875B3F6: push esi
        __asm _emit 0x56
        // 0x5875B3F7: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5875B3F9: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5875B3FB: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5875B3FD: jne 0x5875b40a
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5875B3FF: cmp dword ptr [ebx + 0x2c], esi
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0x2C
        // 0x5875B402: je 0x5875b59e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B408: jmp 0x5875b410
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5875B40A: push eax
        __asm _emit 0x50
        // 0x5875B40B: call 0x5875b090
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B410: cmp dword ptr [ebx + 0x2c], esi
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0x2C
        // 0x5875B413: je 0x5875b59e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B419: mov eax, dword ptr [ebx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x5875B41C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5875B41E: mov ecx, 0x1b
        __asm _emit 0xB9
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B423: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5875B425: push ebp
        __asm _emit 0x55
        // 0x5875B426: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B42A: push edi
        __asm _emit 0x57
        // 0x5875B42B: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B42F: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B433: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B437: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x5875B439: jbe 0x5875b508
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B43F: nop
        __asm _emit 0x90
        // 0x5875B440: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B444: movzx eax, byte ptr [ebx + eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x04
        // 0x5875B449: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x5875B44C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5875B44E: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x5875B451: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x5875B453: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875B455: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5875B457: push eax
        __asm _emit 0x50
        // 0x5875B458: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5875B45A: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B45E: movzx ecx, byte ptr [ebx + eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x04
        // 0x5875B463: and ecx, 0x80000fff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5875B469: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B471: jns 0x5875b47b
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x5875B473: dec ecx
        __asm _emit 0x49
        // 0x5875B474: or ecx, 0xfffff000
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B47A: inc ecx
        __asm _emit 0x41
        // 0x5875B47B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875B47D: jle 0x5875b4ea
        __asm _emit 0x7E
        __asm _emit 0x6B
        // 0x5875B47F: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x5875B481: imul ebp, ebp, 0xd
        __asm _emit 0x6B
        __asm _emit 0xED
        __asm _emit 0x0D
        // 0x5875B484: add ebp, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B488: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x5875B48B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5875B48D: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5875B48F: div dword ptr [ecx + 4]
        __asm _emit 0xF7
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x5875B492: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5875B495: mov cl, byte ptr [eax + edx*4]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x5875B498: xor byte ptr [esi + edi], cl
        __asm _emit 0x30
        __asm _emit 0x0C
        __asm _emit 0x3E
        // 0x5875B49B: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B49F: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x5875B4A2: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5875B4A4: and edx, 0x8000001f
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5875B4AA: jns 0x5875b4b1
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5875B4AC: dec edx
        __asm _emit 0x4A
        // 0x5875B4AD: or edx, 0xffffffe0
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xE0
        // 0x5875B4B0: inc edx
        __asm _emit 0x42
        // 0x5875B4B1: mov dl, byte ptr [edx + ebx + 4]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x1A
        __asm _emit 0x04
        // 0x5875B4B5: xor dl, al
        __asm _emit 0x32
        __asm _emit 0xD0
        // 0x5875B4B7: mov byte ptr [esi + edi], dl
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x3E
        // 0x5875B4BA: inc esi
        __asm _emit 0x46
        // 0x5875B4BB: add ebp, 0xd
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0D
        // 0x5875B4BE: cmp esi, dword ptr [esp + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B4C2: jae 0x5875b4e6
        __asm _emit 0x73
        __asm _emit 0x22
        // 0x5875B4C4: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B4C8: movzx edx, byte ptr [eax + ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x5875B4CD: inc ecx
        __asm _emit 0x41
        // 0x5875B4CE: and edx, 0x80000fff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5875B4D4: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B4D8: jns 0x5875b4e2
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x5875B4DA: dec edx
        __asm _emit 0x4A
        // 0x5875B4DB: or edx, 0xfffff000
        __asm _emit 0x81
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B4E1: inc edx
        __asm _emit 0x42
        // 0x5875B4E2: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5875B4E4: jl 0x5875b488
        __asm _emit 0x7C
        __asm _emit 0xA2
        // 0x5875B4E6: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B4EA: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B4EE: inc eax
        __asm _emit 0x40
        // 0x5875B4EF: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B4F3: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5875B4F6: jne 0x5875b500
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5875B4F8: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B500: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x5875B502: jb 0x5875b440
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B508: mov al, byte ptr [ebx + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x5875B50B: xor byte ptr [edi], al
        __asm _emit 0x30
        __asm _emit 0x07
        // 0x5875B50D: cmp ebp, 2
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x02
        // 0x5875B510: jle 0x5875b520
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x5875B512: mov cl, byte ptr [ebx + 0x25]
        __asm _emit 0x8A
        __asm _emit 0x4B
        __asm _emit 0x25
        // 0x5875B515: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5875B517: cdq
        __asm _emit 0x99
        // 0x5875B518: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5875B51A: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5875B51C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5875B51E: xor byte ptr [eax], cl
        __asm _emit 0x30
        __asm _emit 0x08
        // 0x5875B520: cmp ebp, 3
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x03
        // 0x5875B523: jle 0x5875b53e
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x5875B525: lea ecx, [ebp + ebp]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x5875B529: mov eax, 0x55555556
        __asm _emit 0xB8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        // 0x5875B52E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5875B530: mov cl, byte ptr [ebx + 0x26]
        __asm _emit 0x8A
        __asm _emit 0x4B
        __asm _emit 0x26
        // 0x5875B533: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875B535: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875B538: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875B53A: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5875B53C: xor byte ptr [eax], cl
        __asm _emit 0x30
        __asm _emit 0x08
        // 0x5875B53E: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875B542: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875B544: je 0x5875b54c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875B546: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B54C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875B54E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5875B550: jbe 0x5875b593
        __asm _emit 0x76
        __asm _emit 0x41
        // 0x5875B552: mov dl, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B556: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875B558: je 0x5875b563
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5875B55A: movzx ecx, byte ptr [eax + edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x5875B55E: imul ecx, ecx, 0x13
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x13
        // 0x5875B561: add dword ptr [esi], ecx
        __asm _emit 0x01
        __asm _emit 0x0E
        // 0x5875B563: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875B565: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5875B568: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x5875B56B: ja 0x5875b586
        __asm _emit 0x77
        __asm _emit 0x19
        // 0x5875B56D: jmp dword ptr [ecx*4 + 0x5875b5a4]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0xB5
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x5875B574: mov dl, byte ptr [ebx + 0x29]
        __asm _emit 0x8A
        __asm _emit 0x53
        __asm _emit 0x29
        // 0x5875B577: jmp 0x5875b586
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x5875B579: mov dl, byte ptr [ebx + 0x2b]
        __asm _emit 0x8A
        __asm _emit 0x53
        __asm _emit 0x2B
        // 0x5875B57C: jmp 0x5875b586
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5875B57E: mov dl, byte ptr [ebx + 0x28]
        __asm _emit 0x8A
        __asm _emit 0x53
        __asm _emit 0x28
        // 0x5875B581: jmp 0x5875b586
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5875B583: mov dl, byte ptr [ebx + 0x2a]
        __asm _emit 0x8A
        __asm _emit 0x53
        __asm _emit 0x2A
        // 0x5875B586: mov cl, dl
        __asm _emit 0x8A
        __asm _emit 0xCA
        // 0x5875B588: add cl, 7
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x07
        // 0x5875B58B: xor byte ptr [eax + edi], cl
        __asm _emit 0x30
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x5875B58E: inc eax
        __asm _emit 0x40
        // 0x5875B58F: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5875B591: jb 0x5875b556
        __asm _emit 0x72
        __asm _emit 0xC3
        // 0x5875B593: pop edi
        __asm _emit 0x5F
        // 0x5875B594: pop ebp
        __asm _emit 0x5D
        // 0x5875B595: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875B597: je 0x5875b59e
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5875B599: mov edx, dword ptr [ebx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x24
        // 0x5875B59C: xor dword ptr [esi], edx
        __asm _emit 0x31
        __asm _emit 0x16
        // 0x5875B59E: pop esi
        __asm _emit 0x5E
        // 0x5875B59F: pop ebx
        __asm _emit 0x5B
        // 0x5875B5A0: pop ecx
        __asm _emit 0x59
        // 0x5875B5A1: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
